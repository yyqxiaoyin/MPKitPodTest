//
//  UITextField+YQAdd.h
//  MPKit
//
//  Created by Mopon on 2016/12/14.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (YQAdd)

/**
 设置选择所有text
 */
- (void)selectAllText;

/**
 设置选择的text

 @param range 选择的下标
 */
- (void)setSelectedRange:(NSRange)range;

@end
