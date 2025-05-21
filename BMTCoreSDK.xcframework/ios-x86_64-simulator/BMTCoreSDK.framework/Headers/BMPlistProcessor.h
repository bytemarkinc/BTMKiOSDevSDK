//
//  BMPlistEditor.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 7/21/14.
//  Copyright (c) 2014 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface BMPlistProcessor : NSObject

+ (void)writeData:(NSDictionary *)data plist:(NSString *)plistName;
+ (id)valueForKeyPath:(NSString *)keyPath plist:(NSString *)plistName;
+ (BOOL)deletePlist:(NSString *)plistName;

- (instancetype)initWithPlist:(NSString *)plistName;
- (void)addData:(NSDictionary *)data;

@end
