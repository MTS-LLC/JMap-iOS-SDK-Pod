//
//  JMapASGrid.h
//  JMap
//
//  Created by Bryan Hayes on 2015-09-01.
//  Copyright (c) 2015 jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>

@class JMapWaypoint;
@class JMapPathPerFloor;
@class JMapASNode;
@class JMapASEdge;
@class JMapPath;
@class JMapNeighbor;

@interface JMapASGrid : NSObject

@property NSNumber *verticalScale; // float = 100;
@property NSArray *waypoints; // Waypoint array
@property NSArray *paths;
@property NSArray *pathTypes;
@property NSArray *mapFulls;
@property NSMutableArray *nodes; // JMapASNode array
@property NSMutableArray *edges; // JMapASEdge array
@property NSArray *buildings;
@property NSMutableArray *floors;

-(id)initASGrid:(NSArray *)waypointsIn pathsIn:(NSArray *)pathsIn pathTypesIn:(NSArray *)pathTypesIn mapFullsIn:(NSArray *)mapFullsIn buildings:(NSArray *)buildings;

-(float) getMapZValue:(int)mapId;
-(JMapPathType *)getPathTypeById:(int)pathTypeId;
-(void)reset;
-(JMapASNode *) getNodeById:(int)idIn;
-(JMapASNode *) getNeighborNodeObject:(int)idIn;

@end
