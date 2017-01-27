//
//  JMapVenue.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-21.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapWaypoint;
@class JMapMap;
@class JMapBuildingCollection;
@class JMapDestinationCollection;
@class JMapAmenityCollection;
@class JMapMapCollection;
@class JMapPathTypeCollection;

@interface JMapVenue : JMapBaseModel

/*!
 * Name of the venue
 */
@property (nonatomic, strong, readonly, nullable) NSString *name;


/*!
 * The map id associated with the venue
 */
@property (nonatomic, strong, readonly, nullable) NSNumber *mapId;

/*!
 * List of all devices in the venue, JMapDevices objects
 */
@property (nonatomic, strong, readonly, nullable) NSString *coordinates;

@end
