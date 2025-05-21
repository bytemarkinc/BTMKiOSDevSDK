//
//  BMAppVersionUpdater.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 7/21/14.
//  Copyright (c) 2014 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface BMAppInfoUpdater : NSObject

+ (void)updateAppVersionIfNecessary;
+ (void)updateCachedValues;

@end
