//
//  BMPSFormlyConfigurator.h
//  BMPassSDK
//
//  Created by Xiangdong Zhu on 6/16/17.
//  Copyright © 2017 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BMPSFormlyDelegate.h"


@interface BMPSFormlyConfigurator : NSObject

- (void)configureView:(UIView *_Nonnull)view withConfigData:(NSDictionary *_Nullable)json delegate:(id<BMPSFormlyControlDelegate> _Nullable)delegate;

@end
