//
//  FrameworkDefines.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 4/2/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#ifndef BMPassSDK_FrameworkDefines_h
#define BMPassSDK_FrameworkDefines_h



//#import "BMUser.h"
//#import "BMUser+Private.h"
/* --- DEFINES --- */
#define kVERSION_SDK 0.1
#define kVERSION_SCHEMA 0.1


/* API Connectivity */

//Android is also using these two strings and we are also getting the same in Urls from WKWebView
#define kFACEBOOK_HOOK @"m.facebook.com"
#define kGOOGLE_HOOK @"google.com"


/* Offset */
#define kACCEPTABLE_SERVER_OFFSET_IN_SECONDS 300
#define kORDERS_PER_PAGE 15
#define kDEFAULT_CONTENT_INSET 15.0f

#define defaultOffset              offset(15)
#define negativeDefaultOffset      offset(-15)

/* Date Formats */
#define kAPI_DATE_FORMAT @"yyyy-MM-dd'T'HH:mm:ss.SSSz"
#define kAPI_ALTERNATE_DATE_FORMAT @"yyyy-MM-dd'T'HH:mm:ss.SSS'Z'"

/* Animation Durations */
#define kANIMATION_DURATION 6.0f
#define kPAUSE_DURATION 1.0f
#define kZERO_DURATION 0.0f

/* Domain Identifier */
#define kDOMAIN "co.bytemark"


/* File Names */
#define kFILE_NAME_CONFIGURATION @"BMPassSDK-Config"


/* --- CONSTANTS --- */
/* Timer components */
#define kSECONDS_IN_AN_HOUR kSECONDS_IN_A_MINUTE*60
#define kSECONDS_IN_A_MINUTE 60

/* UILabel Constants */
#define kUNLIMITED_LINES 0

/* Math Functions */
#define RADIANS(degrees) ((degrees * M_PI) / 180.0)
#define SQUARED(base) powf(base, 2)

/* Multiplicity */
#define kDOUBLE_VALUE 2.0f
#define kHALF_VALUE 0.5f

/* Core Location */
#define kLOCATION_ACCURACY  kCLLocationAccuracyHundredMeters;
#define kLOCATION_FILTER    100.0f

/* Locale */
#define kUTC_TIME @"UTC"

/* File Types */
#define kFILE_TYPE_PLIST @"plist"

/* --- NOTIFICATIONS --- */
#define kNOTIFICATION_LOCATION_UPDATED @"NOTIFICATION_LOCATION_UPDATED"

/* V3 Substitution Values */
#define kV3_SUBSTITUTION_KEY @"$"
#define kV3_SUBSTITUTION_SEPARATOR @"."
#define kV3_SUBSTITUTION_VALUE_CURRENT_TIME @"current_time"
#define kV3_SUBSTITUTION_VALUE_EARLIEST_EXPIRATION_TIME @"earliest_expiration_time"
#define kV3_SUBSTITUTION_VALUE_REMAINING_TIME @"remaining_time"
#define kV3_SUBSTITUTION_VALUE_ORGANIZATION_NAME @"organization_name"
#define kV3_SUBSTITUTION_VALUE_ACTIVATION_TIME @"activation_time"
#define kV3_SUBSTITUTION_VALUE_ORIGIN_NAME @"origin_name"
#define kV3_SUBSTITUTION_VALUE_ORIGIN_ZONE @"origin_zone"
#define kV3_SUBSTITUTION_VALUE_DESTINATION_NAME @"destination_name"
#define kV3_SUBSTITUTION_VALUE_DESTINATION_ZONE @"destination_zone"
#define kV3_SUBSTITUTION_VALUE_MERCHANT_CURRENCY @"merchant_currency"
#define kV3_SUBSTITUTION_VALUE_PRICE @"cost"
#define kV3_SUBSTITUTION_VALUE_PURCHASED_TIME @"purchased_time"
#define kV3_SUBSTITUTION_VALUE_TICKET_SERIAL_NUMBER @"ticket_serial_number"
#define kV3_SUBSTITUTION_VALUE_EVENT_NAME @"event_name"

