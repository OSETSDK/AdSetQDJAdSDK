#ifndef AdSetQDJLogoConfig_h
#define AdSetQDJLogoConfig_h

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// Logo 相对于广告素材区域的语义位置。
typedef NS_ENUM(NSInteger, AdSetQDJLogoPosition) {
    AdSetQDJLogoPositionTopLeft = 0,
    AdSetQDJLogoPositionTopRight,
    AdSetQDJLogoPositionBottomLeft,
    AdSetQDJLogoPositionBottomRight,
};

/// 广告平台 Logo 展示配置。
@interface AdSetQDJLogoConfig : NSObject <NSCopying>

/// 是否允许展示 Logo。默认 NO；服务端同时返回有效 adIcon 时才会真正展示。
@property (nonatomic, assign, getter=isEnabled) BOOL enabled;

/// Logo 在广告素材区域内的位置，默认右下角。
@property (nonatomic, assign) AdSetQDJLogoPosition position;

/// Logo 尺寸，默认 32×32pt；任一边小于等于 0 时不展示。
@property (nonatomic, assign) CGSize size;

/// Logo 与广告素材区域边缘的距离，默认四边 12pt。
@property (nonatomic, assign) UIEdgeInsets edgeInsets;

@end


NS_ASSUME_NONNULL_END

#endif /* AdSetQDJLogoConfig_h */
