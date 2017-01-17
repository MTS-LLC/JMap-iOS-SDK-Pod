//
//  JMapObject.h
//  JMapCore
//
//  Created by Aaron Wong on 2016-09-09.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JMapObject : NSObject

@property (nonatomic, strong, readwrite) NSNumber *id;

- (instancetype)initWithId:(NSNumber *)objectId;

@end
