//
//  NSObject+JSONCoding.h
//  BMPassSDK
//
//  Created by Bytemark on 5/23/15.
//  Copyright (c) 2015 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BMJSONCoding;


@interface NSObject (JSONCoding)

- (BOOL)isEqualToJSONCodingObject:(id <BMJSONCoding>)jsonCodingObject;

@end
