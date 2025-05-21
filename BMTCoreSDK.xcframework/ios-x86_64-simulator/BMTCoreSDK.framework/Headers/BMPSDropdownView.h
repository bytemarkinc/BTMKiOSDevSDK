//
//  BMPSDropDownView.h
//  BMPassSDK
//
//  Created by Apoorva Reed on 9/27/19.
//  Copyright © 2019 Bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BMPSTextFieldAndLabelView.h"


@interface BMPSDropdownView : UIView <BTMKThemeDelegate, UITextFieldDelegate>

@property (nonatomic) BOOL hasSelectedValue;
@property (nonatomic) BOOL dropdownEnabled;
@property (nonatomic) UIPickerView *pickerView;
@property (nonatomic) UIToolbar *pickerToolbar;
@property (nonatomic) BMPSTextFieldAndLabelView *textFieldAndLabelView;

- (void)setupViews;

@end
