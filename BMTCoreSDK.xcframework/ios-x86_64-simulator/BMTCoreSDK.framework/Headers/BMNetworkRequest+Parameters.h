//
//  BMNetworkRequest+Parameters.h
//  BMPassSDK
//
//  Created by Bytemark on 5/28/15.
//  Copyright (c) 2015 Bytemark. All rights reserved.
//

#import "BMNetworkRequest.h"


@interface BMNetworkRequest (Parameters)

/* --- Parameters --- */
/* Oauth or Client ID */
+ (NSDictionary *)OAuthOrClientIDAppendedParameters:(NSDictionary *)parameters;
+ (NSDictionary *)OAuthOrClientIDParameter;

/* Oauth */
+ (NSDictionary *)OAuthTokenAppendedParameters:(NSDictionary *)parameters;
+ (NSDictionary *)oauthTokenParameter;

/* Client ID */
+ (NSDictionary *)clientIDAppendedParameters:(NSDictionary *)parameters;
+ (NSDictionary *)clientIDParameter;

/* Geographic Coordinate */
+ (NSDictionary *)geographicCoordinateAppendedParameters:(NSDictionary *)parameters;
+ (NSDictionary *)geographicCoordinateParameters;

/* RemoteNotification */
+ (NSDictionary *)deviceTokenParameter;
 

@end
