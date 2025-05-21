//
//  BMWLLoadingView.h
//  BMWhiteLabelSDK
//
//  Created by Paridhi Malviya on 31/07/18.
//  Copyright © 2018 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BMWLLoadingView : UIView

- (void)fadeInWithDuration:(NSTimeInterval) duration completion:(void (^)(BOOL finished)) completion;

- (void)fadeOutWithDuration:(NSTimeInterval) duration completion:(void (^)(BOOL finished)) completion;

- (void)setLoading:(BOOL)loading
             image:(UIImage * _Nullable)image;

@end
