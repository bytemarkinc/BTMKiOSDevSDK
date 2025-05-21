//
//  BMFilterAttributes.h
//  BMPassSDK
//
//  Created by Akshit Bum on 24/04/19.
//  Copyright © 2019 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN


@interface BMFilterAttributes : NSObject

@property (nonatomic, readonly) NSString *originName;
@property (nonatomic, readonly) NSString *destinationName;
@property (nonatomic, readonly) NSString *originShortName;
@property (nonatomic, readonly) NSString *destinationShortName;
@property (nonatomic, readonly) NSString *originFilterValue;
@property (nonatomic, readonly) NSString *destinationFilterValue;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary forOrganizationUUID:(NSString *)organizationUUID;

@end

NS_ASSUME_NONNULL_END
