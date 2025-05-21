//
//  NSMutableDictionary+BTMKExtensions.h
//  BMCoreSDK
//
//  Created by Xiangdong Zhu on 4/5/17.
//  Copyright © 2017 Bytemark Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (BTMKExtensions)

/*!
 Set the value for given key only when value is not NSNull or nil.
 
 @param object The value to set, can't be NSNull or nil.
 
 @param key The key to set with, can't be nil.
 */

- (void)setSafeValue:(_Nonnull id)object forKey:(_Nullable id)key;

@end
