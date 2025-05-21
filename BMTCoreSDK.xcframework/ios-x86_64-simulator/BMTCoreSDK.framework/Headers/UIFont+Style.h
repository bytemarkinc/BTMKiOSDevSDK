//
//  UIFont+Style.h
//  BMCoreSDK
//
//  Created by Shuyang Sun on 7/28/17.
//  Copyright © 2017 Bytemark Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kDEFAULT_ARIAL_FONT @"Arial"
#define kDEFAULT_ARIAL_BOLD_FONT @"Arial-BoldMT"

@interface UIFont (Style)

+ (UIFont * _Nonnull)preferredFontWithSize:(CGFloat)fontSize;
+ (UIFont * _Nonnull)preferredBoldFontWithSize:(CGFloat)fontSize;
+ (UIFont * _Nonnull)preferredBoldFont;
+ (UIFont * _Nonnull)preferredBodyFontStyleWithWeight:(UIFontWeight)fontWeight;
+ (UIFont * _Nonnull)preferredFootnoteWithWeight:(UIFontWeight)fontWeight;
+ (UIFont * _Nonnull)preferredCaption1WithWeight:(UIFontWeight)fontWeight;
+ (UIFont * _Nonnull)preferredFontWithTextStyle:(UIFontTextStyle _Nonnull )style maxSize:(CGFloat)maxSize;

@end
