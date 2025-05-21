//
//  UIButton+BMButton.h
//  BMWhiteLabelSDK
//
//  Created by Shuyang Sun on 6/13/17.
//  Copyright © 2017 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (BMButton)

- (void)addUniqueTarget:(id)target action:(SEL)action forControlEvents:(UIControlEvents)controlEvents;

@end
