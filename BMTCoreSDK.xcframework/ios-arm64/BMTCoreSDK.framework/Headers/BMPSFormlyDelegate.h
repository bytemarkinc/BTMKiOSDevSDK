//
//  BMPSFormlyDelegate.h
//  BMPassSDK
//
//  Created by Xiangdong Zhu on 3/15/17.
//  Copyright © 2017 Bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BMPSFormlyValidationRule;


@protocol BMPSFormlyDelegate <NSObject>

- (void)setFormlyKey:(NSString *_Nonnull)key;
- (NSString *_Nonnull)formlyKey;

- (NSDictionary<NSString *, id> *_Nullable)formlyValue;
- (void)setFormlyValue:(NSString *_Nullable)value;

@end


@protocol BMPSFormlyValidationProtocol <NSObject>

- (BMPSFormlyValidationRule *_Nullable)validationRule;

- (void)setValidationRule:(BMPSFormlyValidationRule *_Nullable)validationRule;

/*!
 * Check if all inputs are valid
 *
 * @param errorsPointer an array of errors to return errors if any
 *
 * @return BOOL YES if all inputs are valid, otherwise NO
 */
- (BOOL)validateInputs:(NSArray<NSError *> *_Nullable *_Nonnull)errorsPointer;

- (void)updateErrorHints:(NSArray<NSError *> *_Nullable)errors withFocus:(BOOL)focus;

@end


@protocol BMPSFormlyControlDelegate <NSObject>

@optional

- (void)formlySignInAction:(id _Nullable )sender;
- (void)formlyShowForgotPassword:(id _Nullable)sender;
- (void)formlyResetPasswordAction:(id _Nullable)sender;
- (void)formlySignUpAction:(id _Nullable)sender;
- (void)formlySocialSignUpAction:(id _Nullable)sender;
- (void)formlyChangePasswordAction:(id _Nullable)sender;
- (void)formlyUpdateUserProfile:(id _Nullable)sender;
- (void)formlySubmitVoucherCode:(id _Nullable)sender;
- (void)formlyShowDeleteAccount:(id _Nullable)sender;
- (void)formlyDeleteAccountAction:(id _Nullable)sender;
- (void)formlyCancelAction:(id _Nullable)sender;
- (void)formlyAppSupportSubmitAction:(id _Nullable)sender;
- (void)formlyShowCloseAccount:(id _Nullable)sender;

@end


@protocol BMPSFormlyLabelProtocol <NSObject>

- (void)setAttributedText:(NSAttributedString *_Nullable)attributedText;
- (void)setFont:(UIFont *_Nonnull)font;

@end


typedef enum : NSUInteger {
    BMPSInputTypeEmail,
    BMPSInputTypePassword,
    BMPSInputTypeNumeric,
    BMPSInputTypePhone,
    BMPSInputTypeMultilineText,
    BMPSInputTypeFirstName,
    BMPSInputTypeLastName,
    BMPSInputTypeAddressLine1,
    BMPSInputTypeAddressLine2,
    BMPSInputTypeCity,
    BMPSInputTypeState,
    BMPSInputTypeCountry,
    BMPSInputTypePostalCode
} BMPSInputType;


@protocol BMPSFormlyInputProtocol <NSObject>

- (void)setInputLabel:(NSString *_Nullable)label required:(BOOL)isRequired;
- (void)setInputType:(BMPSInputType)type;
- (void)setPlaceHolder:(NSString *_Nullable)placeHolder;
- (void)setInputDescription:(NSAttributedString *_Nullable)description;
- (void)setTextFieldDelegate:(id<UITextFieldDelegate> _Nullable)delegate;
- (void)enableField:(BOOL)enable;

@end


@protocol BMPSFormlyMaskedInputProtocol <BMPSFormlyInputProtocol>

- (void)setInputMask:(NSString *_Nullable)mask;

@end


typedef enum : NSUInteger {
    BMPSFormlyStadiumButtonType,
    BMPSFormlyFlatButtonType
} BMPSFormlyButtonType;


@protocol BMPSFormlyButtonProtocol <NSObject>

- (void)setButtonText:(NSString *_Nullable)text;
- (void)addTarget:(id _Nullable )target action:(nonnull SEL)action forControlEvents:(UIControlEvents)controlEvents;

@end


@protocol BMPSFormlyDropdownProtocol <NSObject>

- (void)setDropdownLabel:(NSString *_Nullable)text required:(BOOL)isRequired;
- (void)setDropdownPlaceHolder:(NSString *_Nullable)placeholder;
- (void)setDropdownDataSource:(NSArray<NSDictionary *> *_Nullable)datasource;

@end


@protocol BMPSFormlyCheckboxProtocol <NSObject>

- (void)setCheckboxLabel:(NSAttributedString *_Nullable)text required:(BOOL)isRequired;
- (void)setCheckboxDescription:(NSAttributedString *_Nullable)text;
- (void)setUncheckedMessage:(NSString *_Nullable)text;

@end

@protocol BMPSFormlyMultiSelectProtocol <NSObject>

- (void)setChildViewOptions:(NSArray<NSDictionary *> *_Nullable)datasource;
- (void)setMultiSelectViewTextFieldDelegate:(id<UITextFieldDelegate> _Nullable)delegate;

@end
