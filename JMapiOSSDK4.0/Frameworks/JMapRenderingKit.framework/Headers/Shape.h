//
//  Shape.h
//  JMap
//
//  Created by Aaron Wong on 2016-08-03.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <JMapRenderingKit/JMapRenderingKit.h>

@class JMapIconStyle;
@class JMapStyle;
@class MapLayer;

@interface Shape : CAShapeLayer

@property (nonatomic, strong, nullable) NSNumber * id;
@property (nonatomic, strong, nullable) NSDictionary * meta;
@property (nonatomic, strong, nullable) NSNumber * strokeWidth;
@property (nonatomic, strong, nullable) NSNumber * strokeOpacity;
@property (nonatomic, strong, nullable) NSString *className;
@property (nonatomic, strong, nullable) UIColor * fill;
@property (nonatomic, strong, nullable) JMapStyle * initialStyle;
@property (nonatomic, weak, nullable) MapLayer * parentLayer;
@property (nonatomic, assign) BOOL isInteractive;
@property (nonatomic) CGRect pathFrame;
@property (nonatomic, assign) CGAffineTransform transformationMatrix;
@property (nonatomic, nullable) NSString *transformShapeStr;

- (nullable instancetype) initWithId:(nullable NSNumber *)id name:(nullable NSString *)name elementClass:(nullable NSString *)className meta:(nullable NSDictionary *)meta style:(nullable JMapStyle *)style isInteractive:(BOOL)interactive;

- (void)setMetaWithDictionary:(nonnull NSDictionary *)dictionary;

- (nullable UIBezierPath *)createArcPathWithPoint:(CGPoint)point radius:(NSInteger)radius startAngle:(NSInteger)startAngle endAngle:(NSInteger)endAngle clockWise:(BOOL)clockWise;

- (nullable Shape *)createMultiShapeWithPath:(nonnull UIBezierPath *)path andHolePaths:(nullable NSArray <UIBezierPath *>*)holePaths;
- (nullable Shape *)createShapeWithPath:(nonnull UIBezierPath *)path;

- (nullable UIBezierPath *)parsePathWithPoints:(nonnull NSArray <NSArray <NSString *>*> *)points;

//Styling
@property (nonatomic, strong, readonly, nullable) JMapStyle *SVGstyle;
@property (nonatomic, strong, readonly, nullable) UIBezierPath *bezierPath;

-(void)resetShapeStyle;
-(void)createSVGStyleFrom:(nonnull NSDictionary *)styleSheet;
-(nonnull JMapStyle *)makeStyleFrom:(nonnull NSDictionary *)styleSheet isIcon:(BOOL)isIcon;

-(BOOL)hasTransformationMatrix;
-(void)setTransformationMatrix:(CGAffineTransform)transformationMatrix;
-(void)setBezPath:(nonnull CGPathRef)thisPathRef;
-(void)setSVGStyle:(nonnull JMapStyle *)thisSVGStyle;

- (void)updateMetaWithData:(nonnull NSDictionary *)data forKey:(nonnull NSString *)key;

@end
