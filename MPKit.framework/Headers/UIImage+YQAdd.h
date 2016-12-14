//
//  UIImage+YQAdd.h
//  MPKit
//
//  Created by Mopon on 2016/12/13.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (YQAdd)

/**
 *  获取app启动图名字
 */
+ (NSString *)getLaunchImageName;

/**
 *  获取app启动图
 */
+ (UIImage *)getLaunchImage;

/**
 *  根据颜色生成一个1x1点的图片
 */
+ (UIImage *)imageWithColor:(UIColor *)color;

/**
 *  根据颜色生成一个图片
 *
 *  @param color 颜色
 *  @param size  图片大小
 */
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;

/**
 gif data文件生成一个动态图
 */
+ (UIImage *)imageWithSmallGIFData:(NSData *)data scale:(CGFloat)scale;

/**
 本地gif名字生成动态图
 */
+ (UIImage *)imageWithGifName:(NSString *)name;

/**
 裁剪image
 @return 裁剪过后的image
 */
- (UIImage *)imageByCropToRect:(CGRect)rect;

/**
 根据UIEdgeInsets来裁剪image，如果范围超出image大小eg.(-10,-10,-10,-10) 图片不够大则填充为传进来的颜色
 
 @param color 填充的颜色
 */
- (UIImage *)imageByInsetEdge:(UIEdgeInsets)insets withColor:(UIColor *)color;

/**
 设置圆角

 @param radius 圆角数值
 */
- (UIImage *)imageByRoundCornerRadius:(CGFloat)radius;

/**
 @param radius 圆角系数
 @param borderWidth 边框宽度
 @param borderColor 边框颜色
 */
- (UIImage *)imageByRoundCornerRadius:(CGFloat)radius
                                   borderWidth:(CGFloat)borderWidth
                                   borderColor:(UIColor *)borderColor;

/**
 设置边框

 @param radius 圆角系数
 @param corners 圆所在的矩形位置
 @param borderWidth 边框宽度
 @param borderColor 边框颜色
 @param borderLineJoin 边框线的样式
 */
- (UIImage *)imageByRoundCornerRadius:(CGFloat)radius
                                       corners:(UIRectCorner)corners
                                   borderWidth:(CGFloat)borderWidth
                                   borderColor:(UIColor *)borderColor
                                borderLineJoin:(CGLineJoin)borderLineJoin;

/**
 旋转图片

 @param radians 以逆时针方向旋转弧度
 @param fitSize YES: 新图片的尺寸自适应
                NO : 新图片的尺寸按照旧图片的尺寸.超出部分裁剪
 */
- (UIImage *)imageByRotate:(CGFloat)radians fitSize:(BOOL)fitSize;

/**
 向左旋转90°
 */
- (UIImage *)imageByRotateLeft90;

/**
 向右旋转90°
 */
- (UIImage *)imageByRotateRight90;

/**
 旋转180°
 */
- (UIImage *)imageByRotate180;

/**
 垂直翻转⥯
 */
- (UIImage *)imageByFlipVertical;

/**
 水平翻转⇋ iOS10 系统实现了该方法 （imageWithHorizontallyFlippedOrientation）
 */
- (UIImage *)imageByFlipHorizontal;

- (UIImage *)imageByTintColor:(UIColor *)color;

/**
 图片黑白化
 */
- (UIImage *)imageByGrayscale;

/**
 模糊图片 适用于模糊任何内容
 */
- (UIImage *)imageByBlurSoft;

/**
 模糊图片 适用于模糊纯白色以外的任何内容
 */
- (UIImage *)imageByBlurLight;

/**
 模糊图片，适合显示黑色深色的内容。跟Navigation Bar White风格一样
 */
- (UIImage *)imageByBlurExtraLight;

/**
 跟通知中心类似的模糊效果
 */
- (UIImage *)imageByBlurDark;

/**
 给定一个颜色，给图片添加以该颜色为主要颜色的模糊蒙层。
 */
- (UIImage *)imageByBlurWithTint:(UIColor *)tintColor;

/**
 调整模糊程度，色调颜色，饱和度等

 @param blurRadius 模糊程度
 @param tintColor 色调颜色
 @param tintBlendMode 混合模式，默认为kCGBlendModeNormal (0)
 @param saturation 饱和度 值为1.0时为原图饱和度。0为黑白
 @param maskImage 如果指定。则只修改该image区域
 */
- (UIImage *)imageByBlurRadius:(CGFloat)blurRadius
                              tintColor:(UIColor *)tintColor
                               tintMode:(CGBlendMode)tintBlendMode
                             saturation:(CGFloat)saturation
                              maskImage:(UIImage *)maskImage;


@end
