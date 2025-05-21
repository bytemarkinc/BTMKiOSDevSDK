//
//  BMSessionCache+Private.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 2/3/15.
//  Copyright (c) 2015 Bytemark. All rights reserved.
//

#ifndef BMPassSDK_BMSessionCache_Private_h
#define BMPassSDK_BMSessionCache_Private_h

#import "BMSessionCache.h"


/* Model */
#import "BMNetworkRequestScheduler.h"
#import "BMRequestValidator.h"
#import "NSThread+BMThread.h"


@interface BMSessionCache ()

@property (nonatomic, readwrite) NSArray *data;
@property (nonatomic) NSArray *localData;
@property (nonatomic, readwrite) BOOL loading;
@property (nonatomic) BOOL loadingLocalData;
@property (nonatomic) BOOL loadingRemoteData;

- (void)loadLocalData;
- (void)loadRemoteData;
- (void)removeData;
- (void)reset;
- (void)completedLoadingWithData:(NSArray *)data
                           type:(UpdateType)type
                         errors:(BMErrors *)errors;
- (void)updateData:(NSArray *)data
             type:(UpdateType)type
           errors:(BMErrors *)errors;
- (void)setData:(NSArray *)data type:(UpdateType)type;
- (BOOL)shouldOverwriteRemoteWithDataType:(UpdateType)type;

/* Abstract Methods */
- (void)validateDataListingWithExecutionBlock:(Block)executionBlock
                                 errorsBlock:(ErrorsBlock)errorsBlock;//Abstract
- (Block)loadLocalDataBlock; //Abstract
- (Block)loadRemoteDataBlock; //Abstract
- (Block)loadRemoteDataBlockWithFares; //Abstract
- (NSString *)notificationName; //Abstract

@end


#endif
