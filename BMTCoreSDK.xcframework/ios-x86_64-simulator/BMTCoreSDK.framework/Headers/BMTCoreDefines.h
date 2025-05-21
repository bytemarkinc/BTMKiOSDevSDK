//
//  BMTCoreDefines.h
//  BMTCoreSDK
//
//  Created by Chandan Kumar on 30/09/21.
//

#ifndef BMTCoreDefines_h
#define BMTCoreDefines_h

@class BMErrors;

typedef void (^ Block)(void);
typedef void (^ ErrorsBlock)(BMErrors *errors);
typedef void (^ JSONParserBlock)(NSDictionary *JSON);
typedef void (^ NetworkErrorBlock) (BMErrors *error);
typedef void (^ StatusCompletion)(BOOL success);

typedef NS_ENUM(NSUInteger, SaveLocation) {
    DEVICE              = 0,
    CLOUD               = 1,
};

typedef NSDictionary JSON;

/* Domain Identifier */
#define kDOMAIN "co.bytemark"

#define kCheckmarkImageWidth 50.0f

/* Date Formats */
#define kAPI_DATE_FORMAT @"yyyy-MM-dd'T'HH:mm:ss.SSSz"

/* Locale */
#define kUTC_TIME @"UTC"

/* Offset */
#define kDEFAULT_CONTENT_INSET 15.0f

#define kKEY_TRANSFER_TIME @"transfer_time"
#define kKEY_KEY @"key"
#define kKEY_VALUE @"value"
#define kKEY_PASSWORD @"password"
#define kKEY_CONFIRM_PASSWORD @"confirm_password"


/* Core Location */
#define kLOCATION_ACCURACY  kCLLocationAccuracyHundredMeters;
#define kLOCATION_FILTER    100.0f

/* --- NOTIFICATIONS --- */
#define kNOTIFICATION_LOCATION_UPDATED @"NOTIFICATION_LOCATION_UPDATED"


#define kHALF 0.5f

#define kTITLE_FONT_SIZE 18.0f


#define kDEFAULT_CORNER_RADIUS 5.0f

#define kDEFAULT_SHADOW_OPACITY 0.75f
#define kDEFAULT_SHADOW_LIGHT_OPACITY 0.30f
#define kDEFAULT_SHADOW_COLOR [UIColor blackColor].CGColor
#define kDEFAULT_SHADOW_SIZE 2.0f

#define kDEFAULT_BORDER_WIDTH 1.0f
#define kDEFAULT_BUTTON_HEIGHT 44.0f
#define kDEFAULT_BAR_BUTTON_SIZE 40.0f

#define kDEFAULT_CONTENT_WIDTH 290.0f

#define kDEFAULT_SMALL_INSET 5.0f
#define kDEFAULT_CONTENT_INSET 15.0f
#define kDEFAULT_LARGE_INSET 75.0f
#define kDEFAULT_MEDIUM_INSET 35.0f
#define kDEFAULT_TABLE_VIEW_CELL_LEFT_INSET 20.0f
#define kDOUBLE_DEFAULT_CONTENT_INSET (kDEFAULT_CONTENT_INSET * 2.0)
#define kHALF_DEFAULT_CONTENT_INSET (kDEFAULT_CONTENT_INSET * 0.5)
#define kDEFAULT_BUTTON_PADDING 37.0f

#define kCheckmarkImageWidth 50.0f
#define kEMPTY_STATE_ICON_WIDTH 96.0f

#define kKEY_SEPERATOR_VIEW_INSET 1.0f

#define kDEFAULT_ANIMATION_TIME 0.5f

#define kDEFAULT_SECTION_SPACING 20.0f
#define kDEFAULT_SIBLING_SPACING 8.0f

#define kDEFAULT_BAR_BUTTON_ITEM_FONT_SIZE 14.0

#define kMAX_PRODUCT_QUANTITY 10

#define kBUTTON_WIDTH 92.0f
#define kBUTTON_HEIGHT 37.0f

#pragma mark - Shared

#define kKEY_CLIENT_ID @"client_id"
#define kKEY_LATITUDE @"lat"
#define kKEY_LONGITUDE @"lon"
#define kKEY_OAUTH_TOKEN @"oauth_token"
#define kKEY_AUTHORIZATION @"Authorization"
#define kKEY_UUID @"uuid"
#define kKEY_FULL_NAME @"full_name"
#define kKEY_EMAIL @"email"
#define kKEY_PHOTO @"photo"
#define kKEY_USERNAME @"username"
#define kKEY_FIRST_NAME @"first_name"
#define kKEY_LAST_NAME @"last_name"
#define kKEY_MOBILE @"mobile"
#define kKEY_COMPANY @"company"
#define kKEY_COMPANY_NAME @"company_name"
#define kKEY_PREFER_LANG @"prefered_language"
#define kKEY_EMAIL_CONFIRMED @"email_confirmed"
#define kKEY_REQUIRES_EMAIL_VERIFICATION @"requires_email_verification"
#define kKEY_STREET_ADDR1 @"address_line1"
#define kKEY_STREET_ADDR2 @"address_line2"
#define kKEY_CITY @"city"
#define kKEY_STATE @"state"
#define kKEY_POSTAL_ZIP @"postal_code"
#define kKEY_COUNTRY @"country"
#define kKEY_LAST_LOGIN_TIME @"last_login_time"
#define kKEY_TOTAL_LOGINS @"total_logins"
#define kKEY_TIMEZONE @"timezone"
#define kKEY_CLASS_TYPE @"class_type"
#define kKEY_STATUS @"status"
#define kKEY_TYPE @"type"
#define kKEY_TIME_CREATED @"time_created"
#define kKEY_TIME_MODIFIED @"time_modified"
#define kKEY_REVIEWER @"reviewer"
#define kKEY_TIME_REVIEWED @"time_reviewed"

