//
//  BMJSONCoding.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 9/15/14.
//  Copyright (c) 2014 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

/* Defines */
#import "BMTCoreDefines.h"

/* Catagories */
#import "NSObject+JSONCoding.h"
#import "NSArray+JSONCoding.h"


@protocol BMJSONCoding <NSObject>

- (void)updateWithJSON:(JSON *)JSONValue;
+ (id)objectFromJSON:(JSON *)JSONValue;

@optional
- (JSON *)JSONValue;
- (NSString *)uuid;

@end

