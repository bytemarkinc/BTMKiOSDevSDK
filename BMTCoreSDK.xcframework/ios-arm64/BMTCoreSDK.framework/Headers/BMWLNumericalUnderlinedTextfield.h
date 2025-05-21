//
//  BMWLNumericalUnderlinedTextfield.h
//  BMWhiteLabelSDK
//
//  Created by Paridhi Malviya on 30/05/18.
//  Copyright © 2018 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BTMKTheme.h"

@interface BMWLNumericalUnderlinedTextfield : UITextField <BTMKThemeDelegate>

@property (nonatomic, assign) BOOL shouldShowBlinkingCursor;
@property (nonatomic, assign) CGFloat leftPadding;
@property (nonatomic, assign) CGFloat rightPadding;
@property (nonatomic) BOOL shouldAllowMenu;

@property (nonatomic) UIColor * _Nullable underLineColor;
@property (nonatomic) CGFloat underLinePadding;
@property (nonatomic, copy, nullable) BOOL (^textFieldShouldChangeCharactersBlock)(UITextField * _Nullable textField, NSRange range, NSString * _Nullable string);

@end
