//
//  BMInitializer.h
//  BMWhiteLabelSDK
//
//  Created by Ryan Cleeton on 5/22/15.
//  Copyright (c) 2015 co.bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BMInitializer <NSObject>

@required
- (void)configureWithDictionary:(NSDictionary *)dictionary;

@end
