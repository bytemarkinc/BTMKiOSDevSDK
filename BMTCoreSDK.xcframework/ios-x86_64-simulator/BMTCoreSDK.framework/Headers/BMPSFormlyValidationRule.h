//
//  BMPSFormlyValidationRule.h
//  BMPassSDK
//
//  Created by Xiangdong Zhu on 6/22/17.
//  Copyright © 2017 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface BMPSFormlyValidationRule : NSObject

@property (nonatomic, assign) BOOL enabled;

@property (nonatomic, assign) BOOL inputRequired;
@property (nonatomic, copy) NSString *regex;
@property (nonatomic, strong) NSNumber *minLen;
@property (nonatomic, strong) NSNumber *maxLen;

- (BOOL)inputMatchesRegex:(NSString *)input;

@end
