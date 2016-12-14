//
//  UIFont+YQAdd.h
//  MPKit
//
//  Created by Mopon on 2016/12/14.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import <CoreText/CoreText.h>

@interface UIFont (YQAdd)

/**
 从路径加载字体 如果返回YES 可以调用[UIFont fontWithName:...]调用该字体

 @param path 路径
 */
+ (BOOL)loadFontFromPath:(NSString *)path;

/**
 加载字体文件生成字体 支持格式为TTF,OTF.

 @param data 字体文件
 */
+ (UIFont *)loadFontFromData:(NSData *)data;

/**
 转换为粗体
 */
- (UIFont *)fontWithBold;

/**
 转换为斜体
 */
- (UIFont *)fontWithItalic;

/**
 转换为粗体+斜体
 */
- (UIFont *)fontWithBoldItalic;

/**
 转换为默认字体
 */
- (UIFont *)fontWithNormal;

@end
