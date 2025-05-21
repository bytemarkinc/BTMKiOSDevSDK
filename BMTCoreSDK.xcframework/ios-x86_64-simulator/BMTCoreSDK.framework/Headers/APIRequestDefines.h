//
//  APIEndpointDefines.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 5/15/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#ifndef BMPassSDK_APIEndpointDefines_h
#define BMPassSDK_APIEndpointDefines_h


#pragma mark - Methods

#define kGET_METHOD @"GET"
#define kPUT_METHOD @"PUT"
#define kPOST_METHOD @"POST"
#define kDELETE_METHOD @"DELETE"


#pragma mark - Endpoints

#define kPASSES_ENDPOINT @"passes"
#define kCARDS_ENDPOINT @"cards"
#define kORDERS_ENDPOINT @"orders"
#define kPAYPAL_ENDPOINT @"paypal_accounts"
#define kCONFIRM_ORDER_ENDPOINT @"v3.0/orders/%@"
#define kGET_CHILD_ORGNIZATIONS_ENDPOINT @"/organizations"

#pragma mark - Security Question Endpoints

#define kSECURITY_QUESTION_LIST_ENDPOINT @"security_questions"
#define kSECURITY_QUESTION_SAVED_LIST_ENDPOINT @"users/security_questions"


#pragma mark - Overture API Endpoints

/* Login */
#define kKEY_CLIENT_ID @"client_id"
#define kKEY_AII @"aii"
#define kKEY_OSI @"osi"
#define kKEY_DEVICE_MODEL @"device_model"
#define kKEY_DEVICE_OS @"device_os"
#define kKEY_DEVICE_OS_VERSION @"device_os_version"
#define kKEY_APP_VERSION @"app_version"
#define kKEY_REDIRECT_URI @"redirect_uri"
#define kKEY_REPSONSE_TYPE @"response_type"
#define kKEY_DEVICE_NICKNAME @"device_nickname"
#define kKEY_DEVICE_TIME @"device_time"
#define kKEY_USER_LOGIN_ENDPOINT @"users/login"
#define kKEY_USER_SIGN_UP_ENDPOINT @"users"
#define kKEY_UPDATE_USER_ENDPOINT @"users"
#define kKEY_UPDATE_USER_ACCOUNT_DATA_ENDPOINT @"users/useraccountdata"
#define kKEY_USER_CHANGE_PASSWORD_ENDPOINT @"users/change_password"
#define kKEY_USER_RESET_PASSWORD_ENDPOINT @"users/reset_password_request"
#define kKEY_LOGIN_TYPE @"login_type"
#define kKEY_SIGNUP_TYPE @"registration_type"

#define kKEY_SERVICE @"service"
#define kKEY_ALLOW @"Allow"
#define kKEY_SERVICE_ACCESS_TOKEN @"service_access_token"

/* DAIU */
#define kREAD_DAIU_METHOD kPOST_METHOD
#define kREAD_DAIU_ENDPOINT @"device_app_installations"

/* User Info */
#define kREAD_USER_INFO_METHOD kGET_METHOD
#define kREAD_USER_INFO_ENDPOINT @"users/self"

/* Products */
#define kLIST_PRODUCTS_METHOD kGET_METHOD
#define kLIST_PRODUCTS_ENDPOINT @"products"

/* Cards */
#define kADD_CARDS_METHOD kPOST_METHOD
#define kADD_CARDS_ENDPOINT kCARDS_ENDPOINT

#define kADD_V2_PAYMENT_METHOD_ENDPOINT @"v2.0/payment_methods"

#define kDELETE_CARDS_METHOD kDELETE_METHOD
#define kDELETE_CARDS_ENDPOINT kCARDS_ENDPOINT @"/%@"

#define kDELETE_V2_PAYMENT_METHOD_ENDPOINT @"v2.0/payment_methods/%@"
#define kSAVE_DEFAULT_PAYMENT_METHOD_ENDPOINT @"v2.0/payment_methods/%@"

#define kADD_PAYPAL_METHOD kPOST_METHOD
#define kADD_PAYPAL_ENDPOINT kPAYPAL_ENDPOINT

#define kDELETE_PAYPAL_METHOD kDELETE_METHOD
#define kDELETE_PAYPAL_ENDPOINT kPAYPAL_ENDPOINT @"/%@"

#define kACCEPTED_PAYMENT_METHODS_METHOD kGET_METHOD
#define kACCEPTED_PAYMENT_METHODS_ENDPOINT @"accepted_payment_methods"

