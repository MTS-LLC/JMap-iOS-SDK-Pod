//
//  JMapBinaryHeapSearch.h
//  JMapCore
//
//  Created by Aaron Wong on 2016-09-09.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JMapCoreKit/JMapBaseModel.h>

@interface JMapBinaryHeapSearch : NSObject

- (nullable JMapBaseModel *)executeBinarySearchForId:(nonnull NSNumber *)searchId inArray:(nonnull NSArray <JMapBaseModel*>*)array;

@end
