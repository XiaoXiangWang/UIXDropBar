//
//  UIXDropMenuView.m
//  QDate
//
//  Created by WangXiaoXiang on 14/12/23.
//  Copyright (c) 2014年 Sang HsiuJane. All rights reserved.
//

#import "UIXDropBarButton.h"
#import "UIXDropBarIndicateImageView.h"
#import "UIXDropBarButtonLabel.h"

@implementation UIXDropBarButton
-(instancetype)initWithFrame:(CGRect)frame{
    if (self = [super initWithFrame:frame]) {
        [self _initSubViews];
    }
    return self;
}
- (instancetype)initWithCoder:(NSCoder *)coder
{
    self = [super initWithCoder:coder];
    if (self) {
        [self _initSubViews];
    }
    return self;
}

-(void)_initSubViews{
    //文本
    UIXDropBarButtonLabel* textLabel = [UIXDropBarButtonLabel new];
    textLabel.numberOfLines = 1;
    self.textLabel = textLabel;
    [self addSubview:textLabel];
    
    //指示器
    UIXDropBarIndicateImageView* indicatorView = [UIXDropBarIndicateImageView new];
    self.indicatorView = indicatorView;
    [self addSubview:indicatorView];
    
    indicatorView.translatesAutoresizingMaskIntoConstraints = NO;
    textLabel.translatesAutoresizingMaskIntoConstraints = NO;
    [self addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"H:|-5-[textLabel]-0-[indicatorView(20)]-5-|"
                                                                 options:0
                                                                 metrics:nil
                                                                   views:NSDictionaryOfVariableBindings(textLabel,indicatorView)]];
    [self addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"V:|-0-[indicatorView]-0-|"
                                                                 options:0
                                                                 metrics:nil
                                                                   views:NSDictionaryOfVariableBindings(indicatorView)]];
    [self addConstraints:[NSLayoutConstraint constraintsWithVisualFormat:@"V:|-0-[textLabel]-0-|"
                                                                 options:0
                                                                 metrics:nil
                                                                   views:NSDictionaryOfVariableBindings(textLabel)]];
    
    self.textLabel.text = @"hahahaha";
}

@end
