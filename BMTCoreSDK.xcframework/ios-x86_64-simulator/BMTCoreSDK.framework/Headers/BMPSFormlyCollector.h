//
//  BMPSFormlyCollector.h
//  BMPassSDK
//
//  Created by Xiangdong Zhu on 4/4/17.
//  Copyright © 2017 Bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface BMPSFormlyCollector : NSObject

+ (NSDictionary *)formDataFromContentsOfView:(UIView *)view;

@end