#define kNOTIFICATION_USER_SIGNED_OUT @"BMPassSDK_Notification_UserSignedOut"
#define kNOTIFICATION_USER_SIGNED_IN @"BMPassSDK_Notification_UserSignedIn"
#define kNOTIFICATION_USER_SECURITY_QUESTION_CHECKED_ABSENCE @"BMPassSDK_Notification_UserQuestionNotAnswered"
#define kNOTIFICATION_USER_STARTED_SIGN_IN @"BMPassSDK_Notification_UserStartedSignIn"
#define kNOTIFICATION_USER_STARTED_PAYMENT_SCREEN @"BMPassSDK_Notification_UserStartedPaymentScreen"
#define kNOTIFICATION_USER_STARTED_CLOSEACCOUNT_SCREEN @"BMPassSDK_Notification_UserCloseAccountScreen"
#define kKEY_USER_INFO_USER_UUID @"userUUID"
#define kKEY_USER_INFO_USER_EMAIL @"userEmail"
#define kKEY_USER_MANUAL_SIGNOUT @"userManualSignout"
#define kKEY_QUESTIONS_ANSWERED @"questions_Answered"

#define kSignInOptionApple @"apple"

/* NOTIFICATIONS */
#define kNOTIFICATION_MOVE_TO_TICKETS_SCREEN @"kNotification_Move_To_Tickets_Screen"
#define kNOTIFICATION_MOVE_TO_PAYMENT_SCREEN @"kNotification_Move_To_Payment_Screen"
#define kNOTIFICATION_SELECT_PAYMENT_METHOD @"kNotification_Select_payment_Method"
#define kNOTIFICATION_SELECT_PAYMENT_METHOD_FOR_STORED_WALLET @"kNotification_Select_payment_Method_for_stored_wallet"
#define kNOTIFICATION_MOVE_TO_PRODUCTS_SCREEN @"kNotification_Move_To_Products_Screen"
#define kNOTIFICATION_DELETE_PAYMENT_METHOD @"kNotification_Delete_Payment_Method"
#define kPAYMENT_METHOD @"kpaymentMethod"
#define kDEFAULT_METHOD @"kdefaultMethod"
#define kPaymentMethodArray @"kpaymentMethodArray"

/* Misc */
#define kPLIST_KEY_FACEBOOK_APP_ID @"FacebookAppID"

/* APNS Device Token */
#define kKEY_DEVICE_TOKEN @"device_token"

/* PIN Length */
#define kDEFAULT_PIN_LENGTH 6

@class BMErrors;
@class BMCard;
@class BMOrderReceiptList;
@class BMHTML5V3Template;
@class BMJSLibrary;
@class BMPSFareMedium;
@class BMPSFare;
@class BMProductFilter;
@class BMPSPrivateKey;
@class BMPSFareCategory;
@class BMNotification;
@class BTMKNotificationSettingsGroup;
@class BMPSFareMediumAutoloads;
@class BMHistoryPassList;
@class BMNetworkRequestScheduler;
@class BMPromoCode;
@class BMPaymentMethod;
@class BMPaypalPaymentMethod;
@class BMProduct;
//@class BMPSWalletConfiguration;
//@class BMPassSubscriptionItem;
//@class BMPSStoredWalletAutoload;
@class BMPSFareCappItem;
@class BMBarcode;
@class BMDiscountDetails;
@class BMTFareMediumAutoloads;
/* --- TYPE DEFs --- */

typedef NSDictionary JSON;

typedef NS_ENUM(NSUInteger, AnimationStyle) {
    ANIMATION_INSTANT = 0,
    ANIMATION_FADE,
    ANIMATION_SLIDE_FROM_BOTTOM
};

typedef NS_ENUM(NSInteger, BarcodeFormat)
{
    BarcodeFormatNone = 1,
    BarcodeFormatQRCode,
    BarcodeFormatAztec,
};

