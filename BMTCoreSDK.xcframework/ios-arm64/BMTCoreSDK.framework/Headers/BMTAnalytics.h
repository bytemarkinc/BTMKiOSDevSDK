//
//  BMTAnalytics.h
//  BMTCoreSDK
//
//  Created by Shuyang Sun on 12/12/16.
//  Copyright © 2016 co.bytemark. All rights reserved.
//


#import <Foundation/Foundation.h>

/*------------------------------ EVENTS NAME STARTS ----------------------------------*/


// Auth module Events
static NSString * _Nonnull const kAnalyticsEventSignInScreenDisplayed = @"sign_in_screen_displayed";
static NSString * _Nonnull const kAnalyticsEventSignUpScreenDisplayed = @"sign_up_screen_displayed";
static NSString * _Nonnull const kAnalyticsEventSignUp = @"sign_up";
static NSString * _Nonnull const kAnalyticsEventSignIn = @"sign_in";
static NSString * _Nonnull const kAnalyticsEventSignOut = @"sign_out";
static NSString * _Nonnull const kAnalyticsEventForgotPassword = @"forgot_password";

// Accessibilities Events
static NSString * _Nonnull const kAnalyticsEventVoiceOverEnabled = @"voice_over_enabled";
static NSString * _Nonnull const kAnalyticsEventFontSizeChanged = @"font_size_changed";
static NSString * _Nonnull const kAnalyticsEventFontLanguageChanged = @"language_changed";

// Store Module Events
static NSString * _Nonnull const kAnalyticsEventNameStoreScreenDisplayed = @"store_screen_displayed";
static NSString * _Nonnull const kAnalyticsEventNameProductsLoadingCompleted = @"products_loading_completed";
static NSString * _Nonnull const kAnalyticsEventNameAddToCart = @"add_to_cart";
static NSString * _Nonnull const kAnalyticsEventNameFiltersLoadingCompleted = @"filters_loading_completed";
static NSString * _Nonnull const kAnalyticsEventNameClearFilter = @"clear_filter";
static NSString * _Nonnull const kAnalyticsEventNameChangeFilterButtonPressed = @"change_filter";
static NSString * _Nonnull const kAnalyticsEventNameFilterValueSelected = @"filter_selected";
static NSString * _Nonnull const kAnalyticsEventFeatureExpressCheckout = @"feature_express_checkout";

// Cart Module Events
static NSString * _Nonnull const kAnalyticsEventNameShoppingCartDisplayed = @"shopping_cart_screen_displayed";
static NSString * _Nonnull const kAnalyticsEventNameItemRemoveFromCart = @"cart_item_removed";

// Checkout Module Events
static NSString * _Nonnull const kAnalyticsEventNameCheckoutScreenDisplayed = @"checkout_screen_displayed";
static NSString * _Nonnull const kAnalyticsEventNamePaymentMethodsLoadingCompleted = @"default_payment_loading_completed";
static NSString * _Nonnull const kAnalyticsEventUpdateOptionSelected = @"update_option_selected";
static NSString * _Nonnull const kAnalyticsEventNameAddPaymentSelected = @"add_payment_selected";
static NSString * _Nonnull const kAnalyticsEventNamePaymentMethodChanged = @"payment_method_changed";
static NSString * _Nonnull const kAnalyticsEventNamePlaceOrder = @"place_order";
static NSString * _Nonnull const kAnalyticsEventNameProductPurchased = @"product_purchased";
static NSString * _Nonnull const kAnalyticsEventNamePromoCodeApplied = @"promo_code_applied";

// Payment Module Events
static NSString * _Nonnull const kAnalyticsEventNamePaymentMethodsLoaded = @"payment_methods_loaded";
static NSString * _Nonnull const kAnalyticsEventNamePaymentMethodRemoved = @"remove_payment_methods";
static NSString * _Nonnull const kAnalyticsEventAddNewPaymentMethod = @"new_payment_method_added";

