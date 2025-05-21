//
//  NSArray+JSONCoding.h
//  BMPassSDK
//
//  Created by Bytemark on 5/23/15.
//  Copyright (c) 2015 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol BMJSONCoding;


@interface NSArray (JSONCoding)

/* UUID Helpers */
- (NSArray *)uuids;

/* Object Matching */
- (id <BMJSONCoding>)objectMatchingJSONCodingObjectWithUUID:(NSString *)uuid;
- (id <BMJSONCoding>)objectMatchingJSONCodingObject:(id <BMJSONCoding>)object;

/* Conditional */
- (BOOL)hasJSONCodingObject:(id <BMJSONCoding>)object;

/* JSON Conversion */
- (NSArray *)arrayParsedFromJSONObjectsOfClass:(Class)JSONClass;
- (NSArray *)JSONValue;

/* Helpers */
- (NSArray *)JSONCodingObjects;

@end
