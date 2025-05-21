//
//  UIImage+Transforms.h
//  BMWhiteLabelSDK
//
//  Created by Kevin Rejko on 1/24/15.
//  Copyright (c) 2015 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIImage (Transforms)

- (UIImage *)rotateToOrentation:(UIImageOrientation)orientation;
- (UIImage *)rotateUIImageAntiClockWise:(UIImage *)sourceImage;

- (UIImage *)resizeToSizeInScreenPoints:(CGSize)newSize;
- (UIImage *)resizeToSizeInPixels:(CGSize)newSize;

@end
