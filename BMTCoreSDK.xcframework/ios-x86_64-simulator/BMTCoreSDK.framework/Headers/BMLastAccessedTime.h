//
//  BMLastAccessedTime.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 9/19/14.
//  Copyright (c) 2014 Bytemark. All rights reserved.
//
//
#import <Foundation/Foundation.h>

/* Protocols */
#import "BMJSONCoding.h"


@interface BMLastAccessedTime : NSObject <BMJSONCoding>

@property (nonatomic) NSString *uuid;
@property (nonatomic) NSDate *lastAccessedTime;

+ (BMLastAccessedTime *)lastAccessedTimeForNow;

@end
