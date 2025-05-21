//
//  JSONKeyDefines.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 8/20/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#ifndef BMPassSDK_JSONKeyDefines_h
#define BMPassSDK_JSONKeyDefines_h

#pragma mark - -- Shared --

#define kKEY_UUID @"uuid"
#define kKEY_ID @"id"
#define kKEY_NAME @"name"
#define kKEY_LONG_NAME @"long_name"
#define kKEY_DISPLAY_NAME @"display_name"
#define kKEY_ATTRIBUTES @"attributes"
#define kKEY_STATUS @"status"
#define kKEY_EXPIRATION_RULE @"expiration_rule"
#define kKEY_USER_UUID @"user_uuid"
#define kKEY_NICKNAME @"nickname"
#define kKEY_EMAIL @"email"
#define kKEY_PHONE @"phone"
#define kKEY_PHOTO @"photo"
#define kKEY_FULL_NAME @"full_name"
#define kKEY_PURCHASED_DATE @"order_time_purchased"
#define kKEY_TIME_PURCHASED @"time_purchased"
#define kKEY_TYPE @"type"
#define kKEY_START_DATE @"start_date"
#define kKEY_END_DATE @"end_date"
#define kKEY_LAST_ACCESSED @"last_accessed"
#define kKEY_SEEN_STATUS @"seen_status"
#define kKEY_TIME_MODIFIED @"time_modified"
#define kKEY_PHOTO @"photo"
#define kKEY_DATA @"data"
#define kKEY_TIME_CREATED @"time_created"
#define kKEY_REVIEWER @"reviewer"
#define kKEY_TIME_REVIEWED @"time_reviewed"
#define kKEY_USERNAME @"username"
#define kKEY_LAST_LOGIN_TIME @"last_login_time"
#define kKEY_MOBILE @"mobile"
#define kKEY_TOTAL_LOGINS @"total_logins"
#define kKEY_TIMEZONE @"timezone"
#define kKEY_CLASS_TYPE @"class_type"
#define kKEY_THEME @"theme"
#define kKEY_PRODUCT_ENABLER @"product_enablers"
#define kKEY_PROCESSOR @"processor"
#define kKEY_EMAIL_CONFIRMED @"email_confirmed"
#define kKEY_ORGANIZATION_DETAILS @"organization_details"
#define kKEY_REQUIRES_EMAIL_VERIFICATION @"requires_email_verification"
#define kKEY_PASSWORD @"password"
#define kKEY_CONFIRM_PASSWORD @"confirm_password"
#define kKEY_CONFIRM_EMAIL @"confirm_email"
#define kKEY_ELERTS_TOKEN @"elerts_token"
#define kKEY_COMPANY_NAME @"company_name"

#pragma mark - Statuses
#define kKEY_STATUS_APPROVED @"ACCEPTED"
#define kKEY_STATUS_PENDING @"PENDING"
#define kKEY_STATUS_REJECTED @"REJECTED"


#pragma mark - -- Passes --

#define kINFINITE_USES 0
#define kKEY_LOCAL_USES @"local_uses"
#define kKEY_ALLOWED_USES @"allowed_uses"
#define kKEY_CUSTOMER @"customer"
#define kKEY_CUSTOMER_UUID @"customer_uuid"
#define kKEY_EVENTS @"events"
#define kKEY_EXPIRATION @"expiration"
#define kKEY_EXPIRATION_RULE_UUID @"expiration_rule_uuid"
#define kKEY_FIRST_USE @"first_use"
#define kKEY_ISSUER @"issuer"
#define kKEY_ISSUER_UUID @"issuer_uuid"
#define kKEY_LABEL_NAME @"label_name"
#define kKEY_LABEL_SHORT_NAME @"label_short_name"
#define kKEY_PRODUCT_REQUIRES_PHOTO_STATUS @"product_requires_photo_status"
#define kKEY_LOCKED_TO_DEVICE @"locked_to_device"
#define kKEY_LOCKED_TO_THIS_DEVICE @"locked_to_this_device"
#define kKEY_LOCKED_TO_DEVICE_NICKNAME @"locked_to_device_nickname"
#define kKEY_MERCHANT_CURRENCY @"merchant_currency"
#define kKEY_LOCKED_TO_DEVICE_EXPIRATION_TIME @"locked_to_device_expiration_time"
#define kKEY_ORDER_ITEM @"order_item"
#define kKEY_ORDER_UUID @"order_uuid"
#define kKEY_PARENT_LABEL_NAME @"parent_label_name"
#define kKEY_PARENT_LABEL_SHORT_NAME @"parent_label_short_name"
#define kKEY_PASS_EVENTS @"pass_events"
#define kKEY_SERIAL @"serial"
#define kKEY_TOKEN @"token"
#define kKEY_USES_COUNT @"uses_count"
#define kKEY_LOCKED_TO_DEVICE_MODEL @"locked_to_device_model"
#define kKEY_LOCKED_TO_DEVICE_ID @"locked_to_device_app_installation_uuid"
#define kKEY_PRODUCT_ENABLERS @"product_enablers"
#define kKEY_ACTIVATION_RESTRICTIONS @"activation_restrictions"
#define kKEY_ENCRYPTED_PAYLOAD @"encrypted_payload"
#define kKEY_BARCODE_PAYLOAD_PREFIX @"barcode_payload_prefix"
#define kKEY_SAVED_LOCATION @"saved_location"
#define kKEY_IATA_PAYLOAD @"iata_payload"
#define KKEY_IS_ACTIVATED @"isActivated"
#define KKEY_STATUS_USABLE @"USABLE"
#define KKEY_STATUS_EXPIRED @"EXPIRED"
#define KKEY_STATUS_USES_GONE @"USES_GONE"
#define kKEY_STATUS_USING @"USING"
#define kKEY_PRODUCT_REPURCHASE_ENABLED @"product_repurchase_enabled"
#define kKEY_PRODUCT_CONFIG @"product_config"
#define kKEY_SEND_TICKET_TO_USER_ENABLED @"send_ticket_to_user_enabled"
#define kKEY_PRODUCT_TYPE @"product_type"
#define kKEY_BCYCLE_PRODUCT @"B-cycle"
#define kKEY_BCYCLE_DEEP_LINK @"bcycle_deep_link"
#define kKEY_ENCRYPTED_PAYLOAD_EXPIRATION  @"payload_expiration"
#define kKEY_RIDER_TYPES  @"rider_types"

