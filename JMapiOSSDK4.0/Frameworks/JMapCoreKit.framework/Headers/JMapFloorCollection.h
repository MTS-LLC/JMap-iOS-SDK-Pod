//
//  JMapFloorCollection.h
//  JMapCore
//
//  Created by Aaron Wong on 2016-09-28.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapFloor;
@class JMapDestination;

@interface JMapFloorCollection : JMapBaseCollection

/*!
 * Get Default Floor
 *
 * @return Default JMapFloor object
 */
- (nullable JMapFloor *)getDefault;

/*!
 * Get all object in collection
 *
 * @return an array of JMapFloor objects
 */
- (nonnull NSArray <JMapFloor *>*)getAll;

/*!
 * Get By External ID
 * @param externalId ID to search for
 *
 * @return An array of JMapFloor objects associase to the external ID
 */
- (nonnull NSArray <JMapFloor *>*)getByExternalId:(nonnull NSString *)externalId;

/*!
 * Get JMapFloor object by ID in collection
 * @param id ID to search for
 *
 * @return JMapFloor associated to ID or a nil if JMapBaseModel does not exists
 */
- (nullable JMapFloor *)getById:(NSInteger)id;

/*!
 * Get Floor By Level
 * @param level number to search by
 *
 * @return JMapFloor object associated by the floor
 */
- (nullable JMapFloor *)getByLevel:(int)level;

/*!
 * Get Floor By MAp
 *
 * @return JMapFloor object
 */
- (nullable JMapFloor *)getByMap:(nonnull JMapMap *)map;

/*!
 * Get Array Of Floors By Destination
 * @param destination destination to search by
 *
 * @return Array of JMapFloor objects associated to the destination
 */
- (nonnull NSArray <JMapFloor *>*)getByDestination:(nonnull JMapDestination *)destination;

/*!
 * Get All JMapFloors By Preference
 *
 * @return Array of all JMapFloor by order of preference
 */
- (nonnull NSArray <JMapFloor *>*)getAllSortedByPreference;

/*!
 * Get All JMapFloors By Level
 *
 * @return Array of all JMapFloor by order of level
 */
- (nonnull NSArray <JMapFloor *>*)getAllSortedByLevel;

/*!
 * Get All JMapFloors By Altitude
 *
 * @return Array of all JMapFloor by order of altitude
 */
- (nonnull NSArray <JMapFloor *>*)getAllSortedByAltitude;

@end