#pragma mark - Statuses
#define kKEY_STATUS_APPROVED @"ACCEPTED"
#define kKEY_STATUS_PENDING @"PENDING"
#define kKEY_STATUS_REJECTED @"REJECTED"

#pragma mark - Addresses

#define kKEY_STREET_NUMBER @"street_number"
#define kKEY_STREET @"street"
#define kKEY_UNIT @"unit"
#define kKEY_CITY @"city"
#define kKEY_TERRITORY @"territory"
#define kKEY_POSTAL_CODE @"postal_code"
#define kKEY_COUNTRY @"country"
#define kKEY_FAX @"fax"
#define kKEY_URL @"url"
#define kKEY_LAT @"lat"
#define kKEY_LON @"lon"
#define kKEY_STREET_ADDR1 @"address_line1"
#define kKEY_STREET_ADDR2 @"address_line2"
#define kKEY_STATE @"state"
#define kKEY_POSTAL_ZIP @"postal_code"

#pragma mark - Methods

#define kGET_METHOD @"GET"
#define kPUT_METHOD @"PUT"
#define kPOST_METHOD @"POST"
#define kDELETE_METHOD @"DELETE"


#define kKEY_LAST_ACCESSED @"last_accessed"

/* --- SDK Operating Environment --- */
#define kINFO_PLIST_KEY_SDK_ENVIRONMENT @"SDK Environment"
#define kSDK_ENVIRONMENT_PRODUCTION @"Production"

#define kERROR_UPDATE_REQUIRED 10000
#define kERROR_INVALID_SESSION 50020
#define kERROR_LOST_DEVICE 50011
#define kERROR_INVALID_TIME 120
#define kERROR_INVALID_ACCOUNT 50032


/* Misc */
#define kPLIST_KEY_FACEBOOK_APP_ID @"FacebookAppID"

/* APNS Device Token */
#define kKEY_DEVICE_TOKEN @"device_token"

/* PIN Length */
#define kDEFAULT_PIN_LENGTH 6

/* Defines */
#define kSDK_ENVIRONMENT_ALPHA @"Alpha"
#define kSDK_ENVIRONMENT_UAT @"Uat"
#define kSDK_ENVIRONMENT_BETA @"Beta"
#define kSDK_ENVIRONMENT_STAGING @"Staging"
#define kSDK_ENVIRONMENT_PRODUCTION @"Production"

/* Offset */
#define kACCEPTABLE_SERVER_OFFSET_IN_SECONDS 300
#define kORDERS_PER_PAGE 15
#define kDEFAULT_CONTENT_INSET 15.0f

/* Date Formats */
#define kAPI_DATE_FORMAT @"yyyy-MM-dd'T'HH:mm:ss.SSSz"
#define kAPI_ALTERNATE_DATE_FORMAT @"yyyy-MM-dd'T'HH:mm:ss.SSS'Z'"

#define kNOTIFICATION_USER_SIGNED_OUT @"BMPassSDK_Notification_UserSignedOut"
#define kNOTIFICATION_USER_SIGNED_IN @"BMPassSDK_Notification_UserSignedIn"

/* Alert */
/* Alert */
#define kALERT_BUTTON_TITLE_OK NSLocalizedStringFromTableInBundle(@"OK", @"Localizable", [NSBundle bundleWithIdentifier:@"co.bytemark.BMTCoreSDK"], @"default confirmation button title")
#define kALERT_BUTTON_TITLE_DISMISS NSLocalizedStringFromTableInBundle(@"Dismiss", @"Localizable", [NSBundle bundleWithIdentifier:@"co.bytemark.BMTCoreSDK"], @"default cancel button title")
#define kALERT_BUTTON_TITLE_CANCEL NSLocalizedStringFromTableInBundle(@"Cancel", @"Localizable", [NSBundle bundleWithIdentifier:@"co.bytemark.BMTCoreSDK"], @"")
#define kALERT_TITLE_ATTENTION NSLocalizedStringFromTableInBundle(@"Attention", @"Localizable", [NSBundle bundleWithIdentifier:@"co.bytemark.BMTCoreSDK"], @"")


/* --- Notifications --- */
/*! Notifies subscribers when the internet connection changes */
#define kBM_NOTIFICATION_INTERNET_CONNECTION_CHANGED @"BM_NOTIFICATION_INTERNET_CONNECTION_CHANGED"

#endif /* BMTCoreDefines_h */
