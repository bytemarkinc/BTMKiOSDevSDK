//
//  NSDictionary.h
//  BMPassSDK
//
//  Created by Kevin Rejko on 4/16/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>
#define kKEY_DATA @"data"
#define kKEY_SERVER_TIME @"server_time"


@interface NSDictionary (DictionaryExtension)

/* Static Initializer */
+ (NSDictionary *)dictionaryByAppendingDictionaryArray:(NSArray *)dictionaryArray;
+ (NSArray *)dictionaries:(NSArray *)dictionaries sortedByKeyValues:(NSArray *)keys;

/* URL Encoding */
- (NSString *)URLEncodedString;

/* Key-Value Encoding */
- (id)requiredValueForKey:(NSString *)key;

/* Property Safety */
- (NSDate *)dateFromParsingSafeValueForKey:(NSString *)key;
- (NSArray *)arrayOfSafeValueForKey:(NSString *)key class:(Class)JSONClass;
- (id)safeValueForKey:(NSString *)key;
- (id)safeValueForKeyPath:(NSString *)keyPath;

/* Private Methods */
- (NSString *)JSONDescription;

- (NSString *)stringValue;
- (NSArray *)allKeysAlphabetical;
- (NSArray *)allKeysAlphabeticalDesc;
- (BOOL)containsAllKeysInArray:(NSArray *)keyArray;
- (NSDictionary *)subDictionaryWithKeys:(NSArray *)keys;
- (NSDictionary *)dictionaryByReplacingElement:(id _Nullable)element forKey:(id<NSCopying> _Nonnull)key;
- (NSDictionary *)dictionaryByAppendingDictionary:(NSDictionary *)dictionary;

/* Parser Helpers */
- (NSDictionary *)data;
- (NSDate *)serverDatetime;
- (NSDate *)transferTime;

+ (NSDictionary *)attributesFromDictionaryArray:(NSArray *)attributeDictionaryArray;

+ (NSDictionary *)JSONFromContentsOfFile:(NSString *)filepath;

@end
