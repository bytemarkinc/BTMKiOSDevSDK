//
//  BMSQL.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 4/4/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import "BMDatabase.h"

/* Defines */
#define kREAD_ENTIRE_STRING -1
#define kFIRST_BIND_POSITION 1
#define kNULL @"NULL"

/* SQL Datatypes */
#define kTEXT @"TEXT"
#define kINTEGER @"INTEGER"
#define kREAL @"REAL"
#define kBLOB @"BLOB"
#define kDATE kINTEGER

/* SQL Key Words / Phrases */
#define kNOT_NULL @"NOT NULL"
#define kUNIQUE @"UNIQUE"

typedef NSDictionary JSON;

@class BMDatabaseTable;


@interface BMSQL : NSObject

@property (nonatomic, readonly) sqlite3_stmt *SQLStatement;
@property (nonatomic, readonly) BOOL executedSuccessfully;
@property (nonatomic) int bindPosition;

/* Init */
- (instancetype)initWithStringStatement:(NSString *)stringStatement forDatabase:(BMDatabase *)db status:(int *)status;

/* Statement Preparation */
- (BOOL)preparedSuccessfullyWithStringStatement:(NSString *)stringStatement status:(int *)status;


/* Statement Execution */
- (void)execute;
- (NSArray *)resultsArrayFromProcessingRecordsIndividuallyUsingBlock:(id (^)(id))RecordProcessingBlock;

/* Reset */
- (void)reset;

@end


/* Categories */

#import "BMSQL+Binding.h"
#import "BMSQL+Parsing.h"


