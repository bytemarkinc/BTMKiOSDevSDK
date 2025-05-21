//
//  BMValidator.h
//  BMPassSDK
//
//  Created by Bytemark on 5/25/15.
//  Copyright (c) 2015 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

/* Model */
#import "BMErrors+Private.h"


@interface BMValidator : NSObject

/* State Validation */
+ (BOOL)currentStatePassesValidationTests:(NSArray *)validationTests;
+ (BOOL)currentStatePassesValidationTests:(NSArray *)validationTests errors:(BMErrors**)errors;

/* Object Validation */
+ (BOOL)objects:(NSArray *)objects passValidationTests:(NSArray *)validationTests;
+ (BOOL)objects:(NSArray *)objects passValidationTests:(NSArray *)validationTests errors:(BMErrors**)errors;
+ (BOOL)object:(id)object passesValidationTests:(NSArray *)validationTests;
+ (BOOL)object:(id)object passesValidationTests:(NSArray *)validationTests errors:(BMErrors**)errors;

@end
