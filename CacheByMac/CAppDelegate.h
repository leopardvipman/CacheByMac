//
//  CAppDelegate.h
//  CacheByMac
//
//  Created by 杨 宏强 on 13-2-21.
//  Copyright (c) 2013年 yanghongqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CViewController;

@interface CAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UINavigationController *navigationController;
@property (strong, nonatomic) CViewController *viewController;

@end
