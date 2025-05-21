//
//  BMNotification.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 11/25/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kNOTIFICATION_NOTIFICATIONS_CHANGED @"BMPassSDK_Notifications_Changed"

/*!
 A notification contains advisory information that an organization would like to inform their users. Similar to an email, each notification can be marked as 'seen' whenever the user views its information.

 Notifications can be created and edited via the Bytemark Merchant Back Office. A copy of the last requested notification data is stored locally and is available to be displayed even when the application is operating offline. Notifications are automatically removed from the local store whenever they expire.
 */
@interface BMNotification : NSObject<NSSecureCoding>

/*!
 Title of the notification
 */
@property (nonatomic, retain, readonly) NSString *title;

/*!
 The message that should appear as the body of the notification.
 */
@property (nonatomic, retain, readonly) NSString *message;

/*!
 The teaser for the notification. Should be used to provide a short message about what is the purpose of the notification.
 */
@property (nonatomic, retain, readonly) NSString *shortMessage;

/*!
 The string representation of the url providing a link to additional information about the notification.
 */
@property (nonatomic, retain, readonly) NSString *urlString;

/*!
 The type of notification used to provide additional filtering options. Organization specific.
 */
@property (nonatomic, retain, readonly) NSString *type;

/*!
 The date the notification will be included in the list of notifications.
 */
@property (nonatomic, retain, readonly) NSDate *startDate;

/*!
 The date the notification will become invalid and be removed from the list of notifications.
 */
@property (nonatomic, retain, readonly) NSDate *endDate;

/*!
 A boolean representation of whether the user has seen on the notification.
 */
@property (nonatomic, retain) NSNumber *hasBeenSeen;

/*!
 The unique identifier to distinguish one notification from another.
 */
@property (nonatomic, retain, readonly) NSString *uuid;

@end
