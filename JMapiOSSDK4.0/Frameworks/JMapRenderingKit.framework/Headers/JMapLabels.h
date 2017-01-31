//
//  JMapLabels.h
//  JMapRendering
//
//  Created by Aaron Wong on 2016-11-03.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JMapCoreKit/JMapCoreKit.h>
#import <UIKit/UIKit.h>
#import "JMapLabel.h"
#import "JMapCanvas.h"

@interface JMapLabels : NSObject

//- (void)createLabelForDestination:(nonnull JMapDestination *)destination frame:(CGRect)frame;

- (nonnull JMapLabel *)createLabelForUnitId:(NSInteger)unitId content:(nullable NSString *)content frame:(CGRect)frame mapIds:(nonnull NSArray <NSNumber*>*)mapIds image:(nullable UIImage *)image uri:(nullable NSString *)uri font:(nullable UIFont *)font isUnitLabel:(BOOL)isUnitLabel;

- (void)createMapLabels:(nonnull NSArray <JMapMapLabel *>*)mapLabels forMapWithId:(nonnull NSNumber *)mapId onCanvas:(nonnull JMapCanvas *)canvas;

- (void)removeLabelWithUnitId:(NSInteger)unitId;

- (void)removeMapLabelWithId:(NSInteger)labelId;

- (nullable JMapLabel *)getLabelByUnitId:(NSInteger)unitId;

- (nullable JMapLabel *)getMapLabelById:(NSInteger)labelId;

- (nonnull NSMutableDictionary <NSString *, JMapLabel *>*)getAllUnitLabels;

- (nonnull NSArray <JMapLabel *>*)getAllUnitLabelsForMap:(nonnull JMapMap *)map;

- (nonnull NSMutableDictionary <NSString *, JMapLabel *>*)getAllMapLabels;

- (nonnull NSArray <JMapLabel *>*)getAllMapLabelsForMap:(nonnull JMapMap *)map;

- (void)setAllLabelsFont:(nonnull UIFont *)font;

- (void)setUnitLabelsFont:(nonnull UIFont *)font;

- (void)setMapLabelsFont:(nonnull UIFont *)font;

@end
