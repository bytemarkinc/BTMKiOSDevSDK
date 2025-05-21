//
//  NSString+BooleanAdditions.h
//  NY Waterway
//
//  Created by Ryan Cleeton on 2/19/14.
//  Copyright (c) 2014 Bytemark Inc,. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSString (BooleanAdditions)

+ (BOOL)isEmptyString:(NSString *)string;
- (BOOL)isEmpty;
- (BOOL)hasValidCharacters;

@end
