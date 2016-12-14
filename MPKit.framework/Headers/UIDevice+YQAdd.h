//
//  UIDevice+YQAdd.h
//  MPKit
//
//  Created by Mopon on 2016/12/14.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIDevice (YQAdd)

/**
 获取当前系统版本号 eg:(8.1)
 */
+ (double)systemVersion;

/**
 设备是否为iPad
 */
@property (nonatomic, readonly) BOOL isPad;

/**
 设备是否为模拟器
 */
@property (nonatomic, readonly) BOOL isSimulator;

/**
 设备是否为越狱装备
 */
@property (nonatomic, readonly) BOOL isJailbroken;

/**
 设备能否通话
 */
@property (nonatomic, readonly) BOOL canMakePhoneCalls;

/**
 设备启动时间
 */
@property (nonatomic, readonly) NSDate *systemUptime;


/**
 e.g. "iPhone6,1" "iPad4,6"
 */
@property (nonatomic, readonly) NSString *machineModel;

/**
 e.g. "iPhone 5s" "iPad mini 2"
 */
@property (nonatomic, readonly) NSString *machineModelName;

/**
 总磁盘容量
 */
@property (nonatomic, readonly) int64_t diskSpace;

/**
 空闲磁盘容量
 */
@property (nonatomic, readonly) int64_t diskSpaceFree;

/**
 已用磁盘容量
 */
@property (nonatomic, readonly) int64_t diskSpaceUsed;

/**
 总内存
 */
@property (nonatomic, readonly) int64_t memoryTotal;

/**
 已用内存
 */
@property (nonatomic, readonly) int64_t memoryUsed;

/**
 可用内存
 */
@property (nonatomic, readonly) int64_t memoryFree;

/**
 活跃内存
 */
@property (nonatomic, readonly) int64_t memoryActive;

/**
 不活跃内存
 */
@property (nonatomic, readonly) int64_t memoryInactive;

/**
 处理器个数
 */
@property (nonatomic, readonly) NSUInteger cpuCount;

/**
 CPU使用率 1.0为100%
 */
@property (nonatomic, readonly) float cpuUsage;

/**
 当前CPU每个处理器的使用情况1.0为100%
 */
@property (nonatomic, readonly) NSArray<NSNumber *> *cpuUsagePerProcessor;

@end

#ifndef kSystemVersion
#define kSystemVersion [UIDevice systemVersion]
#endif

#ifndef kiOS6Later
#define kiOS6Later (kSystemVersion >= 6)
#endif

#ifndef kiOS7Later
#define kiOS7Later (kSystemVersion >= 7)
#endif

#ifndef kiOS8Later
#define kiOS8Later (kSystemVersion >= 8)
#endif

#ifndef kiOS9Later
#define kiOS9Later (kSystemVersion >= 9)
#endif
