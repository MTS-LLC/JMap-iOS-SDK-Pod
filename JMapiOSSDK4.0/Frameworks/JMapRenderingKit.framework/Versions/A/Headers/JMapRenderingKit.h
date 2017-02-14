//
//  JMapRenderingKit.h
//  JMapRendering
//
//  Created by Aaron Wong on 2016-08-18.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <JMapRenderingKit/JMapCanvas.h>
#import <JMapRenderingKit/Shape.h>
#import <JMapRenderingKit/JMapStyle.h>
#import <JMapRenderingKit/JMapIconStyle.h>
#import <JMapRenderingKit/JMapTransform.h>
#import <JMapRenderingKit/JMapSVGParser.h>
#import <JMapRenderingKit/JMapStyle.h>
#import <JMapRenderingKit/JMapIconStyle.h>
#import <JMapRenderingKit/JMapIconView.h>
#import <JMapRenderingKit/JMapBaseLayer.h>
#import <JMapRenderingKit/JMapLabel.h>
#import <JMapRenderingKit/JMapLabels.h>
#import <JMapRenderingKit/JMapUserLocation.h>
#import <JMapRenderingKit/JMapRenderingKitUtils.h>
#import <JMapRenderingKit/JMapMovableItem.h>

@class JMapCanvas;
@class JMapBaseLayer;
@class Shape;

@protocol JMapRenderingKitDelegate <NSObject>

@optional
/*!
 Delegate method for handling tap gesture
 
 @param canvas JMapCanvas object associated to interaction
 @param element id tapped shape/icon on map
 @param point CGPoint x,y coordinate tapped
 */
- (void)canvas:(nonnull JMapCanvas *)canvas detectedTapOnElement:(nullable id)element atPoint:(CGPoint)point;

/*!
 Delegate method for handling zoom changes
 @param canvas JMapCanvas object associated to interaction
 @param zoomScale float value of changed zoom scale
 */
- (void)canvas:(nonnull JMapCanvas *)canvas scrollViewDidZoom:(float)zoomScale;

@end

@interface JMapRenderingKit : NSObject

@property (nonatomic, strong, readonly, nonnull) NSMutableDictionary <NSString *, JMapBaseLayer *>* maps;
@property (nonatomic, assign, nullable) id<JMapRenderingKitDelegate> delegate;

- (nonnull instancetype)initRenderKitForMapView:(nonnull JMapCanvas *)canvas;

- (void)showMapWithId:(NSInteger)mapId svgString:(nonnull NSString *)svg completionHandler:(nonnull void (^)(BOOL preRendered, NSError * _Nullable error))completion;

- (void)parseMapWithId:(NSInteger)mapId svgString:(nonnull NSString *)svg completionHandler:(nonnull void (^)(NSError * _Nullable error))completion;

- (nonnull NSArray <JMapBaseLayer*>*)getParsedMaps;

#pragma mark - Map Searching
- (nullable JMapBaseLayer *)searchForMapWithMapId:(NSInteger)mapId;

@end
