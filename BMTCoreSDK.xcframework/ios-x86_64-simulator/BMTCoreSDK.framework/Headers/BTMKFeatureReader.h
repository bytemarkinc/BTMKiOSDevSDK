//
//  BMFeatureReader.h
//  BMCoreSDK
//
//  Created by Xiangdong Zhu on 6/8/16.
//  Copyright © 2016 Bytemark, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BTMKEnum.h"

@class BTMKTheme;
@class BTMKOrganization;
@class BTMKLocale;
@class BMWLOrgModel;

@interface BTMKFeatureReader : NSObject

+ (instancetype)instanceWithConfigJSON:(NSDictionary *)jsonData;
+ (instancetype)instance;

#pragma mark Domain
- (NSString *)appRegion;
- (NSString *)overtureURL;
- (NSString *)accountsURL;
- (NSString *)merchantWebURL;
- (NSString *)merchantMobileURL;
- (NSString *)overtureConnectURL;

#pragma mark Organization
@property (nonatomic, readonly) NSArray<BTMKOrganization *> *organizations;
@property (nonatomic, readonly) NSArray<BTMKOrganization *> *childOrganizations;

- (BTMKOrganization *)organizationForUUID:(NSString *)uuid;
- (BTMKOrganization *)parentOrganization;
- (BOOL)isChildOrganizationPresent;
- (BOOL)isOriginDestinationLongNameForUUID:(NSString *)uuid;
- (NSString *)shortDisplayNameForOrgUUID:(NSString *)uuid;

#pragma mark Theming
- (UIImage *)logoSquareForOrganizationID:(NSString *)orgID;
- (UIImage *)logoWideForOrganizationID:(NSString *)orgID;
- (BTMKTheme *)dataThemeForOrganizationID:(NSString *)orgID;
- (BTMKTheme *)accentThemeForOrganizationID:(NSString *)orgID;
- (BTMKTheme *)collectionThemeForOrganizationID:(NSString *)orgID;
- (BTMKTheme *)backgroundThemeForOrganizationID:(NSString *)orgID;
- (BTMKTheme *)headerThemeForOrganizationID:(NSString *)orgID;
- (UIColor *)successIndicatorForOrganizationID:(NSString *)orgID;
- (UIColor *)errorIndicatorForOrganizationID:(NSString *)orgID;
- (UIColor *)warningIndicatorForOrganizationID:(NSString *)orgID;

#pragma mark Configuration
- (NSDictionary *)iosCustomerMobileConfig;
- (NSURL *)appStoreURL;
- (NSDictionary *)serviceConfigForServiceName:(NSString *)serviceName;
- (NSString *)clientID;
- (NSString *)organizationID;
- (NSString *)twoDBarcodeType;
- (NSTimeInterval)barcodeRefreshInterval;
- (BTMKPayloadType)payloadType;
- (double)barcodePhysicalSizeInMM;//0 means not specified
- (BOOL)payloadRequiresSignature;
- (BOOL)isBarcodeEnabled;
- (BOOL)isAuthenticationNative;
- (BOOL)isAutoActivationEnabled;
- (BOOL)isConfigBarcodeDetailsAvailable;
- (BOOL)useLinkPhysicalCardString;
- (BOOL)isFareMediaCardNickNameRequired;
- (BOOL)hasShowFareMediaActions;
- (NSArray<NSString *> *)socialSignInOptions;
- (BOOL)photoValidationEnabled;
- (NSArray<NSNumber *> *)supportedPaymentTypes;
- (NSArray *)orderedPaymentMethods;
- (NSString *)currencyCode;
- (BOOL)isAllowSplitPaymentInPassPurchase;
- (BOOL)isAllowSplitPaymentInFareMediaReload;
- (BOOL)isAllowSplitPaymentInWalletReload;
- (BOOL)isAllowSplitPaymentInFareMediaAutoload;
- (int)maxSplitPayment;
- (BOOL)usePlaceOrderEndpoint;
- (BOOL)requireAdditionalCCFields;
- (BOOL)isRemoteNotificationEnabled;
- (NSString *)applePayMerchantIdForOrgId:(NSString *)orgId;
- (NSString *)applePayMerchantId;
- (BOOL)isNotificationEnabled;
- (BOOL)isSecurityQuestionEnabled;
- (BOOL)isSecurityQuestionBlockEnabled;
- (BOOL)enableLocationTracking;
- (BOOL)savePassesToDevice;
- (BOOL)allowsPromotionalCodes;
- (BOOL)allowsLoadMoneyPromotionalCodes;
- (BOOL)isSignInLogo;
- (BOOL)isV2PaymentMethods;
- (BOOL)isDefaultPaymentMethodEnabled;
- (int)voucherCodeLength;
- (BOOL)isNewStoreFilter;
- (BOOL)isHaconSDKEnabled;
- (BOOL)isBiometricsEnabled;
- (BOOL)isActivationAlert;
- (NSString *)faremediaLastUpdateLabel;
- (BOOL)showInfoForAddCardScreen;
- (BOOL)showInfoForFareCappingScreen;
- (BOOL)isSendLocaleToBackend;
- (BOOL)hasOrgsFromConfig;
- (BOOL)useFaresText;
- (BOOL)isAgencySelected;
- (void)updateSelectedAgency;
- (NSString *)getSelectedAgencyType;
- (BMWLOrgModel *)getSelectedAgency;
- (BOOL)useCustomUIForFirebaseInAppMessageDisplay;

#pragma mark Locales
@property (nonatomic, readonly) NSArray<BTMKLocale *> *supportedLocales;

#pragma mark Config files

- (NSDictionary *)bestMatchedConfigNamed:(NSString *)configName;

- (NSURL *)bestMatchedFileNamed:(NSString *)fileName;

@end
