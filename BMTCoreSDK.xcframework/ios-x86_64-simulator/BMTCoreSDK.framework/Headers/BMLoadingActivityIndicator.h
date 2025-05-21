//
//  BMPassActivityIndicator.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 4/9/14.
//  Copyright (c) 2014 Bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface BMLoadingActivityIndicator : UIView

@property (nonatomic) UILabel *messageLabel;

/* Class Methods */
+ (instancetype)initWithLoadingMessage;
+ (instancetype)initWithMessage:(NSString *)message;
+ (instancetype)initWithMessageAboveIndicator:(NSString *)message;

/*!
    Return strings in class methods so that they can be exported properly
 */
+ (NSString *_Nonnull)loadingMessage;

- (void)setMessage:(NSString *)message;
- (void)startAnimatingOnView:(UIView *)view;
- (void)stopAnimatingAndRemoveSelf;

@end
