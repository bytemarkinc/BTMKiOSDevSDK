//
//  BMWLKeyToScreenMap.h
//  BMWhiteLabelSDK
//
//  Created by Shuyang Sun on 2/15/17.
//  Copyright © 2017 co.bytemark. All rights reserved.
//

#import <UIKit/UIKit.h>


@protocol BMWLKeyToScreenMappingInterface <NSObject>

- (UIViewController *_Nullable)controllerForKey:(NSString *_Nonnull)key;

@end


@interface BMWLKeyToScreenMap : NSObject

typedef void (^BMWLDisplayScreenAction)(id);

+ (BMWLDisplayScreenAction)actionToPresentViewControllerForKey:(NSString *)key
                                                     withTitle:(NSString *)title
                                            fromViewController:(UIViewController *)controller;

+ (UIViewController *)controllerForKey:(NSString *)key;

+ (NSMutableArray *)keyToScreenMappingProviders;

+ (void)addKeyToScreenMappingProvider:(id<BMWLKeyToScreenMappingInterface> _Nonnull)provider;

+ (void)removeKeyToScreenMappingProvider:(id<BMWLKeyToScreenMappingInterface> _Nonnull)provider;

@end
