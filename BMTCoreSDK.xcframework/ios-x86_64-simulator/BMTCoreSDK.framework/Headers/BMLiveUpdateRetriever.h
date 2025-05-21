//
//  BMUpdatingRetriever.h
//  BMWhiteLabelSDK
//
//  Created by Kevin Rejko on 2/6/15.
//  Copyright (c) 2015 co.bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BMSessionCache;


/*!
 *  Abstract adapter class to faciliate the reususe of data that auto-updates from the PassSDK
 */
@interface BMLiveUpdateRetriever : NSObject

@property (nonatomic, weak) id delegate;

- (BOOL)isLoading;
- (NSArray *)data;
- (void)reload;
- (void)reloadLocalDb;

/* Abstract Methods */
- (NSString *)updateNotificationName;
- (BMSessionCache *)cache;
- (NSString *)loadingProperty;

- (void)callbackLocalData:(NSArray *)data errors:(NSArray *)errors;
- (void)callbackRemoteData:(NSArray *)data errors:(NSArray *)errors;
- (void)callbackChangedLoading:(BOOL)isLoading;

@end
