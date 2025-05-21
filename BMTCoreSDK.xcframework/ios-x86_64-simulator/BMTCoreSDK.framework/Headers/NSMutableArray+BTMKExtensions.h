//
//  NSMutableArray+BTMKExtensions.h
//  BMCoreSDK
//
//  Created by Xiangdong Zhu on 5/26/17.
//  Copyright © 2017 Bytemark Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (BTMKExtensions)

/*!
 * Replace all objects in this mutable array with the given array when they don't have exactly the same objects
 * Object comparison using isEqual
 *
 * @param newObjects another array to compare and replace
 * @return BOOL YES if the objects are successfully replaced, otherwise NO
 */
- (BOOL)replaceAllObjectsIfDifferent:(NSArray *)newObjects;

/*!
 * Replace all objects in this mutable array with the given array
 *
 * @param newObjects another array to compare and replace
 * @return BOOL YES if the objects are successfully replaced
 */
- (BOOL)replaceAllObjects:(NSArray *)newObjects;

@end
