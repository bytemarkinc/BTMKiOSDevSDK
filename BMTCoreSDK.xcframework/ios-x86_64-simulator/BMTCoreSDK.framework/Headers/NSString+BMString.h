//
//  NSString.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 4/5/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BMTCoreDefines.h"


@interface NSString (NSStringExtension)

- (NSString *)replacePattern:(NSString *)pattern replacementValue:(NSString *)value error:(NSError**)error;
- (BOOL)containsSubstring:(NSString *)subString;
- (BOOL)isNullString;
- (BOOL)isNonEmptyString;
- (BOOL)isEmptyString;
- (UIColor *)colorFromHex;
- (NSNumber *)numberValue;

+ (NSString *)stringFromSaveLocation:(SaveLocation)saveLocation;

@end
