//
//  JMapBinarySearchTree.h
//  JMapCore
//
//  Created by Aaron Wong on 2016-08-24.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JMapCoreKit/JMapCoreKit.h>
#import "JMapNode.h"

@class JMapNode;

@interface JMapBinarySearchTree : NSObject

@property (nonatomic, strong) JMapNode * root;

- (void)insertNewData:(JMapBaseModel *)data forId:(NSInteger)id;

- (JMapBaseModel *)retrieveObjectById:(NSInteger)id;

- (void) displayInorder;
@end
