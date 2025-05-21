//
//  BMSQL+Parsing.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 9/16/14.
//  Copyright (c) 2014 Bytemark. All rights reserved.
//

#import "BMSQL.h"


@interface BMSQL (Parsing)

- (NSString *)stringFromTextInColumn:(int)column;
- (NSURL *)urlFromTextInColumn:(int)column;
- (NSNumber *)numberFromIntInColumn:(int)column;
- (NSDecimalNumber *)decimalNumberFromRealInColumn:(int)column;
- (NSDate *)dateFromTextInColumn:(int)column;
- (NSData *)dataFromBlobInColumn:(int)column;
- (JSON *)JSONFromBlobInColumn:(int)column;

@end
