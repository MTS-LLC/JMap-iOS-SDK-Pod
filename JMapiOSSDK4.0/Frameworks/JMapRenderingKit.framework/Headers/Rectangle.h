//
//  Rectangle.h
//  JMapRendering
//
//  Created by Louie Yuen on 2016-10-26.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapRenderingKit/JMapRenderingKit.h>

@interface Rectangle : Shape

@property (nonatomic, nonnull, copy) NSNumber * x;
@property (nonatomic, nonnull, copy) NSNumber * y;
@property (nonatomic, nonnull, copy) NSNumber * width;
@property (nonatomic, nonnull, copy) NSNumber * height;

- (nullable instancetype) initWithId:(nullable NSNumber *)id name:(nullable NSString *)name elementClass:(nullable NSString *)elementName meta:(nullable NSDictionary *)meta style:(nullable JMapStyle *)style x:(nullable NSNumber *)x y:(nullable NSNumber *)y width:(nullable NSNumber *)width height:(nullable NSNumber *)height isInteractive:(BOOL)interactive;

- (nonnull Shape *)createShape;

- (nonnull NSArray <NSArray <NSValue *>*>*)getSegmentsFromShape;

@end
