//
//  JMapPosition.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-09-30.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JMapPosition : NSObject

@property (nonatomic, strong, readonly, nullable) NSArray *topLeft;
@property (nonatomic, strong, readonly, nullable) NSArray *bottomRight;

-(nullable instancetype)initWithDictionary:(nonnull NSDictionary *)dict;

@end
