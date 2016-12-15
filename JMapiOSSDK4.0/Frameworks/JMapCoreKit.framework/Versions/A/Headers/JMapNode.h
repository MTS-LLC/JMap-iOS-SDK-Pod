//
//  JMapNode.h
//  JMapCore
//
//  Created by Brandon Chester on 2016-09-23.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>

@class JMapBaseModel;
@interface JMapNode : NSObject

@property (strong, nonatomic) JMapBaseModel* data;
@property (nonatomic) NSNumber* id;
@property (nonatomic) NSInteger height;
@property (strong, nonatomic) JMapNode* left;
@property (strong, nonatomic) JMapNode* right;
@property (weak, nonatomic) JMapNode* parent;

/**
 Initializes a JMapNode Object.
 
 @param data The data to be stored in the node.
 @param id   The id for the node which will be used for tree ordering.
 
 @return A JMapNode with the specified data and id properties.
 */
-(instancetype) initWithData:(NSObject *)data andId:(NSNumber*)id;

@end
    
