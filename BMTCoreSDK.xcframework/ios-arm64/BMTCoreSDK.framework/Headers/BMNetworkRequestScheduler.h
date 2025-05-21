//
//  BMNetworkRequestScheduler.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 4/8/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BMNetworkRequestQueue.h"


@protocol BMSynchronizationDelegate <NSObject>

@required
- (void)synchronizationDidFinishSuccessfully;
- (void)synchronizationDidFinishWithError:(NSError *_Nullable)error;

@end


@interface BMNetworkRequestScheduler : NSObject

+ (BMNetworkRequestQueue *_Nonnull)overtureQueue;

+ (BMNetworkRequestQueue *_Nonnull)accountQueue;

+ (BMNetworkRequestQueue *_Nonnull)overtureConnectQueue;

+ (void)cancelAllOperationsWithName:(NSString *_Nonnull)name;

+ (void)cancelAllOperations;

+ (void)resetOvertureQueue;

/* App Info Update */
+ (void)updateAppInformation;


@end
