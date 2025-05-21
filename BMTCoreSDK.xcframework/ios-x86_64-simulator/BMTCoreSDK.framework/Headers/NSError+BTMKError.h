//
//  NSError+BTMKError.h
//  BMCoreSDK
//
//  Created by Xiangdong Zhu on 10/30/17.
//  Copyright © 2017 Bytemark Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSError (BTMKError)

+ (NSError *)errorWithCode:(NSInteger)code inClass:(Class)classType;
+ (NSError *)errorWithCode:(NSInteger)code inClass:(Class)classType localizedMessage:(NSString *)message;

@end
