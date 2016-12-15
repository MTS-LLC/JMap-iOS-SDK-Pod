//
//  JMapRenderingKitUtils.h
//  JMapRendering
//
//  Created by Aaron Wong on 2016-11-15.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define DEGREES_TO_RADIANS(x) (M_PI * (x) / 180.0)

@interface JMapRenderingKitUtils : NSObject

#pragma mark - Stylings helper methods
/**
 *  Color With Hex String
 *  @discussion Retrieve UIColor object with hex string
 *
 *  @params stringToConvert NSString color string
 *  @return UIColor object from Hexidecimal color string
 */
+ (UIColor *)colorWithHexString:(NSString *)stringToConvert;

#pragma mark Transforms
/**
 *  Apply Angle Transfrom From View
 *  @discussion Apply angle transform for provided view with center point and target view
 *
 *  @params thisView view passed in
 *  @params pt CGPoint center of view
 *
 *  @return CGAffineTransform object
 */
+ (CGAffineTransform)applyAngleTransFromUIView:(UIView *)thisView withCenter:(CGPoint)pt;

@end
