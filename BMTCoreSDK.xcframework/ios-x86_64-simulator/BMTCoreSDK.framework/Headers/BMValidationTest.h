//
//  BMValidationTest.h
//  BMPassSDK
//
//  Created by Bytemark on 5/25/15.
//  Copyright (c) 2015 Bytemark. All rights reserved.
//

#import <BMTCoreSDK/BMTCoreSDK.h>


typedef BOOL (^ValidationTest)(id object);

@protocol BMValidationTestProtocol <NSObject>

- (ValidationTest)validation;
- (NSError *)error;
- (BOOL)isContinuableAfterFailure;

@optional
- (StatusCompletion)postValidationAction;

@end


@interface BMValidationTest : NSObject <BMValidationTestProtocol>

@property (nonatomic, copy) ValidationTest validation;
@property (nonatomic, copy) StatusCompletion postValidationAction;
@property (nonatomic, getter=isContinuableAfterFailure) BOOL continuableAfterFailure;
@property (nonatomic) ErrorType errorType;

@end
