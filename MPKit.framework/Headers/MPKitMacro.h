//
//  MPKitMacro.h
//  MPKit
//
//  Created by Mopon on 2016/12/8.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <pthread.h>
#import <sys/time.h>

#ifndef MPKitMacro_h
#define MPKitMacro_h


#endif /* MPKitMacro_h */

#define YQAssertNil(condition, description, ...) NSAssert(!(condition), (description), ##__VA_ARGS__)

#ifndef YQ_SWAP // swap two value
#define YQ_SWAP(_a_, _b_)  do { __typeof__(_a_) _tmp_ = (_a_); (_a_) = (_b_); (_b_) = _tmp_; } while (0)
#endif

static inline CGFloat DegreesToRadians(CGFloat degrees) {
    return degrees * M_PI / 180;
}

/// Convert radians to degrees.
static inline CGFloat RadiansToDegrees(CGFloat radians) {
    return radians * 180 / M_PI;
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
/**
 根据second快速生成一个 dispatch_time_t
 */
static inline dispatch_time_t dispatch_time_delay(NSTimeInterval second){
    
    return dispatch_time(DISPATCH_TIME_NOW, (int64_t)(second));
}

/**
 是否是在主线程
 */
static inline bool dispatch_is_main_queue(){

    return pthread_main_np() != 0;
}


/**
 在主线程运行(异步)
 */
static inline void dispatch_async_on_main_queue(void (^block)()){
    
    if (pthread_main_np()) {
        block();
    }else{
    
        dispatch_async(dispatch_get_main_queue(), block);
    }
}

/**
 主线程运行(同步)
 */
static inline void dispatch_sync_on_main_queue(void (^block)()){

    if (pthread_main_np()) {
        block();
    }else{
        dispatch_sync(dispatch_get_main_queue(), block);
    }
}
#pragma clang diagnostic pop

/**
 添加一个动态属性 可以给分类添加自定义属性
 
 @param association ASSIGN / RETAIN / COPY / RETAIN_NONATOMIC / COPY_NONATOMIC
 @warning #import <objc/runtime.h> //分类需导入runtime框架
 *******************************************************************************
 Example:
 @interface NSObject (MyAdd)
 @property (nonatomic, retain) UIColor *myColor;
 @end
 
 #import <objc/runtime.h>
 @implementation NSObject (MyAdd)
 YQSYNTH_DYNAMIC_PROPERTY_OBJECT(myColor, setMyColor, RETAIN, UIColor *)
 @end
 */
#ifndef YQSYNTH_DYNAMIC_PROPERTY_OBJECT
#define YQSYNTH_DYNAMIC_PROPERTY_OBJECT(_getter_, _setter_, _association_, _type_) \
- (void)_setter_ : (_type_)object { \
[self willChangeValueForKey:@#_getter_]; \
objc_setAssociatedObject(self, _cmd, object, OBJC_ASSOCIATION_ ## _association_); \
[self didChangeValueForKey:@#_getter_]; \
} \
- (_type_)_getter_ { \
return objc_getAssociatedObject(self, @selector(_setter_:)); \
}
#endif

