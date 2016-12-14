//
//  NSObject+YQAdd.h
//  MPKit
//
//  Created by Mopon on 2016/12/13.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (YQAdd)


/**
 交换两个实例方法的实现

 @param originalSel 方法1
 @param newSel 方法2
 @return YES 交换成功 其他交换失败
 */
+ (BOOL)swizzleInstanceMethod:(SEL)originalSel with:(SEL)newSel;


/**
 交换两个类方法的实现

 @param originalSel 类方法1
 @param newSel 类方法2
 @return YES 交换成功 其他交换失败
 */
+ (BOOL)swizzleClassMethod:(SEL)originalSel with:(SEL)newSel;

@end
