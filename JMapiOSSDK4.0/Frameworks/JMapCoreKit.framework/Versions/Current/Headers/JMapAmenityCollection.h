//
//  JMapAmenityCollection.h
//  JMapCore
//
//  Created by Aaron Wong on 2016-09-28.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapMap;

@interface JMapAmenityCollection : JMapBaseCollection

/*!
 * Get all object in collection
 *
 * @return an array of JMapAmenity objects
 */
- (nonnull NSArray <JMapAmenity *>*)getAll;

/*!
 * Get By External ID
 * @param externalId ID to search for
 *
 * @return An array of JMapAmenity objects associase to the external ID
 */
- (nonnull NSArray <JMapAmenity *>*)getByExternalId:(nonnull NSString *)externalId;

/*!
 * Get JMapAmenity object by ID in collection
 * @param id ID to search for
 *
 * @return JMapAmenity associated to ID or a nil if JMapBaseModel does not exists
 */
- (nullable JMapAmenity *)getById:(NSInteger)id;

/*!
 * @discussion Get Amenities By Waypoint
 * @params waypoint JMapWaypoint to search by
 *
 * @return Array of JMapAmenity
 */
- (nonnull NSArray <JMapAmenity *>*)getByWaypoint:(nonnull JMapWaypoint *)waypoint;

/*!
 * @discussion Get Amenities By Keyword
 * @params keyword NSString to search by
 *
 * @return Array of JMapAmenity
 */
- (nonnull NSArray <JMapAmenity *>*)getByKeyword:(nonnull NSString *)keyword;

/*!
 * @discussion Get Amenities By Floor
 * @params floor JMapFloor to search by
 *
 * @return Array of JMapAmenity
 */
- (nonnull NSArray <JMapAmenity *>*)getByFloor:(nonnull JMapFloor *)floor;

/*!
 * @discussion Get Amenities By Map
 * @params map JMaMap to search by
 *
 * @return Array of JMapAmenity
 */
- (nonnull NSArray <JMapAmenity *>*)getByMap:(nonnull JMapMap *)map;

/*!
 * @discussion Get Amenities By Building
 * @params building JMapBuilding to search by
 *
 * @return Array of JMapAmenity
 */
- (nonnull NSArray <JMapAmenity *>*)getByBuilding:(nonnull JMapBuilding *)building;

/*!
 * @discussion Get Amenities By Status
 * @params status NSInteger to search by
 *
 * @return Array of JMapAmenity
 */
- (nonnull NSArray <JMapAmenity *>*)getByStatus:(NSInteger)status;

@end
