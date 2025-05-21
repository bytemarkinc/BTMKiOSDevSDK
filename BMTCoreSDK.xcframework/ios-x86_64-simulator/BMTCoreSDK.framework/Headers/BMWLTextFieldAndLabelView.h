//
//  BMWLTextFieldAndLabelView.h
//  BMWhiteLabelSDK
//
//  Created by Damian A Torres on 8/9/16.
//  Copyright © 2016 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BMWLUnderLineTextField.h"


@interface BMWLTextFieldAndLabelView : UIView <BTMKThemeDelegate>

@property (nonatomic) BMWLUnderLineTextField *textField;
@property (nonatomic) UILabel *label;
@property (nonatomic) UILabel *labelAccessory;
@property (nonatomic) UIEdgeInsets labelInsets;
@property (nonatomic) BOOL labelAboveTextField;

- (void)addSubViews;
- (void)setupConstraints;

@end
