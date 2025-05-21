//
//  BMNetworkRequest.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 6/28/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import "BMNetworkRequest.h"
#import <UIKit/UIKit.h>
#import "BMTCoreDefines.h"


@interface BMNetworkRequest : NSObject

@property (nonatomic) NSURL *URL;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) NSString *RESTfulMethod;//By default it's GET
@property (nonatomic) NSString *endpoint;
@property (nonatomic) NSDictionary *parameters;
@property (nonatomic) NSDictionary *headers;
@property (copy) JSONParserBlock successBlock;
@property (copy) NetworkErrorBlock errorBlock;
@property (nonatomic, getter = shouldHandleWeakConnectivity) BOOL handleWeakConnectivity;

/*!
 Initializes the Network request with default headers set to oAuth Token.
 */
- (instancetype)initWithEndpoint:(NSString *)endpoint
                         method:(NSString *)operation
                     parameters:(NSDictionary *)parameters
                JSONParserBlock:(JSONParserBlock)JSONParserBlock
                     errorBlock:(NetworkErrorBlock)errorBlock;

/*!
 Initializes the Network request with custom headers in param.
 */
- (instancetype)initWithEndpoint:(NSString *)endpoint
                          method:(NSString *)operation
                      parameters:(NSDictionary *)parameters
                         headers:(NSDictionary *)headers
                 JSONParserBlock:(JSONParserBlock)JSONParserBlock
                      errorBlock:(NetworkErrorBlock)errorBlock;

@end

#import "BMNetworkRequest+Parameters.h"
#import "BMNetworkRequest+Headers.h"
