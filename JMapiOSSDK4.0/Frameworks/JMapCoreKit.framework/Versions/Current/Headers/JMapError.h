//
//  JMapError.h
//  JMapCore
//
//  Created by Aaron Wong on 2016-10-21.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum JMapErrorCode : NSUInteger {
    CouldNotConnect,
    AuthenticationError,
    MalformedJson,
    MapSVGError,
    URIError,
    IncorrectObjectType,
    NotFound,
    UndefinedError
} JMapErrorCode;

@interface JMapError : NSObject

@property (nonatomic, strong, readonly, nonnull) NSString * code;
@property (nonatomic, strong, readonly, nonnull) NSString * message;
@property (nonatomic, strong, readonly, nonnull) NSString * errorDescription;

+ (nonnull JMapError *)initWithWebResponse:(nonnull NSDictionary *)response;

- (nonnull instancetype)initWithErrorType:(JMapErrorCode)errorType message:(nullable NSString *)message description:(nullable NSString *)description;

@end
