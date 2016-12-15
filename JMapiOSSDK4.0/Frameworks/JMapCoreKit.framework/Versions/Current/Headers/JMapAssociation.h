//
//  JMapAssociation.h
//  JMapCore
//
//  Created by Aaron Wong on 2016-08-17.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@interface JMapAssociation : JMapBaseModel
/*!
 * Entity type ID associated with the waypoint
 * 1 - Destination
 * 2 - Device
 * 13 - Scheduled Ad
 * 19 - Event
 * 25 - Path
 * 26 - Amenity
 * 41 - Location
 */
@property (nonatomic, strong, readonly) NSArray <NSNumber*>* destinations;
@property (nonatomic, strong, readonly) NSArray <NSNumber*>* amenities;

/*!
 * Initialization method for JMapWaypointAssociation
 * @param dict of key value pairs for the properties
 * @return JMapWaypointAssociation object linked to JMapwaypoint object
 */
-(instancetype)initWithDictionary:(NSDictionary *)dict;
@end
