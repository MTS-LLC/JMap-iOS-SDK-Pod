//
//  JMapFloor.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-22.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapMap;

@interface JMapFloor : JMapBaseModel

@property (nonatomic, strong, readonly, nullable) NSNumber *buildingId;
@property (nonatomic, strong, readonly, nullable) JMapMap *map;
@property (nonatomic, strong, readonly, nullable) NSNumber *level;
@property (nonatomic, strong, readonly, nullable) NSNumber *preference;
@property (nonatomic, strong, readonly, nullable) NSNumber *altitude;
@property (nonatomic, strong, readonly, nullable) NSString *name;
@property (nonatomic, strong, readonly, nullable) NSString *shortName;
@property (nonatomic, strong, readonly, nullable) NSDictionary *recordHistory;

-(nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dict;

@end
