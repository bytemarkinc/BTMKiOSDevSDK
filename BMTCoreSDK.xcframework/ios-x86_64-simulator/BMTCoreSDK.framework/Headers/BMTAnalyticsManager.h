//
//  BMTAnalyticsManager.h
//  BMWhiteLabelSDK
//
//  Created by Ryan Cleeton on 12/22/16.
//  Copyright © 2016 co.bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "BMTAnalytics.h"

@interface BMTAnalyticsManager : NSObject

+ (void)initializeAnalyticsServicesWithConfig:(NSDictionary * _Nonnull)config;
+ (NSString * _Nullable)idfa;
+ (NSString * _Nullable)appName;

#pragma mark - Helper Methods

+ (void)logScreenDisplayedWithName:(NSString * _Nonnull)name;
+ (void)logEventWithName:(NSString * _Nonnull)name;
+ (void)logEventWithName:(NSString * _Nullable)eventName withErrors:(BMErrors * _Nullable)errors;

#pragma mark - Accessibility

+ (void)batchLogVoiceOverEnabledOnceIfTurnedOn;
+ (void)batchLogDidUserChangeFontSize;
+ (void)batchLogDidUserChangeLanguage;

#pragma mark - Authentication

+ (void)batchLogDidDisplaySignInSelectionScreen;
+ (void)batchLogDidUserSignIn:(BOOL)succeed method:(BMWLSignInMethod)method screen:(NSString *_Nonnull)screenName duration:(NSTimeInterval)duration errorInfo:(BMErrors * _Nullable)errors withUserId:(NSString *_Nullable)userID;
+ (void)batchLogDidUserSignOut:(NSString *_Nonnull)userUUID email:(NSString * _Nullable)userEmail manualSignOut:(NSNumber *_Nullable)manualSignOut;
+ (void)batchLogDidDisplaySignUpScreen;
+ (void)batchLogDidUserSignUp:(BOOL)succeed duration:(NSTimeInterval)duration formFillUpduration:(NSTimeInterval)formFillUpduration errorInfo:(BMErrors *_Nullable)errors;
+ (void)batchLogDidForgotPasswordFinishedLoading:(BOOL)succeed errors:(BMErrors *_Nullable)errors;
+ (NSString * _Nullable)stringForSignInMethod:(BMWLSignInMethod)method;

#pragma mark - Shopping Cart

+ (void)batchLogDidDisplayShoppingCartScreenFromSource:(NSString *_Nonnull)source;
+ (void)batchLogRemoveFromCartButtonPressedForProductWithName:(NSString * _Nonnull)productName
                                                         uuid:(NSString * _Nullable)productUUID
                                                 priceInCents:(NSInteger)price
                                                     quantity:(NSInteger)quantity;
+ (void)batchLogDefaultPaymentMethodLoadingOfType:(NSString *_Nullable)type
                                         cardType:(NSString *_Nullable)cardType
                                           errors:(BMErrors * _Nullable)errors;
+ (void)logPaymentMethodsLoadingCompletedWithPaymentMethodsCount:(NSUInteger)paymentMethodsCount forceReloaded:(BOOL)forceReload errors:(BMErrors *_Nullable)errors;
+ (void)logPaymentMethodsRemovedOfType:(NSString *_Nullable)type errors:(BMErrors *_Nullable)errors;
+ (void)batchLogAddPaymentMethodButtonPressedFromShoppingCart;
+ (void)batchLogPurchaseLoadingCompletedWithOrder:(NSMutableDictionary *_Nonnull)orderDictionary errors:(BMErrors *_Nullable)errors;
+ (void)batchLogProductPurchasedFromShoppingCart:(NSString *_Nullable)productName
                                     productUUID:(NSString *_Nonnull)productUUID
                                        quantity:(NSUInteger)quantity
                               priceOfOneProduct:(double)price;
+ (void)batchLogEventPaymentMethodChangedSource:(NSString *_Nonnull)source type:(NSString *_Nonnull)type;
+ (void)batchLogCartValueUpdated;

#pragma mark - Checkout

+ (void)batchLogDidDisplayCheckoutScreenWithSource:(NSString * _Nullable)source;

#pragma mark - Filter

+ (void)batchLogDidDisplayBuyFilterScreenFromSource:(NSString *_Nullable)source;
+ (void)batchLogDidFinishLoadingFilters:(BOOL)succeed errorInfo:(BMErrors * _Nullable)errors;
+ (void)batchLogDidPressClearFilterButtonFilterGroupUUID:(NSString * _Nullable)groupUUID
                                         filterGroupName:(NSString * _Nullable)filterGroupName
                                         filterValueName:(NSString * _Nullable)filterValueName;
