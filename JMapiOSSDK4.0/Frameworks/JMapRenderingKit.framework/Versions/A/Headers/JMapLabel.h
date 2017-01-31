//
//  JMapLabel.h
//  JMapRendering
//
//  Created by Aaron Wong on 2016-11-04.
//  Copyright © 2016 Jibestream. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define hideAfterSize 17.0

@interface JMapLabel : UIView

@property (nonatomic, strong, readonly, nonnull)  NSNumber *id;
@property (nonatomic, strong, readonly, nonnull)  NSArray <NSNumber *>* mapIds;
@property (nonatomic, strong, readonly, nullable) NSString *text;
@property (nonatomic, strong, readonly, nullable) UIImage *image;
@property (nonatomic, strong, readonly, nullable) NSString *uri;
@property (nonatomic, strong, readonly, nullable) NSString *svg;
@property (nonatomic, strong, readonly, nullable) UIFont *font;
@property (nonatomic, strong, readonly, nullable) NSNumber * rotation;
@property (nonatomic, strong, readonly, nullable) UILabel *textLabel;
@property (nonatomic, strong, readonly, nullable) UIWebView *webLabel;
@property (nonatomic, strong, readonly, nullable) UIImageView *imageLabel;
@property (nonatomic, assign, readonly) CGAffineTransform originalTransform;
@property (nonatomic, assign, readonly) CGAffineTransform rotatedTransform;
@property (nonatomic, assign, readonly) BOOL isRotated;
@property (nonatomic, assign, readonly) BOOL showEllipses;
@property (nonatomic, assign, readonly) BOOL isUnitLabel;

- (nonnull instancetype)initWithFrame:(CGRect)frame id:(nonnull NSNumber *)id mapIds:(nonnull NSArray <NSNumber *>*)mapIds text:(nullable NSString *)text image:(nullable UIImage *)image uri:(nullable NSString *)uri svg:(nullable NSString *)svg font:(nullable UIFont *)font rotation:(nullable NSNumber *)rotation isUnitLabel:(BOOL)isUnitLabel;

- (nonnull instancetype)initWithMapLabel:(nonnull JMapLabel *)mapLabel;

- (void)updateValuesWithText:(nullable NSString *)text image:(nullable UIImage *)image uri:(nullable NSString *)uri svg:(nullable NSString *)svg font:(nullable UIFont *)font rotation:(nullable NSNumber *)rotation;

- (void)contentScaleFactorChanged:(nonnull NSNumber *)newScale maxZoom:(float)maxZoom;

- (void)loadTextLabel;

- (void)loadWebLabel:(nonnull void(^)(BOOL success))completion;

- (void)loadImageLabel;

- (void)remove;

@end
