//
//  JMapMapCollection.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-30.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapWaypoint;
@class JMapDestination;
@class JMapAmenity;
@class JMapFloor;
@class JMapMap;
@class JMapBuilding;

@interface JMapMapCollection : JMapBaseCollection

/*!
 * Get all object in collection
 *
 * @return an array of JMapWaypoint objects
 */
- (nonnull NSArray <JMapMap *>*)getAll;

/*!
 * Get By External ID
 * @param externalId ID to search for
 *
 * @return An array of JMapMap objects associase to the external ID
 */
- (nonnull NSArray <JMapMap *>*)getByExternalId:(nonnull NSString *)externalId;

/*!
 * Get JMapMap object by ID in collection
 * @param id ID to search for
 *
 * @return JMapMap associated to ID or a nil if JMapBaseModel does not exists
 */
- (nullable JMapMap *)getById:(NSInteger)id;

/*!
 * Get All Waypoints on Map
 * @return An NSArray* of JMapWaypoint objects
 */
-(nonnull NSArray <JMapWaypoint*>*)getAllWaypoints;

/*!
 * Get Waypoints containing Destinations
 * @return An NSArray* of JMapWaypoint* objects
 */
-(nonnull NSArray <JMapWaypoint*>*)getWaypointsWithDestinations;

/*!
 * Get Waypoints containing Amenities
 * @return An NSArray* of JMapWaypoint* objects
 */
-(nonnull NSArray <JMapWaypoint*>*)getWaypointsWithAmenities;

/*!
 * Get Waypoints by Destination
 * @param destination A JMapDestination* object associated to the waypoint
 * @return An NSArray* of JMapWaypoint* objects
 */
-(nonnull NSArray <JMapWaypoint*>*)getWaypointsByDestination:(nonnull JMapDestination*)destination;

/*!
 * Get Waypoints by Amenity
 * @param amenity A JMapAmenity* object associated to the waypoint
 * @return An NSArray* of JMapWaypoint* objects
 */
-(nonnull NSArray <JMapWaypoint*>*)getWaypointsByAmenity:(nonnull JMapAmenity*)amenity;

/*!
 * Get Waypoints by Floor
 * @param floor A JMapFloor* object associated to the waypoint
 * @return An NSArray* of JMapWaypoint* objects
 */
-(nonnull NSArray <JMapWaypoint*>*)getWaypointsByFloor:(nonnull JMapFloor*)floor;

/*!
 * Get Waypoints by Map
 * @param map A JMapMap* object associated to the waypoint
 * @return An NSArray* of JMapWaypoint* objects
 */
-(nonnull NSArray <JMapWaypoint*>*)getWaypointsByMap:(nonnull JMapMap*)map;

/*!
 * Get Waypoints by Building
 * @param building A JMapBuilding* object associated to the waypoint
 * @return An NSArray* of JMapWaypoint* objects
 */
-(nonnull NSArray <JMapWaypoint*>*)getWaypointsByBuilding:(nonnull JMapBuilding*)building;


@end
