//
//  UIGestureRecognizer+YQAdd.h
//  MPKit
//
//  Created by Mopon on 2016/12/14.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIGestureRecognizer (YQAdd)

/**
 初始化一个带block回调的手势
 @param block 手势回调
 */
- (instancetype)initWithActionBlock:(void (^)(id sender))block;

/**
 给手势添加block回调
 */
- (void)addActionBlock:(void (^)(id sender))block;

/**
 移除手势所有事件
 */
- (void)removeAllActionBlocks;

@end
