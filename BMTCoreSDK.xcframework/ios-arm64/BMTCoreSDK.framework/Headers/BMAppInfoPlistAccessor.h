//
//  BMAppInfoPlist.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 7/21/14.
//  Copyright (c) 2014 Bytemark. All rights reserved.
//

#import "BMPlistProcessor.h"


@interface BMAppInfoPlistAccessor : NSObject

/* App Info Plist Accessing & Mutating */
+ (NSString *)appInfoValueForKey:(NSString *)key;
+ (void)setAppInfoValue:(NSString *)value forKey:(NSString *)key;

/* App Version Accessing & Mutating */
+ (NSString *)cachedAppVersion;
+ (void)updateCachedAppVersion;

/* OS Version Accessing & Mutating */
+ (NSString *)cachedOSVersionNumber;
+ (void)updateCachedOSVersionNumber;

/* Nickname Version Accessing & Mutating */
+ (NSString *)cachedDeviceNickname;
+ (void)updateCachedDeviceNickname;

/* DAIU Accessing & Mutating */
+ (NSString *)cachedDAIU;
+ (void)setDAIU:(NSString *)DAIU;

/* RemoteNotification */
+ (NSString *)cachedDeviceToken;
+ (void)updateCachedDeviceToken;


@end
