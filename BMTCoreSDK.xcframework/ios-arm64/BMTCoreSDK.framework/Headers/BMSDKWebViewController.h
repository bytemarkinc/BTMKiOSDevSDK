//
//  WebViewController.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 4/5/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import "BMSDKViewController.h"

/* Frameworks */
//#import "BMPassSDK.h"
#import <WebKit/WebKit.h>


@interface BMSDKWebViewController : BMSDKViewController <WKUIDelegate, WKNavigationDelegate>

@property (nonatomic) BOOL isPOSTRequest;

@property (nonatomic) WKWebView *wkWebView;

@property (nonatomic) BOOL skipJavaScriptPopUp;

/* WebView */
- (void)loadDefaultURL;
- (void)attemptToLoadPageWithURL:(NSURL *)URL;
- (void)attemptToLoadPageWithRequest:(NSURLRequest *)URLRequest;
- (NSURL *)defaultURL;
- (void)attemptToLoadPageWithRequestWithPostData:(NSURL *)postURL;

/* Clearning Cache */
- (void)clearAllCaches;
- (void)clearCookies;
- (void)clearURLCache;
- (void)clearCurrentDocument;

/* Button Actions */
- (void)cancelButtonPressed:(id)sender;
- (void)dismissView;

/* Abstract Methods */
- (void)dismissWithError:(NSError *)error;

@end
