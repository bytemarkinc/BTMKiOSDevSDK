//
//  NSThread+BMThread.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 1/20/14.
//  Copyright (c) 2014 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSThread (BMThread)

+ (void)performBlockOnMainThread:(void (^)(void))block;
+ (void)performBlockInBackground:(void (^)(void))block;

@end
