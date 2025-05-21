//
//  BMNetworkRequest+Headers.h
//  BMPassSDK
//
//  Created by Akshit Bum on 11/03/19.
//  Copyright © 2019 Bytemark. All rights reserved.
//

#import "BMNetworkRequest.h"
#import <UIKit/UIKit.h>

@interface BMNetworkRequest (Headers)

/* Oauth */
+ (NSDictionary *)OAuthTokenAppendedHeaders:(NSDictionary *)headers;
+ (NSDictionary *)oAuthTokenHeader;
+ (NSDictionary *)oAuthTokenHeaderFromOauth:(NSString *)oauth;
+ (NSDictionary *)oAuthTokenWithJWTToken:(NSString *)jwt;
+ (NSMutableDictionary *)oAuthWithHeaderContents;

/* Client ID */
+ (NSDictionary *)clientIDAppendedHeaders:(NSDictionary *)headers;
+ (NSDictionary *)clientIDHeader;

/* Oauth and Client ID */
+ (NSDictionary *)oAuthTokeAndClientIdHeaders;

/* Oauth or Client ID */
+ (NSDictionary *)OAuthOrClientIDHeaders;

@end
