//
//  NSArray+YQAdd.h
//  MPKit
//
//  Created by Mopon on 2016/12/13.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (YQAdd)

/**
 随机从数组中取出一个对象返回
 
 @return 返回数组中的一个随机对象，如果数组为空，返回nil
 */
- (id)randomObject;

@end

@interface NSMutableArray (YQAdd)

/**
 删除数组中第一个元素
 */
- (void)removeFirstObject;

/**
 删除数组中第一个元素并且返回第一个元素
 如果数组为空，返回nil
 */
- (id)popFirstObject;

/**
 删除数组中最后一个元素并且返回最后一个元素
 如果数组为空，返回nil
 */
- (id)popLastObject;

/**
 在数组最首部添加一个元素
 */
- (void)prependObject:(id)object;

/**
 在数组首部添加一组元素
 */
- (void)prependObjects:(NSArray *)objects;

/**
 在数组指定下标处插入一组元素

 @param objects 元素数组
 @param index 插入的下标
 */
- (void)insertObjects:(NSArray *)objects atIndex:(NSUInteger)index;

/**
 调转数组顺序
 */
- (void)reverse;

/**
 随机打乱数组顺序
 */
- (void)shuffle;

@end
