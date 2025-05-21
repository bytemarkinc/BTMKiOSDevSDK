//
//  NSURL+SkipBackup.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 7/29/14.
//  Copyright (c) 2014 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface NSURL (SkipBackup)

- (BOOL)markAsNonDeletableAndSkipBackup;

@end
