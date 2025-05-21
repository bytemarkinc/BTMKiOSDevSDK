//
//  BMAPIErrors.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 5/17/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BMTCoreDefines.h"
#import "BMErrors.h"


@interface BMAPIErrors : NSObject

/*!
 Returns a corresponding generic error for provided specific error
 @discussion If error passed is "lost device" the SDK forces logOut. if passed error doesn't have a corresponding generic error the object returned w/o modifications.
 */
+ (NSError *)cleanErrorFromError:(NSError *)error;
+ (BMErrors *)cleanErrorsFromError:(NSError *)error;
+ (NSArray *)errorDictionariesInJSON:(JSON *)JSON;
+ (BOOL)errorsExistInJSON:(JSON *)JSON;
+ (NSArray *)errorsFromJSON:(JSON *)JSON;
+ (void)callbackErrorsInJSON:(JSON *)JSON toErrorBlock:(NetworkErrorBlock)errorBlock;

@end


@interface NSDictionary  (ErrorDictionary)

+ (NSError *)errorFromDictionary:(NSDictionary *)errorDictionary;
- (BOOL)isOfType:(int)_nErrorCode;

@end;
