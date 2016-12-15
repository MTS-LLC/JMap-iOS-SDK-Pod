//
//  JMapDestination.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-21.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapLocation;
@class JMapUriCollection;
@class JMapWaypoint;

@interface JMapDestination : JMapBaseModel

/*!
 * Status of the destination
 * 0 - invalid
 * 1 - valid
 */
@property (nonatomic, assign, readonly) BOOL status;
/*!
 * Unit Number field in map builder/content manager
 */
@property (nonatomic, strong, readonly, nullable) NSString *unitNumber;
/*!
 * Name of the destination defined by user in content manager
 */
@property (nonatomic, strong, readonly, nullable) NSString *name;
/*!
 * Text description of the destination
 */
@property (nonatomic, strong, readonly, nullable) NSString *description;
/*!
 * Logo uri of the destination
 */
@property (nonatomic, strong, readonly, nullable) NSString *primaryUri;
/*!
 * Language code associated to the destination
 */
@property (nonatomic, strong, readonly, nullable) NSString *localeCode;
/*!
 * List of JMapExtensor objects associated with the destination
 */
@property (nonatomic, strong, readonly, nullable) NSArray<NSDictionary *> *destinationExtensors;
/*!
 * List of uri's associated with the destination
 */
@property (nonatomic, strong, readonly, nullable) JMapUriCollection *uris;
/*!
 * List of JMapLocation objects associated with the destination
 */
@property (nonatomic, strong, readonly, nullable) NSArray<JMapLocation *> *locations;

@property (nonatomic, strong, readonly, nullable) NSArray <NSString *> *categoryIds;

@property (nonatomic, strong, readonly, nullable) NSArray <NSString *> *keywords;

@property (nonatomic, strong, readonly, nullable) NSArray <NSString *> *tags;

@property (nonatomic, strong, readonly, nullable) NSArray <JMapWaypoint *> *waypoints;

-(nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dict;


@end
