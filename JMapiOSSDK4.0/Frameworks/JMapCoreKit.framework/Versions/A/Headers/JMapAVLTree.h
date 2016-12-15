//
//  JMapAVLTree.h
//  JMapCore
//
//  Created by Brandon Chester on 2016-09-23.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#ifndef JMapAVLTree_h
#define JMapAVLTree_h

@class Node;
@class JMapBaseModel;

@interface JMapAVLTree : NSObject

/**
 Inserts a JMapBaseModel with the specified id into the tree.
 
 Complexity O(logn)
 
 @param data The JMapBaseModel to be inserted.
 @param id   The id corresponding to the object, which is used for tree ordering.
 */
-(void) insertData:(JMapBaseModel*)data withId:(NSNumber*)id;


/**
 Prints the contents of the tree in order of ids.
 */
- (void) printInOrder;


/**
 Retrieves an object in the tree by id.
 
 @param id The id corresponding to the object to be found.
 
 @return The JMapBaseModel if it exists, nil otherwise.
 */
-(JMapBaseModel*) getById:(NSNumber*)id;

@end

#endif
