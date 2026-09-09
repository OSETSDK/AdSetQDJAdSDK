#ifndef SSAdUIConfig_h
#define SSAdUIConfig_h

#import <UIKit/UIKit.h>
#import "AdSetQDJLogoConfig.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, SSAdUIType) {
    SSAdUITypeBanner = 1,
    SSAdUITypeSplash = 2,
    SSAdUITypePopup = 3,
    SSAdUITypeFeed = 4,
    SSAdUITypeReward = 5,
};

typedef NS_ENUM(NSInteger, SSAdUIState) {
    SSAdUIStateNormal = 0,
    SSAdUIStateLoading = 1,
    SSAdUIStateError = 2,
    SSAdUIStateEmpty = 3,
};

@interface SSAdUIColorConfig : NSObject <NSCopying>
@property (nonatomic, strong) UIColor *backgroundColor;
@property (nonatomic, strong) UIColor *textPrimaryColor;
@property (nonatomic, strong) UIColor *textSecondaryColor;
@property (nonatomic, strong) UIColor *maskColor;
@property (nonatomic, strong) UIColor *tagBackgroundColor;
@property (nonatomic, strong) UIColor *tagTextColor;
@property (nonatomic, strong) UIColor *buttonBackgroundColor;
@property (nonatomic, strong) UIColor *buttonTextColor;
@end

@interface SSAdUIFontConfig : NSObject <NSCopying>
@property (nonatomic, strong) UIFont *titleFont;
@property (nonatomic, strong) UIFont *descFont;
@property (nonatomic, strong) UIFont *tagFont;
@property (nonatomic, strong) UIFont *buttonFont;
@end

@interface SSAdUILayoutConfig : NSObject <NSCopying>
@property (nonatomic, assign) CGFloat cornerRadius;
@property (nonatomic, assign) CGFloat horizontalPadding;
@property (nonatomic, assign) CGFloat verticalPadding;
@property (nonatomic, assign) CGFloat elementSpacing;
@property (nonatomic, assign) UIEdgeInsets safeInsets;
@end

@interface SSAdUIStringConfig : NSObject <NSCopying>
@property (nonatomic, copy) NSString *adTagText;
@property (nonatomic, copy) NSString *closeText;
@property (nonatomic, copy) NSString *skipText;
@property (nonatomic, copy) NSString *loadingText;
@property (nonatomic, copy) NSString *errorText;
@property (nonatomic, copy) NSString *emptyText;
@end

@interface SSAdUIBehaviorConfig : NSObject <NSCopying>
@property (nonatomic, assign) BOOL showAdTag;
@property (nonatomic, assign) BOOL showCloseButton;
@property (nonatomic, assign) BOOL showCountdown;
@property (nonatomic, assign) BOOL allowTapToClose;
@end

@interface SSAdUIAnimationConfig : NSObject <NSCopying>
@property (nonatomic, assign) NSTimeInterval showDuration;
@property (nonatomic, assign) NSTimeInterval hideDuration;
@property (nonatomic, copy) NSString *showAnimationKey;
@property (nonatomic, copy) NSString *hideAnimationKey;
@end

@interface SSAdUIConfig : NSObject <NSCopying>
@property (nonatomic, assign) SSAdUIType adType;
@property (nonatomic, strong) SSAdUIColorConfig *colors;
@property (nonatomic, strong) SSAdUIFontConfig *fonts;
@property (nonatomic, strong) SSAdUILayoutConfig *layout;
@property (nonatomic, strong) SSAdUIStringConfig *strings;
@property (nonatomic, strong) SSAdUIBehaviorConfig *behavior;
@property (nonatomic, strong) SSAdUIAnimationConfig *animation;
/// 广告平台 Logo 配置；默认关闭。
@property (nonatomic, strong) AdSetQDJLogoConfig *logo;
+ (instancetype)defaultConfigForType:(SSAdUIType)adType;
- (void)applyOverridesFromDictionary:(NSDictionary *)dict;
@end

NS_ASSUME_NONNULL_END

#endif /* SSAdUIConfig_h */
