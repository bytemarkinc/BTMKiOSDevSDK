//
//  NetworkActivityIndicator.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 4/12/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h> 


@interface BMNetworkActivityIndicator : NSObject

+ (void)setVisible;
+ (void)setHidden;
+ (void)setNetworkActivityIndicatorVisible:(BOOL)isVisible;

@end
