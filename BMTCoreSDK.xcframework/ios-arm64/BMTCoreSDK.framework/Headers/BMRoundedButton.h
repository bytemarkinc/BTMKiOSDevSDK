//
//  BMButton.h
//  NY Waterway
//
//  Created by Kevin Rejko on 10/4/13.
//  Copyright (c) 2013 Bytemark Inc,. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BMAccessoryIndicator.h"

@class BMAccessoryIndicator;


@interface BMRoundedButton : UIButton

@property (nonatomic) BMAccessoryIndicator *accessoryIndicator;

+ (id)button;
+ (id)buttonWithTitle:(NSString *)title;
+ (id)buttonWithColor:(UIColor *)color andTitle:(NSString *)title;

- (void)setupBoldFont;
- (void)enableAccessoryIndicator;

@end
