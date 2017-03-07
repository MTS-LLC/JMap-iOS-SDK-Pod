//
//  JMapUserLocation.h
//  JMapRendering
//
//  Created by Louie Yuen on 2016-11-08.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface JMapUserLocation : UIView

@property (nonatomic) UIColor *locationColor;
@property (nonatomic) UIColor *pulseColor;
@property (nonatomic) UIColor *confidenceColor;
@property (nonatomic) UIImage *image;
@property (nonatomic) CGAffineTransform userLocationTransform;
@property (nonatomic) float startAlpha;
@property (nonatomic) float endAlpha;
@property (nonatomic) float speed;
@property (nonatomic) float confidenceAlpha;
@property (nonatomic) CGPoint position;
@property (nonatomic) float confidenceRadius;
@property (nonatomic) NSTimeInterval pulseAnimationDuration;
@property (nonatomic) NSTimeInterval delayBetweenPulseCycles;
@property (nonatomic) float orientation;
@property (nonatomic) NSInteger mapId;
@property (nonatomic, assign) BOOL tracking;

@property (nonatomic, copy) void (^willMoveToSuperviewAnimationBlock)(JMapUserLocation *view, UIView *superview); // default is pop animation

// Singleton implementation
+ (instancetype)sharedInstance;

- (instancetype)initUserLocation;

@end
