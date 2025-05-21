//
//  BMNoSQLDatabaseTable+Queries.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 9/17/14.
//  Copyright (c) 2014 Bytemark. All rights reserved.
//

#import "BMNoSQLDatabaseTable.h"

/* Protocols */
#import "BMJSONCoding.h"


@interface BMNoSQLDatabaseTable (Queries)

/* SELECTs */
- (NSString *)selectAllStatement;
- (NSString *)selectStatementForObjectCount:(NSInteger)count;

/* INSERTs */
- (NSString *)insertStatementForObjectCount:(NSInteger)count;
- (NSArray *)parameterizedInsertValues:(NSArray *)values;

/* REPLACEs */
- (NSString *)replaceStatementForObjectCount:(NSInteger)count;
- (NSArray *)parameterizedReplaceValues:(NSArray *)values;

/* DELETEs */
- (NSString *)deleteStatementConditionalForObjectCount:(NSInteger)count;
- (NSString *)deleteAllStatement;

@end
