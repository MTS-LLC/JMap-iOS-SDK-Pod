//
//  JMapMap.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-23.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapWaypointCollection;
@class JMapPathCollection;

@interface JMapMap : JMapBaseModel

@property (nonatomic, strong, readonly, nullable) NSString *svg;
@property (nonatomic, strong, readonly, nullable) NSNumber *mmPerPixel;
@property (nonatomic, strong, readonly, nullable) NSArray *scale;
@property (nonatomic, strong, readonly, nullable) NSArray *skew;
@property (nonatomic, strong, readonly, nullable) NSArray *trans;
@property (nonatomic, strong, readonly, nullable) NSNumber *width;
@property (nonatomic, strong, readonly, nullable) NSNumber *height;
@property (nonatomic, strong, readonly, nullable) JMapWaypointCollection *waypoints;
@property (nonatomic, strong, readonly, nullable) JMapPathCollection *paths;

-(nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dict;

@end
