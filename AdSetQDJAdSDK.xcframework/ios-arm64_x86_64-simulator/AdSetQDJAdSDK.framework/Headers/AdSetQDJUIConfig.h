#ifndef AdSetQDJUIConfig_h
#define AdSetQDJUIConfig_h

#import <Foundation/Foundation.h>
#import "SSAdUIConfig.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, AdSetQDJUIFormat) {
    AdSetQDJUIFormatBanner = 1,
    AdSetQDJUIFormatSplash = 2,
    AdSetQDJUIFormatPopup = 3,
    AdSetQDJUIFormatFeed = 4,
    AdSetQDJUIFormatRewardVideo = 5,
};

@interface AdSetQDJUIConfig : SSAdUIConfig
@property (nonatomic, assign) SSAdUIType adType;
@property (nonatomic, strong) SSAdUIColorConfig *colors;
@property (nonatomic, strong) SSAdUIFontConfig *fonts;
@property (nonatomic, strong) SSAdUILayoutConfig *layout;
@property (nonatomic, strong) SSAdUIStringConfig *strings;
@property (nonatomic, strong) SSAdUIBehaviorConfig *behavior;
@property (nonatomic, strong) SSAdUIAnimationConfig *animation;

+ (instancetype)defaultConfigForFormat:(AdSetQDJUIFormat)format;
- (void)applyOverrides:(NSDictionary *)overrides;
@end

FOUNDATION_EXPORT SSAdUIType AdSetQDJMapToInternalUIType(AdSetQDJUIFormat format);

NS_ASSUME_NONNULL_END

#endif /* AdSetQDJUIConfig_h */
