//
//  BMPSPrivateKeyDatabase.h
//  BMPassSDK
//
//  Created by Xiangdong Zhu on 9/8/17.
//  Copyright © 2017 Bytemark. All rights reserved.
//

#import "BMNoSQLDatabaseTable.h"
#import "BMPSPrivateKey.h"


@interface BMPSPrivateKeyDatabase : BMNoSQLDatabaseTable

+ (NSArray<BMPSPrivateKey *> *)readAllPrivateKeys;
+ (void)savePrivateKeys:(NSArray<BMPSPrivateKey *> *)keys;
+ (void)clearExistingKeys;

@end