#pragma mark - Fare Medium

#define kKEY_FARE_MEDIUMS @"fare_mediums"
#define kKEY_FARE_MEDIUM @"fare_medium"
#define kKEY_FARE_MEDIUM_CARD_NUM @"card_number"
#define kKEY_FARE_MEDIUM_NICK_NAME @"nick_name"

#define kKEY_FARES @"fares"
#define kKEY_CARD_STATE @"state"
#define kKEY_BARCODE_PAYLOAD @"barcode_payload"
#define kKEY_BARCODE_PAYLOAD_V2 @"barcode_payload_v2"
#define kKEY_BANK_CARD_DETAILS @"bank_card_details"
#define kKEY_STORED_VALUE @"stored_value"
#define kKEY_LAST_UPDATED @"last_updated"
#define kKEY_TRANSFER_TIME @"transfer_time"
#define kKEY_CARD_NICKNAME  @"card_nickname"
#define kKEY_SECURITY_CODE  @"security_code"
#define kKEY_FAREMEDIA @"faremedia"
#define kKEY_ACTIVE_FARE_MEDIUM @"is_active_faremedium"
#define kKEY_DISPLAY_MESSAGE @"display_message"
#define kKEY_FARE_MEDIUM_CARD_NUMBER @"printed_card_number"
#define kKEY_FARE_MEDIUM_CAPPING_RESULT @"result"
#define kKEY_PERCENTAGE_VALUE @"percentage_value"
#define kKEY_AUTOLOAD_THRESHOLD_VALUE @"autoload_threshold_value"
#define kKEY_AUTOLOAD_CONFIG_NAME @"autoload_config_name"
#define kKEY_AUTOLOAD_CONFIG_VALUE @"autoload_config_value"
#define kKEY_AUTOLOAD_CONFIG_VALUE_ID @"autoload_config_value_id"
#define kKEY_AUTO_LOAD_VALUE_ID @"auto_load_value_id"
#define kKEY_AUTOLOAD_VALUE @"autoload_value"
#define kKEY_AUTOLOAD_TRIGGERS_WHEN @"autoload_triggers_when"
#define kKEY_FARE_MEDIUM_AUTOLOAD_RESULT @"autoload"
#define kKEY_AUTOLOAD_THRESHOLDVALUE @"autoload_thresholdvalue"
#define kKEY_MISSING_VALUE @"missing_value"
#define kKEY_COUNTING_SERVICE_LEVEL @"count_service_level"
#define kKEY_FREE_RIDE_SERVICE_LEVEL @"free_ride_service_level"
#define kKEY_FARE_MEDIA @"faremedia"
#define kKEY_FARE_MEDIUM_INSTITUTE_ID @"institution_account_id"
#define kKEY_PRE_TAX_BALANCE @"pre_tax_balance"
#define kKEY_POST_TAX_BALANCE @"post_tax_balance"
#define kKEY_REMAINING_TRANSFER_COUNT @"remaining_transfer_count"
#define kKEY_RESET_TRANSFER_DAYS @"reset_transfer_in_days"

#pragma mark - Fare

