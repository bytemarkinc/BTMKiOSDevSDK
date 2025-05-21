//
//  BMTCore.h
//  BMTCoreSDK
//
//  Created by Chandan Kumar on 01/10/21.
//

#import "BMSession.h"

NS_ASSUME_NONNULL_BEGIN

@interface BMTCore : NSObject

+ (BMSession *)session;
+ (BOOL)hasInternetConnection;

@end

NS_ASSUME_NONNULL_END
