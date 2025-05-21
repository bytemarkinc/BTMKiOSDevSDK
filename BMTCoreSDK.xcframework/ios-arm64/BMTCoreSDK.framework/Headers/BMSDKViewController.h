//
//  BMViewController.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 10/14/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BMTCoreSDK/BMTCoreSDK.h>

/* Categories */
#import "UIViewController+BMViewController.h"

/* Controllers */
#import "BMPortraitNavigationController.h"


@interface BMSDKViewController : UIViewController

- (void)presentModally:(UIViewController *)sender;
- (void)presentModally;
@end
