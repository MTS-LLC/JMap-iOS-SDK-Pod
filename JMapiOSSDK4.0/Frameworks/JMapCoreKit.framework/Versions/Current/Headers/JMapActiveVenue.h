//
//  JMapActiveVenue.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-10-17.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapWaypoint;
@class JMapMap;
@class JMapBuildingCollection;
@class JMapDestinationCollection;
@class JMapAmenityCollection;
@class JMapMapCollection;
@class JMapPathTypeCollection;
@class JMapMapLabelCollection;
@class JMapPathPerFloor;

@interface JMapActiveVenue : JMapBaseModel

/*!
 * Name of the venue
 */
@property (nonatomic, strong, readonly, nullable) NSString *name;

/*!
 * Map associated with the venue
 */
@property (nonatomic, strong, readonly, nullable) JMapMap * map;

/*!
 * List of all devices in the venue, JMapDevices objects
 */
@property (nonatomic, strong, readonly, nullable) NSString *coordinates;

/*!
 * Buildings associated with this venue
 */
@property (nonatomic, strong, readonly, nullable) JMapBuildingCollection * buildings;

/*!
 * Destinations associated with this venue
 */
@property (nonatomic, strong, readonly, nullable) JMapDestinationCollection * destinations;

/*!
 * Amenities associated with this venue
 */
@property (nonatomic, strong, readonly, nullable) JMapAmenityCollection * amenities;

/*!
 * Maps associated with this venue
 */
@property (nonatomic, strong, readonly, nullable) JMapMapCollection * maps;

/*!
 * Path Types associated with this venue
 */
@property (nonatomic, strong, readonly, nullable) JMapPathTypeCollection * pathTypes;

/*!
 * Map Labels associated with this venue
 */
@property (nonatomic, strong, readonly, nullable) JMapMapLabelCollection * mapLabels;

-(nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dict;

#pragma mark - Wayfind Helpers
- (void)updateWayfindDataWithCompletion:(nullable void(^)(BOOL success))completion;

- (nonnull NSArray <JMapPathPerFloor *>*)wayfind:(nonnull JMapWaypoint *)waypointStart to:(nonnull JMapWaypoint *)waypointEnd  withAccessibility:(NSInteger)accessible;

- (nullable JMapWaypoint *)getClosestWaypointInArray:(nonnull NSArray <JMapWaypoint *>*)waypointArray toWaypoint:(nonnull JMapWaypoint *)waypoint withAccessibility:(NSInteger)accessible;

- (nullable JMapWaypoint *)getClosestWaypointToCoordinateOnMap:(nonnull JMapMap *)map withCoordinate:(CGPoint)coordinate;

- (nullable JMapWaypoint *)getClosestWaypointInArray:(nonnull NSArray <JMapWaypoint *>*)waypointArray toCoordinate:(CGPoint)point;

@end
