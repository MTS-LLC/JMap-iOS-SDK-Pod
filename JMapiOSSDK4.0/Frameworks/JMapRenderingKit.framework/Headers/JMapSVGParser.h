//
//  JMapSVGParser.h
//  JMapRendering
//
//  Created by Louie Yuen on 2016-10-21.
//  Copyright © 2016 Jibestream. All rights reserved.
//

@class JMapAmenityStyle;
@class JMapCanvas;
@class JMapIconStyle;
@class JMapIconView;

@interface JMapSVGParser : NSObject <NSXMLParserDelegate>

// SVGs
@property (nonatomic, retain, nullable) NSMutableDictionary *svgs;
// Elements
@property (nonatomic, retain, nullable) NSMutableArray *elements;
// Use
@property (nonatomic, retain, nullable) NSMutableDictionary *uses;
// Transformation matrix array
@property (nonatomic, retain, nullable) NSMutableArray *transformationArray;
// Styles
@property (nonatomic, retain, nullable) NSMutableDictionary *styles;
// Symbols
@property (nonatomic, retain, nullable) NSMutableDictionary *symbols;
// gs
@property (nonatomic, retain, nullable) NSMutableDictionary *gs;
// TransformationMatrix
@property (nonatomic) CGAffineTransform transformationMatrix;
// currentElementValue
@property (nonatomic, retain, nullable) NSMutableString *currentElementValue;

@property (nonatomic, retain, nullable) NSMutableArray *arrayOfShapes;

@property (nonatomic, strong, nullable) JMapIconStyle *defaultStyles;

@property (nonatomic, strong, readonly, nullable) NSDictionary *allStyles;

@property (nonatomic, weak, nullable) id delegate;

@property (nonatomic, strong, nullable) NSDictionary *customStyles;

//ViewBox width height
@property (nonatomic) float width;
@property (nonatomic) float height;

-(void)parseMapWithSVG:(NSString * _Nonnull)svg completionHandler:(nonnull void (^)(CGRect rect, NSArray * _Nullable shapes, NSDictionary * _Nullable styles, NSError * _Nullable error))completion;

-(nullable JMapIconView *)parseIconWithSVG:(nonnull NSString *)svg type:(nonnull NSString *)type;

@end
