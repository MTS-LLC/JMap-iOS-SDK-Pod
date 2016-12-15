//
//  JMapTransform.h
//  JMapRendering
//
//  Created by Aaron Wong on 2016-10-26.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

@interface JMapTransform : NSObject

@property (nonatomic, readonly, nullable) NSNumber *x;
@property (nonatomic, readonly, nullable) NSNumber *y;
@property (nonatomic, readonly, nullable) NSNumber *scale;
@property (nonatomic, readonly, nullable) NSNumber *rotaion;
@property (nonatomic, assign, readonly) NSTimeInterval duration;

- (nonnull instancetype)initWithX:(nullable NSNumber *)x y:(nullable NSNumber *)y scale:(nullable NSNumber *)scale rotation:(nullable NSNumber *)rotation duration:(NSTimeInterval)duration;

@end
