//
//  LXTableHeaderView.h
//  礼物说
//
//  Created by 曾令轩 on 15/11/27.
//  Copyright © 2015年 曾令轩. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LXTableHeaderView : UIView
@property (nonatomic, strong) UIViewController *preCtl;
@property (nonatomic, strong) NSArray *topics;

+ (instancetype)viewWithImgDatas:(NSArray *)imgDatas;
- (instancetype)initWithImgDatas:(NSArray *)imgDatas;
@end
