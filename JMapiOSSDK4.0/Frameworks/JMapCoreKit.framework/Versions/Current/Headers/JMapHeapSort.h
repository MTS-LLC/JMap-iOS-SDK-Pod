//
//  JMapHeapSort.h
//  JMapCore
//
//  Created by Aaron Wong on 2016-09-12.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JMapCoreKit/JMapCoreKit.h>

@interface JMapHeapSort : NSObject

- (NSArray <JMapBaseModel*>*) heapSort:(NSArray <JMapBaseModel*>*)unsortedArray;

@end
