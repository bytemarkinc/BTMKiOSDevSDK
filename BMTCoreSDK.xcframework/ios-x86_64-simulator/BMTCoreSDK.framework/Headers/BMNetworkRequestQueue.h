//
//  BMNetworkManager.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 4/6/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//



@class BMNetworkRequest;


@interface BMNetworkRequestQueue : NSObject

/* Initializers */
- (instancetype)initWithBaseURL:(NSURL *)url;

/* Network Executor */
- (void)enqueueRequest:(BMNetworkRequest *)request;

- (void)cancelRequestWithName:(NSString *)name;

- (void)cancelAllRequests;

@property (nonatomic, strong) NSURL *baseURL;
@property (nonatomic, strong) NSMutableArray<NSURLSessionTask *> *dataTasks;

@end
