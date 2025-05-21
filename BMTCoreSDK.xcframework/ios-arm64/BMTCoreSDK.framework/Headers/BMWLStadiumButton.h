//
//  BMWLStadiumButton.h
//  BMWhiteLabelSDK
//
//  Created by Shuyang Sun on 6/21/16.
//  Copyright © 2016 co.bytemark. All rights reserved.
//

#import "BMWLRoundedRectButton.h"
#import "BTMKTheme.h"

extern const CGFloat kDefaultStadiumButtonHeight;

typedef enum : NSUInteger {
    BMWLStadiumButtonColorModeFill = 0,
    BMWLStadiumButtonColorModeOutline,
    BMWLStadiumButtonColorModeBold
} BMWLStadiumButtonColorMode;

@interface BMWLStadiumButton : BMWLRoundedRectButton <BTMKThemeDelegate>

@property (nonatomic) BMWLStadiumButtonColorMode colorMode;

- (void)setPrimaryColor:(UIColor *)primaryColor secondaryColor:(UIColor *)secondaryColor;

@end
