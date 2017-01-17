//
//  JMapWaypointAssociation.h
//  JMapCore
//
//  Created by Aaron Wong on 2016-08-17.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JMapWaypointAssociation : NSObject
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
@property (nonatomic, strong, readonly) NSNumber *entityTypeId;
/*!
 * JMapwaypoint ID
 */
@property (nonatomic, strong, readonly) NSNumber *waypointId;
/*!
 * ID associated with the entity type
 * Matches JMapDestination id if entity type id is 1
 * Matches JMapAmenity id if entity type id is 26
 */
@property (nonatomic, strong, readonly) NSNumber *entityId;
/*!
 * Rating value of the landmark associated with waypoint destination
 */
@property (nonatomic, strong, readonly) NSNumber *landmarkRating;
/*!
 * Initialization method for JMapWaypointAssociation
 * @param dict of key value pairs for the properties
 * @return JMapWaypointAssociation object linked to JMapwaypoint object
 */
-(instancetype)initWithDictionary:(NSDictionary *)dict;
@end