#define kPAYPAL_CLIENT_TOKEN_METHOD kGET_METHOD
#define kPAYPAL_CLIENT_TOKEN @"paypal_client_token"

/* Fare Medium */
#define kADD_FARE_MEDIUM_METHOD kPOST_METHOD

/* Fare Type*/
#define kLIST_FARE_TYPE_METHOD @"fare_type"

/* Payment Methods */
#define kLIST_PAYMENTMETHOD_METHOD kGET_METHOD
#define kLIST_PAYMENTMETHOD_ENDPOINT @"payment_methods"
#define kKEY_PAYMENT @"payment"
#define kKEY_V2_PAYMENT_METHOD_ENDPOINT @"v2.0/payment_methods"
#define kSAVE_DEFAULT_PAYMENT_METHOD_ENDPOINT_V4 @"/v4.0/payment_methods"
#define kLINK_BANK_CARD @"/faremedia/link_bank_card"

/* wallet config */
#define kWALLET_MERCHANT_LOAD_CONFIG @"wallet/merchant/load_config"
#define kWALLET_AUTOLOAD @"/wallet_autoload"
#define kWALLET @"/wallet"

/* Orders */
#define kCREATE_ORDER_ENDPOINT @"/v3.0/orders"

#define kLIST_ORDER_RECEIPTS_METHOD kGET_METHOD
#define kLIST_ORDER_RECEIPTS_ENDPOINT @"/v4.0/orders"

#define kLIST_EMV_CARD_TRANSACTIONS_METHOD kGET_METHOD
#define kLIST_EMV_CARD_TRANSACTIONS_ENDPOINT @"/emv/transactions"

#define kPROCESS_ORDERS_METHOD kPOST_METHOD
#define kPROCESS_ORDERS_ENDPOINT kORDERS_ENDPOINT

#define kREORDER_METHOD kPOST_METHOD
#define kREORDER_ENDPOINT kORDERS_ENDPOINT @"/%@/reorders"

/* Passes */
#define kLIST_PASSES_METHOD kGET_METHOD
#define kLIST_PASSES_ENDPOINT kPASSES_ENDPOINT

#define kLIST_PASS_HTML5_V3_TEMPLATE_METHOD kGET_METHOD
#define kLIST_PASS_HTML5_V3_TEMPLATE_ENDPOINT @"visual_pass_templates/%@"

#define kLIST_PASS_JS_LIBRARY_METHOD kGET_METHOD

#define kACTIVATE_PASS_SET_METHOD kPOST_METHOD
#define kACTIVATE_PASS_SET_ENDPOINT kPASSES_ENDPOINT @"/%@/uses"

#define kCHAIN_ACTIVATE_PASS_SET_METHOD kPOST_METHOD
#define kCHAIN_ACTIVATE_PASS_SET_ENDPOINT kPASSES_ENDPOINT @"/$$data.pass_set.uuid$$/uses"

#define kPASS_TRANSFER_METHOD kPUT_METHOD
#define kPASS_TRANSFER_ENDPOINT kPASSES_ENDPOINT @"/%@/locations/%@"

#define kSEND_PASS_METHOD kPOST_METHOD
#define kSEND_PASS_ENDPOINT @"/v3.0/passes/%@/sendPass"
#define kKEY_RECEIVER_EMAIL @"receiver_email"

/* History Passes */
#define kHISTORY_PASSES_ENDPOINT @"/v4.0/passes"
#define kHISTORY_PASSES_METHOD kGET_METHOD
#define kITEMS_PER_PAGE @"per_page"
#define kHISTORY_PASS_STATUS @"status"
#define kHISTORY_PASS_PAGE @"page"
#define kHISTORY_PASS_RESEND_RECEIPT_ENDPOINT @"/v4.0/orders/%@/receipt_emails"
#define kHISTORY_PASS_RESEND_RECEIPT_METHOD kPOST_METHOD

/* Unattached Passes */
#define kUNATTACHED_PASSES_ENDPOINT @"/legacy_passes"
#define kUNATTACHED_PASSES_METHOD kGET_METHOD
#define kITEMS_PER_PAGE @"per_page"
#define kUNATTACHED_PASS_STATUS @"status"
#define kUNATTACHED_PASS_PAGE @"page"
#define kATTACH_PASSES_TO_FAREMEDIUM @"/faremedia/attach_pass"

/* Sync */
#define kSYNCHRONIZE_PASS_USE_METHOD kPOST_METHOD
#define kSYNCHRONIZE_PASS_USE_ENDPOINT @"/pass_use_batches"

