//
//  JMapDestinationCollection.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-23.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapDestination;
@class JMapBuilding;
@class JMapFloor;
@class JMapMap;
@class JMapWaypoint;

/*!
 * @interface JMapDestinationCollection
 *  This is the Destination Collection Model of the SDK.
 */
@interface JMapDestinationCollection : JMapBaseCollection

/*!
 * Get all object in collection
 *
 * @return an array of JMapDestination objects
 */
- (nonnull NSArray <JMapDestination *>*)getAll;

/*!
 * Get By External ID
 * @param externalId NSString ID to search for
 *
 * @return An array of JMapDestination objects associase to the external ID
 */
- (nonnull NSArray <JMapDestination *>*)getByExternalId:(nonnull NSString *)externalId;

/*!
 * Get JMapDestination object by ID in collection
 * @param id NSNumber ID to search for
 *
 * @return JMapDestination associated to ID or a nil if JMapBaseModel does not exists
 */
- (nullable JMapDestination *)getById:(NSInteger)id;

/*!
 * Get Destinations by Tag
 * @param tag NSString* tag associated to the destination
 * @return NSArray* of JMapDestination* objects
 */
-(nullable NSArray <JMapDestination *>*)getByTag:(nonnull NSString *)tag;

/*!
 * Get Destinations by Keyword
 * @param keyword A NSString* keyword associated to the destination
 * @return NSArray* of JMapDestination* objects
 */
-(nullable NSArray <JMapDestination *>*)getByKeyword:(nonnull NSString *)keyword;

/*!
 * Get Destinations by Buidling
 * @param building A JMapBuilding* object associated to the destination
 * @return NSArray* of JMapDestination* objects
 */
-(nullable NSArray <JMapDestination *>*)getByBuilding:(nonnull JMapBuilding *)building;

/*!
 * Get Destinations by Floor
 * @param floor A JMapFloor* object associated to the destination
 * @return NSArray* of JMapDestination* objects
 */
-(nullable NSArray <JMapDestination *>*)getByFloor:(nonnull JMapFloor *)floor;

/*!
 * Get Destinations by Map
 * @param map A JMapMap* object associated to the destination
 * @return NSArray* of JMapDestination* objects
 */
-(nullable NSArray <JMapDestination *>*)getByMap:(nonnull JMapMap *)map;

/*!
 * Get Destinations by Waypoint
 * @param waypoint A JMapWaypoint* object associated to the destination
 * @return NSArray* of JMapDestination* objects
 */
-(nullable NSArray <JMapDestination *>*)getByWaypoint:(nonnull JMapWaypoint *)waypoint;

/*!
 * Get Destinations by Status
 * @param status A NSInteger value associated to the destination
 * @return NSArray* of JMapDestination* objects
 */
-(nullable NSArray <JMapDestination *>*)getByStatus:(NSInteger)status;

/*!
 * Get Destinations by Unit Number
 * @param unitNumber A NSString* unit number associated to the destination
 * @return NSArray* of JMapDestination* objects
 */
-(nullable NSArray <JMapDestination *>*)getByUnitNumber:(nonnull NSString *)unitNumber;

@end
