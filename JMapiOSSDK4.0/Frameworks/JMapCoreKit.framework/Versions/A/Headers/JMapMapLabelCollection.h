//
//  JMapMapLabelCollection.h
//  JMapCore
//
//  Created by Aaron Wong on 2016-10-04.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>
#import <JMapCoreKit/JMapMapLabelInstances.h>

@class JMapMapLabel;
@class JMapMapLabelInstances;

@interface JMapMapLabelCollection : JMapBaseCollection

/*!
 * Get all object in collection
 *
 * @return an array of JMapMapLabel objects
 */
- (nonnull NSArray <JMapMapLabel *>*)getAll;

/*!
 * Get By External ID
 * @param externalId NSString to search for
 *
 * @return An array of JMapMapLabel objects associase to the external ID
 */
- (nonnull NSArray <JMapMapLabel *>*)getByExternalId:(nonnull NSString *)externalId;

/*!
 * Get JMapMapLabel object by ID in collection
 * @param id ID to search for
 *
 * @return JMapMapLabel associated to ID or a nil if JMapBaseModel does not exists
 */
- (nullable JMapMapLabel *)getById:(NSInteger)id;

/*!
 * Get By Map
 * @discussion Get array of JMapMapLabel objects by JMapMap
 *
 * @param map JMapMap object to search by
 *
 * @return NSArray of JMapMapLabel options
 */
- (nonnull NSArray <JMapMapLabel *>*)getByMap:(nonnull JMapMap *)map;

/*!
 * Get Labels With Image
 * @discussion Get array of JMapMapLabel that have images
 *
 * @return NSArray of JMapMapLabel options
 */
- (nonnull NSArray <JMapMapLabel *>*)getLabelsWithImage;

/*!
 * Get Labels Without Image
 * @discussion Get array of JMapMapLabel that have no images
 *
 * @return NSArray of JMapMapLabel options
 */
- (nonnull NSArray <JMapMapLabel *>*)getLabelsWithoutImage;

@end
