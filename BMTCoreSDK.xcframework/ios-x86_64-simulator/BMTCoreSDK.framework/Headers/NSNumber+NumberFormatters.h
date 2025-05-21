//
//  NSNumber+NumberFormatters.h
//  NY Waterway
//
//  Created by Kevin Rejko on 9/25/13.
//  Copyright (c) 2013 Bytemark Inc,. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSNumber (NumberFormatters)

- (NSString *)currencyValueWithCurrencyCode;

- (NSString *)currencyValueWithCurrencySymbol;
- (NSString *)currencyValueWithCurrencyCodeWithoutTrailing;
- (NSString *)currencyValueWithCurrencyCodeForFloatValue;


@end
