//
//  BMPSFormlyCreator.h
//  BMPassSDK
//
//  Created by zxd on 2017/3/14.
//  Copyright © 2017年 Bytemark. All rights reserved.
//

#import <BMTCoreSDK/BMTCoreSDK.h>


typedef enum {
    BTMKFormlyInputType,
    BTMKFormlyMaskedInputType,
    BTMKFormlyLabelType,
    BTMKFormlyStadiumButtonType,
    BTMKFormlyFlatButtonType,
    BTMKFormlyCheckboxType,
    BTMKFormlyDropdownType,
    BTMKFormlyMultiSelectType
}BTMKFormlyType;


@interface BMPSFormlyCreator : NSObject

+ (void)createViewsFrom:(NSDictionary *)json addTo:(UIView *)view withDelegate:(id<BMPSFormlyControlDelegate, UITextFieldDelegate>)delegate;
+ (void)setFormlyClass:(Class)formlyClass forInputType:(BTMKFormlyType)type;

@end
