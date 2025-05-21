//
//  BMValidator.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 9/9/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import "BMValidator.h"

/* Defines */
#import "FrameworkDefines.h"


@interface BMRequestValidator : BMValidator

/* Valid Sign in & time */
+ (void)validateSDKUserIsSignedInWithValidTimeUsingErrorsBlock:(ErrorsBlock)errorsBlock
                                            executionBlock:(Block)executionBlock;

/* Valid SDK Initialization */
+ (void)validateSDKIsInitializedErrorsBlock:(ErrorsBlock)errorsBlock
                             executionBlock:(Block)executionBlock;

@end
