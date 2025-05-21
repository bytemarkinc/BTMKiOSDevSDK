//
//  BTMKOrganization.h
//  BMCoreSDK
//
//  Created by Xiangdong Zhu on 8/17/16.
//  Copyright © 2016 co.bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BTMKTheme.h"
#import "BTMKIndicators.h"


@class BTMKLocale;
@class BTMKMenuGroup;


@interface BTMKOrganization : NSObject

+ (instancetype)organizationWithJSON:(NSDictionary *)jsonObject;

@property (nonatomic, readonly) BOOL isChild;

- (NSString *)uuid;
- (NSString *)legalName;
- (NSString *)displayName;
- (NSString *)shortDisplayName;
- (BOOL)isConnectApp;
- (BOOL)isFareMediaApp;
- (BOOL)allowsBMBranding;
- (BOOL)isIDMLoginEnabled;
- (NSString *)abbreviation;
- (BOOL)isOriginDestinationLongName;
- (BOOL)hasFaremediumAction;

#pragma mark App Rating Configurations
- (NSInteger)minimumAppLaunchSessions;
- (NSInteger)requiredFeedbackPopups;
- (NSInteger)delayBetweenTwoFeedbackPopup;
- (NSInteger)resetFeedbackduration;
- (NSString *)appStoreID;
- (BOOL)isDisplayNativeStoreReviewController;

#pragma mark Theming
- (UIImage *)logoSquare;
- (UIImage *)logoWide;
- (UIImage *)logoWideForUseScreen;
- (UIImage *)logoFareMedia;
- (BTMKTheme *)dataTheme;
- (BTMKTheme *)accentTheme;
- (BTMKTheme *)collectionTheme;
- (BTMKTheme *)backgroundTheme;
- (BTMKTheme *)headerTheme;
- (BTMKTheme *)navigationTheme;
- (UIColor *)successIndicator;
- (UIColor *)errorIndicator;
- (UIColor *)warningIndicator;

#pragma mark Indicators
- (BTMKIndicators *)indicators;

#pragma mark Locales
- (BTMKLocale *)defaultLocale;
- (BTMKLocale *)currentLocale;
- (NSArray<BTMKLocale *> *)supportedLocales;

#pragma mark Pass configuration
- (BOOL)supportsPasses;
- (BOOL)supportsFareMedium;
- (BOOL)shouldShowTutorial;
- (BOOL)isMutiActivationEnabled;
- (BOOL)isElertsEnabled;

- (NSDictionary *)passViewConfigurationJSON;
- (NSDictionary *)fareMediumConfigurationJSON;

#pragma mark V3 configuration
- (BOOL)hasNativeV3Config;
- (NSString *)headerLeftTitle;
- (NSString *)headerRightTitle;
- (NSString *)centerTitle;
- (NSString *)indicatorText;
- (NSString *)footerTitle;
- (NSString *)footerTitleSecondary;
- (NSString *)footerSubTitle;
- (NSString *)footerSubTitleSecondary;
- (NSString *)defaultActiveTicketScreen;
- (UIColor *)V3HeaderIndicatorColor;
- (UIColor *)V3CenterIndicatorColor;
- (UIColor *)V3FooterIndicatorColor;
- (NSTimeInterval)V3IndicatorDuration;
- (BOOL)isDisplayPassActivationCountDown;
- (BOOL)isDisplayNumericQuantityForSinglePass;

- (BOOL)isDataScreenEnabled;
- (NSArray *)dataScreenItems;
- (BOOL)moveTicketToCloudOrDevice;
- (NSString *)applePayMerchantId;

#pragma mark Deep Link configuration
- (NSString *)deepLinkDomain;

@end
