//
//  BMWLUnderLineTextField.h
//  BMWhiteLabelSDK
//
//  Created by Damian A Torres on 8/9/16.
//  Copyright © 2016 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BTMKTheme.h"

@interface BMWLUnderLineTextField : UITextField <BTMKThemeDelegate>

@property (nonatomic, assign) BOOL shouldShowBlinkingCursor;
@property (nonatomic, assign) CGFloat leftPadding;
@property (nonatomic, assign) CGFloat rightPadding;
@property (nonatomic) BOOL shouldAllowMenu;
@property (nonatomic) BOOL isHighlighted;

@property (nonatomic) UIColor * _Nullable underLineColor;
@property (nonatomic) CGFloat underLinePadding;
@property (nonatomic, copy, nullable) BOOL (^textFieldShouldChangeCharactersBlock)(UITextField * _Nullable textField, NSRange range, NSString * _Nullable string);

@end
