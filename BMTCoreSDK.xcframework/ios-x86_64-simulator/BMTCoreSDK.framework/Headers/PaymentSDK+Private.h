//
//  PaymentSDK+Private.h
//  PaymentSDK
//
//  Created by Apple on 16/10/21.
//

#ifndef PaymentSDK_Private_h
#define PaymentSDK_Private_h

#import <UIKit/UIKit.h>
//#import "BMPassSDK.h"

/* Defines */
#define kSDK_ENVIRONMENT_ALPHA @"Alpha"
#define kSDK_ENVIRONMENT_BETA @"Beta"
#define kSDK_ENVIRONMENT_STAGING @"Staging"
#define kSDK_ENVIRONMENT_UAT @"Uat"


/* Categories */
#import "NSObject+BMObject.h"

/* Validator */
#import "BMRequestValidator.h"

/* Networking */
#import "BMNetworkRequestScheduler.h"

#endif
