//
//  JMapClient.h
//  JMap
//
//  Created by Aaron Wong on 2016-08-04.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JMapCoreKit/JMapCoreKit.h>

@class JMapVenueCollection;
@class JMapVenue;
@class JMapBuilding;
@class JMapActiveVenue;
@class JMapError;

@protocol JMapJCoreDelegate <NSObject>

@optional

/*!
 * Delegate call when wayfind data has been loaded
 */
- (void)wayfindDataLoaded;

@end

#pragma mark - JMapView
@interface JMapJCore : NSObject

@property (nonatomic, assign, nullable) id <JMapJCoreDelegate> delegate;
@property (nonatomic, strong, readonly, nullable) NSString *name;
@property (nonatomic, strong, readonly, nullable) JMapVenueCollection *venues;
@property (nonatomic, strong, readonly, nullable) JMapActiveVenue *activeVenue;

#pragma mark - Versioning

/*!
 * Get SDK Version
 * @return Version string of the current SDK
 */
-(nonnull NSString *)getSDKVersion;

/*!
 * Get Server Version
 * @return Version string of the currently target server
 */
-(nonnull NSString *)getServerVersion;

#pragma mark - Destroy Methods
/*!
 * Destroy Active Venue
 * @discussion Deallocates Active Venue and all assocated classes from memory
 */
- (void)destroyActiveVenue;

#pragma mark - init methods

/*!
 * Initialization method with customer Id, cache, and host
 *
 * @param customerId A Integer * unique customer identification
 * @param reload A BOOL to set caching option
 * @param host A NSString* host name/server endpoint
 */
- (nonnull instancetype)initWithCustomerId:(NSInteger)customerId autoReloadCache:(BOOL)reload host:(nonnull NSString *)host;

/*!
 * Populate JCore with authentication
 * @param token A NSString* object containing the authentication token for making API requests
 * @param completionHandler A callback that returns JMapJCore* instance and NSError* for debugging
 */
- (void)populateJCoreWithOAuthToken:(nullable NSString *)token completionHandler:(nonnull __attribute__((noescape)) void(^)(JMapError* _Nullable error))completionHandler;

#pragma mark - populate methods
/*!
 * Get All Venues
 * @param completionHandler A callback that returns an NSArray* of JMapVenue* objects
 */
-(void)getVenues:(nonnull __attribute__((noescape)) void(^)(NSArray <JMapVenue*>* _Nonnull venues, JMapError* _Nullable error))completionHandler;

/*!
 * Populate Venue by Venue
 * @param venue A JMapVenue* object for data to be populated
 * @param completionHandler A callback that returns a JMapActiveVenue object and JMapError for debugging
 */
-(void)populateVenue:(nonnull JMapVenue *)venue completionHandler:(nonnull __attribute__((noescape)) void(^)(JMapActiveVenue * _Nullable activeVenue, JMapError* _Nullable error))completionHandler;

/*!
 * Populate Venue by Venue Id
 * @param venueId A NSNumber associated to the venue for data to be populated
 * @param completionHandler A callback that returns a JMapActiveVenue object and JMapError for debugging
 */
-(void)populateVenueByVenueId:(NSInteger)venueId completionHandler:(nonnull __attribute__((noescape)) void(^)(JMapActiveVenue * _Nullable activeVenue, JMapError* _Nullable error))completionHandler;

/*!
 * Populate Building in Venue and Building Id
 * @param venue A JMapActiveVenue* object associated to the building
 * @param buildingId A NSNumber id associated to the building
 * @param completionHandler A callback that returns a JMapActiveVenue object and JMapError debugging
 */
-(void)populateBuildingInVenue:(nonnull JMapActiveVenue *)venue withBuildingId:(NSInteger)buildingId completionHandler:(nonnull __attribute__((noescape)) void(^)( JMapActiveVenue * _Nullable activeVenue, JMapError* _Nullable error))completionHandler;

#pragma mark - Cache
/*!
 * Clear All Cache
 * @discussion Clears all cache that was previously store on the phone
 */
- (void)clearAllCache;

/*!
 * Clear Cache By Venue Id
 * @discussion Clears cache associated with provided venue ID
 * @param venueId provided ID of to purge from cache
 */
- (void)clearCacheByVenueId:(NSInteger)venueId;

@end
