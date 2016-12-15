//
//  JMapBaseModel.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-21.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JMapBaseModel : NSObject

@property (nonatomic, strong, nonnull) NSNumber *id;
@property (nonatomic, strong, nullable) NSString *externalId;

- (nonnull instancetype)initWithId:(nonnull NSNumber *)objectId externalId:(nonnull NSString *)externalId;
- (nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dict;

@end
