#ifndef AdSetQDJBannerAd_h
#define AdSetQDJBannerAd_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdSetQDJAdProtocols.h"
#import "AdSetQDJUIConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDJBannerAd : NSObject
@property (nonatomic, weak, nullable) id<AdSetQDJBannerAdDelegate> delegate;
@property (nonatomic, copy, readonly) NSString *placementId;
@property (nonatomic, copy, nullable) NSDictionary *requestExtras;
@property (nonatomic, strong, nullable) AdSetQDJUIConfig *styleConfiguration;
@property (nonatomic, assign) CGSize adSize;
@property (nonatomic, assign) NSTimeInterval autoRefreshInterval;
@property (nonatomic, assign) UIViewContentMode imageContentMode;
@property (nonatomic, assign) BOOL adaptiveLayoutEnabled;
@property (nonatomic, strong, readonly, nullable) UIView *adView;

/// 已加载广告的 CPM 竞价（分），供 GroMore Client Bidding 上报；未加载为 0
@property (nonatomic, readonly) NSInteger bidPriceInCents;

- (instancetype)initWithPlacementId:(NSString *)placementId;
- (void)loadAd;
- (void)stopAutoRefresh;
- (CGFloat)recommendedHeightForWidth:(CGFloat)width;
@end

NS_ASSUME_NONNULL_END

#endif /* AdSetQDJBannerAd_h */
