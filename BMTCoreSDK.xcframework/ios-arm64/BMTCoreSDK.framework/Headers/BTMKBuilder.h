//
//  BTMKBuilder.h
//  BMCoreSDK
//
//  Created by Ryan Cleeton on 2/2/17.
//  Copyright © 2017 co.bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BTMKBuilder <NSObject>

+ (id)buildObjectFromJson:(NSDictionary *)json;

@end
