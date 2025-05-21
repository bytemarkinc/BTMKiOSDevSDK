//
//  BMPSFormlyViewController.h
//  BMPassSDK
//
//  Created by Xiangdong Zhu on 7/7/17.
//  Copyright © 2017 Bytemark. All rights reserved.
//

#import <BMTCoreSDK/BMTCoreSDK.h>


@interface BMPSFormlyViewController : UIViewController < BMPSFormlyControlDelegate, UITextFieldDelegate>

@property (nonatomic, readonly) UIView *_Nonnull contentView;

- (instancetype  _Nullable)initWithFormlyData:(NSDictionary *_Nonnull)json;

- (id<BMPSFormlyDelegate>_Nullable)formlyFieldWithKey:(NSString *_Nonnull)key;

- (BOOL)validateAllSubviewsInputs;

- (void)showLoadingIndicator;
- (void)hideLoadingIndicator;
- (void)showAccountLoadingIndicator;
- (void)hideAccountLoadingIndicator;

@end
