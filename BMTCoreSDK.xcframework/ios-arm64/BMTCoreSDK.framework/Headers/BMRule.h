//
//  BMRule.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 12/2/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

/* Protocols */
#import <BMTCoreSDK/BMJSONCoding.h>

@class BMPass, BMPassEvent;

typedef enum {
    eYEAR    = 1,
    eMONTH   = 2,
    eWEEK    = 3,
    eDAY     = 4,
    eHOUR    = 5,
    eMINUTE  = 6,
    eSECOND  = 7,
}TimeComponent;

#define kDAYS_OF_WEEK 7


@interface BMRule : NSObject <BMJSONCoding>

@property (nonatomic, readonly) NSNumber *afterUnit;
@property (nonatomic, readonly) NSNumber *afterValue;
@property (nonatomic, readonly) NSNumber *atDay;
@property (nonatomic, readonly) NSNumber *atHour;
@property (nonatomic, readonly) NSNumber *atMinute;
@property (nonatomic, readonly) NSNumber *atMonth;
@property (nonatomic, readonly) NSNumber *atSecond;
@property (nonatomic, readonly) NSString *atTimezone;
@property (nonatomic, readonly) NSNumber *atYear;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *uuid;

/* Rule Application */
- (NSDate *)dateFromApplyingRule;

/* Comparators */
- (BOOL)isSoonerThanRule:(BMRule *)rule;

- (BOOL)isValid;

@end
