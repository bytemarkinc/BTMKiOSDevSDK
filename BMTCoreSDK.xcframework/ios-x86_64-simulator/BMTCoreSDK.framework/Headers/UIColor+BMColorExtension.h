//
//  UIColor+BMColorExtension.h
//  BMCoreSDK
//
//  Created by Xiangdong Zhu on 3/20/17.
//  Copyright © 2017 Bytemark Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#define UIColorFromRGB(rgbValue) [UIColor \
colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]


@interface UIColor (BMColorExtension)

+ (UIColor *)colorFromString:(NSString *)colorString;
+ (UIColor *)colorFromHexString:(NSString *)hexValue;
+ (UIColor *)colorFromHexidecimalString:(NSString *)hexValue;

- (NSString *)hexValue;

+ (CGFloat)contrastBetweenColor:(UIColor *)color1 andColor:(UIColor *)color2;
+ (UIColor *)highestContrastColorBetween:(UIColor *)srcColor selectingColors:(NSArray<UIColor *> *)colors;
+ (UIStatusBarStyle)statusBarStyleWithTheHighestContrastForColor:(UIColor *)color;
+ (UIStatusBarStyle)statusBarStyleWithTheLowestContrastForColor:(UIColor *)color;

@end
