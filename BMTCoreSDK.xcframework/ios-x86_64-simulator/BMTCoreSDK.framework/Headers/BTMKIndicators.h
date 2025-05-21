//
//  BTMKIndicators.h
//  BMCoreSDK
//
//  Created by Tae Hong Min on 5/6/21.
//  Copyright © 2021 Bytemark Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class BTMKOrganization;


@protocol BTMKBTMKIndicatorsDelegate <NSObject>

- (void)applyThemeFromOrganization:(BTMKOrganization *)organization;

@end


@interface BTMKIndicators : NSObject

@property (nonatomic, readonly) UIColor *success;
@property (nonatomic, readonly) UIColor *error;

+ (instancetype)indicatorWithJSON:(NSDictionary *)json;
- (instancetype)initWithJSON:(NSDictionary *)json;

@end
