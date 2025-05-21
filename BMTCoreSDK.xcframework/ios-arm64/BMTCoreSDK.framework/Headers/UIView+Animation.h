//
//  UIView+Animation.h
//
//  Created by Kevin Rejko on 3/9/14.
//  Copyright (c) 2014 Bytemark Inc,. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIView (Animation)

- (void)animateLayoutChanges:(void(^)(void))layoutChanges;
- (void)animateLayoutChanges:(void(^)(void))layoutChanges
           nonLayoutChanges:(void(^)(void))nonLayoutChanges
                 completion:(void(^)(BOOL finished))completion;

@end
