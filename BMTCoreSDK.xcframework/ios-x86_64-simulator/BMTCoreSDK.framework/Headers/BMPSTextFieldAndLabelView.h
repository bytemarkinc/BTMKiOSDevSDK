//
//  BMPSTextFieldAndLabelView.h
//  BMPassSDK
//
//  Created by Apoorva Reed on 9/27/19.
//  Copyright © 2019 Bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BTMKTheme.h"
#import "BMPSUnderlineTextField.h"


@interface BMPSTextFieldAndLabelView : UIView <BTMKThemeDelegate>

@property (nonatomic) BMPSUnderlineTextField *textField;
@property (nonatomic) UILabel *label;
@property (nonatomic) UILabel *labelAccessory;
@property (nonatomic) UIEdgeInsets labelInsets;
@property (nonatomic) BOOL labelAboveTextField;

- (void)addSubViews;
- (void)setupConstraints;

@end