#define kKEY_FARES @"fares"
#define kKEY_SHORT_DES @"short_description"
#define kKEY_ORG_ID @"org_id"
#define kKEY_IS_ACTIVE @"is_active"
#define kKEY_USES_COUNT @"uses_count"
#define kKEY_ALLOWED_USES @"allowed_uses"
#define kKEY_ACTIVATION_TIME @"activation_time"
#define kKEY_ACTIVE_FARE @"active_fare"
#define kKEY_IS_TRANSFER_POSSIBLE @"is_transfer_possible"

#pragma mark - FareMediumCategory

#define kKEY_FARE_MEDIA_Category @"farecategories"
#define kKEY_FARE_CATEGORY_NAME @"farecategory_name"
#define kKEY_FARE_CATEGORY_ID @"farecategory_id"
#define kKEY_FARE_MEDIA_ID @"faremedia_id"
#define kKEY_FARE_MEDIA_NICKNAME @"faremedia_nickname"
#define kKEY_FARE_MEDIA_CATEGORY @"category"
#define kKEY_FARECATEGORY @"fare_category"

#pragma mark - Fare Medium Transactions

#define kKEY_TRANSACTIONS @"transactions"
#define kKEY_BALANCE @"balance"
#define kKEY_LOCATION @"location"
#define kKEY_TIME @"time"
#define kKEY_TRANSACTION_TYPE @"transaction_type"

#pragma mark - PassEvent

#define kKEY_PASS_UUID @"pass_uuid"
#define kKEY_PASS @"pass"
#define kKEY_EVENT_UUID @"event_uuid"
#define kKEY_EVENT @"event"
#define kKEY_DURATION @"duration_expiration"
#define kKEY_DURATION_RULE @"duration_rule"
#define kKEY_DURATION_RULE_UUID @"duration_rule_uuid"
#define kKEY_EXPIRATION @"expiration"
#define kKEY_EXPIRATION_RULE_UUID @"expiration_rule_uuid"
#define kKEY_WEIGHT @"weight"

#pragma mark - Kapsch Payload

#define kKEY_KAPSCH_PAYLOAD @"kapsch_payload"
#define kKEY_FARE_DATA @"fare_data"
#define kKEY_RECORD_ID @"record_id"
#define kKEY_RECORD_VERSION @"record_version"
#define kKEY_RECORD_LENGTH @"record_length"
#define kKEY_ACTIVATION_TIMESTAMPS_DATA @"activation_timestamps_data"
#define kKEY_QR_CODE_DATA @"qr_code_data"
#define kKEY_UNIQUE_MESSEGE_ID @"unique_message_id"
#define kKEY_MESSAGE_TYPE_VERSION @"message_type_version"
#define kKEY_RICS_CODE @"rics_code"
#define kKEY_VALID_FROM @"valid_from"
#define kKEY_VALID_TO @"valid_to"
#define kKEY_ENCRYPTED_PRIVATE_KEY @"encrypted_private_key"
#define kKEY_IV @"iv"
#define kKEY_SIG_KEY_VERSION @"signature_key_version"
#define kKEY_RAW @"raw"
#define kKEY_START @"start"

#pragma mark - UIC  NL Payload
#define kKEY_UIC_NL_PAYLOAD @"uic_nl_payload"

#pragma mark - Event

#define kKEY_IMAGE_URL @"image_url"
#define kKEY_DISPLAY_NAME @"display_name"
#define kKEY_SLUG @"slug"
#define kKEY_STOP_ID @"stop_id"
#define kKEY_DESCRIPTION @"description"
#define kKEY_ORGANIZATION_FULL_NAME @"organization_full_name"
#define kKEY_SHORT_NAME @"short_name"
#define kKEY_TYPE @"type"
#define kKEY_TYPE_NAME @"type_name"
#define kKEY_V3_ENABLED @"v3_enabled"
#define kKEY_VENUE_NAME @"venue_name"
#define kKEY_VENUE_URL @"venue_url"
#define kKEY_V3 @"v3"
#define kKEY_V3_TEMPLATES @"v3_templates"
#define kKEY_V3UUID @"uuid"
#define kKEY_DEEP_LINK_URL @"deeplink_url"

#pragma mark - Product Filter
#define kKEY_FILTER_TYPE @"filter_type"
#define kKEY_PLACEHOLDER_TEXT @"placeholder_text"
#define kKEY_FIELD_KEYNAME @"field_keyname"
#define kKEY_FIELD_VALUES @"field_values"
#define kKEY_FILTER_UUID @"filter_uuid"
#define kKEY_FILTER_VALUE @"filter_value"
#define kKEY_APPLIED_FILTERS @"applied_filters"
#define kKEY_KEYWORD_SEARCH @"keyword_search"
#define kKEY_PRODUCT_FILTER_RESULTS @"results"
#define kKEY_RETURN @"return"
#define kVALUE_FILTER @"FILTER"
#define kVALUE_ENTITY @"ENTITY"
#define kKEY_SORT @"sort"
#define kKEY_KEY_NAME @"key_name"
#define kKEY_ORDER @"order"
#define kKEY_APPLIED @"applied"
#define kVALUE_CATEGORY @"category"
#define kVALUE_FACET @"facet"
#define kVALUE_LIST_PRIORITY @"list_priority"
#define kVALUE_ASCENDING @"asc"
#define kKEY_ORIGIN @"Origin"
#define kKEY_DESTINATION @"Destination"
#define kKEY_ORIGIN_NAME @"origin_name"
#define kKEY_DESTINATION_NAME @"destination_name"
#define kKEY_ORIGIN_CODE @"origin_code"
#define kKEY_DESTINATION_CODE @"destination_code"
#define kKEY_REPURCHASE_PRODUCT @"repurchase_product"

