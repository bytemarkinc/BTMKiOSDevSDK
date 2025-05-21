//
//  BMWLKeyToPaintCodeMap.h
//  BMWhiteLabelSDK
//
//  Created by Ryan Cleeton on 2/16/17.
//  Copyright © 2017 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BMWLKeyToPaintCodeMap : NSObject

+ (UIImage *)imageForKey:(NSString *)key size:(CGSize)size color:(UIColor *)color;

@end
