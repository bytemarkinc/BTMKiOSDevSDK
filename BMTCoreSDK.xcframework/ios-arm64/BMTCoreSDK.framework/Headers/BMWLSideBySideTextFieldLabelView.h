//
//  BMWLSideBySideTextFieldLabelView.h
//  BMWhiteLabelSDK
//
//  Created by Paridhi Malviya on 29/05/18.
//  Copyright © 2018 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BMWLNumericalUnderlinedTextfield.h"


@interface BMWLSideBySideTextFieldLabelView : UIView <BTMKThemeDelegate>

@property (nonatomic) BMWLNumericalUnderlinedTextfield *textField;
@property (nonatomic) UILabel *label;

@property (nonatomic) UIEdgeInsets labelInsets;

@end