#pragma mark - V3

#define kKEY_ANIMATION_DIRECTION @"animation_directions"
#define kKEY_ANIMATION_IMAGE @"animation_images"
#define kKEY_COLORS @"colors"
#define kKEY_END_TIME @"time_end"
#define kKEY_START_TIME @"time_start"
#define kKEY_TEMPLATE_UUID @"template_uuid"
#define kKEY_TEXT_COLOR @"text_color"
#define kKEY_HEADER_COLOR @"header"
#define kKEY_CENTER_COLOR @"center"
#define kKEY_FOOTER_COLOR @"footer"
#define kKEY_DEFAULT_ACTIVE_TICKET_SCREEN @"default_active_ticket_screen"


#pragma mark - HTML5 V3 Templates

#define kKEY_VISUAL_PASS_TEMPLATE @"visual_pass_template"
#define kKEY_HTML5_TITLE @"title"
#define kKEY_HTML5_SOURCE @"html_source"
#define kKEY_HTML5_JS_LIBRARIES @"js_libraries"
#define kKEY_HTML5_VERSION @"version"
#define kKEY_HTML5_PREACTIVATION @"preactivation_required"

#pragma mark - JS Libraries

#define kKEY_JS_LIBRARY_URL @"url"
#define kKEY_JS_LIBRARY_SOURCE @"source"
#define kKEY_JS_LIBRARY_FILENAME @"filename"

#pragma mark - Activation Restrictions

#define kKEY_START_CUTOFF_DAY @"start_cutoff_day"
#define kKEY_START_CUTOFF_DAY_OF_WEEK @"start_cutoff_day_of_week"
#define kKEY_START_CUTOFF_HOUR @"start_cutoff_hour"
#define kKEY_START_CUTOFF_MINUTE @"start_cutoff_minute"
#define kKEY_START_CUTOFF_MONTH @"start_cutoff_month"
#define kKEY_START_CUTOFF_SECOND @"start_cutoff_second"
#define kKEY_START_CUTOFF_YEAR @"start_cutoff_year"
#define kKEY_STOP_CUTOFF_DAY @"stop_cutoff_day"
#define kKEY_STOP_CUTOFF_DAY_OF_WEEK @"stop_cutoff_day_of_week"
#define kKEY_STOP_CUTOFF_HOUR @"stop_cutoff_hour"
#define kKEY_STOP_CUTOFF_MINUTE @"stop_cutoff_minute"
#define kKEY_STOP_CUTOFF_MONTH @"stop_cutoff_month"
#define kKEY_STOP_CUTOFF_SECOND @"stop_cutoff_second"
#define kKEY_STOP_CUTOFF_YEAR @"stop_cutoff_year"
#define kKEY_FIRST_USE_ONLY @"first_activation_only"
#define kKEY_CUTOFF_TIMEZONE @"cutoff_timezone"
#define kKEY_RESTRICTION_EXCEPTIONS @"activation_restriction_exceptions"


#pragma mark - Customer

#define kKEY_USER @"user"
#define kKEY_USER_UUID @"user_uuid"
#define kKEY_DEVICE_APPP_INSTALLATION @"device_app_installation"
#define kKEY_COMPANY @"company"
#define kKEY_PREFER_LANG @"prefered_language"
#define kKEY_VERIFICATION_KEY @"verification_key"
#define kKEY_2FA_ENROLLMENT_STATUS @"mfa_enrollment_status"

#pragma mark - Order Item

#define kKEY_CARD @"order_card"
#define kKEY_ORDER_REFERENCE_NUMBER @"order_reference_number"
#define kKEY_ORDER_UUID @"order_uuid"
#define kKEY_PRICE @"price"
#define kKEY_TOTAL_ORDER_DISCOUNT @"total_order_discount"
#define kKEY_ORDER_ITEM_DISCOUNT @"discount"
#define kKEY_ORDER_ORIGINAL_TOTAL @"original_total"
#define kKEY_ORDER_STATUS_NAME @"status_name"
#define kKEY_PASS_UUID @"pass_uuid"
#define kKEY_SPLIT @"split"
#define kKEY_QUANTITY @"quantity"
#define kKEY_PASSES @"passes"
#define kKEY_Code @"code"
#define kKEY_FAREMEDIUM_ID @"faremedium_id"


