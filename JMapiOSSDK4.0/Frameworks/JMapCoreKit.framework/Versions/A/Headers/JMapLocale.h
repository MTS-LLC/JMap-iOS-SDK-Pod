//
//  JMapLocale.h
//  JMapCore
//
//  Created by Louie Yuen on 2017-05-03.
//  Copyright © 2017 Jibestream. All rights reserved.
//

#import <JMapCoreKit/JMapCoreKit.h>

@interface JMapLocale : JMapBaseModel

/**
 *  The name of the locale.
 */
@property (nonatomic, strong, readonly, nullable) NSString *name;

/**
 *  The locale code.
 */
@property (nonatomic, strong, readonly, nullable) NSString *localeCode;

@end
