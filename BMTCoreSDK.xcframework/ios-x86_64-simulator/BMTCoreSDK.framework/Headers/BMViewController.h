//
//  BMViewController.h
//  NY Waterway
//
//  Created by Kevin Rejko on 10/9/13.
//  Copyright (c) 2013 Bytemark Inc,. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <BMTCoreSDK/BMTCoreSDK.h>

@class BMAPIErrorHandler;
@class BMErrors;

@protocol BMInternetConnectionStatusChangedDelegate <NSObject>

@optional
- (void)internetConnectionGained;
- (void)internetConnectionLost;

@end


@protocol BMWLContentSizeCategoryChangedDelegate <NSObject>

- (void)didReceiveContentSizeCategoryDidChangeNotification;

@end


/*!
 Abstract class that implements common functionality shared across all View Controllers in the White Label. All View Controllers in the White Label inherited form this class.
 */
@interface BMViewController : UIViewController

@property (nonatomic) UIImageView *watermarkImageView;

/*!
 Parameters set on a controller to dictate its behavior once loaded
 */
@property (nonatomic) NSDictionary *loadParameters;

/*!
 Handles passed errors by showing alerts to the user.
 @param errors
 An array of all the errors
 */
- (void)handleErrors:(NSArray *)errors;
- (void)handleErrors:(NSArray *)errors withDelegate:(id<BMErrorHandlerDelegate>)delegate;

//Activity indicator methods

/*!
 @discussion Provides a message to show in activity indicator window
 */
- (void)setActivityIndicatorMessage:(NSString *)message;

/*!
 @discussion Set the indicator to a predefined message for `Processing`
 */
- (void)setActivityIndicatorMessageToProcessing;

/*!
 @discussion Set the indicator to a predefined message for `Loading`
 */
- (void)setActivityIndicatorMessageToLoading;

/*!
 @discussion Shows activity indicator window on screen
 */
- (void)showActivityIndicator;

/*!
 @discussion Hides activity indicator window
 */
- (void)hideActivityIndicator;

/*!
 @discussion A boolean value that provides information about internet connection availability
 */
- (BOOL)hasInternetConnection;

/* Overridable */

/*!
 A template method to be used by subclasses to apply any custom modifications to the view before it's shown
 */
- (void)paintInterface;

/*!
 The height where content will not be covered by decorators such as status bar and navigation bar. Can be overridden to inclue the hight of additional decorators
 */
- (CGFloat)contentOriginYPosition;

/*!
 Returns a boolean that determines if a class should react to swipe gesture to open side navigation
 @discussion by default returns NO, can be overridden by subclasses
 */
- (BOOL)disableSideNavigationGesture:(UIGestureRecognizer *)gestureRecognizer withTouch:(UITouch *)touch;

/*!
 Returns a boolean that determines if a view is accessible by authenticated user only
 @discussion if class is push into view stack while the user is not looged in, login screen is forced. If login is dismissed the app rolls back to home screen.
 */
- (BOOL)requiresAuthentication;

/*!
 Used to override the showing of the watermark image. Default is FALSE.
 */
- (BOOL)shouldShowWatermarkImage;

@end
