//
//  BMWLSideBySideListView.h
//  BMWhiteLabelSDK
//
//  Created by Shuyang Sun on 7/27/16.
//  Copyright © 2016 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BTMKTheme.h"


@interface BMWLSideBySideListView : UIView <BTMKThemeDelegate>

@property (nonatomic) NSUInteger numberOfLabelViews;

- (instancetype)initWithFrame:(CGRect)frame numberOfLabelViews:(NSUInteger)numberOfLabelViews;

- (instancetype)initWithFrame:(CGRect)frame numberOfLabelViews:(NSUInteger)numberOfLabelViews edgeInset:(UIEdgeInsets)edgeInsets labelViewInset:(CGFloat)labelViewInset;

- (void)setSeparatorHidden: (BOOL)hidden;
- (UILabel *)leftLabelForSideBySideLabelViewAtIndex: (NSUInteger)index;
- (UILabel *)rightLabelForSideBySideLabelViewAtIndex: (NSUInteger)index;
- (void)makeLabelsAccessible;
- (void)setSeparatorHiddenForEachCell:(BOOL)hidden;

@end
