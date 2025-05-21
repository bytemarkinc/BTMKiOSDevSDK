//
//  BMErrors.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 7/23/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


/*!
 BMErrors is a wrapper for an NSError array. The allErrors property represents an array of errors.
 */
@interface BMErrors : NSObject

/*!
 @return An array that contains all errors that occurred during the operation.
 */
- (NSArray *)allErrors;

/*!
 @return A subset of the allErrors array that has been filtered to only return errors from the API response.
 */
- (NSArray *)APIErrors;

/*!
 @return A subset of the allErrors array that has been filtered to only return errors generated locally by the BMPassSDK.
 */
- (NSArray *)SDKErrors;


/*
 @name Introspection
 */

/*!
 @return A boolean value that determines if allErrors array contains the specified NSError object.
 */
- (BOOL)containsError:(NSError *)error;

/*!
 @return A boolean value that determines if allErrors array contains a NSError object with the specified error code.
 */
- (BOOL)containsErrorWithCode:(NSInteger)errorCode;
- (BOOL)containsInternetConnectionError;
- (BOOL)hasErrors;

@end
