//
//  JMapPathPerFloor.h
//  JMap
//
//  Created by Bryan Hayes on 2015-08-31.
//  Copyright (c) 2015 jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>

@class JMapASEdge;
@class JMapPathType;
@class JMapPoint;

@interface JMapPathPerFloor : NSObject

@property NSNumber *mapId; // int
@property JMapPathType *mover; // JMapPathDataTypes
@property NSMutableArray <JMapASNode*> *points; // ASNode[]
@property NSMutableArray <JMapPoint*> *mapPoints;

@end
