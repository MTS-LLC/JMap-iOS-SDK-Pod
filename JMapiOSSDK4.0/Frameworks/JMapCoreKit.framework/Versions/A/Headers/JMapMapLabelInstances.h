//
//  JMapMapLabelInstances.h
//  JMapCore
//
//  Created by Louie Yuen on 2016-10-20.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@class JMapMapLabelInstance;

@interface JMapMapLabelInstances : JMapBaseCollection

/*!
 * Get List of JMapMapLabelInstance objects by mapId
 * @param mapId NSInteger to search for
 *
 * @return An NSArray of JMapMapLabelInstance objects associated to mapId or a empty if none exists
 */
-(nonnull NSArray <JMapMapLabelInstance*>*)getByMapId:(NSInteger)mapId;

/*!
 * Get List of JMapMapLabelInstance objects on all levels
 *
 * @return An NSArray of JMapMapLabelInstance objects on all levels
 */
-(nonnull NSArray <JMapMapLabelInstance*>*)getLocationOnAllLevels;

@end