+ (void)batchLogDidSelectFilterValueWithFilterGroupUUID:(NSString * _Nullable)groupUUID
                                        filterGroupName:(NSString * _Nullable)filterGroupName
                                        filterValueName:(NSString * _Nullable)filterValueName;

#pragma mark - Buy Product List

+ (void)batchLogDidDisplayBuyProductListScreenFromSource:(NSString *_Nullable)source;
+ (void)batchLogDidLoadProductsFromStoreForceReloaded:(BOOL)isForceReloaded errorInfo:(BMErrors * _Nullable)errors;
+ (void)batchLogDidPressAddToCartButtonFromStoreForProductName:(NSString * _Nullable)productName
                                                   productUUID:(NSString * _Nullable)productUUID
                                                      quantity:(NSUInteger)quantity
                                                  priceInCents:(NSUInteger)price;
+ (void)batchLogDidPressChangeFilterButtonFromStore;
+ (void)batchLogDidPressBuyNowButtonFromStoreForProductName:(NSString * _Nullable)productName
                                                productUUID:(NSString * _Nullable)productUUID
                                               priceInCents:(NSUInteger)price
                                                   quantity:(int)quantity;
+ (void)batchLogDidPressApplePayButtonFromStoreForProductName:(NSString * _Nullable)productName
                                                  productUUID:(NSString * _Nullable)productUUID
                                                 priceInCents:(NSUInteger)price quantity:(int)quantity;
+ (void)batchLogPromoCodeAppliedEventFromSource:(NSString *_Nullable)source
                                      promoCode:(NSString *_Nullable)promoCode
                                         errors:(BMErrors * _Nullable)errors;

#pragma mark - Product Detail

+ (void)batchLogDidPressAddToCartButtonFromProductDetailWithProductName:(NSString * _Nullable)productName
                                                            productUUID:(NSString * _Nullable)productUUID
                                                               quantity:(NSUInteger)quantity
                                                           priceInCents:(NSUInteger)price;

#pragma mark - Add Payment Method
+ (void)logDidPressAddPaymentMethodButtonFromPaymentList;
+ (void)logEventAddPaymentMethodWithType:(NSString *_Nullable)type cardType:(NSString *_Nullable)cardType errors:(BMErrors * _Nullable)errors;

#pragma mark - Wallet and Fare Medium

+ (void)logEventLoadMoneyFromSource:(NSString *_Nullable)source amount:(NSInteger)amount errors:(BMErrors * _Nullable)errors;
+ (void)logEventSaveAutoLoadFromSource:(NSString *_Nullable)source amount:(NSInteger)amount threshHoldBalance:(NSInteger)threshHoldBalance errors:(BMErrors * _Nullable)errors;
+ (void)logEventRemoveAutoLoadFromSource:(NSString *_Nullable)source errors:(BMErrors * _Nullable)errors;

#pragma mark - Fare Medium

+ (void)logEventCreateVirtualCardWithType:(NSString *_Nullable)type nickName:(NSString *_Nullable)nickName errors:(BMErrors * _Nullable)errors;
+ (void)logEventTransferVirtualCardWithErrors:(BMErrors * _Nullable)errors;
+ (void)logEventVirtualCardsLoadedWithErrors:(BMErrors * _Nullable)errors;
+ (void)logEventLinkExistingCardWithErrors:(BMErrors * _Nullable)errors;
+ (void)logEventAvailablePassesLoadedWithErrors:(BMErrors * _Nullable)errors;
+ (void)logEventFareCappingWithErrors:(BMErrors * _Nullable)errors;
+ (void)logEventCardHistoryLoadedWithErrors:(BMErrors * _Nullable)errors;
+ (void)logEventUseScreenDisplayed;
+ (void)logEventBlockUnBlockScreenDisplayed;
+ (void)logEventCreateVirtualCardScreenDisplayed;
+ (void)logEventLinkPhysicalCardScreenDisplayed;
+ (void)logEventManageScreenDisplayed;

