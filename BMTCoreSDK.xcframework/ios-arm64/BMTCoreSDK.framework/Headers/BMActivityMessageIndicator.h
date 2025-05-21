/*
 *  Filename: "BMActivityMessageIndicator.h"
 *
 *  Created By: Michael B. Lodato (SR. Mobile Developer)
 *
 *  Created: 2/6/13
 *
 *  Modified: 11/7/13
 *
 *  Company: "Bytemark Inc,."
 */

#import <BMTCoreSDK/BMTCoreSDK.h>

typedef NS_OPTIONS(NSInteger, BMActivityMessageIndicatorIconType) {
    BMActivityMessageIndicatorIconTypeCross,
    BMActivityMessageIndicatorIconTypeSpinner,
    BMActivityMessageIndicatorIconTypeCheck,
};


@interface BMActivityMessageIndicator : UIView

@property (nonatomic) UILabel *messageLabel;
@property (nonatomic, getter=isBlockingUserInteraction) BOOL blockUserInteraction;

/* Static */
+ (instancetype)indicatorWithMessage:(NSString *)message;

+ (void)showIndicatorWithMessage:(NSString *)message
                   icon:(BMActivityMessageIndicatorIconType)iconType;

- (instancetype)initWithMessage:(NSString *)message
                          icon:(BMActivityMessageIndicatorIconType)iconType;

- (void)setMessage:(NSString *)message;
- (void)startAnimating;
- (void)stopAnimating;

@end