#pragma mark - -- Non-Passes --

#pragma mark - Products

#define kKEY_PRODUCT @"product"
#define kKEY_PRODUCT_UUID @"product_uuid"
#define kKEY_ALERT_MESSAGE @"alert_message"
#define kKEY_ALLOWED_ATTRIBUTES @"allowed_attributes"
#define kKEY_ORGANIZATION_FULL_NAME @"organization_full_name"
#define kKEY_ORGANIZATION_UUID @"organization_uuid"
#define kKEY_SALE_PRICE @"sale_price"
#define kKEY_VOUCHERS_ENABLED @"vouchers_enabled"
#define kKEY_LABEL_NAME @"label_name"
#define kKEY_TRANSLATED_PASS_LABEL_NAMES @"translated_label_names"
#define kKEY_LANGUAGE_CODE @"language"
#define kKEY_TRANSLATED_NAME @"name"
#define kKEY_TYPE_NAME @"type_name"
#define kKEY_FILTER_ATTRIBUTES @"filter_attributes"
#define kKEY_FILTER_ATTRIBUTES_ITINERARY @"itinerary"
#define kKEY_SUB_TYPE_NAME @"sub_type_name"
#define kKEY_REQUIRES_PHOTO_STATUS @"requires_photo_status"
#define kKEY_REQUIRES_USER_PHOTO @"requires_user_photo"
#define kKEY_SUBSCRIBED @"subscribed"
#define kKEY_REQUIRES_INPUT_FIELD @"input_field_required"
#define kKEY_LABEL_TRANSLATED_NAMES @"label_translated_names"
#define kKEY_TRANSLATED_LABEL_NAME @"translated_label_name"

#define kKEY_KEY @"key"
#define kKEY_VALUE @"value"
#define kKEY_ACCESSIBILITY_TEXT @"accessibility_text"
#define kKEY_VALUES @"values"
#define kKEY_PRODUCT_EVENTS @"product_events"
#define kKEY_PRODUCT_SHORT_DESCRIPTION @"short_description"
#define kKEY_PRODUCT_LONG_DESCRIPTION @"long_description"
#define kKEY_PRODUCT_LOGO_IMAGE_PATH @"product_image_path"
#define kKEY_IMAGE_PATH @"image_path"
#define kKEY_MAX_QUANTITY_ALLOWED_FOR_PURCHASE @"max_quantity_for_purchase"

#pragma mark - Product Input Fields

#define kKEY_PRODUCT_INPUT_FIELDS @"input_fields"
#define kKEY_INPUT_LICENSE_NUMBER @"license_plate_number"
#define kKEY_INPUT_SPOT_NUMBER @"spot_number"


#pragma mark - Cards

#define kKEY_CARD_UUID @"card_uuid"
#define kKEY_TYPE_ID @"type_id"
#define kKEY_CARD_TYPE @"card_type"
#define kKEY_TYPE_NAME @"type_name"
#define kKEY_CARD_LAST_FOUR @"card_last_four"
#define kKEY_LAST_FOUR @"last_four"
#define kKEY_EXPIRATION_DATE @"expiration_date"
#define kKEY_PAN_NUMBER @"pan_number"
#define kKEY_CVV_REQUIRED @"cvv_required"
#define kKEY_IS_ACCEPTED  @"is_accepted"
#define kKEY_IS_DEFAULT   @"is_default"
#define kKEY_BIN          @"bin"
#define kKEY_CARD_EXPIRY_DATE  @"expiry_date"
#define kKEY_IS_COMMUTER_BENIFIT_CARD @"is_commuter_benefit_card"

#define kKEY_FULL_NAME @"full_name"
#define kKEY_FIRST_NAME @"first_name"
#define kKEY_LAST_NAME @"last_name"
#define kKEY_CARD_NUMBER @"card_number"
#define kKEY_EXPIRATION_MONTH @"expiration_month"
#define kKEY_EXPIRATION_YEAR @"expiration_year"
#define kKEY_CVV2 @"cvv2"
#define kKEY_ADDRESS_UUID @"address_uuid"

#define kKEY_BILLING_FULL_NAME @"billing_full_name"
#define kKEY_BILLING_ADDRESS_1 @"billing_address_1"
#define kKEY_BILLING_ADDRESS_2 @"billing_address_2"
#define kKEY_BILLING_CITY @"billing_city"
#define kKEY_BILLING_TERRIOTORY @"billing_territory"
#define kKEY_BILLING_POSTAL_CODE @"billing_postal_code"
#define kKEY_BILLING_COUNTRY @"billing_country"
#define kKEY_BILLING_NICKNAME @"billing_nickname"
#define kKEY_BILLING_EMAIL @"billing_email"


