//
//  UITableView+YQAdd.h
//  MPKit
//
//  Created by Mopon on 2016/12/14.
//  Copyright © 2016年 Mopon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITableView (YQAdd)

/**
 动画执行一系列操作
 @discussion 插入 删除 移动行 动画操作。
             不能在block里面调用 reloadData 方法
             系统自带有的动画才会有动画（例如插入删除移动刷新行）
 
 @param block 一系列tableview操作的回调
 */
- (void)updateWithBlock:(void (^)(UITableView *tableView))block;


/**
 让tableview滚动到某一段的某一行

 @discussion 这个方法调用的时候不会调用scrollview的代理scrollViewDidScroll
 @param row 滚动到哪一行
 @param section 滚动到那一段
 @param scrollPosition 滚动方向
 @param animated 动画类型
 */
- (void)scrollToRow:(NSUInteger)row inSection:(NSUInteger)section atScrollPosition:(UITableViewScrollPosition)scrollPosition animated:(BOOL)animated;

/**
 在指定段指定行添加行

 @param row 插到哪一行
 @param section 插到那一段
 @param animation 动画类型
 */
- (void)insertRow:(NSUInteger)row inSection:(NSUInteger)section withRowAnimation:(UITableViewRowAnimation)animation;

/**
 刷新指定行

 @param row 刷新的行数
 @param section 刷新的段数
 @param animation 动画类型
 */
- (void)reloadRow:(NSUInteger)row inSection:(NSUInteger)section withRowAnimation:(UITableViewRowAnimation)animation;

/**
 删除指定行

 @param row 删除的行
 @param section 删除的段
 @param animation 动画类型
 */
- (void)deleteRow:(NSUInteger)row inSection:(NSUInteger)section withRowAnimation:(UITableViewRowAnimation)animation;

/**
 给定指定indexPath插入行

 @param indexPath indexPath
 @param animation 动画类型
 */
- (void)insertRowAtIndexPath:(NSIndexPath *)indexPath withRowAnimation:(UITableViewRowAnimation)animation;

/**
 给定指定indexPath刷新行
 
 @param indexPath indexPath
 @param animation 动画类型
 */
- (void)reloadRowAtIndexPath:(NSIndexPath *)indexPath withRowAnimation:(UITableViewRowAnimation)animation;

/**
 给定指定indexPath删除行
 
 @param indexPath indexPath
 @param animation 动画类型
 */
- (void)deleteRowAtIndexPath:(NSIndexPath *)indexPath withRowAnimation:(UITableViewRowAnimation)animation;

/**
 插入一段内容

 @param section 段
 @param animation 动画类型
 */
- (void)insertSection:(NSUInteger)section withRowAnimation:(UITableViewRowAnimation)animation;

/**
 删除指定段

 @param section 段
 @param animation 动画类型
 */
- (void)deleteSection:(NSUInteger)section withRowAnimation:(UITableViewRowAnimation)animation;

/**
 刷新指定段

 @param section 段
 @param animation 动画类型
 */
- (void)reloadSection:(NSUInteger)section withRowAnimation:(UITableViewRowAnimation)animation;

/**
 清除选中状态

 @param animated 是否动画
 */
- (void)clearSelectedRowsAnimated:(BOOL)animated;

@end
