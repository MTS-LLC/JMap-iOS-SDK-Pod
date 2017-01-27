//
//  JMapUriCollection.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-10-04.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapUri;

@interface JMapUriCollection : JMapBaseCollection

/*!
 * Get all object in collection
 *
 * @return an array of JMapWaypoint objects
 */
- (nonnull NSArray <JMapUri *>*)getAll;

/*!
 * Get By External ID
 * @param externalId ID to search for
 *
 * @return An array of JMapUri objects associase to the external ID
 */
- (nonnull NSArray <JMapUri *>*)getByExternalId:(nonnull NSString *)externalId;

/*!
 * Get JMapUri object by ID in collection
 * @param id ID to search for
 *
 * @return JMapUri associated to ID or a nil if JMapBaseModel does not exists
 */
- (nullable JMapUri *)getById:(NSInteger)id;

/*!
 * Get Uri by MimeType
 * @param mimeType A NSString associated to the Uri
 * @return An NSArray* of JMapUri* objects
 */
-(nonnull NSArray <JMapUri*>*)getByMimeType:(nonnull NSString *)mimeType;

/*!
 * Get Uri by ResourceType
 * @param resourceType A NSString associated to the Uri
 * @return An NSArray* of JMapUri* objects
 */
-(nonnull NSArray <JMapUri*>*)getByResourceType:(nonnull NSString *)resourceType;

@end
