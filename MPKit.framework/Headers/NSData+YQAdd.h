//
//  NSData+YQAdd.h
//  MPKit
//
//  Created by Mopon on 2016/12/13.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (YQAdd)

/**
 *  返回小写MD5加密字符串
 */
- (NSString *)md5String;

/**
 *  解析json数据 返回字典或者数组
 */
- (id)jsonValueDecoded;

/**
 base64字符串值
 */
- (NSString *)base64EncodedString;

/**
 返回UTF-8编码的字符串
 */
- (NSString *)utf8String;

/**
 返回一个16进制的字符创
 */
- (NSString *)hexString;

/**
 根据文件名字加载本地数据 类似于[UIImage imageNamed:]
 */
+ (NSData *)dataNamed:(NSString *)name;

@end