//typedef NS_ENUM(NSUInteger, SaveLocation) {
//    DEVICE              = 0,
//    CLOUD               = 1,
//};

/* Blocks */

typedef void (^ Block)(void);
typedef void (^ ErrorsBlock)(BMErrors *errors);
typedef void (^ JSONParserBlock)(NSDictionary *JSON);
typedef void (^ NetworkErrorBlock) (BMErrors *error);
typedef void (^ ArrayCompletion)(NSArray *array);
typedef void (^ StatusCompletion)(BOOL success);
typedef void (^ DownloadCompletion)(NSUInteger bytesRead, long long totalBytesRead, long long totalBytesExpectedToRead);
//typedef void (^ ReadUserCompletion)(BMUser *user, NSString *DAIU, BMErrors *errors);
//typedef void (^ LoginCompletion)(BMUser *user, BMErrors *errors);
typedef void (^ OrgnizationsCompletion)(NSDictionary *_Nullable JSON, BMErrors *errors);
typedef void (^ DAIUCompletion)(NSString *DAIU, BMErrors *errors);
typedef void (^ GetPayPalTokenCompletion)(NSString *token, BMErrors *errors);
typedef void (^ ListPaymentMethodsCompletion)(NSArray<BMPaymentMethod *> *paymentMethods, BMErrors *errors);
typedef void (^ SavePaymentMethodCompletion)(BMPaymentMethod *paymentMethod, BMErrors *errors);
typedef void (^ DeletePaymentMethodCompletion)(BOOL success, BMErrors *errors);
typedef void (^ ListAcceptedPaymentTypesCompletion)(NSArray *acceptedPaymentTypes, BMErrors *errors);
typedef void (^ LinkPayPalAccountRequestCompletion)(BMPaypalPaymentMethod *paypalMethod, BMErrors *errors);
typedef void (^ CreateOrderCompletion)(NSArray<BMPaymentMethod *> *paymentMethods, BOOL isOrderCompleted, NSDictionary *json, BMErrors *errors);
typedef void (^ AddWalletCompletion)(BOOL success, BMErrors *errors);
typedef void (^ProcessOrderCompletion)(NSArray *passes, BMErrors *errors);
//typedef void (^OrderReceiptCompletion)(BMOrderReceiptList *orderReceiptList, BMErrors *errors);
//typedef void (^LoadWalletConfigCompletion)(BMPSWalletConfiguration *config, BMErrors *errors);
typedef void (^ ProductCompletion)(NSArray *products, BMErrors *errors);
typedef void (^ SingleProductCompletion)(BMProduct *_Nullable product, BMErrors *_Nullable errors);
//typedef void (^ ListPassAutoRenewCompletion)(NSArray<BMPassSubscriptionItem *> *subscribedPasses, BMErrors *errors);
typedef void (^ UpdatePassAutoRenewCompletion)(BOOL success, BMErrors *errors);
typedef void (^ PassActivationCompletion)(NSArray *passes, NSDictionary *json, BMErrors *errors);
typedef void (^ ListPassesCompletion)(NSArray *passes, NSDictionary *json, BMErrors *errors);
//typedef void (^ ListSubscribedPassesCompletion)(NSArray<BMPassSubscriptionItem *> *subscribedPasses, BMErrors *errors);
typedef void (^ UpdateSubscriptionCompletion)(BOOL success, BMErrors *errors);
typedef void (^AutoloadCompletion)(BOOL success, BMErrors *errors);
//typedef void (^GetAutoloadCompletion)(BMPSStoredWalletAutoload *autoload, BMErrors *errors);
typedef void (^ NotificationListCompletion) (NSArray<BMNotification *> *notificationList, BMErrors *errors);
typedef void (^ NotificationSettingsCompletion) (NSArray<BTMKNotificationSettingsGroup *> *notificationSettings, BMErrors *errors);
typedef void (^ UpdateStatusCompletion)(BOOL success, BMErrors *errors);
typedef void (^ ListHTML5V3TemplateCompletion)(BMHTML5V3Template *html5Template, BMErrors *errors);
typedef void (^ ListJSLibraryCompletion)(NSString *source, NSError *errors);
//typedef void (^ PhotoCompletion)(BMPhoto *photo, BMErrors *errors);
typedef void (^ FareMediumsCompletion)(NSArray<BMPSFareMedium *> *fareMediums, BMErrors *errors);
typedef void (^ FareMediaCategoryCompletion)(NSArray<BMPSFareCategory *> *fareMediumsCategory, BMErrors *errors);
typedef void (^ AddFareMediumCompletion)(BMPSFareMedium *fareMedium, BMErrors *errors);
typedef void (^ FaresCompletion)(NSArray<BMPSFare *> *fares, BMErrors *errors);
typedef void (^ FareMediumsVirtualCardsLoadCompletion)(NSArray<BMPSFareMedium *> *fareMediums, NSString *error);
typedef void (^ ListFareMediumTransactionsCompletion)(NSArray *result, BMErrors *errors);
typedef void (^ PrivateKeyCompletion)(NSArray<BMPSPrivateKey *> *keys, BMErrors *errors);
//typedef void (^ SignInCompletion)(BMUser *user, BMErrors *errors);
//typedef void (^ SignUpCompletion)(BMUser *user, BMErrors *errors);
typedef void (^ ChangeCompletion)(BOOL success, BMErrors *errors);
typedef void (^ ResetCompletion)(BOOL success, BMErrors *errors);
typedef void (^ DiscountCompletion)(BMDiscountDetails *discount, BMErrors *errors);
typedef void (^ UpdateUserCompletion)(BOOL success, BMErrors *errors);
//typedef void (^ SocialSignInCompletion)(BMUser *user, BOOL needAdditionalInfo, BMErrors *errors);
typedef void (^ FiltersCompletion)(NSArray<BMProductFilter *> *filters, BMErrors *errors);
typedef void (^ SubmitCompletion)(BOOL success, BMErrors *errors);
typedef void (^ CloseAccountCompletion)(BOOL success, BMErrors *errors);
typedef void (^ ListFareCapCompletion)(NSArray<BMPSFareCappItem *> *_Nullable fareCapList, BOOL success, BMErrors *errors);
typedef void (^ IncommCompletion)(NSDictionary *_Nullable JSON, BMErrors *errors);
typedef void (^ sendProviderDeviceTokenCompletion)(BOOL success, BMErrors *errors);
typedef void (^ ListFareMediumCappingCompletion)(NSArray *result, BMErrors *errors);
typedef void (^ AutoloadsCompletion)(BMPSFareMediumAutoloads *result, BMErrors *errors);
typedef void (^ AutoloadFareMediumCompletion)(BMTFareMediumAutoloads *result, BMErrors *errors);
typedef void (^ DeleteAutoloadsCompletion)(BOOL success, BMErrors *errors);
typedef void (^ DeleteAccountCompletion)(BOOL success, BMErrors *errors);
typedef void (^ VoucherCodeCompletion)(BOOL success, BMErrors *errors);
typedef void (^ BlockUnblockCardCompletion)(BOOL success, BMErrors *errors);
typedef void (^ RemoveCardCompletion)(BOOL success, BMErrors *errors);
typedef void (^ WalletAmountTransferCompletion)(BOOL success, BMErrors *errors);
typedef void (^ ResendEmailVerificationCompletion)(BOOL success, BMErrors *errors);
typedef void (^ SendPassCompletion)(BOOL success, BMErrors *errors);
typedef void (^ ListHistoryPassesCompletion)(BMHistoryPassList *historyPassList, BMErrors *errors);
typedef void (^ ResendHistoryPassReceiptCompletion)(BOOL success, BMErrors *errors);
typedef void (^ AppSupportConfirmationCompletion)(BOOL success, BMErrors *errors);
//typedef void (^ LoginCompletion)(BMUser *user, BMErrors *errors);
typedef void (^ SaveDefaultCompletion)(BOOL success, BMErrors *errors);
typedef void (^ DAIUCompletion)(NSString *DAIU, BMErrors *errors);
typedef void (^ GetPayPalTokenCompletion)(NSString *token, BMErrors *errors);
typedef void (^ ListPaymentMethodsCompletion)(NSArray<BMPaymentMethod *> *paymentMethods, BMErrors *errors);
typedef void (^ SavePaymentMethodCompletion)(BMPaymentMethod *paymentMethod, BMErrors *errors);
typedef void (^ DeletePaymentMethodCompletion)(BOOL success, BMErrors *errors);
typedef void (^ ListAcceptedPaymentTypesCompletion)(NSArray *acceptedPaymentTypes, BMErrors *errors);
typedef void (^ LinkPayPalAccountRequestCompletion)(BMPaypalPaymentMethod *paypalMethod, BMErrors *errors);
typedef void (^ ProcessApplePayCompletion)(BOOL isOrderCompleted, NSDictionary *json, BMErrors *errors);
typedef void (^ ConfirmOrderCompletion)(BOOL isOrderCompleted, NSDictionary *json, BMErrors *errors);
typedef void (^ AddWalletCompletion)(BOOL success, BMErrors *errors);
typedef void (^ ProductCompletion)(NSArray *products, BMErrors *errors);
typedef void (^ SingleProductCompletion)(BMProduct *_Nullable product, BMErrors *_Nullable errors);
//typedef void (^ ListSubscribedPassesCompletion)(NSArray<BMPassSubscriptionItem *> *_Nullable subscribedPasses, BMErrors *_Nullable errors);
typedef void (^ UpdateSubscriptionCompletion)(BOOL success, BMErrors *_Nullable errors);
typedef void (^AutoloadCompletion)(BOOL success, BMErrors *_Nullable errors);
//typedef void (^GetAutoloadCompletion)(BMPSStoredWalletAutoload *_Nullable autoload, BMErrors *_Nullable errors);
//typedef void (^ ListPassAutoRenewCompletion)(NSArray<BMPassSubscriptionItem *> *_Nullable subscribedPasses, BMErrors *_Nullable errors);
typedef void (^ UpdatePassAutoRenewCompletion)(BOOL success, BMErrors *_Nullable errors);
typedef void (^ VelociaLoginCompletion)(NSString *_Nullable redirectURL, BMErrors *_Nullable errors);
typedef void (^ LinkCardCompletion)(BOOL success, BMErrors * _Nullable errors);

