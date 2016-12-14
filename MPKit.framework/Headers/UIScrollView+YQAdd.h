//
//  UIScrollView+YQAdd.h
//  MPKit
//
//  Created by Mopon on 2016/12/14.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (YQAdd)

/**
 滚到最顶部(带动画)
 */
- (void)scrollToTop;

/**
 滚到最底部(带动画)
 */
- (void)scrollToBottom;

/**
 滚到最左边(带动画)
 */
- (void)scrollToLeft;

/**
 滚到最右边(带动画)
 */
- (void)scrollToRight;

/**
 滚到顶部
 
 @param animated  是否启用动画
 */
- (void)scrollToTopAnimated:(BOOL)animated;

/**
 滚到底部
 
 @param animated  是否启用动画
 */
- (void)scrollToBottomAnimated:(BOOL)animated;

/**
 滚到左边
 
 @param animated  是否启用动画
 */
- (void)scrollToLeftAnimated:(BOOL)animated;

/**
 滚到右边
 
 @param animated  是否启用动画
 */
- (void)scrollToRightAnimated:(BOOL)animated;

@end
