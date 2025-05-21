//
//  BMDatabaseTable.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 4/4/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import "BMDatabase.h"

typedef id (^SQLExecutionBlock)(void);
typedef id (^BMSQLParsingBlock)(BMSQL *SQL);
typedef id (^ProcessingBlock)(void);


@interface BMDatabaseTable : BMDatabase

/* Abstract Methods */
+ (id)sharedDatabaseTable;
- (NSString *)databaseName;
- (NSString *)databasePasscode;
- (NSString *)tableName;
- (NSString *)createStatement;

/* Query Execution */
- (void)createTableIfNotExists;
- (void)createTable;
- (void)resetDatabase;
- (void)queueSynchronousDatabaseDeletion;

/* SQL Block Creation */
- (SQLExecutionBlock)statusBasedSQLExectionBlockWithQuery:(NSString *)query
                                              parameters:(NSArray *)parameters;
- (SQLExecutionBlock)resultsBasedSQLExectionBlockWithQuery:(NSString *)query
                                               parameters:(NSArray *)parameters
                                             parsingBlock:(BMSQLParsingBlock)parsingBlock;

/* Query Queuing */
- (void)queueSynchronousDatabaseAction:(Block)action;
- (void)queueAsynchronousDatabaseAction:(Block)action;

/* Query Scheduling */
// Result Based
- (NSArray *)executeSynchronouslyResultBasedSQLBlock:(SQLExecutionBlock)executionBlock;
- (void)executeAsynchronouslyResultBasedSQLBlock:(SQLExecutionBlock)executionBlock
                                     completion:(ArrayCompletion)completion;

// Status Based
- (BOOL)executeSynchronouslyStatusBasedSQLBlock:(SQLExecutionBlock)executionBlock;
- (void)executeAsynchronouslyStatusBasedSQLBlock:(SQLExecutionBlock)executionBlock
                                     completion:(StatusCompletion)completion;
- (void)executeSynchronouslyStatusBasedSQLBlock:(SQLExecutionBlock)executionBlock completion:(StatusCompletion)completion;

/* Query Execution */
- (id)responseFromExecutingRequiredFileTransactionBasedSQLBlock:(SQLExecutionBlock)SQLBlock;

/* Callbacks */
- (void)callbackArray:(NSArray *)array completion:(ArrayCompletion)completion;
- (void)callbackStatus:(BOOL)status completion:(StatusCompletion)completion;

@end
