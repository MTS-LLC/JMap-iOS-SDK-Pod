//
//  JMapBaseLayer.h
//  JMapRendering
//
//  Created by Aaron Wong on 2016-10-28.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MapLayer.h"

@interface JMapBaseLayer : UIView

@property (nonatomic, readonly, nonnull) NSNumber *mapId;

- (nonnull instancetype)init;
- (nonnull instancetype)initWithFrame:(CGRect)frame andMapId:(NSNumber * _Nonnull)mapId;
- (nullable MapLayer *)generateNewMapLayerWithName:(nonnull NSString *)name;
- (void)addNewMapLayer:(nonnull MapLayer *)newMapLayer;
- (void)applyArrayOfShapes:(nonnull NSArray*)shapes completionHandler:(nullable void (^)(NSError * _Nullable error))completion;
- (nonnull NSArray <MapLayer *>*)getAllLayers;
- (nullable MapLayer *)getLayerWithName:(nonnull NSString *)layerName;

@end
