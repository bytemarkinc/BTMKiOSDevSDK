//
//  UIView+InterfaceHelpers.h
//  NY Waterway
//
//  Created by Kevin Rejko on 10/5/13.
//  Copyright (c) 2013 Bytemark Inc,. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIView (InterfaceHelpers)

/* Shadows */
- (void)setLeftShadow;
- (void)setRightShadow;
- (void)setBottomShadow;
- (void)setBottomLightShadow;
- (void)setShadowWithOffset:(CGSize)offset;

/* Corner Radius */
- (void)setRoundedCorners;
- (void)setRoundedCornersWithRadius:(CGFloat)radius;
- (void)setRoundedTopCorners;
- (void)setRoundedTopCornersWithRadius:(CGFloat)radius;
- (void)setRoundedCorners:(UIRectCorner)corners withRadius:(CGFloat)radius;
- (void)setRoundedCornersForGroupedCellSubViewAtIndexPath:(NSIndexPath *)indexPath numberOfRows:(NSUInteger)numberOfRows;

/* Border */
- (void)setBorderWithWidth:(CGFloat)width color:(UIColor *)color;

/* Hit Test */
- (UIView *)defaultHitTest:(CGPoint)point withEvent:(UIEvent *)event;
- (UIView *)overlapHitTest:(CGPoint)point event:(UIEvent *)event;

/* First responder */
- (UIView *)findFirstResponder;

/* Parent View Controller */
- (UIViewController *)parentViewController;

@end
