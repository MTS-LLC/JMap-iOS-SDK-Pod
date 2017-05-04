//
//  Ellipse.h
//  JMap
//
//  Created by Aaron Wong on 2016-08-04.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapRenderingKit/JMapRenderingKit.h>

@interface Ellipse : Shape

@property (nonatomic, copy) NSNumber * x;
@property (nonatomic, copy) NSNumber * y;
@property (nonatomic, copy) NSNumber * width;
@property (nonatomic, copy) NSNumber * height;

- (instancetype) initWithId:(NSNumber *)id name:(NSString *)name elementClass:(NSString *)elementName meta:(NSDictionary *)meta style:(JMapStyle *)style x:(NSNumber *)x y:(NSNumber *)y width:(NSNumber *)width height:(NSNumber *)height isInteractive:(BOOL)interactive;

- (Shape *)createShape;

@end
