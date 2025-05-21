//
//  BTMKMenuGroup.h
//  BMCoreSDK
//
//  Created by Xiangdong Zhu on 2/7/17.
//  Copyright © 2017 co.bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BTMKMenuItem;
@interface BTMKMenuGroup : NSObject

@property (nonatomic, strong, nullable) NSString *header;
@property (nonatomic, strong, nullable) NSArray<BTMKMenuItem *> *menuItems;
@property (nonatomic, strong, nullable) NSString *footer;

@property (nonatomic, assign) BOOL requireSignIn;

@end
