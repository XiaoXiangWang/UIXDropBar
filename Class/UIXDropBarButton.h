//
//  UIXDropMenuView.h
//  QDate
//
//  Created by WangXiaoXiang on 14/12/23.
//  Copyright (c) 2014年 Sang HsiuJane. All rights reserved.
//

#import <UIKit/UIKit.h>

@class UIXDropBarButtonLabel,UIXDropBarIndicateImageView;
@interface UIXDropBarButton : UIControl

@property(nonatomic,weak) UIXDropBarButtonLabel* textLabel;

@property(nonatomic,weak) UIXDropBarIndicateImageView* indicatorView;

@end
