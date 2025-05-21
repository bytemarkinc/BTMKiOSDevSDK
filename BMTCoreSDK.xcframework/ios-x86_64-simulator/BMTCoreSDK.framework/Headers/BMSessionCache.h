//
//  BMSessionCache.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 2/3/15.
//  Copyright (c) 2015 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "BMUpdate.h"

/*!
 *  Foundation for providing session data in the BMPassSDK
 */

@interface BMSessionCache : NSObject

/*
 The last result set fetched from the Bytemark API if the BMPassSDK has internet connectivity or the local cache if connectivity is unavailable.
 */
@property (nonatomic, readonly) NSArray *data;

/*
 Indicators denoting if the data variable is in the process of being updated.
 */
@property (nonatomic, readonly, getter=isLoading) BOOL loading;


/*
 Forces refreshing of the values stored in the data variable
 */
- (void)reloadData;

- (void)reloadDataWithFares;

- (void)loadLocalData;

@end
