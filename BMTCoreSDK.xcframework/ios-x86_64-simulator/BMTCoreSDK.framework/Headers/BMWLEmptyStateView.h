//
//  BMWLEmptyStateView.h
//  BMWhiteLabelSDK
//
//  Created by Shuyang Sun on 6/20/16.
//  Copyright © 2016 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BMWLCircleImageView.h"
#import "BMWLStadiumButton.h"
#import "BMWLEmptyStateView.h"


@interface BMWLEmptyStateView : UIView <BTMKThemeDelegate>

- (void)startLoading;
- (void)stopLoading;
- (void)changeSecondaryButtonForBoldText;
- (void)changeSecondaryButtonForFillText;

- (void)setLoading:(BOOL)loading
             image:(UIImage * _Nullable)image
             title:(NSString * _Nullable)title
            detail:(NSString * _Nullable)detail
  firstButtonTitle:(NSString * _Nullable)firstButtonTitle
betweenButtonsText:(NSString * _Nullable)betweenButtonText
secondButtonTitle:(NSString * _Nullable)secondButtonTitle
targetForFirstButton:(id _Nullable)target1
actionForFirstButton:(SEL _Nullable)action1
targetForSecondButton:(id _Nullable)target2
actionForSecondButton:(SEL _Nullable)action2;

- (void)setLoading:(BOOL)loading
             image:(UIImage * _Nullable)image
             title:(NSString * _Nullable)title
            detail:(NSString * _Nullable)detail
       buttonTitle:(NSString * _Nullable)buttonTitle
   targetForButton:(id _Nullable)target
   actionForButton:(SEL _Nullable)action;

- (void)setLoading:(BOOL)loading
             image:(UIImage * _Nullable)image
             title:(NSString * _Nullable)title
            detail:(NSString * _Nullable)detail;

- (void)setDetailAccessibilityLabel:(NSString * _Nullable)detailAccessibilityLabelText;

- (void)switchToLoadingStateWithImage:(UIImage * _Nullable)image;
- (void)switchToLoadingStateWithoutImage;
- (void)switchToNetworkErrorStateWithRetryButtonTarget:(id _Nullable )target
                                                action:(SEL _Nullable)action;

- (void)fadeInWithDuration:(NSTimeInterval) duration completion:(void (^ _Nullable)(BOOL finished)) completion;
- (void)fadeOutWithDuration:(NSTimeInterval) duration completion:(void (^ _Nullable)(BOOL finished)) completion;
- (void)initializeFullWidhButtonsView;
- (void)adjustFontSizeToFitWidth:(BOOL)adjust;
- (void)setButtonTitleFontSize: (CGFloat)size;

@end

