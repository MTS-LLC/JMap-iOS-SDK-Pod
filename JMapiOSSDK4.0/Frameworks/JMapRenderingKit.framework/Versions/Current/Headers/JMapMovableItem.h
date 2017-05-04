//
//  JMapMovableItem.h
//  JMapRendering
//
//  Created by Louie Yuen on 2017-01-19.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JMapMovableItem : UIView

/**
 *  The unique ID of the movable item
 */
@property (nonatomic) NSInteger id;
/**
 *  The name of the movable item
 */
@property (nonatomic, nullable) NSString *name;
/**
 *  The map ID associated with the movable item
 */
@property (nonatomic) NSInteger mapId;
/**
 *  The image of the movable item
 */
@property (nonatomic, nullable) UIImage *image;
/**
 *  The x,y position of the movable item
 */
@property (nonatomic) CGPoint position;
/**
 *  The speed value of the movable item
 */
@property (nonatomic) float speed;
/**
 *  The width value of the movable item
 */
@property (nonatomic) float width;
/**
 *  The height of the movable item
 */
@property (nonatomic) float height;
/**
 *  The layer name associated with the movable item
 */
@property (nonatomic, nullable) NSString *layerName;
/**
 *  Set whether the movable item should rotate with the map
 */
@property (nonatomic, assign) BOOL rotateWithMap;
/**
 *  Set whether the movable item should scale with the map
 */
@property (nonatomic, assign) BOOL scaleWithMap;
/**
 *  Set whether the movable item should snap to the grid/vector of the map
 */
@property (nonatomic, assign) BOOL snapToGrid;
/**
 *  Set whether the movable item should snap to waypoints on the map
 */
@property (nonatomic, assign) BOOL snapToWaypoint;
/**
 *  The custom view of the movable item
 */
@property (nonatomic, nullable) UIView *customView;
/**
 *  The animation timer of the movable item for snapping to grid/waypoint movement
 */
@property (nonatomic, nullable) NSTimer *animateTimer;

//UserLocation Properties
/**
 *  Set whether the movable item should redraw to reload the UI
 */
@property (nonatomic, assign) BOOL shouldRedraw;
/**
 *  The starting alpha of the confidence circle pulse
 */
@property (nonatomic) float startAlpha;
/**
 *  The ending alpha of the confidence circle pulse
 */
@property (nonatomic) float endAlpha;
/**
 *  The alpha of the static confidence circle
 */
@property (nonatomic) float confidenceAlpha;
/**
 *  The radius of the confidence circle
 */
@property (nonatomic) float confidenceRadius;
/**
 *  The duration of the confidence circle pulse
 */
@property (nonatomic) NSTimeInterval pulseAnimationDuration;
/**
 *  The delay between pulses of the confidence circle
 */
@property (nonatomic) NSTimeInterval delayBetweenPulseCycles;
/**
 *  Orientation of the movable item
 */
@property (nonatomic) float orientation;
/**
 *  The color of the movable item's center circle
 */
@property (nonatomic, nullable) UIColor *color;
/**
 *  The color of the confidence circle pulse
 */
@property (nonatomic, nullable) UIColor *pulseColor;
/**
 *  The color of the static confidence circle
 */
@property (nonatomic, nullable) UIColor *confidenceColor;
/**
 *  The transform of the movable item
 */
@property (nonatomic) CGAffineTransform userLocationTransform;
/**
 *  Default pop in animation of the movable item
 */
@property (nonatomic, copy) void (^_Nonnull willMoveToSuperviewAnimationBlock)(JMapMovableItem * _Nonnull view, UIView * _Nonnull superview);

@end
