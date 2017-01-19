//
//  JMapPoint.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-11-03.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JMapPoint : NSObject

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double z;

-(id)initWithX:(double)x Y:(double)y Z:(double)z;

@end
