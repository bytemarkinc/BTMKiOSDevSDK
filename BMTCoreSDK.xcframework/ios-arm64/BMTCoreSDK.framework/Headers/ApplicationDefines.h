/*
 *  Filename: "ApplicationDefines.h"
 *
 *  Purpose: To hold global defines for the application
 *
 *  Created By: Michael B. Lodato (SR. Mobile Developer)
 *
 *  Created: 2/5/13
 *
 *  Modified: 2/5/13
 *
 *  Company: "Bytemark Inc,."
 */

#ifndef NY_Waterway_ApplicationDefines_h
#define NY_Waterway_ApplicationDefines_h

#define IS_IPHONE_5_SCREEN ([[UIScreen mainScreen] bounds].size.height == 568.0f)

#pragma mark -
#pragma mark - ERROR CODES DEFINES

#define ERROR_CODE__OAUTH_TOKEN_RESET   106
#define ERROR_CODE_PIN_MIS_MATCH 70011

#pragma mark -
#pragma mark - NOTIFICATION KEY DEFINES

#define NOTIFICATION_KEY__LOGGED_IN                                     @"NOTIFICATION_KEY__LOGGED_IN"
#define NOTIFICATION_KEY__LOGGED_OUT                                    @"NOTIFICATION_KEY__LOGGED_OUT"
#define NOTIFICATION_KEY__ALERT_COUNT_STATUS                            @"NOTIFICATION_KEY__ALERT_COUNT_STATUS"
#define NOTIFICATION_KEY__ALERT_RELOAD                                  @"NOTIFICATION_KEY__ALERT_RELOAD"
#define NOTIFICATION_KEY__ALERT_COUNT                                   @"NOTIFICATION_KEY__ALERT_COUNT"
#define NOTIFICATION_KEY__SPLIT_CARD_CLOSE_KEYBOARD                     @"NOTIFICATION_KEY__SPLIT_CARD_CLOSE_KEYBOARD"
#define NOTIFICATION_KEY__USER_LOCATION_PERMISSION_STATUS_CHANGE        @"NOTIFICATION_KEY__USER_LOCATION_PERMISSION_STATUS_CHANGE"
#define NOTIFICATION_KEY__RESET_MAPS_SCHEDULES_NAV_HEADER_NOTIFICATION  @"NOTIFICATION_KEY__RESET_MAPS_SCHEDULES_NAV_HEADER_NOTIFICATION"
#define NOTIFICATION_KEY__PREFFERED_RIVER_DID_CHANGE                    @"NOTIFICATION_KEY__PREFFERED_RIVER_DID_CHANGE"
#define NOTIFICATION_KEY_VIRTUALCARD_TRASFERED @"NOTIFICATION_KEY_VIRTUALCARD_TRASFERED"
#define NOTIFICATION_KEY_REQUIRES_FAREMEDIA_RELOAD @"NOTIFICATION_KEY_REQUIRES_FAREMEDIA_RELOAD"

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

#define fEQUAL(a,b) (fabs((a) - (b)) < FLT_EPSILON)
#define fEQUAL_ZERO(a) (fabs(a) < FLT_EPSILON)
#define fLESS_THAN(a,b) (fabs(a) < fabs(b)+FLT_EPSILON)
#define fLESS_THAN_OR_EQUAL(a,b) fLESS_THAN(a,b) || fEQUAL(a,b)

#define UIViewAutoresizingFlexibleAll               \
        UIViewAutoresizingFlexibleBottomMargin|     \
        UIViewAutoresizingFlexibleHeight|           \
        UIViewAutoresizingFlexibleLeftMargin|       \
        UIViewAutoresizingFlexibleRightMargin|      \
        UIViewAutoresizingFlexibleTopMargin|        \
        UIViewAutoresizingFlexibleWidth;


#define kPRODUCT_ATTRIBUTE_ORIGIN_ID @"origin_id"
#define kPRODUCT_ATTRIBUTE_ORIGIN_NAME @"origin_name"
#define kPRODUCT_ATTRIBUTE_ORIGIN_CODE @"origin_code"

#define kPRODUCT_ATTRIBUTE_DESTINATION_ID @"destination_id"
#define kPRODUCT_ATTRIBUTE_DESTINATION_NAME @"destination_name"
#define kPRODUCT_ATTRIBUTE_DESTIANTION_CODE @"destination_code"

