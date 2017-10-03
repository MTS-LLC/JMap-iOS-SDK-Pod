//
//  JMapCoreUtils.h
//  JMap
//
//  Created by Aaron Wong on 2016-08-04.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  The JMapCoreUtils model.
 */
@interface JMapCoreUtils : NSObject

#pragma mark - Parsers
+ (void)parseJSONWithData:(NSData *)data completionHandler:(void(^)(NSString * error, NSDictionary * data))handler;
+ (void)createJSONWithData:(NSDictionary <NSString *, id>*)data completionHandler:(void(^)(NSString * error, NSData * data))handler;

@end
