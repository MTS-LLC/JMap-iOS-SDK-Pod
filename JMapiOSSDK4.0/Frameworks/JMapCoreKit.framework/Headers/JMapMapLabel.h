//
//  JMapMapLabel.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-23.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapMapLabelInstances;
@class JMapUriCollection;

@interface JMapMapLabel : JMapBaseModel

@property (nonatomic, strong, readonly, nullable) NSString *name;
@property (nonatomic, strong, readonly, nullable) JMapMapLabelInstances *mapLabelInstances;
@property (nonatomic, strong, readonly, nullable) JMapUriCollection *uris;
@property (nonatomic, strong, readonly, nullable) NSString * svg;

-(nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dict;

@end
