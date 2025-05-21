//
//  BTMKMenuGroupBuilder.h
//  BMCoreSDK
//
//  Created by Xiangdong Zhu on 2/7/17.
//  Copyright © 2017 co.bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BTMKBuilder.h"
#import "BTMKMenuGroup.h"

FOUNDATION_EXPORT NSString * const kKeyMenuGroups;
FOUNDATION_EXPORT NSString * const kKeySignInGroups;
FOUNDATION_EXPORT NSString * const kKeySignOutGroups;


@interface BTMKMenuGroupBuilder : NSObject <BTMKBuilder>

+ (NSArray<BTMKMenuGroup *> *)menuGroupsFromJSON:(NSDictionary *)json;

+ (BTMKMenuGroup *)menuGroupFromJSON:(NSDictionary *)json;

@end
