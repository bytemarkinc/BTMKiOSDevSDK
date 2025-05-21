//
//  NSFileManager+NSFileManager_BMFileManager.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 8/6/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSFileManager (NSFileManager_BMFileManager)

/* Create */
+ (BOOL)createDirectoryAtPath:(NSString *)path;

/* Move */
+ (BOOL)moveFilefromPath:(NSString *)oldPath
                 toPath:(NSString *)newPath;
+ (void)moveFilesWithKeyPathsToValuePathsInDictionary:(NSDictionary *)renameDictionary;

/* Delete */
+ (BOOL)deleteFileAtPath:(NSString *)filePath;

/* Directory Helpers */
/* Pass SDK */
+ (NSURL *)passSDKDirectoryURL;

/* Library */
+ (NSURL *)libraryDirectoryURL;

/* Cache */
+ (NSURL *)cacheDirectoryURL;

/* Documents */
+ (NSURL *)documentsDirectoryURL;
+ (BOOL)deleteFileInDocumentsDirectoryNamed:(NSString *)fileName;
+ (BOOL)fileExistsInDocumentsDirectoryWithName:(NSString *)fileName;
+ (NSString *)documentDirectoryPathForFileNamed:(NSString *)fileName;

@end