#pragma mark - Use Tickets
+ (void)batchLogWhenPrivateKeyBecomesNil;
+ (void)batchLogLogoutUserWhenPrivateKeyNilExceeds3Times;
+ (void)logDidDisplayUseTicketsScreenIsLoggedIn:(BOOL)isLoggedIn passes:(NSArray<BMPass *> *_Nullable)passes;
+ (void)logEventDevicePassesLoadedFromScreen:(NSString * _Nullable)screen
                                       count:(NSInteger)count
                                 forceReload:(BOOL)forceReload
                                  withError:(NSString * _Nullable)error;
+ (void)logEventCloudPassesLoadedFromScreen:(NSString * _Nullable)screen
                                      count:(NSInteger)count
                                forceReload:(BOOL)forceReload
                                 withError:(NSString * _Nullable)error;
+ (void)logTicketDidFinishDisplayingWithCount:(NSInteger)count withError:(NSError * _Nullable)error;
+ (void)logEventRepurchaseWithProductName:(NSString * _Nullable)productName
                                     uuid:(NSString * _Nullable)productUUID
                                   screen:(NSString * _Nullable)screen;
+ (void)logEventSendTicketToUserWithProductUUID:(NSString * _Nullable)productUUID
                                    productName:(NSString * _Nullable)productName
                                         errors:(BMErrors * _Nullable)errors;
+ (void)logEventResendReceiptFromScreen:(NSString * _Nullable)screen
                            productUUID:(NSString * _Nullable)productUUID
                                 errors:(BMErrors * _Nullable)errors;
+ (void)logEventViewTicketDetailWithUUID:(NSString *_Nullable)productUUID
                              fromScreen:(NSString * _Nullable)screen;
+ (void)logEventActivateTickets:(NSInteger)count
                withEnablerProduct:(BOOL)hasEnablerProduct
                           succeed:(BOOL)succeed
                      errorMessage:(NSString * _Nullable)errMsg
                   hasCloudTickets:(BOOL)hasCloudTickets;

#pragma mark - Settings

+ (void)batchLogDidSelectSettingItemWithTitle:(NSString *_Nonnull)title;
+ (void)logEventProfileLoadingCompletedWithErrors:(BMErrors * _Nullable)errors;
+ (void)logEventProfileUpdateCompletedWithErrors:(BMErrors * _Nullable)errors;
+ (void)logEventPasswordChangedCompletedWithErrors:(BMErrors * _Nullable)errors;
+ (void)batchLogDidSelectTabItemWithTitle:(NSString * _Nullable)title key:(NSString * _Nullable)key;

#pragma mark - Voucher Code

+ (void)logEventVoucherEntryScreenDisplayed;
+ (void)logEventVoucherCodeAppliedWithErrorInfo:(BMErrors * _Nullable)errors;

#pragma mark - Webview

+ (void)logDidDisplayWebviewWithTitle:(NSString * _Nonnull)title;

#pragma mark - Notifications

+ (void)logDidDisplayNotificationListScreenWhenUser:(BOOL)isLoggedIn;
+ (void)logDidDisplayNotificationDetailScreenWithNotificationTitle:(NSString * _Nullable)title
                                                              uuid:(NSString * _Nullable)uuid
                                                         isWebView:(BOOL)isWebView;
+ (void)logDidPressNotificationMoreInfoButtonWithNotificationTitle:(NSString * _Nullable)title
                                                              uuid:(NSString * _Nullable)uuid;
+ (void)logEventNotificationSettingsLoadedWithErrors:(BMErrors * _Nullable)errors;

#pragma mark - Ticket Storage

+ (void)logDidDisplayTicketStorageScreenWithCount:(NSUInteger)numTickets withErrorMessage:(NSString *_Nullable)errorMessage;
+ (void)batchLogDidFinishTransferTicketsToCloud;
+ (void)batchLogDidFinishTransferTicketsToDevice;
+ (void)logDidDefaultStorageLocationChanged:(int)locationCloud;

#pragma mark - Purchase History

+ (void)logEventPurchaseHistoryLoadedWithPage:(NSUInteger)pageNumber withErrors:(BMErrors * _Nullable)errors;
+ (void)logEventReceiptScreenDisplayed;

#pragma mark - Account Photo Screen

+ (void)logEventAccountPhotoScreenDisplayed;
+ (void)logEventAccountPhotoUpdatedWithErrors:(BMErrors * _Nullable)errors;

#pragma mark - Deep Link Credit pass

+ (void)logDeepLinkCreditPass:(NSString *_Nullable)productID quantity:(NSString *_Nullable)qty saveToDevice:(BOOL)isSaveToDevice withErrors:(BMErrors * _Nullable)errors;

@end