// Wallet & Fare Medium Events
static NSString * _Nonnull const kAnalyticsEventLoadMoney = @"load_money";
static NSString * _Nonnull const kAnalyticsEventSaveAutoLoad = @"save_auto_load";
static NSString * _Nonnull const kAnalyticsEventRemoveAutoLoad = @"remove_auto_load";
static NSString * _Nonnull const kAnalyticsEventCreateVirtualCard = @"create_virtual_card";
static NSString * _Nonnull const kAnalyticsEventTransferVirtualCard = @"feature_transfer_virtual_card";
static NSString * _Nonnull const kAnalyticsEventFeatureLinkExistingCard = @"feature_link_existing_card";
static NSString * _Nonnull const kAnalyticsEventAddPassesToFaremediumSelected = @"add_passes_to_faremedium_selected";
static NSString * _Nonnull const kAnalyticsEventAvailablePassesLoaded = @"available_passes_loaded";
static NSString * _Nonnull const kAnalyticsEvenFareCapping = @"fare_capping_screen_displayed";
static NSString * _Nonnull const kAnalyticsEventCardHistoryLoaded = @"card_history_screen_displayed";
static NSString * _Nonnull const kAnalyticsScreenManagePassDisplayed = @"manage_screen_displayed";
static NSString * _Nonnull const kAnalyticsEventVirtualCardsLoaded = @"fare_mediums_loaded";
static NSString * _Nonnull const kAnalyticsEventUseScreenDisplayed = @"use_screen_displayed";
static NSString * _Nonnull const kAnalyticsEventBlockUnblockScreenDisplayed = @"block_unblock_card_screen_displayed";
static NSString * _Nonnull const kAnalyticsEventCreateVirtualCardScreenDisplayed = @"create_virtual_card_screen_displayed";
static NSString * _Nonnull const kAnalyticsEventLinkPhysicalCardScreenDisplayed = @"link_physical_card_screen_displayed";

// Settings and More Info Module Events
static NSString * _Nonnull const kAnalyticsEventMoreInfoScreenDisplayed = @"more_info_screen_displayed";
static NSString * _Nonnull const kAnalyticsEventMenuItemSelected = @"menu_item_selected";
static NSString * _Nonnull const kAnalyticsEventSettingsScreenDisplayed = @"settings_screen_displayed";
static NSString * _Nonnull const kAnalyticsEventProfileLoadingCompleted = @"profile_loading_completed";
static NSString * _Nonnull const kAnalyticsEventUpdateProfile = @"profile_updated";
static NSString * _Nonnull const kAnalyticsEventPasswordChanged = @"password_changed";
static NSString * _Nonnull const kAnalyticsEventNotificationSettingsLoaded = @"notification_settings_loaded";
static NSString * _Nonnull const kAnalyticsVoucherEntryScreenDisplayed = @"voucher_entry_screen_displayed";
static NSString * _Nonnull const kAnalyticsVoucherCodeApplied = @"voucher_code_applied";

// Notifications Events
static NSString * _Nonnull const kAnalyticsNotificationListScreenDisplayed = @"notification_list_screen_displayed";
static NSString * _Nonnull const kAnalyticsNotificationDetailScreenDisplayed = @"notification_detail_screen_displayed";
static NSString * _Nonnull const kAnalyticsNotificationMoreInfoButtonPressed = @"notification_detail_more_info_selected";

// Account Photo Events
static NSString * _Nonnull const kAnalyticsEventAccountPhotoScreenDisplayed = @"account_photo_screen_displayed";
static NSString * _Nonnull const kAnalyticsEventAccountPhotoUpdated = @"account_photo_updated";

