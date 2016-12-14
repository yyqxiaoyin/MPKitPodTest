//
//  UIScreen+YQAdd.h
//  MPKit
//
//  Created by Mopon on 2016/12/14.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScreen (YQAdd)

/**
 mainBundle 的scale
 */
+ (CGFloat)screenScale;

/**
 当前的bounds
 @see    boundsForOrientation:
 */
- (CGRect)currentBounds;

/**
 给定设备方向获取屏幕尺寸

 @param orientation 设备方向
 */
- (CGRect)boundsForOrientation:(UIInterfaceOrientation)orientation;

@end
