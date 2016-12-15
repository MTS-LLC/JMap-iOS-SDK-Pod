//
//  JMapUri.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-23.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@interface JMapUri : JMapBaseModel

@property (nonatomic, strong, readonly, nullable) NSString *resourceType;
@property (nonatomic, strong, readonly, nullable) NSString *mimeType;
@property (nonatomic, strong, readonly, nullable) NSString *path;

-(nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dict;

@end