//@class BMPSWalletConfiguration;

typedef void (^ProcessOrderCompletion)(NSArray *_Nullable passes, BMErrors *_Nullable errors);
//typedef void (^OrderReceiptCompletion)(BMOrderReceiptList *_Nullable orderReceiptList, BMErrors *_Nullable errors);
//typedef void (^LoadWalletConfigCompletion)(BMPSWalletConfiguration *_Nullable config, BMErrors *_Nullable errors);
typedef void (^ PassActivationCompletion)(NSArray *_Nullable passes, NSDictionary *_Nullable json, BMErrors *_Nullable errors);
typedef void (^ ListPassesCompletion)(NSArray *_Nullable passes, NSDictionary *_Nullable json, BMErrors *_Nullable errors);

typedef void (^ ValidatePassCompletion)(BOOL success, BMErrors *_Nullable errors);

typedef void (^ DeepLinkCreditPassCompletion)(BOOL success, BMErrors * _Nullable errors);
typedef void (^ Setup2FACompletion)(NSString *_Nullable verificationKey, BMErrors *_Nullable errors);
typedef void (^ SignIn2FACompletion)(NSString *_Nullable oauth, BMErrors *_Nullable errors);
typedef void (^ VelociaLoginCompletion)(NSString *_Nullable redirectURL, BMErrors *_Nullable errors);
#endif
