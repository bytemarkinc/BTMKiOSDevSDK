//
//  BTMKNotificationSettingsGroup.h
//  BMPassSDK
//
//  Created by Xiangdong Zhu on 5/14/18.
//  Copyright © 2018 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BTMKNotificationSetting+Private.h"
#import "BTMKNotificationSetting.h"

@class BTMKNotificationSetting;


@interface BTMKNotificationSettingsGroup : NSObject

@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSArray<BTMKNotificationSetting *> *notificationSettings;

@end
