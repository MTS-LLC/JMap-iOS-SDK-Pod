//
//  Circle.h
//  JMap
//
//  Created by Aaron Wong on 2016-08-03.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapRenderingKit/JMapRenderingKit.h>

@interface Circle : Shape

@property (nonatomic, copy) NSNumber * x;
@property (nonatomic, copy) NSNumber * y;
@property (nonatomic, copy) NSNumber * radius;

- (instancetype) initWithId:(NSNumber *)id name:(NSString *)name elementClass:(NSString *)elementName meta:(NSDictionary *)meta style:(JMapStyle *)style x:(NSNumber *)x y:(NSNumber *)y radius:(NSNumber *)radius isInteractive:(BOOL)interactive;

- (Shape *)createShape;

@end
