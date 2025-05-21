//
//  BMDatabaseSalts.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 8/6/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface BMDatabaseSalts : NSObject

+ (NSString *)salt_v1:(NSString *)unsaltedString;
+ (NSString *)salt_v2:(NSString *)unsaltedString;
+ (NSString *)salt_v3:(NSString *)unsaltedString;
+ (NSString *)salt_v4:(NSString *)unsaltedString;

@end
