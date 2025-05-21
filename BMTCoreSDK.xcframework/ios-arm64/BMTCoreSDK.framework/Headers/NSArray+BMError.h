//
//  NSArray+BMError.h
//  BMCoreSDK
//
//  Created by Xiangdong Zhu on 10/30/17.
//  Copyright © 2017 Bytemark Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "BTMKEnum.h"


@interface NSArray (BMError)

/* Static Methods */
+ (NSArray<NSError *> *)errorContainerWithErrorCode:(NSInteger)errorCode;
+ (NSArray<NSError *> *)errorContainerWithError:(NSError *)error;

+ (void)addError:(NSError *)error toErrors:(NSArray<NSError *> **)errors;
+ (void)addErrors:(NSArray<NSError *> *)errorsArray toErrors:(NSArray<NSError *> **)errors;

- (NSString *)allErrorsString;

@end
