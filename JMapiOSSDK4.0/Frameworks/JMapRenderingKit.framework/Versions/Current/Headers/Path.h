//
//  Path.h
//  JMapRendering
//
//  Created by Louie Yuen on 2016-10-24.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapRenderingKit/JMapRenderingKit.h>
#import "JMapKPointsAndPathsParser.h"

@class JMapKPointsAndPathsParser;

@interface Path : Shape

@property (nonatomic, nullable, readonly) JMapKPointsAndPathsParser *pathParser;

@property (nonatomic, strong, nullable) NSString *pathData;

- (nonnull instancetype) initWithId:(nullable NSNumber *)id name:(nullable NSString *)name elementClass:(nullable NSString *)elementName meta:(nullable NSDictionary *)meta style:(nullable JMapStyle *)style points:(nullable NSString *)points isInteractive:(BOOL)interactive;

-(nonnull Shape *)createShape;

- (nonnull NSArray <NSArray <NSValue *>*>*)getSegmentsFromShape;

@end
