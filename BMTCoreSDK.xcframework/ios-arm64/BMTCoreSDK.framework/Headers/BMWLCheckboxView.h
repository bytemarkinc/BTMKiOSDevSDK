//
//  BMWLCheckboxView.h
//  BMWhiteLabelSDK
//
//  Created by Xiangdong Zhu on 10/26/17.
//  Copyright © 2017 co.bytemark. All rights reserved.
//

#import <BMTCoreSDK/BMTCoreSDK.h>

@class BMWLCheckboxView;


@protocol BMWLCheckboxViewDelegate <NSObject>

- (void)checkboxStatusChanged:(BMWLCheckboxView *)checkbox checked:(BOOL)checked;

@end


@interface BMWLCheckboxView : UIButton

@property (nonatomic, weak) id<BMWLCheckboxViewDelegate> checkboxDelegate;
@property (nonatomic) BOOL checked;

@end
