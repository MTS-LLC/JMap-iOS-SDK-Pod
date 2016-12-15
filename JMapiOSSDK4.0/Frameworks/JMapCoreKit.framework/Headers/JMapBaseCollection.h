//
//  JMapBaseCollection.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-23.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JMapCoreKit/JMapBaseModel.h>

@interface JMapBaseCollection : NSObject

@property (nonatomic, strong, readonly, nonnull) JMapBaseModel * collectionModelClass;

/*!
 * Initializer For JMapBaseController
 *
 * @return JMapBaseCollection object ready to be used
 */
- (nonnull instancetype)init;

/*!
 * Create a batch in a collection
 * @discussion Used to create a collection object from an array of object data and add to the collection
 *
 * @param dict NSArray <NSDictionary <NSString *, id>*> An array of object data to be parsed.
 *
 * @return The object if found, otherwise nil. If the array is not sorted the behavior is undefined.
 */
- (nonnull NSArray<JMapBaseModel*>*)createBatch:(nonnull NSDictionary *)dict;

/*!
 * Assign collection model class
 * @params collectionModelClass must be of type JMapBaseModel
 */
- (void)assignCollectionModelClass:(nonnull JMapBaseModel *)collectionModelClass;

/*!
 * Create Collection Object
 * @discussion Create a collection object and add to the collection
 *
 * @param dictionary NSDictionary <NSString *, id> of object data to be parse.
 */
- (void)create:(nonnull NSDictionary <NSString *, id>*)dictionary;

/*!
 * Get count of collection size
 *
 * @return Integer indicating size of the collection
 */
- (NSInteger)getCount;

/*!
 * Get all object in collection
 *
 * @return an array of JMapBaseModel objects
 */
- (nonnull NSArray <JMapBaseModel *>*)getAll;

/*!
 * Get By External ID
 * @param externalId ID to search for
 *
 * @return An array of JMapBaseModel objects associase to the external ID
 */
- (nonnull NSArray <JMapBaseModel *>*)getByExternalId:(nonnull NSString *)externalId;

/*!
 * Get JMapBaseModel object by ID in collection
 * @param id ID to search for
 *
 * @return JMapBaseModel associated to ID or a nil if JMapBaseModel does not exists
 */
- (nullable JMapBaseModel *)getById:(NSInteger)id;

@end
