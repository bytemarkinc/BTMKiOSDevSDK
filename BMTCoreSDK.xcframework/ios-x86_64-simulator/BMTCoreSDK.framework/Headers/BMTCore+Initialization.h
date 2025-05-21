//
//  BMTCore+Initialization.h
//  BMTCoreSDK
//
//  Created by Chandan Kumar on 07/10/21.
//

#import <BMTCoreSDK/BMTCore.h>

@protocol BMGeneralErrorDelegate <NSObject>

- (void)didProduceError:(NSError *)error;
- (void)didProduceInvalidTimeError:(NSError *)error;

@end

NS_ASSUME_NONNULL_BEGIN

@interface BMTCore (Initialization)

+ (void)initWithGeneralErrorHandler:(id<BMGeneralErrorDelegate>)delegate;

+ (id<BMGeneralErrorDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
