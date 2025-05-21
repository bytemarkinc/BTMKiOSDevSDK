//
//  BMWindow.h
//  NY Waterway
//
//  Created by Ryan Cleeton on 10/22/13.
//  Copyright (c) 2013 Bytemark Inc,. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface BMWindow : UIWindow 
- (instancetype)init;

- (void)addToMainWindow:(UIView *)view;
- (void)removeView:(UIView *)view;

@end
