//
//  UIView.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 5/6/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum
{
    eVIEW_TOP_CENTER            = 1,
    eVIEW_TOP_RIGHT_CORNER,
    eVIEW_RIGHT_CENTER,
    eVIEW_BOTTOM_RIGHT_CORNER,
    eVIEW_BOTTOM_CENTER,
    eVIEW_BOTTOM_LEFT_CORNER,
    eVIEW_LEFT_CENTER,
    eVIEW_TOP_LEFT_CORNER,
}ViewAlignment;


@interface UIView (UIViewExtension)

/* Inner Frame With Border */
+ (CGRect)frameWithBorderWidth:(CGFloat)borderWidth onParentView:(UIView *)view;
+ (CGRect)frameWithDefaultBorderWidthOnTopPercent:(CGFloat)percent ofParentView:(UIView *)view;
+ (CGRect)frameWithBorderWidth:(CGFloat)borderWidth onTopPercent:(CGFloat)percent ofParentView:(UIView *)view;
+ (CGRect)frameWithDefaultBorderWidthOnBottomPercent:(CGFloat)percent ofParentView:(UIView *)view;
+ (CGRect)frameWithBorderWidth:(CGFloat)borderWidth onBottomPercent:(CGFloat)percent ofParentView:(UIView *)view;
+ (CGRect)frameWithDefaultBorderWidthOnParentView:(UIView *)view;
+ (CGRect)frameWithDefaultBorderWidthOnLeftHalfOfParentView:(UIView *)view;
+ (CGRect)frameWithDefaultBorderWidthOnRightHalfOfParentView:(UIView *)view;

/* Relative Positioning */
 
- (void)setAlignment:(ViewAlignment)childAlignment toParentViews:(UIView *)parentView alignment:(ViewAlignment)parentPoint;
+ (CGRect)frameForViewOfSize:(CGSize)childSize withAlignment:(ViewAlignment)childPoint alignedWithParentViews:(UIView *)parentView withAlignment:(ViewAlignment)parentPoint;
+ (CGSize)size:(CGSize)parentSize mergedWithSize:(CGSize)childSize;
+ (CGRect)rectAnimationPercent:(float)percent betweenStartingFrame:(CGRect)staringFrame endingFrame:(CGRect)endingFrame;
+ (CGPoint)pointPercent:(float)percent betweenStartingPoint:(CGPoint)staringPoint endingPoint:(CGPoint)endingPoint;
+ (ViewAlignment)adjoiningWithViewAlignment:(ViewAlignment)viewPoint;

/* Frame Helpers */
- (CGFloat)frameTop;
- (CGFloat)frameLeft;
- (CGFloat)frameWidth;
- (CGFloat)frameRight;
- (CGFloat)frameHeight;
- (CGFloat)frameBottom;
- (CGFloat)frameMiddleWidth;
- (CGFloat)frameMiddleHeight;

/* Two Tone Generation */
+ (void)setToneViewWithAlpha:(float)alpha OnTopHalfOfView:(UIView *)view;
- (void)setToneViewOnTopHalfWithAlpha:(float)alpha;
- (void)setToneViewWithFrame:(CGRect)rect alpha:(float)alpha;
+ (CGRect)topHalfOfFrame:(CGRect)rect;
- (CGRect)topHalfOfThisFrame;
+ (CGRect)bottomHalfOfFrame:(CGRect)rect;
- (CGRect)bottomHalfOfThisFrame;
+ (CGFloat)halfHeightOfRect:(CGRect)rect;

+ (CGPoint)point:(CGPoint)parentPoint offsetByPoint:(CGPoint)childOffset;

/* Font Size Calculation */
- (CGFloat)fontSizeToFitWithLeftTitle:(NSString *)leftText rightTitle:(NSString *)rightText font:(UIFont *)font;

@end
