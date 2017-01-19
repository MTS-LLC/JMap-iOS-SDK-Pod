//
//  JMapPath.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-22.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@interface JMapPath : JMapBaseModel

@property (nonatomic, strong, readonly, nullable) NSNumber *pathTypeId;
@property (nonatomic, strong, readonly, nullable) NSString *name;
@property (nonatomic, strong, readonly, nullable) NSNumber *direction;
@property (nonatomic, assign, readonly) BOOL status;
@property (nonatomic, strong, readonly, nullable) NSArray<NSNumber *> *waypointIds;

//To-do: Add UriCollection

-(nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dict;

@end
