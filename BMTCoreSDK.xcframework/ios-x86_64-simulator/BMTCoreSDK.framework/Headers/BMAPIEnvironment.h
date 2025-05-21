//
//  APIEnvironment.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 4/2/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, OperatingEnvironment) {
    Uat         = 0,
    Production  = 1,
    Alpha       = 2,
    Beta        = 3,
    Staging     = 4
};


@interface BMAPIEnvironment : NSObject

@property (nonatomic, readonly) OperatingEnvironment APIEnvironment;

+ (BMAPIEnvironment *)sharedEnvironment;

/* Environments */
+ (NSArray *)environmentList;

/* Setters */
+ (void)setEnvironment:(OperatingEnvironment)operatingEnvironment;

/* Getters */
+ (OperatingEnvironment)environmentFromString:(NSString *)operatingEnvironmentString;
+ (NSString *)environmentKey;

/* Base URL */
+ (NSString *)baseURLString;
+ (NSURL *)baseURL;
+ (NSURL *)baseConnectURL;

/* Login URL */
+ (NSString *)baseLoginURLString;
+ (NSURL *)baseLoginURL;
+ (NSString *)loginRedirectURI;
+ (NSString *)clientID;
+ (NSString *)baseConnectURLString;

@end
