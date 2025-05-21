//
//  BMDatabaseManager.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 4/3/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SQLCipher/sqlite3.h>

@class BMSQL;


@interface BMDatabase : NSObject

@property (nonatomic) sqlite3 *database;

/* Abstract Methods */
- (NSString *)databaseName;
- (NSString *)databasePath;
- (NSString *)databasePasscode;

/* DB File Pointers */
/* Open Database */
- (void)openDatabase;
- (BOOL)databaseOpenedSuccessfully;
- (int)statusFromOpeningDatabase;
- (BOOL)openDatabaseFinishedOK;
- (void)applyPasscode:(NSString *)passcode;

/* Close Database */
- (void)closeDatabase;

#pragma mark - Migration
- (void)performMigration;
- (BOOL)exportToEncrypted;

/* Page Size */
- (NSNumber *)pageSize;

/* Transactions */
- (void)transactionBegin;
- (void)transactionEnd;

/* File Operations */
- (BOOL)databaseExists;
- (BOOL)deleteDatabase;

@end
