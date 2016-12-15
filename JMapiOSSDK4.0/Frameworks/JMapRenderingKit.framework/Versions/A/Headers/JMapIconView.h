//
//  JMapIconView.h
//  JMap
//
//  Created by Louie Yuen on 2016-11-15.
//  Copyright (c) 2015 jibestream. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JMapRenderingKit/JMapRenderingKit.h>

@class JMapIconStyle;

@interface JMapIconView : UIView

@property (nonatomic) NSString *amenityTypeId;
@property (nonatomic) NSString *pathTypeId;
@property (nonatomic) NSString *waypointId;
@property (nonatomic) NSString *mapId;
@property (nonatomic) JMapIconStyle *customStyle;

- (void)setIsAnimated:(BOOL)isAnimated scale:(float)scale;
+(NSInteger)yourTag;
-(id)initWithFrame:(CGRect)aRect parentId:(id)parentId arrayOfShapes:(NSArray *)shapes;
-(id)getParent;
-(BOOL)getIsAnimated;
-(void)cleanUp;

-(void)setShapes:(NSArray *)shapes;

-(void)resetIconStyle;
-(void)drawIconWithStyle:(JMapIconStyle*)style;
-(void)redrawIcon:(BOOL)forceRedraw;

@end
