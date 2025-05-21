//
//  BTMKMenuItemBuilder.h
//  BMCoreSDK
//
//  Created by Ryan Cleeton on 2/2/17.
//  Copyright © 2017 co.bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BTMKBuilder.h"

@class BTMKMenuItem;

@interface BTMKMenuItemBuilder : NSObject <BTMKBuilder>

+ (NSArray<BTMKMenuItem *> *)menuItemsFromJSON:(NSDictionary *)json;

+ (BTMKMenuItem *)menuItemFromJSON:(NSDictionary *)json;

@end
