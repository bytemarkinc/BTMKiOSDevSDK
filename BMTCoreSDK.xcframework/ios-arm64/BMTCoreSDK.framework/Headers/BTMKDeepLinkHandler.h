//
//  BTMKDeepLinkHandler.h
//  BMPassSDK
//
//  Created by Xiangdong Zhu on 1/25/18.
//  Copyright © 2018 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol BTMKDeepLinkHandlerProtocol <NSObject>

- (BOOL)application:(UIApplication *)app
            openURL:(NSURL *)url
            options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;

@end


@interface BTMKDeepLinkHandler : NSObject <BTMKDeepLinkHandlerProtocol>

+ (instancetype)defaultHandler;

- (void)addHandler:(id<BTMKDeepLinkHandlerProtocol>)handler;

@end
