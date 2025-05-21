//
//  BTMKNotificationSetting.h
//  BMPassSDK
//
//  Created by Xiangdong Zhu on 5/11/18.
//  Copyright © 2018 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface BTMKNotificationSetting : NSObject

@property (nonatomic, readonly) NSString *name;
@property (nonatomic) BOOL allowSystem;
@property (nonatomic) BOOL allowEmail;

@end
