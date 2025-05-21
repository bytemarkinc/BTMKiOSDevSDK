//
//  BTMKTheme.h
//  Feature
//
//  Created by Xiangdong Zhu on 6/10/16.
//  Copyright © 2016 Bytemark, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class BTMKOrganization;


@protocol BTMKThemeDelegate <NSObject>

- (void)applyThemeFromOrganization:(BTMKOrganization *)organization;

@end


@interface BTMKTheme : NSObject

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *primaryColor;
@property (nonatomic, readonly) UIColor *accentColor;
@property (nonatomic, readonly) UIColor *secondaryColor;

+ (instancetype)themeWithJSON:(NSDictionary *)json;

@end
