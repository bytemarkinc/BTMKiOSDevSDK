//
//  NSObject+PerformBlockAfterDelay.h
//  NY Waterway
//
//  Created by Michael Brian Lodato on 1/29/13.
//  Copyright (c) 2013 Bytemark Inc,. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^Block)(void);


@interface NSObject (PerformBlockAfterDelay)

- (void)performBlock:(Block)block
          afterDelay:(NSTimeInterval)delay;

@end