#pragma mark - Addresses

#define kKEY_ADDRESSES @"addresses"
#define kKEY_ADDRESS1 @"address_1"
#define kKEY_ADDRESS2 @"address_2"
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
#define kKEY_PROGRESS_STATE @"progressState"

#pragma mark - User
#define kKEY_OCCUPATION @"occupation"
#define kKEY_DOB @"date_of_birth"
#define kKEY_RACE @"race"
#define kKEY_GENDER @"gender"

#pragma mark - Order Receipts

#define kKEY_SUBTOTAL @"subtotal"
#define kKEY_TAX @"tax"
#define kKEY_TOTAL @"total"
#define kKEY_ORDER_ITEMS @"order_items"
#define kKEY_REFUND_ORDER_ITEM @"credited_order_item"
#define kKEY_MERCHANT_NAME @"merchant_name"
#define kKEY_REFERENCE_NUMBER @"reference_number"
#define kKEY_CUSTOMER_FULL_NAME @"full_name"

#pragma mark - Mutable Orders

#define kKEY_PRODUCT_ARRAY @"product_array"
#define kKEY_QUANTITY_ARRAY @"quantity_array"
#define kKEY_CARD_ARRAY @"card_array"
#define kKEY_AMOUNT_ARRAY @"amount_array"
#define kKEY_SAVE_TO_DEVICE @"save_to_device"
#define kKEY_CVV2 @"cvv2"
#define kKEY_AMOUNT @"amount"
#define kKEY_QTY @"qty"
#define kKEY_ITEMS @"items"
#define kKEY_TRUE @"true"
#define kKEY_FALSE @"false"
#define kKEY_PROCESS @"process"
#define kKEY_FUFILL_DIGITAL_PASSES @"fulfill_digital_passes"
#define kKEY_PAYMENT_TYPE @"payment_type"
#define kKEY_PAYMENT_METHODS @"payment_methods"
#define kKEY_DELIVERY_METHOD @"delivery_method"
#define kKEY_PAYMENT @"payment"
#define kKEY_CARD_NETWORK @"card_network"


#pragma mark - Rules

#define kKEY_AT_TIMEZONE @"at_timezone"
#define kKEY_AT_YEAR @"at_year"
#define kKEY_AT_MONTH @"at_month"
#define kKEY_AT_DAY @"at_day"
#define kKEY_AT_HOUR @"at_hour"
#define kKEY_AT_MINUTE @"at_minute"
#define kKEY_AT_SECOND @"at_second"
#define kKEY_AFTER_UNIT @"after_unit"
#define kKEY_AFTER_VALUE @"after_value"


#pragma mark - Notifications

#define kKEY_NOTIFICATIONS @"notifications"
#define kKEY_IDENTIFIER @"id"
#define kKEY_TITLE @"title"
#define kKEY_BODY @"body"
#define kKEY_TEASER @"teaser"
#define kKEY_LINK @"link"
#define kKEY_READ_STATUS @"read_status"

#pragma mark - Notification Settings

#define kKEY_NOTIFICATION_SETTINGS @"notification_settings"
#define kKEY_CHILDREN @"children"
#define kKEY_NOTIFICATION_PERMISSIONS @"notification_permissions"
#define kKEY_METHOD @"method"
#define kKEY_NOTIFICATION_ALLOW @"allow"
#define kVALUE_SYSTEM_NOTIFICATIONS @"system_notification"
#define kVALUE_EMAIL_NOTIFICATIONS @"email_notification"

#define kKEY_THUMBNAIL_IMAGE @"thumbnail_image"

#pragma mark - Attributes

#define kKEY_KEY @"key"
#define kKEY_VALUE @"value"

#pragma mark - Success

#define kKEY_SUCCESS @"success"
#define kKEY_TRUE @"true"
#define kKEY_FALSE @"false"
#define kKEY_TITLE_CASE_SUCCESS @"Success"

#pragma mark - Misc.
#define kKEY_PAYMENTS @"payments"
#define kKEY_NOTES @"notes"
#define kKEY_PAGE_INDEX @"page_index"

#pragma mark - paypal payeezy payload
#define kPAYER_ID @"payer_id"
#define kAUTHORIZATION @"authorization"
#define kCORRELATION_ID @"correlation_id"
#define kCARDHOLDER_NAME @"cardholder_name"

#pragma mark - Promo code
#define kKEY_OFFER_CODE_TEXT @"offer_code_text"
#define kKEY_OFFER_CONFIG @"offer_config"
#define kKEY_PRICE_ADJUSTMENT @"price_adjustment"
#define kKEY_PRICE_ADJUSTMENTS @"price_adjustments"
#define kKEY_ADJUSTED_PRICE @"adjusted_price"
#define kKEY_CONTRACT_PRICE @"contract_price"
#define kKEY_LIST_PRICE  @"list_price"
#define kKEY_OFFER_CODES @"offer_codes"
#define kKEY_TEXT @"text"
#define kKEY_USAGE_TYPE @"usage_type"
#define kKEY_OFFER_CODE @"offer_code"
#define kKEY_OFFER_SERVE_UUID @"offer_serve_uuid"