#define kPRODUCT_ATTRIBUTE_AGENCY_ID @"agency_id"
#define kPRODUCT_ATTRIBUTE_FARE_CLASS @"fare_class"
#define kKEY_FARE_CLASS_ONE_WAY @"One-way"
#define kKEY_FARE_CLASS_ROUND_TRIP @"Round-trip"
#define kKEY_FARE_CLASS_COMMUTER @"Commuter"
#define kKEY_TICKET_VOUCHER_VALUE @"VOUCHER_CODE"

#define kALERT_BUTTON_TITLE_OK NSLocalizedStringFromTableInBundle(@"OK", @"Localizable", [NSBundle bundleWithIdentifier:@"co.bytemark.BMTCoreSDK"], @"default confirmation button title")
#define kALERT_BUTTON_TITLE_DISMISS NSLocalizedStringFromTableInBundle(@"Dismiss", @"Localizable", [NSBundle bundleWithIdentifier:@"co.bytemark.BMTCoreSDK"], @"default cancel button title")
#define kALERT_BUTTON_TITLE_CANCEL NSLocalizedStringFromTableInBundle(@"Cancel", @"Localizable", [NSBundle bundleWithIdentifier:@"co.bytemark.BMTCoreSDK"], @"")
#define kALERT_TITLE_ATTENTION NSLocalizedStringFromTableInBundle(@"Attention", @"Localizable", [NSBundle bundleWithIdentifier:@"co.bytemark.BMTCoreSDK"], @"")

#pragma mark - Use Pass Screen

#define kKEY_TAB_TITLE @"TitleForTab"
#define kKEY_AVAILABLE_TAB_TITLE NSLocalizedStringFromTableInBundle(@"Available", @"Localizable", [NSBundle bundleWithIdentifier:@"co.bytemark.BMTCoreSDK"], @"default title for Available Tab")
#define kKEY_ACTIVE_TAB_TITLE NSLocalizedStringFromTableInBundle(@"Active", @"Localizable", [NSBundle bundleWithIdentifier:@"co.bytemark.BMTCoreSDK"], @"default title for Active Tab")

#define kKEY_SECTION_TYPE @"SectionType"

#pragma mark - Card Screen
#define kSCREEN_AUTOLOADS @"autoloads"
#define kSCREEN_TRANSFER_PASS @"transfer_pass"
#define kAUTOLOAD_CARD_UUID @"AUTOLOAD_CARD_UUID"
#define kSCREEN_AUTO_RENEWALS @"pass_auto_renewals"
#define kSCREEN_AVAILABLE_PASSES @"available_passes"
#define kOPTION_UPASS_VALIDATION @"upass_validation"
#define kOPTION_REMOVE_CARD @"remove_physical_card"
#define kSCREEN_FARE_CAPPING  @"fare_capping"
#define kSCREEN_CONNECT_FARE_CAPPING @"connect_fare_capping"
#define kSCREEN_TRANSFER_BALANCE @"transfer_balance"
#define kSCREEN_BLOCK_UNBLOCK @"block_unblock_card"
#define kGENERAL @"General"
#define kKEY_BLOCK_STATE 2
#define kCOMMUTER_BENEFITS_PRIMARY @"Commuter Benefits (primary)"
#define kBUTTON_CONFIRM NSLocalizedStringFromTableInBundle(@"Confirm", @"Localizable", [NSBundle bundleWithIdentifier:@"co.bytemark.BMTCoreSDK"], @"")
#define kDEFAULT_CARD_SECTION 0
#define kDEFAULT_SECTION 1
#define kSCREEN_TRANSFER_VIRTUAL_CARD @"transfer_virtual_card"
#define kCOMMUTER_BENEFITS_PRIMARY @"Commuter Benefits (primary)"

#pragma mark - INCOMM
#define kNOTIFICATION_INCOMM_REFRESH_PASSES @"INCOMM_REFRESH_PASSES"

#pragma mark - Top Tab UI
#define kBUTTON_SHADOW_COLOR [[UIColor colorWithRed:0 green:0 blue:0 alpha:0.20f] CGColor]
#define kBUTTON_SHADOW_OFFSET CGSizeMake(0, 1.0f)
#define kBUTTON_SHADOW_RADIUS 2.0f
#define kBUTTON_SHADOW_OPACITY 1.0f

#pragma mark - Font

#define kDEFAULT_ARIAL_FONT @"Arial"
#define kDEFAULT_ARIAL_BOLD_FONT @"Arial-BoldMT"


#define kVALUE_V3_SCREEN @"V3 Screen"
#define kVALUE_QR_CODE @"QR Code"
#define kVALUE_PHOTO_ID @"Photo ID"
#define kVALUE_DATA_SCREEN @"Data Screen"

#endif
