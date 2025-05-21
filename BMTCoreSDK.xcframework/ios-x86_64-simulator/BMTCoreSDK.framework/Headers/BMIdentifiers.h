//
//  BMIdentifiers.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 4/3/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface BMIdentifiers : NSObject

+ (NSString *)applicationInstallationIdentifier;
+ (NSString *)deviceAppInstallationUUID;
+ (NSString *)operatingSystemIdentifier;
+ (NSString *)vendorUUID;
+ (NSString *)deviceNickname;
+ (NSString *)deviceModel;
+ (NSString *)deviceOS;
+ (NSString *)deviceOSVersion;
+ (NSString *)appVersion;
+ (NSString *)operatingEnvironment;
+ (NSString *)facebookAppID;
+ (NSString *)deviceToken;

@end