// Use Tickets Screen Events
static NSString * _Nonnull const kAnalyticsUseTickstsScreenDisplayed = @"use_tickets_screen_displayed";
static NSString * _Nonnull const kAnalyticsDevicePassesLoaded = @"device_passes_loaded";
static NSString * _Nonnull const kAnalyticsCloudPassesLoaded = @"cloud_passes_loaded";
static NSString * _Nonnull const kAnalyticsEventTicketTransferCompleted = @"feature_transfer_pass";
static NSString * _Nonnull const kAnalyticFeatureSendTicket = @"feature_send_ticket";
static NSString * _Nonnull const kAnalyticFeatureRepurchase = @"feature_repurchase";
static NSString * _Nonnull const kAnalyticFeatureResendReceipt = @"feature_resend_receipt";
static NSString * _Nonnull const kAnalyticFeatureViewTicketDetails = @"feature_view_ticket_details";
static NSString * _Nonnull const kAnalyticsTicketFinishedDisplay = @"display_pass";
static NSString * _Nonnull const kAnalyticsActivatePass = @"activate_pass";
static NSString * _Nonnull const kAnalyticsBarcodeGenerationPrivateKeyNil = @"barcode_generation_private_key_nil";
static NSString * _Nonnull const kAnalyticsBarcodeGenerationLogoutTriggered = @"barcode_generation_logout_triggered";

// Ticket Storage Events
static NSString * _Nonnull const kAnalyticsEventTicketStorageDisplayed = @"ticket_storage_screen_displayed";
static NSString * _Nonnull const kAnalyticsEventTicketDefaultStorageChanged = @"default_ticket_storage_changed";

// Purchase History Events
static NSString * _Nonnull const kAnalyticsEventPurchaseHistoryLoaded = @"purchase_history_loaded";
static NSString * _Nonnull const kAnalyticsEventReceiptScreenDisplayed = @"receipt_screen_displayed";


/*------------------------------ EVENTS NAME ENDS ----------------------------------*/



// Screen names for sign in event
static NSString * _Nonnull const kAnalyticsUseTickets = @"Use Tickets";
static NSString * _Nonnull const kAnalyticsFareMedia = @"Fare Media";
static NSString * _Nonnull const kAnalyticsScreenNameSettings = @"Settings";
static NSString * _Nonnull const kAnalyticsScreenNameTickets = @"Tickets";
static NSString * _Nonnull const kAnalyticsScreenNameNotifications = @"Notifications";
static NSString * _Nonnull const kAnalyticsRewards = @"Rewards";

// sign in types
static NSString * _Nonnull const kAnalyticsValueWebView = @"web_view";
static NSString * _Nonnull const kAnalyticsValueNative = @"native";
static NSString * _Nonnull const kAnalyticsValueFacebook = @"facebook";
static NSString * _Nonnull const kAnalyticsValueGoogle = @"google";
static NSString * _Nonnull const kAnalyticsValueTwitter = @"twitter";

