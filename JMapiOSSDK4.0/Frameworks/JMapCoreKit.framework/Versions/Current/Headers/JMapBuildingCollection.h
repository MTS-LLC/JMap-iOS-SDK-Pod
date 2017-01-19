//
//  JMapBuildingCollection.h
//  JMapCore
//
//  Created by Aaron Wong on 2016-10-04.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@interface JMapBuildingCollection : JMapBaseCollection

/*!
 * Get Default Building
 * @return default JMapBuilding object
 */
- (nullable JMapBuilding *)getDefault;

/*!
 * Assign default building ID in Building Collection
 * @param defaultId NSInteger ID value
 */
- (void)assignDefaultBuildingWithId:(NSInteger)defaultId;

/*!
 * Get all object in collection
 *
 * @return an array of JMapBuilding objects
 */
- (nonnull NSArray <JMapBuilding *>*)getAll;

/*!
 * Get By External ID
 * @param externalId ID to search for
 *
 * @return An array of JMapBuilding objects associase to the external ID
 */
- (nonnull NSArray <JMapBuilding *>*)getByExternalId:(nonnull NSString *)externalId;

/*!
 * Get JMapBuilding object by ID in collection
 * @param id ID to search for
 *
 * @return JMapBuilding associated to ID or a nil if JMapBaseModel does not exists
 */
- (nullable JMapBuilding *)getById:(NSInteger)id;

/*!
 * Get Building by Name
 * @param name A NSString name of the building
 * @return A JMapBuilding object result or nil if no matches found
 */
-(nullable JMapBuilding *)getByName:(nonnull NSString *)name;

/*!
 * Get Building by Floor
 * @param floor JMapFloor associated to building to look for
 *
 * @return A JMapBuilding object result or nil if no matches found
 */
- (nullable JMapBuilding *)getByFloor:(nonnull JMapFloor *)floor;

/*!
 * Get Building by Map
 * @param map JMapMap associated to building to look for
 *
 * @return A JMapBuilding object result or nil if no matches found
 */
- (nullable JMapBuilding *)getByMap:(nonnull JMapMap *)map;

/*!
 * Get Floor by Map
 * @param map JMapMap associated to Floo to look for
 *
 * @return A JMapFloor object result or nil if no matches found
 */
- (nullable JMapFloor *)getFloorByMap:(nonnull JMapMap *)map;

/*!
 * Get All Floors
 *
 * @return A NSArray of JMapFloor objects result or empty array if none exists
 */
- (nonnull NSArray <JMapFloor*> *)getAllFloors;

@end
