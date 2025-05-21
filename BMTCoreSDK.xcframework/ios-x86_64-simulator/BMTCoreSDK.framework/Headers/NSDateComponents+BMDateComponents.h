//
//  NSDateComponents+BMDateComponents.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 9/17/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface  NSDateComponents (NSDateComponents_BMDateComponents)

+ (NSDateComponents *)componentsForDate:(NSDate *)date inTimezone:(NSString *)timezone;

+ (NSDateComponents *)componentsInTimezone:(NSString *)timezone;

- (NSInteger)valueForComponent:(NSUInteger)component;

- (NSNumber *)dayOfWeekValue;
- (NSNumber *)yearValue;
- (NSNumber *)monthValue;
- (NSNumber *)dayValue;
- (NSNumber *)hourValue;
- (NSNumber *)minuteValue;
- (NSNumber *)secondValue;

@end
