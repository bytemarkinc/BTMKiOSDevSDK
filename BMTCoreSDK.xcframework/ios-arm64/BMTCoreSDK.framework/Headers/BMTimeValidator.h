//
//  BMFraudDetector.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 8/21/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import "BMValidator.h"


@interface BMTimeValidator : BMValidator

+ (BOOL)isValidWithDeviceTimeInAcceptableRangeOfServerTime:(NSDate *)date;
+ (BOOL)isValidCurrentTimeAgainstLastAccessedTime;
+ (BOOL)isValidWithDeviceTimeInAcceptableRangeOfServerTimeOnFaremediaLoad:(NSDate *)date;

@end