/* Notifications */
#define kLIST_NOTIFICATIONS_METHOD kGET_METHOD
#define kLIST_NOTIFICATIONS_ENDPOINT @"/notifications"

/* Notification Settings */
#define kLIST_NOTIFICATION_SETTINGS_ENDPOINT @"/notification_settings"
#define kUPDATE_NOTIFICATION_SETTING_ENDPOINT @"/notification_permissions"

/* App Info Update */
#define kAPP_INFO_UPDATE_METHOD kPUT_METHOD
#define kAPP_INFO_UPDATE_ENDPOINT @"/device_app_installations/self"

/* Events */
#define kEVENTS_METHOD kGET_METHOD
#define kEVENT_ENDPOINT @"/v1.1/events"
#define kEVENT_PRIMARY_EVENT @"primary_event"

/* Product Filter */
#define kPRODUCT_FILTER_METHOD kPOST_METHOD
#define kPRODUCT_FILTER_ENDPOINT @"/v3.0/product/search"
#define kPRODUCT_FILTER_ENDPOINT_WITH_CHILD_ORG @"/v3.0/product/search?child_organization_uuid=%@"
#define kPRODUCT_DEEPLINK_SEARCH_ENDPOINT @"product_search/%@"

/* Photo */
#define kKEY_LIST_PHOTO @"photo_key"
#define kKEY_LIST_PHOTO_ENDPOINT @"user_photos"
#define kKEY_LIST_PHOTO_METHOD kGET_METHOD
#define kKEY_UPLOAD_PHOTO_ENDPOINT @"user_photos"
#define kKEY_UPLOAD_PHOTO_METHOD kPOST_METHOD

/* Chain */
#define kCHAIN_METHOD kPOST_METHOD
#define kCHAIN_ENDPOINT @"chain"

/* Fare Medium */
#define kKEY_FARE_MEDIA_ENDPOINT @"faremedia"
#define kKEY_FARE_MEDIA_UPDATE_CARD_STATUS_ENDPOINT @"faremedia/update_state"
#define kKEY_FARES_ENDPOINT kKEY_FARE_MEDIA_ENDPOINT @"/%@/" @"fares"
#define kKEY_ADD_FARE_MEDIA_ENDPOINT kKEY_FARE_MEDIA_ENDPOINT @"/add_faremedia_card"
#define kKEY_FARE_MEDIA_CAPPING_ENDPOINT kKEY_FARE_MEDIA_ENDPOINT @"/%@/fare_cappingpots"

#define kKEY_FARES_CATEGORY_METHOD kGET_METHOD
#define kKEY_FARES_CATEGORY_ENDPOINT kKEY_FARE_MEDIA_ENDPOINT @"/farecategories"
#define kKEY_FARES_VIRTUAL_CARD_METHOD kPOST_METHOD
#define kKEY_FARES_VIRTUAL_CARD_ENDPOINT kKEY_FARE_MEDIA_ENDPOINT @"/category_faremedia"
#define kKEY_FARES_TRANSACTIONS kORDERS_ENDPOINT @"/transactions"
#define kKEY_AUTOLOADS kORDERS_ENDPOINT @"/autoloads"

#define kKEY_FARE_MEDIA_VIRTUALCARDS_ENDPOINT @"faremedia/virtualcards"
#define kKEY_TRANSFER_VIRTUAL_CARD_ENDPOINT @"faremedia/%@/transfer"
#define kKEY_ACTIVATE_FARE_ENDPOINT @"faremedia/%@/fare_activation"
#define kTRANSFER_VIRTUAL_CARD_METHOD kPOST_METHOD

/* Private Key */
#define kPRIVATE_KEY_ENDPOINT @"private_keys"

/* Voucher code */
#define kVOUCHER_CODE_ENDPOINT @"offer_code"

/* Ticket Voucher Code  */
#define kTICKET_VOUCHER_CODE_METHOD kPUT_METHOD
#define kTICKET_VOUCHER_CODE_ENDPOINT @"/v3.0/voucher_orders"

/* Ticket Voucher Code  */
#define kTRANSFER_WALLET_AMOUNT_ENDPOINT @"/transfer_wallet_funds"

/* Delete Account */
#define kDELETE_ACCOUNT_ENDPOINT @"users/deactivate"

/* RemoteNotification */
#define kSEND_PROVIDER_DEVICE_TOKEN_METHOD kPOST_METHOD
#define kSEND_PROVIDER_DEVICE_TOKEN_ENDPOINT @"/device_app_installations"