// Analytic Keys
static NSString * _Nonnull const kAnalyticsKeyMenuItemName = @"item_name";
static NSString * _Nonnull const kAnalyticsLoginStatus = @"login_status";
static NSString * _Nonnull const kAnalyticsKeyMethod = @"method";
static NSString * _Nonnull const kAnalyticsKeySource = @"source";
static NSString * _Nonnull const kAnalyticsKeyFromScreen = @"from";
static NSString * _Nonnull const kAnalyticsKeyType = @"type";
static NSString * _Nonnull const kAnalyticsKeyCardType = @"card_type";
static NSString * _Nonnull const kAnalyticsKeyStoredCard = @"STORED_CARD";
static NSString * _Nonnull const kAnalyticsKeyFormFillDuration = @"form_fill_duration";
static NSString * _Nonnull const kAnalyticsKeyDuration = @"duration";
static NSString * _Nonnull const kAnalyticsKeySignUpDuration = @"account_sign_up_duration";
static NSString * _Nonnull const kAnalyticsKeyUserUUID = @"user_uuid";
static NSString * _Nonnull const kAnalyticsKeySignOutType = @"type";
static NSString * _Nonnull const kAnalyticsUndefined = @"undefined";
static NSString * _Nonnull const kAnalyticsErrorMessage = @"error_message";
static NSString * _Nonnull const kAnalyticsKeyCount = @"count";
static NSString * _Nonnull const kAnalyticsKeyMode = @"mode";
static NSString * _Nonnull const kAnalyticsKeyProduct = @"product";
static NSString * _Nonnull const kAnalyticsKeyOldValue = @"old_val";
static NSString * _Nonnull const kAnalyticsKeyNewValue = @"new_val";
static NSString * _Nonnull const kAnalyticsKeyWithPaymentMethod = @"with_payment_method";
static NSString * _Nonnull const kAnalyticsKeyHasProducts = @"has_products";
static NSString * _Nonnull const kAnalyticsKeyHasFilters = @"has_filters";
static NSString * _Nonnull const kAnalyticsKeyNumberOfPaymentMethods = @"number_of_payment_methods";
static NSString * _Nonnull const kAnalyticsKeyFilterGroupUUID = @"group_uuid";
static NSString * _Nonnull const kAnalyticsKeyFilterGroupName = @"group_name";
static NSString * _Nonnull const kAnalyticsKeyFilterValueName = @"value_name";
static NSString * _Nonnull const kAnalyticsKeyForceReloaded = @"force_reloaded";
static NSString * _Nonnull const kAnalyticsKeyOrderQuantity = @"order_quantity";
static NSString * _Nonnull const kAnalyticsKeyOrderProductUUIDList = @"product_uuid_list";
static NSString * _Nonnull const kAnalyticsKeyOrderTotal = @"total";
static NSString * _Nonnull const kAnalyticsKeyThreshHoldBalance = @"threshhold_balance";
static NSString * _Nonnull const kAnalyticsKeyProductsPurchased = @"products_purchased";
static NSString * _Nonnull const kAnalyticsKeyPurchasedProductsQuantity = @"purchased_products_quantity";
static NSString * _Nonnull const kAnalyticsKeNickName = @"nick_name";
static NSString * _Nonnull const kAnalyticsKeyButton = @"button";
static NSString * _Nonnull const kAnalyticsKeyStatus = @"status";
static NSString * _Nonnull const kAnalyticsKeyPromoCode = @"promo_code";
static NSString * _Nonnull const kAnalyticsKeyOrder = @"order";
static NSString * _Nonnull const kAnalyticsKeyBuyNow = @"buy_now";
static NSString * _Nonnull const kAnalyticsKeyApplePay = @"apple_pay";
static NSString * _Nonnull const kAnalyticsKeyAmount = @"amount";
static NSString * _Nonnull const kAnalyticsOrderQuantity = @"order_quantity";
static NSString * _Nonnull const kAnalyticsOrderType = @"order_type";
static NSString * _Nonnull const kAnalyticsQuantity = @"quantity";
static NSString * _Nonnull const kAnalyticsKeySum = @"sum";
static NSString * _Nonnull const kAnalyticsProductName = @"product_name";
static NSString * _Nonnull const kAnalyticsProductUuid = @"product_uuid";
static NSString * _Nonnull const kAnalyticsFilter = @"filter";
static NSString * _Nonnull const kAnalyticsList = @"list";
static NSString * _Nonnull const kAnalyticsKeyPrice = @"price";
static NSString * _Nonnull const kAnalyticsKeyStorage = @"storage";
static NSString * _Nonnull const kAnalyticsKeyPageNumber = @"page_number";
static NSString * _Nonnull const kAnalyticsKeyAlarms = @"Alarms";
static NSString * _Nonnull const kKeyTripPlanner = @"hacon_trip_planner_menu_selected";
static NSString * _Nonnull const kKeyDeparture = @"hacon_departure_menu_selected";
static NSString * _Nonnull const kKeyHaconAlarms = @"hacon_alarms_menu_selected";

