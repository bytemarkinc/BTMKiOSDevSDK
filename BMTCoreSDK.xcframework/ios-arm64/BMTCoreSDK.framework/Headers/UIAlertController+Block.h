//
//  UIAlertController+Block.h
//  BMWhiteLabelSDK
//
//  Created by Bytemark on 11/1/17.
//  Copyright © 2017 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^AlertControllerBlock)(UIAlertController *alertView,
                                    NSInteger buttonIndex);
@class BMProduct;

@interface UIAlertController (Block)

+ (void)showWithTitle:(NSString *)title
              message:(NSString *)message
   didClickAlertBlock:(AlertControllerBlock)didClickAlertBlock
    cancelButtonTitle:(NSString *)cancelButtonTitle
    otherButtonTitles:(NSString *)otherButtonTitles, ...;

- (void)show;

+ (void)showInformationAlert:(NSString *)title message:(NSString *)message controller:(UIViewController *)sender;

//+ (void)showConfirmationAlertView;
+ (void)showRecurringPaymentAlertViewForProduct:(BMProduct *)product didClickAlertBlock:(AlertControllerBlock)alertblock;

+ (NSString *)cloudMessage;
+ (NSString *)deviceMessage;
+ (NSString *)fareCappingInfoMessage;
+ (NSString *)createVirtualCardInfoMessage;
+ (NSString *)linkCardInfoMessage;

@end
