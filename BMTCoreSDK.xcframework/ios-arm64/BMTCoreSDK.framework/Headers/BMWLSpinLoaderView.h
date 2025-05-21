//
//  BMWLSpinLoaderView.h
//  BMWhiteLabelSDK
//
//  Created by Shuyang Sun on 6/28/16.
//  Copyright © 2016 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <BMTCoreSDK/BMTCoreSDK.h>


@interface BMWLSpinLoaderView : UIView <BTMKThemeDelegate>

@property (nonatomic) BOOL isLoading;
@property (nonatomic) CGFloat rps; // Ram per Second

@end

