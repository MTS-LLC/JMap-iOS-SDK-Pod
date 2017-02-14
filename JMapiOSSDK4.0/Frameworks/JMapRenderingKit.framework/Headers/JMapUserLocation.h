//
//  JMapUserLocation.h
//  JMapRendering
//
//  Created by Louie Yuen on 2016-11-08.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "JMapMovableItem.h"

@interface JMapUserLocation : JMapMovableItem

@property (nonatomic, assign) BOOL tracking;

// Singleton implementation
+ (instancetype)sharedInstance;

@end
