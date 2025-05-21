//
//  NSString+Crypto.h
//  BMCoreSDK
//
//  Created by Xiangdong Zhu on 9/12/17.
//  Copyright © 2017 Bytemark Inc. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSString (Crypto)

- (NSString *)AESDecryptWithKey:(NSString *)key salt:(NSString *)saltBase64 iv:(NSString *)ivBase64;

- (NSString *)ECSignWithKey:(NSString *)key;

@end
