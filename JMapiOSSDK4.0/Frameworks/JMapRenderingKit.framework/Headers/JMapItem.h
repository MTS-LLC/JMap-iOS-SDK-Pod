//
//  JMapItem.h
//  JMapRendering
//
//  Created by Louie Yuen on 2017-01-19.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JMapItem : UIView

@property (nonatomic) NSInteger id;
@property (nonatomic, nullable) NSString *name;
@property (nonatomic) NSInteger mapId;
@property (nonatomic, nullable) UIImage *image;
@property (nonatomic) CGPoint position;
@property (nonatomic) float speed;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic, nullable) NSString *layerName;
@property (nonatomic, assign) BOOL headsUp;
@property (nonatomic, assign) BOOL counterScale;

//UserLocation Properties
@property (nonatomic, assign) BOOL shouldRedraw;
@property (nonatomic) float startAlpha;
@property (nonatomic) float endAlpha;
@property (nonatomic) float confidenceAlpha;
@property (nonatomic) float confidenceRadius;
@property (nonatomic) NSTimeInterval pulseAnimationDuration;
@property (nonatomic) NSTimeInterval delayBetweenPulseCycles;
@property (nonatomic) float orientation;
@property (nonatomic, nullable) UIColor *color;
@property (nonatomic, nullable) UIColor *pulseColor;
@property (nonatomic, nullable) UIColor *confidenceColor;
@property (nonatomic) CGAffineTransform userLocationTransform;

@property (nonatomic, copy) void (^_Nonnull willMoveToSuperviewAnimationBlock)(JMapItem * _Nonnull view, UIView * _Nonnull superview); // default is pop animation

@end
