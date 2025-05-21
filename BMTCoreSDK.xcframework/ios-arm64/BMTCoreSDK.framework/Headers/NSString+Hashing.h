//
//  NSString+Hashing.h
//  BMCoreSDK
//
//  Created by Xiangdong Zhu on 5/1/18.
//  Copyright © 2018 Bytemark Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSString (Hashing)

- (NSString *)BM_SHA1;

- (NSString *)BM_MD5;

@end
