//
//  UIXDropMenuItem.h
//  QDate
//
//  Created by WangXiaoXiang on 14/12/23.
//  Copyright (c) 2014年 Sang HsiuJane. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIXDropBarItem : NSObject
/**
 *  标题
 */
@property(nonatomic,copy) NSString* title;

/**
 * 关闭时的图平
 */
@property(nonatomic,strong) UIImage* closeImage;
/**
 * 打开时的图平
 */
@property(nonatomic,strong) UIImage* openImage;

@end
