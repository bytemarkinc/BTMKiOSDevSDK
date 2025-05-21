//
//  BMWLDropdownView.h
//  BMWhiteLabelSDK
//
//  Created by Damian A Torres on 8/12/16.
//  Copyright © 2016 co.bytemark. All rights reserved.
//


#import "BMWLTextFieldAndLabelView.h"


@interface BMWLDropdownView : UIView <BTMKThemeDelegate, UITextFieldDelegate>

@property (nonatomic) BOOL hasSelectedValue;
@property (nonatomic) BOOL dropdownEnabled;
@property (nonatomic) UIPickerView *pickerView;
@property (nonatomic) UIToolbar *pickerToolbar;
@property (nonatomic) BMWLTextFieldAndLabelView *textFieldAndLabelView;
@property (nonatomic, copy) NSString *tempSelectedPickerValue;

- (void)setupViews;

@end
