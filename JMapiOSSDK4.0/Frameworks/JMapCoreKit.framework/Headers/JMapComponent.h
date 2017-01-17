//
//  JMapComponent.h
//  JMapCore
//
//  Created by Louie Yuen on 2017-01-03.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JMapCoreKit/JMapCoreKit.h>

@interface JMapComponent : NSObject

@property (nonatomic, readonly) NSInteger id;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) JMapMap *map;
@property (nonatomic, readonly) CGPoint coordinate;
@property (nonatomic, readonly) BOOL isVisible;
@property (nonatomic, readonly) CGFloat width;
@property (nonatomic, readonly) CGFloat height;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic, readonly) UIColor *color;

- (instancetype)initWithId:(NSInteger *)id;

@end
