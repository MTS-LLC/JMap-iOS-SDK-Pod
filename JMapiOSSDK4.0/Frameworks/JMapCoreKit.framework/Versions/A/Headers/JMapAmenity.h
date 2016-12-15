//
//  JMapAmenity.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-22.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapLocation;
@class JMapUriCollection;
@class JMapWaypoint;

@interface JMapAmenity : JMapBaseModel

@property (nonatomic, strong, readonly, nullable) NSNumber *customerId;
@property (nonatomic, strong, readonly, nullable) NSString *name;
@property (nonatomic, strong, readonly, nullable) NSString *description;
@property (nonatomic, assign, readonly) BOOL status;
@property (nonatomic, strong, readonly, nullable) NSNumber *displayOrder;
@property (nonatomic, strong, readonly, nullable) NSNumber *primaryUriId;
@property (nonatomic, strong, readonly, nullable) NSArray<JMapLocation*> *locations;
@property (nonatomic, strong, readonly, nullable) JMapUriCollection *uris;
@property (nonatomic, strong, readonly, nullable) NSArray<NSString*> *keywords;
@property (nonatomic, strong, readonly, nullable) NSString *svg;
@property (nonatomic, strong, readonly, nullable) NSArray<JMapWaypoint *>*waypoints;

-(nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dict;

@end
