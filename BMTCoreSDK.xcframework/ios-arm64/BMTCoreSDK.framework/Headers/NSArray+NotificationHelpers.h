//
//  NSArray+NotificationHelpers.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 2/6/15.
//  Copyright (c) 2015 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BMNotification;


@interface NSArray (NotificationHelpers)

/*!
 @discussion Filters notifications based upon seenStatus.
 
 @param seenStatus Bool indicating whether the user has seen the notification.
 
 @return An array of BMNotification objects with the seenStatus.
 */

- (NSArray *)notificationsWithSeenStatus:(BOOL)seenStatus;

/*!
 @discussion Sets the hasBeenSeen BOOL for all the notification objects in allNotifications array.
 
 @param seenStatus BOOL indicating if the notifications should all be set to seen or not.
 */

- (void)setAllNotificationsToSeenStatus:(BOOL)seenStatus;

/*!
 @discussion Filters notifications based upon expiration status.

 @return An array of BMNotification objects that are not expired.
 */
- (NSArray<BMNotification *> *)unexpiredNotifications;

@end
