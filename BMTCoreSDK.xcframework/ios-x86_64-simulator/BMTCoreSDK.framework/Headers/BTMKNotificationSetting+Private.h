//
//  BTMKNotificationSetting+Private.h
//  BMPassSDK
//
//  Created by Xiangdong Zhu on 5/11/18.
//  Copyright © 2018 Bytemark. All rights reserved.
//

#ifndef BTMKNotificationSetting_Private_h
#define BTMKNotificationSetting_Private_h

#import "BTMKNotificationSetting.h"

/* Protocols */
#import "BMJSONCoding.h"


@interface BTMKNotificationSetting () <BMJSONCoding>

@property (nonatomic, copy) NSString *uuid;
@property (nonatomic, copy) NSString *name;

- (instancetype)initWithJSON:(JSON *)json;

@end

#endif /* BTMKNotificationSetting_Private_h */