/* App Support */
#define kAPP_SUPPORT_METHOD kPOST_METHOD
#define kAPP_SUPPORT_ENDPOINT @"/v4.0/customer_support_emails"

#pragma mark - Account API Endpoints

#define kSOCIAL_SIGN_IN_METHOD kGET_METHOD
#define kSOCIAL_SIGN_IN_ENDPOINT @"/oauth/client/"

/* Promo Code */
#define kPROMO_CODE_POST_ENDPOINT @"v2.0/carts"

/* Pass Subscriptions */
#define kKEY_LIST_SUBSCRIPTIONS_METHOD kGET_METHOD
#define kLIST_SUBSCRIPTION_ENDPOINT @"/subscriptions"
#define kUPDATE_SUBSCRIPTION_ENDPOINT @"/subscriptions/%@"
#define kUPDATE_SUBSCRIPTION_METHOD kPUT_METHOD

/* Pass Auto Relewal */
#define kKEY_LIST_PASS_AUTO_RENEW_METHOD kGET_METHOD
#define kLIST_PASS_AUTO_RENEW_ENDPOINT @"/subscriptions"
#define kUPDATE_PASS_AUTO_RENEW_ENDPOINT @"/subscriptions/%@"
#define kUPDATE_PASS_AUTO_RENEW_METHOD kPUT_METHOD

/* Resend email verification */
#define kRESEND_EMAIL_VERIFICATION_METHOD kPOST_METHOD
#define kRESEND_EMAIL_VERIFICATION_ENDPOINT @"users/resend_account_verification"

/* Update PIN  */
#define kUPDATE_PIN_ENDPOINT @"users/update_phone_pin"

/* Organization Configuration  */
#define kFETCH_ORGANIZATION_CUSTOM_CONFIG_ENDPOINT @"/v4.0/org_config?config_type=CUSTOMER_CONFIG"
#define kFETCH_ORGANIZATION_ENDPOINT @"/org_config"

/* Get Incomm Retailers List */
#define kGET_INCOMM_RETAILERS_STORES_ENDPOINT @"/v4.0/incomm_stores"
#define kGET_INCOMM_BARCODE_ENDPOINT @"/v4.0/incomm_barcode"

/* Transfer Balance  */
#define kTRANSFER_BALANCE_ENDPOINT @"faremedia/balance_transfer"

/* Transfer Balance  */
#define kTRANSFER_PASSES_ENDPOINT @"/faremedia/%@/transfer_passes"

/* UPass  */
#define kINSTITIUTIONS_LIST_ENDPOINT @"/institution_accounts"
#define kVALIDATE_INSTITUTION_ENDPOINT @"/institution_accounts/%@/validate"

/* NMI Payment Method web URL  */
#define kNMI_PAYMENT_URL @"/nmiform"

#pragma mark - Logout
#define kKEY_LOGOUT_ENDPOINT @"/users/logout"

#pragma mark - Velocia Login
#define kKEY_VELOCIA_SIGNIN_ENDPOINT @"/third_party/velocia/users/sign_in"

#pragma mark - 2FA
#define k2FA_SETUP_ENDPOINT @"/mfa/setup"
#define k2FA_RESEND_CODE_ENDPOINT @"/mfa/resend"
#define k2FA_VALIDATE_ENDPOINT @"/mfa/validate"
#define k2FA_SIGNIN_ENDPOINT @"/mfa/signin"
#define k2FA_UPDATE_CONFIG_ENDPOINT @"/mfa/user/config"

#pragma mark - update Locale
#define kKEY_UPDATE_LOCALE_ENDPOINT @"/users"

#pragma mark - Visual Validation Theme
#define kUSE_SCREEN_VISUAL_VALIDATION_ENDPOINT @"use_screen_visual_validations"

#pragma mark - Parameters

