//
//  NSDate+DateHelpers.h
//  NY Waterway
//
//  Created by Kevin Rejko on 2/25/14.
//  Copyright (c) 2014 Bytemark Inc,. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSDate (DateHelpers)

- (BOOL)isAfterDate:(NSDate *)date;
- (BOOL)isToday;

- (NSDate *)nextDay;

- (NSString *)stringHoursAndMinBetweenDate:(NSDate *)date;
- (NSUInteger)daysToDate:(NSDate *)date;

- (NSString *)stringWithFormat:(NSString *)format;

@end
