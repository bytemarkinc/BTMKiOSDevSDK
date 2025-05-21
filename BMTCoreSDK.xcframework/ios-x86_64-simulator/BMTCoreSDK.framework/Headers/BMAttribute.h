//
//  BMAttribute.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 12/13/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

/* Protocols */
#import <BMTCoreSDK/BMTCoreSDK.h>


@interface BMAttribute : NSObject <BMJSONCoding>

@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSString *value;

@end
