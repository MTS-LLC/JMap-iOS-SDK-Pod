//
//  JMapPathCollection.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-28.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapPathType;
@class JMapWaypoint;
@class JMapPath;

@interface JMapPathCollection : JMapBaseCollection

/*!
 * Get all object in collection
 *
 * @return an array of JMapWaypoint objects
 */
- (nonnull NSArray <JMapPath *>*)getAll;

/*!
 * Get By External ID
 * @param externalId ID to search for
 *
 * @return An array of JMapWaypoint objects associase to the external ID
 */
- (nonnull NSArray <JMapPath *>*)getByExternalId:(nonnull NSString *)externalId;

/*!
 * Get JMapPath object by ID in collection
 * @param id ID to search for
 *
 * @return JMapPath associated to ID or a nil if JMapBaseModel does not exists
 */
- (nullable JMapPath *)getById:(NSInteger)id;

/*!
 * Get Paths by Path Type
 * @param pathType A JMapPathType* object associated to the path
 * @return An NSArray* of JMapPath* objects
 */
-(nonnull NSArray <JMapPath*>*)getByPathType:(nonnull JMapPathType *)pathType;

/*!
 * Get Paths by Name
 * @param name A NSString* name associated to the path
 * @return An NSArray* of JMapPath* objects
 */
-(nonnull NSArray <JMapPath*>*)getByName:(nonnull NSString *)name;

/*!
 * Get Paths by Waypoint
 * @param waypoint A JMapWaypoint* object associated to the path
 * @return An NSArray* of JMapPath* objects
 */
-(nonnull NSArray <JMapPath*>*)getByWaypoint:(nonnull JMapWaypoint *)waypoint;

/*!
 * Get Paths by Direction
 * @param direction A NSInteger associated to the path
 * @return An NSArray* of JMapPath* objects
 */
-(nonnull NSArray <JMapPath*>*)getByDirection:(NSInteger)direction;

/*!
 * Get Paths by Status
 * @param status A NSInteger associated to the path
 * @return An NSArray* of JMapPath* objects
 */
-(nonnull NSArray <JMapPath*>*)getByStatus:(NSInteger)status;

@end
