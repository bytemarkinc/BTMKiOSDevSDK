//
//  BMPSUnderlineTextField.h
//  BMPassSDK
//
//  Created by Apoorva Reed on 9/27/19.
//  Copyright © 2019 Bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BTMKTheme.h"


@interface BMPSUnderlineTextField : UITextField <BTMKThemeDelegate>

@property (nonatomic, assign) BOOL shouldShowBlinkingCursor;
@property (nonatomic, assign) CGFloat leftPadding;
@property (nonatomic, assign) CGFloat rightPadding;
@property (nonatomic) BOOL shouldAllowMenu;

@property (nonatomic) UIColor * _Nullable underLineColor;
@property (nonatomic) CGFloat underLinePadding;
@property (nonatomic, copy, nullable) BOOL (^textFieldShouldChangeCharactersBlock)(UITextField * _Nullable textField, NSRange range, NSString * _Nullable string);

@end

