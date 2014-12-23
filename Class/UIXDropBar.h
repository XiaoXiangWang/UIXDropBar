//
//  UIXDropMenuBar.h
//  QDate
//
//  Created by WangXiaoXiang on 14/12/23.
//  Copyright (c) 2014年 Sang HsiuJane. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIXDropBarItem.h"

@class UIXDropBar;
#pragma mark -  UIXDropMenuBarDelegate
@protocol UIXDropBarDelegate <NSObject>
@optional

-(void)dropBar:(UIXDropBar*)dropBar didSelectItem:(UIXDropBarItem*)selectItem;

@end
#pragma mark -  UIXDropMenuBar
@interface UIXDropBar : UIView
//UITabBar
/**
 *  代理方法
 */
@property(nonatomic,weak) id<UIXDropBarDelegate> delegate;
/**
 *  已经选中的item
 */
@property(nonatomic,weak) UIXDropBarItem* selectedItem;
/**
 *  所有的item
 */
@property(nonatomic,copy) NSArray* items;
/**
 *  背景颜色
 */
@property(nonatomic,strong) UIImage* backgroundImage;
/**
 *  选中时的指示器
 */
@property(nonatomic,strong) UIImage* selectionIndicatorImage;

@end
