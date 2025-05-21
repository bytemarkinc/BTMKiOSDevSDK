//
//  NSBundle+BMWhiteLabelSDK.h
//  BMWhiteLabelSDK
//
//  Created by Kevin Rejko on 5/7/14.
//  Copyright (c) 2014 co.bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSBundle (BMWhiteLabelSDK)

+ (NSBundle *)whiteLabelSDKBundle;
+ (NSBundle *)bundleForResourceName:(NSString *)resourceName ofType:(NSString *)type;

+ (Class)targetSpecificSubclassForClass:(Class)class;

@end
