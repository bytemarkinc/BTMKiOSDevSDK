//
//  NSObject.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 4/5/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BMTCoreDefines.h"

@interface NSObject (NSObjectExtension)

/* Blocks */
+ (void)performOnMainThreadWithBlock:(Block)block;

+ (id)nonNilValue:(id)value;

@end
