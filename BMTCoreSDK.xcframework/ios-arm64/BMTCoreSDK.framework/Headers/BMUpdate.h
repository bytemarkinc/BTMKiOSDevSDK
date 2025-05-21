//
//  BMUpdate.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 2/3/15.
//  Copyright (c) 2015 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "BMErrors.h"

/* Defines */
#import "BMErrorDefines.h"

/* 
 Indicator denoting if update was from Bytemark API or the local data cache
 */
typedef NS_ENUM(NSUInteger, UpdateType) {
    LocalUpdate,
    RemoteUpdate,
    NoUpdate,
};


@interface BMUpdate : NSObject

/*!
 * The new set of data returned from the update.
 */
@property (nonatomic, strong) NSArray *data;

/*!
 * Indicator used to determine if the update was from the Bytemark API or the local data cache
 */
@property (nonatomic) UpdateType updateType;

/*!
 * A container with any errors that prevented the update from finishing successfully.
 */
@property (nonatomic, strong) BMErrors *errors;

@end
