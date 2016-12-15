//
//  JMapWaypoint.h
//  JMapCore
//
//  Created by Aaron Wong on 2016-08-17.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapAssociation;

@interface JMapWaypoint : JMapBaseModel
/*!
 * Unit number field set by user in map builder tool
 */
@property (nonatomic, strong, readonly, nullable) NSString *unitNumber;
/*!
 * The map id associated with the waypoint (matches JMapFloor mapId)
 */
@property (nonatomic, strong, readonly, nullable) NSNumber *mapId;
/*!
 * XY-coordinates of the waypoint
 */
@property (nonatomic, strong, readonly, nullable) NSArray <NSNumber *>* coordinates;
/*!
 * List of JMapAssociation objects for the waypoint
 * Associations.entityId contains JMapDestination Id value for destination waypoints
 */
@property (nonatomic, strong, readonly, nullable) JMapAssociation *associations;

@property (nonatomic, assign, readonly) BOOL status;

-(nullable id)initWithCGPoint:(nonnull NSValue *)thisPoint;
-(nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dict;
@end
