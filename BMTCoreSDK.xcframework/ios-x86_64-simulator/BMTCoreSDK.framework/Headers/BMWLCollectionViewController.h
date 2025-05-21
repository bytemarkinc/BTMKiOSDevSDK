//
//  BMWLCollectionViewController.h
//  BMWhiteLabelSDK
//
//  Created by Shuyang Sun on 10/18/17.
//  Copyright © 2017 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol BMWLPullToRefreshDelegate

- (void)didUserPullToRefresh;

@end

@interface BMWLCollectionViewController : UICollectionViewController

@property (nonatomic, readonly) Class _Nullable cellClass;
@property (nonatomic, readonly) NSString *_Nullable cellReuseIdentifier;
@property (nonatomic) _Nullable id<BMWLPullToRefreshDelegate> pullToRefreshDelegate;

- (instancetype _Nullable)initWithCollectionViewLayout:(UICollectionViewLayout *_Nullable)layout
                                             cellClass:(Class _Nullable)cellClass
                                       reuseIdentifier:(NSString *_Nonnull)reuseIdentifier;

@end
