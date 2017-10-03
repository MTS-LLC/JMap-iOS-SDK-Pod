//
//  JMapUtils.h
//  JMapCore
//
//  Created by Aaron Wong on 2017-06-13.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <JMapCoreKit/JMapCoreKit.h>

@class JMapActiveVenue;

@interface JMapUtils : NSObject

/**
 *  Converts a CGPoint from one projection to another. Projection strings include, EPSG:4326, EPSG:3857 and jmap:local.
 *
 *  @param point The point to be converted.
 *  @param projection1 The projection to convert from.
 *  @param projection2 The projection to convert to.
 *  @param venue The current active venue loaded. Must not be null for conversion to/from jmap:local projection.
 *  @return A CGPoint with the converted values.
 */
+ (CGPoint)convertPoint:(CGPoint)point fromProjection:(nonnull NSString *)projection1 toProjection:(nonnull NSString *)projection2 inVenue:(nullable JMapActiveVenue *)venue;

/**
 *  Converts a latitude value from EPSG 4326 to EPSG 3857.
 *
 *  @param latitude The latitude value to be converted.
 *  @return The corresponding EPSG 3857 latitude value.
 */
+ (double)convertLatitudeEPSG4326ToEPSG3857:(double) latitude;

/**
 *  Converts a longitutde value from EPSG 4326 to EPSG 3857.
 *
 *  @param longitude The longitude value to be converted.
 *  @return The corresponding EPSG 3857 longitude value.
 */
+ (double)convertLongitudeEPSG4326ToEPSG3857:(double) longitude;

/**
 *  Converts a latitude value from EPSG 3857 to EPSG 4236.
 *
 *  @param latitude The latitude value to be converted.
 *  @return The corresponding EPSG 4326 latitude value.
 */
+ (double)convertLatitudeEPSG3857ToEPSG4326:(double) latitude;

/**
 *  Converts a longitutde value from EPSG 3857 to EPSG 4326.
 *
 *  @param longitude The longitude value to be converted.
 *  @return The corresponding EPSG 4326 longitude value.
 */
+ (double)convertLongitudeEPSG3857ToEPSG4326:(double) longitude;

+ (float)distanceToLine:(CGPoint)point lineP1:(CGPoint)lineP1 lineP2:(CGPoint)lineP2 intersectPoint:(nullable CGPoint *)interSectPoint;

+ (float)distToSegmentSquared:(CGPoint)point lineP1:(CGPoint)lineP1 lineP2:(CGPoint)lineP2 intersectPoint:(nullable CGPoint *)interSectPoint;

+ (float)dist2:(CGPoint)first second:(CGPoint)second;

+ (float)sqr:(float)x;

@end
