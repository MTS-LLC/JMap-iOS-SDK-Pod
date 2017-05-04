//
//  Polygon.h
//  JMap
//
//  Created by Aaron Wong on 2016-08-04.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapRenderingKit/JMapRenderingKit.h>

@interface Polygon : Shape

- (nonnull instancetype) initWithId:(nullable NSNumber *)id name:(nullable NSString *)name elementClass:(nullable NSString *)elementName meta:(nullable NSDictionary *)meta style:(nullable JMapStyle *)style points:(nullable NSArray *)points isInteractive:(BOOL)interactive;

- (nonnull Shape *)createShape;

- (nonnull NSArray <NSArray <NSValue *>*>*)getSegmentsFromShape;

@end
