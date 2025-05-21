//
//  BMSQL+Binding.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 9/9/14.
//  Copyright (c) 2014 Bytemark. All rights reserved.
//

#import "BMSQL.h"


@interface BMSQL (Binding)

/* Statement Binding */
- (void)bind:(id)object;
- (void)bindObjects:(NSArray *)objects;
- (void)bindString:(NSString *)string;
- (void)bindString:(NSString *)string atPosition:(int)position;
- (void)bindDate:(NSDate *)date;
- (void)bindDate:(NSDate *)date atPosition:(int)position;
- (void)bindNumber:(NSNumber *)number;
- (void)bindNumber:(NSNumber *)number atPosition:(int)position;
- (void)bindData:(NSData *)data;
- (void)bindData:(NSData *)data atPosition:(int)position;

- (int)nextColumn;

@end
