#ifndef AdSetQDJSplashAd_h
#define AdSetQDJSplashAd_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdSetQDJAdProtocols.h"
#import "AdSetQDJUIConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDJSplashAd : NSObject
@property (nonatomic, weak, nullable) id<AdSetQDJSplashAdDelegate> delegate;
@property (nonatomic, copy, readonly) NSString *placementId;
@property (nonatomic, copy, nullable) NSDictionary *requestExtras;
@property (nonatomic, strong, nullable) AdSetQDJUIConfig *styleConfiguration;
@property (nonatomic, assign) NSInteger skipDuration;
@property (nonatomic, assign) BOOL skipEnabled;

/// 已加载广告的 CPM 竞价（分），供 GroMore Client Bidding 上报；未加载为 0
@property (nonatomic, readonly) NSInteger bidPriceInCents;

- (instancetype)initWithPlacementId:(NSString *)placementId;
- (void)loadAd;
- (void)showInWindow:(UIWindow *)window;
- (void)closeAd;
@end

NS_ASSUME_NONNULL_END

#endif /* AdSetQDJSplashAd_h */
