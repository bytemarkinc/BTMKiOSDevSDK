//
//  BMTheme+Private.h
//  Feature
//
//  Created by Xiangdong Zhu on 6/10/16.
//  Copyright © 2016 Bytemark, Inc. All rights reserved.
//

#import "BTMKTheme.h"


@interface BTMKTheme ()

@property (nonatomic, readwrite) UIColor *backgroundColor;
@property (nonatomic, readwrite) UIColor *primaryColor;
@property (nonatomic, readwrite) UIColor *accentColor;
@property (nonatomic, readwrite) UIColor *secondaryColor;


- (instancetype)initWithJSON:(NSDictionary *)json;

@end
