//
//  NSData+BM_Crypto.h
//  BMCoreSDK
//
//  Created by Xiangdong Zhu on 3/15/18.
//  Copyright © 2018 Bytemark Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSData (BM_Crypto)

- (NSData *)BM_ECSignWithKey:(NSString *)key;

@end
