//
//  BMAPIErrorHandler.h
//  NY Waterway
//
//  Created by Kevin Rejko on 10/21/13.
//  Copyright (c) 2013 Bytemark Inc,. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BMErrorDefines.h"
#import "BMTCore+Initialization.h"


@protocol BMErrorHandlerDelegate <NSObject>

@optional
- (void)receivedSignedOutError:(NSError *)error;
- (BOOL)displayNetworkError;
- (void)receivedNetworkError:(NSError *)error;
- (void)receivedUserCanceledError:(NSError *)error;
- (void)receivedUnhandeledError:(NSError *)error;
- (BOOL)displayUnhandeledError:(NSError *)error;

@end


@interface BMAPIErrorHandler : NSObject <BMGeneralErrorDelegate>

+ (void)handleErrors:(NSArray *)errors withDelegate:(id<BMErrorHandlerDelegate>)delegate;

- (void)handleErrors:(NSArray *)errors withDelegate:(id<BMErrorHandlerDelegate>)delegate;

/* Overridable */
- (void)userNotAuthenticatedError:(NSError *)error withDelegate:(id<BMErrorHandlerDelegate>)delegate;
- (void)lostInternetConnectionError:(NSError *)error withDelegate:(id<BMErrorHandlerDelegate>)delegate;
- (void)alertError:(NSError *)error;

@end
