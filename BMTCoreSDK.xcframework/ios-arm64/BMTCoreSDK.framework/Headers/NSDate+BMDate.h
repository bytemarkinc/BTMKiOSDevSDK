//
//  NSDate.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 4/5/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSDate (NSDateExtension)

/* Static Functions */
+ (NSDate *)dateFromParsingValue:(id)date;
+ (NSDate *)dateFromAPIString:(NSString *)dateString;

/* Instance Functions */
- (NSString *)APIFormattedDateTimeString;
- (NSString *)APIFormattedDateTimeStringWithRefreshRate:(NSInteger *)refreshRate;
- (BOOL)hasPast;
- (BOOL)isBeforeDate:(NSDate *)compareDate;
- (BOOL)isAfterDate:(NSDate *)compareDate;
- (void)printDifferenceFromNow;
- (NSString *)timeDifferenceStringSinceNow;
- (NSString *)timeDifferenceStringSince:(NSDate *)date;

@end
