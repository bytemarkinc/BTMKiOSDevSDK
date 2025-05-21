//
//  BMErrors+Private.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 7/23/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#ifndef BMPassSDK_BMErrors_Private_h
#define BMPassSDK_BMErrors_Private_h

#import "BMErrors.h"

/* Categories */
#import "NSError+BMError.h"


@interface BMErrors (BMErrorsPrivateExtension)

/* Static Methods */
+ (BMErrors *)errorContainerWithErrorOfType:(ErrorType)_eErrorType;
+ (BMErrors *)errorContainerWithError:(NSError *)error;

/* Init */
- (instancetype)initWithErrors:(NSArray *)errors;
- (instancetype)initWithError:(NSError *)error;
- (instancetype)init;

/* Add Error */
- (void)addErrors:(NSArray *)errors;
- (void)addError:(NSError *)error;
+ (void)addError:(NSError *)error toErrors:(BMErrors**)errors;
+ (void)addErrors:(NSArray *)errorsArray toErrors:(BMErrors**)errors;

/* Introspection */
- (BOOL)hasErrors;

@end

#endif
