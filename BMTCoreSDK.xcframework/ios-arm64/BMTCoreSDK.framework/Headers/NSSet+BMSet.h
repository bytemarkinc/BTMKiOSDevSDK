//
//  NSSet+BMSet.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 12/4/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSSet (BMSet)

- (NSSet *)UUIDs;
- (NSSet *)IDs;
- (NSSet *)objectsWithKey:(NSString *)key;
- (id)memberWithUUID:(NSString *)uuid;
- (id)memberWithID:(NSString *)identifier;
- (id)memberWithValue:(NSString *)value forKey:(NSString *)key;
- (NSSet *)intersectionWithSet:(NSSet *)set;
- (NSSet *)differenceFromSet:(NSSet *)set;

@end