// Analytic values
static int const kAnalyticsOne = 1;
static int const kAnalyticsZero = 0;
static NSString * _Nonnull const kAnalyticsValueCart = @"cart";
static NSString * _Nonnull const kAnalyticsValueRepurchase = @"repurchase";
static NSString * _Nonnull const kAnalyticsValueMenu = @"menu";
static NSString * _Nonnull const kAnalyticsTrue = @"true";
static NSString * _Nonnull const kAnalyticsFalse = @"false";
static NSString * _Nonnull const kAnalyticsSuccess = @"success";
static NSString * _Nonnull const kAnalyticsFailure = @"failure";
static NSString * _Nonnull const kAnalyticsStore = @"Store";
static NSString * _Nonnull const kAnalyticsValueReloading = @"reloading";
static NSString * _Nonnull const kAnalyticsValueNormal = @"normal";
static NSString * _Nonnull const kAnalyticsValueHeaderButton = @"header_button";
static NSString * _Nonnull const kAnalyticsValueHacon = @"hacon";
static NSString * _Nonnull const kAnalyticsAuthenticated = @"authenticated";
static NSString * _Nonnull const kAnalyticsRequiredEnablerProduct = @"has_enablers";
static NSString * _Nonnull const kAnalyticsHasCloudTicket = @"has_cloud_pass";
static NSString * _Nonnull const kAnalyticsNotificationTitle = @"notification_title";
static NSString * _Nonnull const kAnalyticsNotificationUUID = @"notification_uuid";
static NSString * _Nonnull const kAnalyticsNotificationIsShownAsWebView = @"is_web_view";
static NSString * _Nonnull const kAnalyticsKeyTicketTransferDirection = @"transfer_direction";
static NSString * _Nonnull const kAnalyticsValueTicketTransferDirectionToCloud = @"device_to_cloud";
static NSString * _Nonnull const kAnalyticsValueTicketTransferDirectionToDevice = @"cloud_to_device";
static NSString * _Nonnull const kAnalyticsValueGotIt = @"got_it";
static NSString * _Nonnull const kAnalyticsValueShowMeLater = @"show_me_later";
static NSString * _Nonnull const kAnalyticsValueFareMediumManage = @"fare_medium_manage";
static NSString * _Nonnull const kAnalyticsValuePasses = @"passes";
static NSString * _Nonnull const kAnalyticsValueLoadWallet = @"load_wallet";
static NSString * _Nonnull const kAnalyticsValueLoadFareMedium = @"load_fare_medium";
static NSString * _Nonnull const kAnalyticsValueWallet = @"wallet";
static NSString * _Nonnull const kAnalyticsValueFareMedium = @"faremedium";
static NSString * _Nonnull const kAnalyticsValuePaypal = @"paypal";
static NSString * _Nonnull const kAnalyticsValueCard = @"card";
static NSString * _Nonnull const kAnalyticPassSavedToDevice = @"saved_to_device";
static NSString * _Nonnull const kAnalyticsEventAutoLoadMoney = @"auto_load";

// screen names to pass as values
static NSString * _Nonnull const kAnalyticsScreenNameCheckout = @"checkout";
static NSString * _Nonnull const kAnalyticsScreenNameShoppingCart = @"cart";
static NSString * _Nonnull const kAnalyticsScreenNameStore = @"store";
static NSString * _Nonnull const kAnalyticsScreenNameProductDetail = @"product_detail";
static NSString * _Nonnull const kAnalyticsScreenNamePaymentMethodsList = @"payment";

// Use Tickets Tab
static NSString * _Nonnull const kAnalyticsActive = @"active";
static NSString * _Nonnull const kAnalyticsAvailable = @"available";
static NSString * _Nonnull const kAnalyticsHistory = @"history";

@class BMProduct;
@class BMErrors;
@class BMMutableOrder;
@class BMPass;

@protocol BMTAnalytics <NSObject>

+ (void)initializeWithConfig:(NSDictionary * _Nonnull)config;

- (void)logContentViewWithName:(NSString * _Nonnull)eventName
                   contentType:(NSString * _Nullable)contentType
                     contentId:(NSString * _Nullable)contentId
              customAttributes:(NSDictionary * _Nullable)attr;

- (void)logCustomEventWithName:(NSString * _Nonnull)eventName
              customAttributes:(NSDictionary<NSString *, id> * _Nullable)attr;

@optional

#pragma mark - Authentication

typedef enum {
    BMWLSignInMethodWebView,
    BMWLSignInMethodNative,
    BMWLSignInMethodFacebook,
    BMWLSignInMethodGoogle,
    BMWLSignInMethodApple,
    BMWLSignInMethodTwitter
} BMWLSignInMethod;

@end

