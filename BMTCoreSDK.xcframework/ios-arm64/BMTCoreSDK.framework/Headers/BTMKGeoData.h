//
//  BTMKGeoData.h
//  BMCoreSDK
//
//  Created by Xiangdong Zhu on 2018/2/9.
//  Copyright © 2018 Bytemark Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface BTMKGeoData : NSObject

+ (NSArray<NSDictionary<NSString *,NSString *> *> *)allCountriesAndRegions;
+ (NSArray<NSString *> *)allUSTerritories;

@end