#pragma mark - Payment types

#define kKEY_PAYPAL_PAYMENT_TYPE @"paypal"
#define kKEY_CARD_PAYMENT_TYPE   @"card"
#define kKEY_IDEAL_PAYMENT_TYPE  @"ideal"
#define kKEY_APPLE_PAY_PAYMENT_TYPE @"applepay"
#define kKEY_DOTPAY_PAYMENT_TYPE @"dotpay"
#define kKEY_PAYNEARME_PAYMENT_TYPE @"paynearme"
#define kKEY_INCOMM_PAYMENT_TYPE @"incomm"

#define kKEY_WALLET_PAY @"WalletPay"

#define kKEY_GTFS_FARE_ID @"gtfs_fare_id"

#pragma mark - Subscriptions

#define kKEY_SUBSCRIPTION @"subscription"
#define kKEY_SUBSCRIPTION_UUID @"subscription_uuid"
#define kKEY_SUBSCRIPTIONS_ALLOWED @"subscription_allowed"
#define kKEY_SUBSCRIPTIONS_ENABLED @"create_subscription"
#define kKEY_SUBSCRIPTION_EXECUTION_MESSAGE @"subscription_execution_message"
#define kKEY_SUBSCRIPTION_NOTIFICATION_MESSAGE @"subscription_notification_message"
#define kKEY_SUBSCRIPTION_LIST @"subscribed_pass_list"
#define kKEY_SUBSCRIPTION_EXECUTION_TRIGGER @"subscription_execution_trigger"
#define kKEY_SUBSCRIPTION_NOTIFICATION_TRIGGER @"subscription_notification_trigger"
#define kKEY_PASS_NAME @"pass_name"

#pragma mark - Wallet

#define kKEY_NICK_NAME @"nick_name"
#define kKEY_AVAILABLE_AMOUNT @"available_amount"
#define kKEY_WALLET_UUID "wallet_uuid"
#define kKEY_STORED_WALLET_PAYMENT_TYPE @"STORED_VALUE"
#define kKEY_PAYPAL_STRING @"PAYPAL"
#define kKEY_STORED_WALLETS "stored_wallets"
#define kKEY_WALLETS "wallets"
#define kKEY_ACTION @"action"
#define kKEY_CAPTURE @"capture"
#define kKEY_WALLET_TYPE @"wallet_type"
#define kKEY_IS_AUTOLOAD_SUBSCRIBED @"is_autoload_subscribed"
#define kKEY_IS_LOAD_MONEY_ALLOWED @"is_load_money_allowed"
#define kKEY_MERCHANT_GID @"merchant_gid"

#pragma mark - wallet load config
#define kKEY_LOAD_CONFIG @"load_config"
#define kKEY_LOAD_VALUES @"load_values"
#define kKEY_MIN_WALLET_LOAD_VALUE @"min_wallet_load_value"
#define kKEY_MAX_WALLET_LOAD_VALUE @"max_wallet_load_value"
#define kKEY_AUTOLOAD_CONFIG @"autoload_config"
#define kKEY_AUTLOAD_VALUES @"autoload_values"
#define kKEY_MIN_WALLET_AUTOLOAD_VALUE @"min_wallet_autoload_value"
#define kKEY_MAX_WALLET_AUTLOAD_VALUE @"max_wallet_autoload_value"
#define kKEY_AUTOLOAD_THRESHOLD_CONFIG @"autoload_threshold_config"
#define kKEY_AUTOLOAD_THRESHOLD_VALUES @"autoload_threshold_values"
#define kKEY_MIN_AUTLOAD_THRESHOLD_VALUE @"min_autoload_threshold_value"
#define kKEY_MAX_AUTLOAD_THRESHOLD_VALUE @"max_autoload_threshold_value"
#define kKEY_DISABLE_AUTOLOAD_THRESHOLD_OTHERS @"disable_autoload_threshold_others"
#define kKEY_AUTOLOAD_CALENDER_CONFIG @"autoload_calendar_config"
#define kKEY_AUTOLOAD_CONFIG_NAME @"autoload_config_name"
#define kKEY_AUTOLOAD_CONFIG_VALUES @"autoload_config_values"
#define kKEY_AUTOLOAD_CONFIG_MONTHLY @"MONTHLY"
#define kKEY_AUTOLOAD_CONFIG_WEEKLY @"WEEKLY"
#define kKEY_BRAINTREE_PAYPAL_TOKEN @"braintree_paypal_payment_method_token"
#define kKEY_PAYPAL_UUID @"paypal_uuid"
#define kKEY_STORED_CARD "STORED_CARD"
#define kKEY_PAYPAL "PAYPAL"
#define kKEY_MAX_WALLET_BALANCE @"max_wallet_balance"

