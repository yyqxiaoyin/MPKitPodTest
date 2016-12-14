//
//  UIView+YQAdd.h
//  MPKit
//
//  Created by Mopon on 2016/12/14.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    UIViewBorderDirectionTop,
    UIViewBorderDirectionLeft,
    UIViewBorderDirectionBottom,
    UIViewBorderDirectionRight,
} UIViewBorderDirection;

@interface UIView (YQAdd)

/**
 *  给view截图
 *
 *  @return view的截图
 */
-(UIImage *)snapshotImage;

/**
 view截图生成一个PDF文件
 */
- (NSData *)snapshotPDF;

/**
 *  给定区域获取view截图
 *
 *  @param frame 要截取的frame
 */
-(UIImage *)snapshotImageWithFrame:(CGRect)frame;

/**
 设置阴影

 @param color 阴影颜色
 @param offset 阴影偏移量
 @param radius 阴影圆角 
 */
- (void)setLayerShadow:(UIColor*)color offset:(CGSize)offset radius:(CGFloat)radius;

/**
 *  添加边框
 *
 *  @param borderColor 边框颜色
 *  @param borderWidth 边框宽度
 */
-(void)setBorderColor:(UIColor *)borderColor borderWidth:(CGFloat)borderWidth;

/**
 *  给视图的一边添加边框
 *
 *  @param direction    方向
 *  @param borderColor 边框颜色
 *  @param borderWidth 边框高度
 */
-(void)setBorderWithPosition:(UIViewBorderDirection)direction color:(UIColor *)borderColor borderWidth:(CGFloat)borderWidth;

/**
 移除所有子控件
 */
- (void)removeAllSubviews;

/**
 获取view所在的控制器 可能为空
 */
@property (nonatomic, readonly) UIViewController *viewController;

/**
 当前坐标点转换到目标视图或者window坐标系

 @param point 点
 @param view 目标view
 */
- (CGPoint)convertPoint:(CGPoint)point toViewOrWindow:(UIView *)view;

/**
 目标视图或者window坐标转换到当前坐标系

 @param point view或者window上的点
 @param view view或者window
 */
- (CGPoint)convertPoint:(CGPoint)point fromViewOrWindow:(UIView *)view;

/**
 矩形坐标转换到目标视图的坐标系

 @param rect 需要转换的区域
 @param view 目标视图
 */
- (CGRect)convertRect:(CGRect)rect toViewOrWindow:(UIView *)view;

/**
 目标视图的矩形坐标区域转换到当前view的坐标系

 @param rect 目标区域
 @param view 目标视图
 */
- (CGRect)convertRect:(CGRect)rect fromViewOrWindow:(UIView *)view;

/**
 给view添加一个点击回调

 @param block 点击view的回调
 */
- (void)addTapActionBlock:(void(^)(id sender))block;

/**
 移除手势所有事件
 */
- (void)removeAllActionBlocks;

@property (nonatomic, assign) CGFloat x;
@property (nonatomic, assign) CGFloat maxX;
@property (nonatomic, assign) CGFloat y;
@property (nonatomic, assign) CGFloat maxY;
@property (nonatomic, assign) CGFloat centerX;
@property (nonatomic, assign) CGFloat centerY;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;
@property (nonatomic, assign) CGSize size;
@property (nonatomic, assign) CGPoint origin;
@property (nonatomic, assign) CGFloat radius;

@end
