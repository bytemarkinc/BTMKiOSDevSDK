//
//  BMNetworkResponseParser.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 5/15/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FrameworkDefines.h"

@interface BMNetworkResponseParser : NSObject

@property NSMutableArray *parsedData;
@property (copy) ArrayCompletion completion;
@property (nonatomic) dispatch_queue_t queue;
@property (nonatomic) Class classType;

/* Class Methods */

/*!
 * Parses JSON array of objects conforming to BMJSONCoding protocol.
 *
 * @param JSONItems  An array of JSON objects to be parsed
 * @param classType  A class conforming to BJSONCoding matching the JSON objects to be parsed
 * @param completion Callback block where the parsed objects of type classType will be returned
 */
+ (void)parseJSONData:(JSON *)JSONData
          atKeyPaths:(NSArray *)keyPaths
         ofClassType:(Class)classType
          completion:(ArrayCompletion)completion;
+ (NSArray *)objectsFromJSON:(JSON *)json;

/* Callback */
- (void)callbackWithParsedData;

/* Parsing */
- (void)parseJSONItems:(NSArray *)JSONItems;
- (void)parseJSONValue:(JSON *)JSONValue;

/* Request Completion */
+ (BOOL)requestCompletedSuccessfullyWithJSON:(JSON *)JSON;
+ (BOOL)requestCompletedWithStatusSuccessFromJSON:(JSON *)JSON;

@end
