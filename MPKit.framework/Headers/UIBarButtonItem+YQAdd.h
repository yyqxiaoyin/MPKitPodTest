//
//  UIBarButtonItem+YQAdd.h
//  MPKit
//
//  Created by Mopon on 2016/12/14.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^BarButtonBtnTouchBlock)(UIButton *btn);

@interface UIBarButtonItem (YQAdd)

/**
 生成一个block回调的图片UIBarButtonItem

 @param normalImageName 正常状态的图片
 @param highLightImgName 高亮状态的图片
 @param touchHandle 按钮点击回调
 */
+ (instancetype)barBtnItemWithNormalImg:(NSString *)normalImageName
                           highLightImg:(NSString *)highLightImgName
                            touchHandle:(BarButtonBtnTouchBlock)touchHandle;

/**
 生成一个带block回调的标题UIBarButtonItem

 @param title 标题
 @param titleColor 标题颜色 默认为蓝色
 @param titleFont 标题字体 默认为[UIFont systemFontOfSize:17]
 @param touchHandle 按钮点击回调
 */
+ (instancetype)barBtnItemWithTitle:(NSString *)title
                         titleColor:(UIColor *)titleColor
                          titleFont:(UIFont *)titleFont
                        touchHandle:(BarButtonBtnTouchBlock)touchHandle;

@end
