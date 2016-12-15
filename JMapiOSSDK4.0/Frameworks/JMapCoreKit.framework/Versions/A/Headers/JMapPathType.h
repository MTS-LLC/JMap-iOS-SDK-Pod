//
//  JMapPathType.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-22.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapUriCollection;
@class JMapLocation;
@class JMapWaypoint;

@interface JMapPathType : JMapBaseModel

@property (nonatomic, strong, readonly, nullable) NSString *name;
@property (nonatomic, strong, readonly, nullable) NSString *description;
@property (nonatomic, strong, readonly, nullable) NSNumber *accessibility;
@property (nonatomic, strong, readonly, nullable) NSNumber *verticalWeight;
@property (nonatomic, strong, readonly, nullable) NSNumber *speed;
@property (nonatomic, strong, readonly, nullable) NSNumber *maxFloors;
@property (nonatomic, strong, readonly, nullable) NSNumber *weight;
@property (nonatomic, strong, readonly, nullable) NSNumber *direction;
@property (nonatomic, strong, readonly, nullable) JMapUriCollection *uris;
@property (nonatomic, strong, readonly, nullable) NSArray <JMapLocation*> *locations;
@property (nonatomic, strong, readonly, nullable) NSString *svg;
@property (nonatomic, strong, readonly, nullable) NSArray<JMapWaypoint *>*waypoints;

-(nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dict;

@end
