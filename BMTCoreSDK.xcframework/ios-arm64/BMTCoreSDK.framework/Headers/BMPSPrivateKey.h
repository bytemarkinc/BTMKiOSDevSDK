//
//  BMPSPrivateKey.h
//  BMPassSDK
//
//  Created by Xiangdong Zhu on 9/8/17.
//  Copyright © 2017 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface BMPSPrivateKey : NSObject

@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSDate *validFrom;
@property (nonatomic, readonly) NSDate *validTo;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *iv;
@property (nonatomic, readonly) NSString *version;

- (NSString *)decryptedKey;

@end