#define kKEY_BLOCK_REQUEST_STATE @"2"
#define kKEY_UNBLOCK_REQUEST_STATE @"1"
#define kKEY_BLOCK_UNBLOCK_REQUEST_STATE_PARAM @"state"
#define kKEY_BLOCK_UNBLOCK_REQUEST_UUID_PARAM @"uuid"
#define kKEY_EVENT_UUID @"event_uuid"
#define kKEY_ROUTE_ID @"route_id"
#define kKEY_TYPE @"type"
#define kKEY_OAUTH_TOKEN @"oauth_token"
#define kKEY_ACCESS_TOKEN @"access_token"
#define kKEY_PASSES @"passes"
#define kKEY_PASS_UUIDS @"pass_uuids"
#define kKEY_CLIENT_ID @"client_id"
#define kKEY_MULTI @"multi"
#define kKEY_TOKEN @"token"
#define kKEY_FACEBOOK @"facebook"
#define kKEY_PASS_UUID @"pass_uuid"
#define kKEY_EVENT_UUID @"event_uuid"
#define kKEY_TIME_USED @"time_used"
#define kKEY_LATITUDE @"lat"
#define kKEY_LONGITUDE @"lon"
#define kKEY_ADDRESS @"address"
#define kKEY_RADIUS @"radius"
#define kKEY_TRACE_NUMBER @"trace_number"
#define kKEY_PASS_USES @"pass_uses"
#define kKEY_ORDER_UUID @"order_uuid"
#define kKEY_PASS_USE_NUMBER @"pass_use_number"
#define kKEY_AUTHORIZATION @"Authorization"
#define kKEY_CREDIT_CARD_UUID @"credit_card_uuid"
#define kKEY_NEW_PIN @"new_pin"
#define kKEY_CONFIRM_PIN @"confirm_new_pin"
#define kKEY_FROM_UUID @"from_uuid"
#define kKEY_TO_UUID @"to_uuid"
#define kKEY_AMOUNT @"amount"
#define kKEY_FAREMEDIA_UUID @"faremedia_uuid"
#define kKEY_REDIRECT_URL @"redirectUrl"
#define kKEY_UPDATE_LOCALE @"locale"
#define kKEY_EMAIL @"email"
#define kKEY_FIRST_NAME @"first_name"
#define kKEY_LAST_NAME @"last_name"
#define kKEY_IS_COMMUTER_BENEFIT_FUNDS @"is_commuter_benefit_funds"
#define kKEY_CHILD_ORGANIZATION_UUID @"child_organization_uuid"
#define kKEY_IS_2FA_ENABLED @"is_2fa_enabled"
#define kKEY_MOBILE_NUMBER @"mobile_number"
#define kKEY_AUTH_TYPE @"auth_type"
#define kKEY_VERIFICATION_KEY @"verification_key"
#define kKEY_VERIFICATION_CODE @"verification_code"
#define kKEY_USER_UUID @"user_uuid"
#define kKEY_CONFIG_KEY @"config_key"
#define kKEY_CONFIG_VALUE @"config_value"
#define kKEY_2FA_ENROLLMENT_STATUS @"mfa_enrollment_status"
#define kKEY_2FA_AUTHENTICATION_CONFIG @"mfa_config"
#define kKEY_REQUIRED @"required"
#define kKEY_LATITUDE_KEY @"latitude"
#define kKEY_LONGITUDE_KEY @"longitude"
#define kKEY_TIMESTAMP @"timestamp"
#define kKEY_DEVICE_IDENTIFIER @"device_identifier"
#define kKEY_SERVICE_LEVEL @"service_level"
#define kKEY_TRANSIT_DATA @"transit_data"
#define kKEY_DEVICE_TYPE @"device_type"

#pragma mark - Upass
#define kKEY_INVITE_CODE @"invite_code"

#pragma mark - Transfer Virtual Card
#define kKEY_MOBILE_CONFIG @"mobile_config"

#pragma mark - V2 payment methods
#define kKEY_V2_CARD @"card"
#define kKEY_PAYPAL_ACCOUNT @"paypal_account"
#define kKEY_PAYMENT_METHOD @"payment_method"
#define kKEY_PAYPAL_ACCOUNTS @"paypal_accounts"

#pragma mark - Ticket Voucher Order Type
#define kKEY_TVM_VOUCHER @"tvm_voucher_order"

#pragma mark - Fare Capping Details
#define kKEY_FARECAP_DETAILS @"/v4.0/customer/farecappings"

#pragma mark - Remove Card
#define kKEY_REMOVE_CARD @"/faremedia/delete_physical_card"

/* Close Account */
#define kCLOSE_ACCOUNT_ENDPOINT @"users/deactivate"

/* Delete Account */
#define kLINKED_ORGANIZATIONS_ENDPOINT @"/users/organizations"
#define kDELETE_ALL_ACCOUNTS_ENDPOINT @"/users/delete"

#pragma mark - Chain

#define kCHAIN_MAX_REQUESTS 5

#pragma mark - Discount

#define kKEY_DISCOUNT_ENDPOINT  @"/v4.0/thirdparty/deep_link/passes/discount_calculation"

#pragma mark - Deep Link Credit Pass

#define kKEY_CREDIT_PASS_ENDPOINT  @"/v4.0/passes/credit"

#endif
