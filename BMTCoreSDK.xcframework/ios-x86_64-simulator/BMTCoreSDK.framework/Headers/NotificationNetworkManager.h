//
//  NotificationNetworkManager.h
//  BMTCoreSDK
//
//  Created by Apple on 07/11/21.
//

/* Categories */
#import "NSArray+NotificationHelpers.h"


#define kNOTIFICATION_NOTIFICATIONS_CHANGED @"BMPassSDK_Notifications_Changed"

#import <Foundation/Foundation.h>

#import "BTMKNotificationSettingsGroup.h"

#import "BMErrors.h"

#import "BMNotification.h"

typedef void (^ UpdateStatusCompletion)(BOOL success, BMErrors *errors);
typedef void (^ NotificationSettingsCompletion) (NSArray<BTMKNotificationSettingsGroup *> *notificationSettings, BMErrors *errors);
typedef void (^ UpdateStatusCompletion)(BOOL success, BMErrors *errors);
typedef void (^ NotificationListCompletion) (NSArray<BMNotification *> *notificationList, BMErrors *errors);

NS_ASSUME_NONNULL_BEGIN

@interface NotificationNetworkManager : NSObject

+ (NSArray<BMNotification *> *)notifications;


+ (void)reloadNotifications;


+ (void)fetchNotificationSettings:(NotificationSettingsCompletion)completion;


+ (void)updateNotificationSetting:(BTMKNotificationSetting *)setting withCompletion:(UpdateStatusCompletion)completion;

+ (void)listNotificationsWithCompletion:(NotificationListCompletion)completion;

@end

NS_ASSUME_NONNULL_END
