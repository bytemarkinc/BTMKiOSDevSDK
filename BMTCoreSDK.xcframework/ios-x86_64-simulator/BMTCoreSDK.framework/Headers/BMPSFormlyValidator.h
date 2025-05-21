//
//  BMPSFormlyValidator.h
//  BMPassSDK
//
//  Created by Xiangdong Zhu on 6/19/17.
//  Copyright © 2017 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BMPSFormlyDelegate.h"

@class BMPSFormlyValidationRule;


@interface BMPSFormlyValidator : NSObject

+ (BOOL)hasErrorIn:(NSArray *_Nullable)views errors:(NSArray<NSError *> *_Nullable *_Nonnull)errors updateHints:(BOOL)update;

+ (BOOL)validateInput:(NSString *_Nullable)inputString
             withRule:(BMPSFormlyValidationRule * _Nullable)validationRule
              onClass:(Class _Nullable)inputClass
           fieldLabel:(NSString * _Nullable)fieldLabel
            formlyKey:(NSString *_Nullable)formlyKey
               errors:(NSArray<NSError *> * _Nullable * _Nonnull)errorsPointer;

@end
