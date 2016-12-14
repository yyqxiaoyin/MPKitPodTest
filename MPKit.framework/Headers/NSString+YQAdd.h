//
//  NSString+YQAdd.h
//  MPKit
//
//  Created by Mopon on 2016/12/13.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (YQAdd)

/**
 *  获取UUID字符串
 */
+ (NSString *)stringWithUUID;

/**
 *  根据文件名读取本地文件转换成utf-8编码的字符串
 *
 *  @param resourceName 文件名
 */
+ (NSString *)stringWithResourceName:(NSString *)resourceName;

/**
 *  计算文字的尺寸
 *
 *  @param font 文字的字体
 *  @param size 文字的最大尺寸
 *
 *  @return 文字尺寸
 */
- (CGSize)sizeForFont:(UIFont *)font size:(CGSize)size mode:(NSLineBreakMode)lineBreakMode;

/**
 *  计算文字的宽度
 *
 *  @param font 文字的字体
 *
 *  @return 文字的宽度
 */
- (CGFloat)widthForFont:(UIFont *)font;

/**
 *  根据指定的宽度，计算文字的高度
 *
 *  @param font  文字的字体
 *  @param width 文字的指定宽度
 *
 *  @return 文字的高度
 */
- (CGFloat)heightForFont:(UIFont *)font width:(CGFloat)width;

/**
 *  返回MD5加密之后的支付串
 */
- (NSString *)md5String;

/**
 返回base64字符串
 */
- (NSString *)base64EncodedString;

/**
 返回 NSRange(0,self.length)
 */
- (NSRange)rangeOfAll;

/**
 *  转换成UTF-8编码的NSData
 */
- (NSData *)dataValue;

/**
 *  解析json字符串 返回字典或者数组
 */
- (id)jsonValueDecode;

/**
 判断字符串是否不为空（其中包含字符串为nil  @"" @" " @"\n"）
 返回NO说明字符串为空  YES说明字符串不为空
 */
- (BOOL)isNotBlank;

/**
 字符串是否为手机号码

 @return YES 为手机号码 
 */
- (BOOL)isPhoneNum;

@end
