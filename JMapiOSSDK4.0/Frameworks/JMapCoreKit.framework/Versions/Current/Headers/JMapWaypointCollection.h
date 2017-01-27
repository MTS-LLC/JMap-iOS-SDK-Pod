//
//  JMapWaypointCollection.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-28.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapDestination;
@class JMapAmenity;

@interface JMapWaypointCollection : JMapBaseCollection

/*!
 * Get all object in collection
 *
 * @return an array of JMapWaypoint objects
 */
- (nonnull NSArray <JMapWaypoint *>*)getAll;

/*!
 * Get By External ID
 * @param externalId ID to search for
 *
 * @return An array of JMapWaypoint objects associase to the external ID
 */
- (nonnull NSArray <JMapWaypoint *>*)getByExternalId:(nonnull NSString *)externalId;

/*!
 * Get JMapWaypoint object by ID in collection
 * @param id ID to search for
 *
 * @return JMapWaypoint associated to ID or a nil if JMapBaseModel does not exists
 */
- (nullable JMapWaypoint *)getById:(NSInteger)id;

/*!
 * Get Waypoints by Destination
 * @param destination A JMapDestination* object associated with the waypoint
 * @return An NSArray* of JMapWaypoint* objects
 */
-(nonnull NSArray <JMapWaypoint*>*)getByDestination:(nonnull JMapDestination *)destination;

/*!
 * Get Waypoints by Amenity
 * @param amenity A JMapAmenity* object associated with the waypoint
 * @return An NSArray* of JMapWaypoint* objects
 */
-(nonnull NSArray <JMapWaypoint*>*)getByAmenity:(nonnull JMapAmenity *)amenity;

@end
