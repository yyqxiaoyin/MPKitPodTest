//
//  NSDictionary+YQAdd.h
//  MPKit
//
//  Created by Mopon on 2016/12/13.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (YQAdd)

/**
 根据plist文件返回一个字典
 */
+ (NSDictionary *)dictionaryWithPlistData:(NSData *)plist;

/**
 根据一个XML字符创返回一个字典
 */
+ (NSDictionary *)dictionaryWithPlistString:(NSString *)plist;

/**
 返回一个包含字典中所有key的数组。按升序排序
 */
- (NSArray *)allKeysSorted;

/**
 返回一个包含字典中所有value的数组。按升序排列
 */
- (NSArray *)allValuesSortedByKeys;

/**
 验证一个key在字典中是否有值
 */
- (BOOL)containsObjectForKey:(id)key;

/**
 字典转换为json字符串
 */
- (NSString *)jsonStringEncoded;

/**
 转换为格式化之后的字符串
 */
- (NSString *)jsonPrettyStringEncoded;

@end
