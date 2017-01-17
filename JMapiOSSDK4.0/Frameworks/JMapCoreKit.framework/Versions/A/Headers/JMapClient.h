//
//  JMapClient.h
//  JMap
//
//  Created by Aaron Wong on 2016-08-04.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <JMapCoreKit/JMapDelegate.h>
#import <JMapCoreKit/JMapDataSource.h>

#pragma mark - JMapView
@interface JMapClient : UIScrollView

@property (nonatomic, assign) id<JMapDelegate> jMapDelegate;
@property (nonatomic, assign) id<JMapDataSource> jMapDataSource;

#pragma mark init methods
- (instancetype)initClientWithDelegate:(id<JMapDelegate>)delegate andDataSource:(id<JMapDataSource>)dataSource apiURL:(NSString *)apiUrl locationCode:(NSInteger)locationCode languageCode:(NSString *)languageCode;

@end
