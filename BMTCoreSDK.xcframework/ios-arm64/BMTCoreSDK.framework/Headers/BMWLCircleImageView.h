//
//  BMWLCircleImageView.h
//  BMWhiteLabelSDK
//
//  Created by Shuyang Sun on 6/20/16.
//  Copyright © 2016 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BMTCoreSDK/BMTCoreSDK.h>


@interface BMWLCircleImageView : UIView <BTMKThemeDelegate>

@property (nonatomic) BOOL isLoading;

- (void)setImage: (UIImage *)image;

@end
