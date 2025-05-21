//
//  UIImage+CustomColorAndCornerRadius.h
//  BMCoreSDK
//
//  Created by Paridhi Malviya on 10/01/2019.
//  Copyright © 2019 Bytemark Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (CustomColorAndCornerRadius)

- (UIImage *)convertImageToGrayScale;
- (UIImage*)makeRoundCornersWithRadius:(const CGFloat)radius;

@end

