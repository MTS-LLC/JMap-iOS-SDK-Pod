//
//  MapLayer.h
//  JMapRendering
//
//  Created by Aaron Wong on 2016-08-30.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JMapRenderingKit/JMapRenderingKit.h>

@class JMapBaseLayer;

@interface MapLayer : UIView

@property (nonatomic, strong) NSDictionary * options;
@property (nonatomic, strong) NSNumber * id;
@property (nonatomic, strong) NSString * name;
@property (nonatomic, strong) NSDictionary * sequence;
@property (nonatomic, strong) NSMutableArray * subMaps;
@property (nonatomic, assign) BOOL interactive;
@property (nonatomic, weak) JMapBaseLayer * parentMap;

- (instancetype)initWithId:(NSNumber *)layerId options:(NSDictionary *)options name:(NSString *)name sequence:(NSDictionary *)sequence;

- (void)addShapeLayer:(CALayer *)shapeLayer;

@end