#pragma mark - Stripe
#define kKEY_CUSTOMER_ID @"customer_id"
#define kKEY_EPHEMERAL_KEY @"ephemeral_key"
#define kKEY_CLIENT_SECRET @"client_secret"
#define kKEY_STRIPE_PUBLISHABLE_KEY @"publishable_key"

#pragma mark - Pass Barcode Validation
#define kKEY_BARCODE_VALIDATION_DETAILS @"barcode_validation"
#define kKEY_TWO_D_BARCODE_TYPE @"2d_barcode_type"
#define kKEY_BARCODE_PAYLOAD_TYPE @"payload_type"
#define kKEY_BARCODE_REFRESH_RATE @"refresh_rate"
#define kKEY_BARCODE_PAYLOAD_DATA @"payload_data"
#define kKEY_MEDIA_TYPE @"media_type"
#define kKEY_MEDIA_SCHEME @"media_scheme"

#pragma mark - Organization Config
#define kKEY_ORGANIZATION_CONFIG @"organization_config"
#define kKEY_ORGANIZATION_CLIENT_CONFIG @"organization_client_config"
#define kKEY_CONFIG_KEY @"config_key"
#define kKEY_CONFIG_VALUE @"config_value"

#pragma mark - FareCapping Detail
#define kKEY_FARECAPDETAILS_KEY @"farecappings"
#define KKEY_CYCLESTART_TIME @"cycle_start_time"
#define KKEY_CYCLEENDTIME_TIME @"cycle_end_time"
#define KKEY_CURRENT_QUANTITY @"current_quantity"
#define KKEY_TARGET_QUANTITY @"target_quantity"
#define KKEY_FARECAP_DESCRIPTION @"description"
#define KKEY_FARECAP_MOREINFO @"more_info"

#pragma mark - Incomm Keys
#define kKEY_INCOMM_ACCOUNT_NUMBER @"account_number"
#define kKEY_INCOMM_LOCATOR_ICON_URL @"icon_url"
#define kKEY_INCOMM_PAID_ORG_NAME @"org_name"

#pragma mark - DeepLink Keys
#define kKEY_PRODUCT_ID  @"product_id"
#define kKEY_FARE_ID  @"fare_id"
#define kKEY_DISCOUNT_PERCENT  @"discount_percent"
#define kKEY_DISCOUNT_PERCENTAGE  @"discount_percentage"
#define kKEY_DISCOUNT_OAUTH_TOKEN  @"oauth_token"
#define kKEY_FILTER_SEARCH @"filter_name"

#pragma mark - Discount Request
#define kKEY_PRODUCTS @"products"
#define kKEY_DISCOUNT_TYPE  @"discount_type"
#define kKEY_PRODUCT_DISCOUNT_TYPE  @"PRODUCT_DISCOUNT_TYPE"
#define kKEY_DISCOUNT_UUID  @"discount_serve_uuid"
#define kKEY_DEEPLINK_DISCOUNT_ENABLED  @"deep_link_discount_enabled"

#pragma mark - Deep Link Credit Pass Request
#define kKEY_CREDIT_PASS_OAUTH_TOKEN  @"oauth_token"
#define kKEY_DEEPLINK_CREDIT_PASS_ENABLED  @"deep_link_credit_enabled"

#pragma mark - Unattached Passes
#define kKEY_UNATTACHED_PASS @"passes"

#pragma mark - CoreData(Notification)
#define kKEY_NOTIFICATION_LIST_TABLE @"CNotification"
#define kKEY_NOTIFICATION_LIST_KEY @"key"
#define kKEY_NOTIFICATION_LIST_NOTIFICATION_KEY @"notification"

#pragma mark - CoreData(AppInstallationID)
#define kKEY_APPINSTALLATION_ID_TABLE @"AppIDStorage"
#define kKEY_APPINSTALLATION_ID_KEY @"key"

#pragma mark - Org Config
#define kKEY_PARENT_ORGANIZATION @"parent_org"
#define kKEY_CHILD_ORGANIZATION @"child_org"
#define kKEY_LEGACY_ORGANIZATION_UUID @"legacy_organization_uuid"

#pragma mark - CoreData(Selected Child Org)

#define kKEY_SELECTED_ORGANIZATION_TABLE_ID @"SelectedOrg"
#define kKEY_SELECTED_ORGANIZATION_ID_KEY @"key"

#pragma mark - CoreData(Child Org)

#define kKEY_CHILD_ORGANIZATION_TABLE_ID @"ChildOrgs"
#define kKEY_CHILD_ORGANIZATION_ID_KEY @"key"


#endif
