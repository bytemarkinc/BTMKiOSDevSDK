//
//  BMSession.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 11/18/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BMSessionCache.h"


/*!
 *  A session is where all of the information relating to the current user's interaction with the Pass SDK is stored. A session helps facilitate pass, fare medium and notification.
 */
@interface BMSession : NSObject
{
    BMSessionCache *_notificationCache;
}

@property (nonatomic, strong) NSString *oauth;
@property (nonatomic) BOOL isLoggedIn;

@property (nonatomic) NSDate *lastAccessedTime;
@property (nonatomic, readwrite) BMSessionCache *notificationCache;
@property (nonatomic, readonly) BMSessionCache *passCache;

/* Session Management */
- (void)emptySession;

- (void)resetSession;

/* Last Accessed Time */
- (void)updateLastAccessedTimeToNow;


@end
