//
//  Header.h
//  iLygport
//
//  Created by leo on 15/1/5.
//  Copyright (c) 2015年 leo. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AppDelegate.h"


#define Bundle @"29TSL4289R.com.lyg.aqjc"  //应用ID
#define NavigationBarColor [UIColor colorWithRed:0.16 green:0.69 blue:0.85 alpha:0.5]  //导航栏颜色
#define NavigationTitleColor [UIColor whiteColor]  //导航标题颜色
#define NavigationBackArrowColor [UIColor whiteColor] //导航栏返回键头颜色
#define AppName @"AQJC"

#define Server @"http://218.92.115.53:8081/%@"

@interface Header : NSObject
+(NSArray *)FunctionListInitialize;
@end
