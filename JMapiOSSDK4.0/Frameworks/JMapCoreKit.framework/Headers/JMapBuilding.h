//
//  JMapBuilding.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-22.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapPosition;
@class JMapFloorCollection;

@interface JMapBuilding : JMapBaseModel

@property (nonatomic, strong, readonly, nullable) NSString *name;
@property (nonatomic, strong, readonly, nullable) JMapPosition *coordinates;
@property (nonatomic, strong, readonly, nullable) JMapFloorCollection *floors;
@property (nonatomic, strong, readonly, nullable) NSNumber *venueId;

-(nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dict;

@end
