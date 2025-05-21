//
//  UITextField+Helper.h
//  BMWhiteLabelSDK
//
//  Created by Deepthi on 15/05/18.
//  Copyright © 2018 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField (Helper)

- (void)addDoneButton;
- (void)didTapDoneButton;
- (void)setupRevealPasswordButton;
- (void)addKeyboardButtonWithTitle:(NSString *)title withTarget:(id)sender;

@end
