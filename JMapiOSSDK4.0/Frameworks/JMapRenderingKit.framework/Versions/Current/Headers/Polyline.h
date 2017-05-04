//
//  Polyline.h
//  JMapRendering
//
//  Created by Louie Yuen on 2016-10-26.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapRenderingKit/JMapRenderingKit.h>

@interface Polyline : Shape

- (instancetype) initWithId:(NSNumber *)id name:(NSString *)name elementClass:(NSString *)elementName meta:(NSDictionary *)meta style:(JMapStyle *)style points:(NSArray *)points isInteractive:(BOOL)interactive;

- (Shape *)createShape;

@end
