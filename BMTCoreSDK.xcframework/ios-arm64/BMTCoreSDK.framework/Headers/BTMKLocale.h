//
//  BTMKLocale.h
//  BMCoreSDK
//
//  Created by Xiangdong Zhu on 8/30/16.
//  Copyright © 2016 co.bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface BTMKLocale : NSObject

+ (instancetype)localeWithJSON:(NSDictionary *)json;

- (instancetype)initWithJSON:(NSDictionary *)json;

- (BOOL)isDefault;
- (NSString *)dateDisplayFormat;
- (NSString *)timeDisplayFormat;
- (NSString *)dateTimeFormat;
- (NSString *)displayName;
- (NSString *)languageCode;
- (NSString *)countryCode;
- (NSString *)lowercaseISO639Code;
- (NSString *)localeString;

@end
