//
//  JMapVenueCollection.h
//  JMapCore
//
//  Created by Aaron Wong on 2016-10-04.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@interface JMapVenueCollection : JMapBaseCollection

- (nullable JMapVenue *)getDefault;

/*!
 * Get all object in collection
 *
 * @return an array of JMapVenue objects
 */
- (nonnull NSArray <JMapVenue *>*)getAll;

/*!
 * Get By External ID
 * @param externalId ID to search for
 *
 * @return An array of JMapVenue objects associase to the external ID
 */
- (nonnull NSArray <JMapVenue *>*)getByExternalId:(nonnull NSString *)externalId;

/*!
 * Get JMapVenue object by ID in collection
 * @param id ID to search for
 *
 * @return JMapVenue associated to ID or a nil if JMapBaseModel does not exists
 */
- (nullable JMapVenue *)getById:(NSInteger)id;

/*!
 * Get Venue by Name
 * @param name A NSString name of the venue
 * @return A JMapVenue object result or nil if no matches found
 */
-(nullable JMapVenue *)getByName:(nonnull NSString *)name;

@end
