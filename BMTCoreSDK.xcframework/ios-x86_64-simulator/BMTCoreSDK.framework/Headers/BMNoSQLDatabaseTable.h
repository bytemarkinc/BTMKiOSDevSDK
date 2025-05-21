//
//  BMNoSQLDatabaseTable.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 9/9/14.
//  Copyright (c) 2014 Bytemark. All rights reserved.
//

#import "BMDatabaseTable.h"

/* Defines */
#define kNOSQL_TABLE_NAME @"data"
#define kNOSQL_COLUMN_KEY @"key"
#define kNOSQL_COLUMN_VALUE @"value"

@protocol BMJSONCoding;


@interface BMNoSQLDatabaseTable : BMDatabaseTable

/* Abstract Methods */
- (Class)parsingClass;

/* Blocks */
#pragma mark - SQL Blocks

- (SQLExecutionBlock)insertBlockWithValues:(NSArray *)values;
- (SQLExecutionBlock)selectAllBlock;
- (SQLExecutionBlock)selectBlockWithUUIDs:(NSArray *)uuids;
- (BMSQLParsingBlock)selectionParsingBlock;
- (SQLExecutionBlock)deletionBlockWithValues:(NSArray *)values;
- (SQLExecutionBlock)deleteAllBlock;


/* Query Execution */
// INSERT
- (void)insertValues:(NSArray *)values;
- (void)insertValues:(NSArray *)values completion:(StatusCompletion)completion;
- (void)insertValuesSynchronously:(NSArray *)values;
- (void)insertValuesSynchronously:(NSArray *)values completion:(StatusCompletion)completion;

// SELECT
- (NSArray *)selectAllSynchronously;
- (void)selectAllAsynchronouslyWithCompletion:(ArrayCompletion)completion;
- (NSArray *)selectSynchronouslyValuesWithUUIDs:(NSArray *)uuids;
- (void)selectAsynchronouslyValuesWithUUIDs:(NSArray *)uuids completion:(ArrayCompletion)completion;

// DELETE
- (void)deleteValues:(NSArray *)values;
- (BOOL)deleteAllValues;

// UPDATE
- (void)replaceDatabaseContentsByUpdatingValues:(NSArray *)values completion:(ArrayCompletion)completion;
- (void)replaceRecordsThatExist:(NSArray<id <BMJSONCoding>> *)values completion:(StatusCompletion)completion;

/* Record Parsing */
- (NSArray *)parsedRecords:(NSArray *)records;

@end


#import "BMNoSQLDatabaseTable+Queries.h"
