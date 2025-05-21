//
//  BMWLLabelAndCheckmarkViewController.h
//  BMWhiteLabelSDK
//
//  Created by Shuyang Sun on 6/29/17.
//  Copyright © 2017 co.bytemark. All rights reserved.
//

#import <BMTCoreSDK/BMTCoreSDK.h>

@interface BMWLLabelAndCheckmarkViewController : UIViewController

- (instancetype)initWithText:(NSString *)text;

@property (nonatomic) void(^completionOnDismiss)(void);

@property (nonatomic) BOOL onlyDismissSelf;

/**
 If this method is called, the view will not dismiss automatically.
 */
- (void)showButtonWithTitle:(NSString *_Nonnull)title;

@end
