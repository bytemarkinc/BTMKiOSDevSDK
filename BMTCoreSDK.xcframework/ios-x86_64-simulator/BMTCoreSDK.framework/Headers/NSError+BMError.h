//
//  BMError.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 4/11/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum{
    eSDK_NOT_INITIALIZED,
    eAPI_ERROR,
    eUNEXPECTED_ERROR,
    eUNABLE_TO_DISPLAY,
    eNO_PASS_SPECIFIED,
    eUSER_CANCELED,
    eNOT_AUTHENTICATED,
    eNETWORK_NOT_AVAILABLE,
    eORDER_NOT_VALID,
    ePARAMETERS_INVALID,
    eEVENT_EXPIRED,
    ePASS_NOT_FOUND,
    ePASS_EXPIRED,
    ePASS_USES_GONE,
    ePASS_UNAVAILABLE,
    ePASS_NOT_STACKABLE,
    eINVALID_API_RESPONSE,
    eSDK_FEATURE_NOT_AVAILABLE,
    eNO_EVENT_SPECIFIED,
    eINVALID_TIME,
    eMISSING_PASS_ENABLER,
    ePASS_ACTIVATION_RESTRICTED,
    eSERVER_APPLICATION_ERROR,
    eDUPLICATE_PASSES,
    eCACHE_EXPIRED,
    eUNRESOLVED_DEPENDENCY,
    ePASS_MISSING_USER_PHOTO,
    eINVALID_INPUT,
    ePAYMENT_CANCELLED,
    ePAYMENT_REFUSED,
    ePAYMENT_PENDING
}ErrorType;


@interface NSError (BMErrorCategory)

/* Static */

/*!
 Initializes and returns an NSError object with given params
 @param errorType
 Used to set error code based on provided type
 @return NSError
 */
+ (NSError *)errorOfType:(ErrorType)errorType;

/*!
 Initializes and returns an NSError object with given params
 @param errorType
 Used to set error code based on provided error type
 @param classType
 Used to set error's domain
 @return NSError
 */
+ (NSError *)errorOfType:(ErrorType)errorType inClass:(Class)classType;

/*!
 Initializes and returns an NSError object with given params
 @param errorType
 Used to set error code based on provided error type
 @param classType
 Used to set error's domain
 @param message
 Used to set error message
 @return NSError
 */
+ (NSError *)errorOfType:(ErrorType)errorType inClass:(Class)classType message:(NSString *)message;

+ (NSError *)errorOfType:(ErrorType)errorType inClass:(Class)classType localizedMessage:(NSString *)message;

/*!
 @desription A boolean value that determines if self is of provided error type.
 */
- (BOOL)isTypeOfError:(ErrorType)_eErrorType;

/*!
 @desription A boolean value that determines if self is an error from API.
 */
- (BOOL)isAPIError;

@end
