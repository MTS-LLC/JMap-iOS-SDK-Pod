//
//  JMapPathTypeCollection.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-29.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapPathType;

@interface JMapPathTypeCollection : JMapBaseCollection

/*!
 * Get all object in collection
 *
 * @return an array of JMapPathType objects
 */
- (nonnull NSArray <JMapPathType *>*)getAll;

/*!
 * Get By External ID
 * @param externalId ID to search for
 *
 * @return An array of JMapPathType objects associase to the external ID
 */
- (nonnull NSArray <JMapPathType *>*)getByExternalId:(nonnull NSString *)externalId;

/*!
 * Get JMapPathType object by ID in collection
 * @param id ID to search for
 *
 * @return JMapPathType associated to ID or a nil if JMapBaseModel does not exists
 */
- (nullable JMapPathType *)getById:(NSInteger)id;

/*!
 * Get Path Types by Name
 * @param name A NSString* name associated with the path type
 * @return NSArray* of JMapPathType objects
 */
-(nullable NSArray <JMapPathType *>*)getByName:(nonnull NSString *)name;

/*!
 * Get Path Types by Direction
 * @param direction A NSInteger direction associated with the path type
 * @return NSArray* of JMapPathType objects
 */
-(nullable NSArray <JMapPathType *>*)getByDirection:(NSInteger)direction;

@end
