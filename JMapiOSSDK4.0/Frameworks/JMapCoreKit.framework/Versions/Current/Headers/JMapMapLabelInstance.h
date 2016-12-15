//
//  JMapMapLabelInstance.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-23.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JMapCoreKit/JMapCoreKit.h>

@interface JMapMapLabelInstance : JMapBaseModel

@property (nonatomic, strong, readonly, nullable) NSArray * position;
@property (nonatomic, strong, readonly, nullable) NSString * name;
@property (nonatomic, strong, readonly, nullable) NSNumber * mapId;
@property (nonatomic, strong, readonly, nullable) NSArray * scale;
@property (nonatomic, strong, readonly, nullable) NSArray * skew;
@property (nonatomic, strong, readonly, nullable) NSArray * trans;
@property (nonatomic, strong, readonly, nullable) NSNumber *rotation;
@property (nonatomic, strong, readonly, nullable) NSNumber *allLevels;

-(nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dict;

@end
