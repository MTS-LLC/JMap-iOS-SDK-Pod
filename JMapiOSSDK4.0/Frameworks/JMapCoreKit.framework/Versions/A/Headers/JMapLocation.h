//
//  JMapLocation.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-23.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@interface JMapLocation : NSObject

@property (nonatomic, strong, nullable) NSNumber *mapId;
@property (nonatomic, strong, nullable) NSArray<NSNumber *> *waypointIds;

-(nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dict;

+ (nullable NSArray <JMapLocation *>*)parseLocationsIntoArrayFormDictionary:(nonnull NSDictionary *)dict;

@end
