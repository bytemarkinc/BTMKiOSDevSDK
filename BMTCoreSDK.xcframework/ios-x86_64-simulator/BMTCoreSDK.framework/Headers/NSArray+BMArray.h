//
//  NSArray.h
//  BMCoreSDK
//
//  Created by Kevin Rejko on 4/19/13.
//  Copyright (c) 2013 Bytemark. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 A block used when making custom comparisons. Each value in the array is tested using block and returns a boolean indicating if that value passes the conditional.
 
 @param object object to be compared
 
 @return boolean indicating if the object passed the condition
 */
typedef BOOL (^ConditionalBlock)(id object);

/*!
 Block used to faciltate the adding of objects to a collection.
*/
typedef void (^AddToArrayBlock)(id objectToAdd, NSMutableArray *array);


@interface NSArray (ArrayExtension)

/*!
 Filters objects based on a custom condition contained within the block
 
 @param test the block containing the condition to be checked
 
 @return subset of the objects filtered by the condition in the filter block
 */
- (NSArray *)objectsThatPassTest:(BOOL (^)(id obj, NSUInteger idx, BOOL *stop))test;

/*!
 Filters objects based on a custom condition contained within the conditional block
 
 @param condition the block containing the condition to be checked
 
 @return subset of the objects filtered by the condition in the filter block
 */
- (NSArray *)filteredByCondition:(ConditionalBlock)condition;

/*!
 Allows for creation of custom result set by running AddToArrayBlock against each item in an array.
 
 @param addToArrayBlock allows for customization of objects added to array
 
 @return subset of the objects added in the AddToArrayBlock
 */
- (NSArray *)arrayByManuallyAddingObjectsInBlock:(AddToArrayBlock)addToArrayBlock;

/*!
 Returns a new array by removing the given object from current array.
 
 @param object The object to remove
 
 @return New array without the object
 */
- (NSArray *)arrayByRemovingObject:(id)object;

/*!
 Returns all objects that exist in array
 
 @param array to check for containment
 
 @return objects that match objects in array param
 */
- (NSArray *)objectsContainedInArray:(NSArray *)array;

/*!
 Filters objects based on if they are missing from the array parameter
 
 @param array objects checked against to determine which are missing
 
 @return objects missing from the array parameter.
 */
- (NSArray *)objectsMissingFromArray:(NSArray *)array;

/*!
 Adds each object in another given array to the receiving array, if not present
 */
- (NSArray *)unionWithArray:(NSArray *)array;

/*!
 Indicates if all objects adhere to a condition specified in the ConditionalBlock
 
 @param condition The test by which all objects must adhere to.
 
 @return BOOL specifing if all objects passed test.
 */
- (BOOL)allObjectsPassTest:(ConditionalBlock)condition;

/*!
 Determines if all objects from array paramter are contained in self
 
 @param objects objects checked against to determine if they are contained
 
 @return BOOL indicating if self contains all object.
 */
- (BOOL)containsAllObjects:(NSArray *)objects;

/*!
 Determines if two of the same object are in the array
 
 @return BOOL indicating if duplicate objects exist.
 */
- (BOOL)containsDuplicateObjects;

/*!
 * Checks if this array has any object that is also in anotherArray.
 *
 * @param anotherArray Another array to check against
 *
 */
- (BOOL)containsDuplicateObjectsWith:(NSArray *)anotherArray;

/*!
 Compares the receiving array to another array. Two arrays contain the same contents if they each have the same number of members and if each member of one array is present in the other. Duplicates are removed before this comparison takes place.
 
 @param otherArray The array to compare to the receiving array
 
 @return YES if the contents of otherArray exist in the receiving array and counts are equal, otherwise NO
*/
- (BOOL)hasSameObjectsAsArray:(NSArray *)otherArray;

/*!
 * Return a new array by replacing one element by another. If the index is invalid, or the new element is nil, return current array.
 *
 * @param index Index of the element to replace.
 *
 * @param element New element to occupy the place.
 *
 */
- (NSArray *)arrayByReplacingElementAtIndex:(NSInteger)index with:(id)element;

@end
