/*
 *  Filename: "UIColoredIndicatorAccessoryControl.h"
 *
 *  Purpose: A customized indicator arrow
 *
 *  Created By: Michael B. Lodato (SR. Mobile Developer)
 *
 *  Created: 2/15/13
 *
 *  Modified: 2/15/13
 *
 *  Company: "Bytemark Inc,."
 */

#import <UIKit/UIKit.h>


@interface BMAccessoryIndicator : UIControl {}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UIColor *highlightedColor;


+ (BMAccessoryIndicator *)indicator;
+ (BMAccessoryIndicator *)indicatorWithColor:(UIColor *)color;
+ (BMAccessoryIndicator *)indicatorRightAlignedOnRect:(CGRect)rect;
+ (BMAccessoryIndicator *)indicatorWithColor:(UIColor *)color rightAlignedOnRect:(CGRect)rect;
- (void)alignRightInFrame:(CGRect)frame;

@end