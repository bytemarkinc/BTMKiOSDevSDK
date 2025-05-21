//
//  NSString+Introspection.h
//  NY Waterway
//
//  Created by Kevin Rejko on 10/5/13.
//  Copyright (c) 2013 Bytemark Inc,. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIFont+Style.h"


@interface NSString (Introspection)

- (CGFloat)widthForThemedFontSize:(CGFloat)fontSize;
- (CGFloat)widthForThemedBoldFontSize:(CGFloat)fontSize;
- (CGSize)sizeForThemedFontWithFont:(UIFont *)font;
- (BOOL)containsSubString:(NSString *)subString;

@end
