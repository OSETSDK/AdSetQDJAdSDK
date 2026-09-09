#ifndef AdSetQDJAdProtocols_h
#define AdSetQDJAdProtocols_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class AdSetQDJSplashAd;
@class AdSetQDJBannerAd;
@class AdSetQDJPopupAd;
@class AdSetQDJFeedAd;
@class AdSetQDJVideoAd;

@protocol AdSetQDJSplashAdDelegate <NSObject>
@optional
- (void)adSetQDJSplashAd:(AdSetQDJSplashAd *)ad didAcquireBidWithPriceInCents:(NSInteger)priceInCents;
- (void)adSetQDJSplashAdDidLoad:(AdSetQDJSplashAd *)ad;
- (void)adSetQDJSplashAd:(AdSetQDJSplashAd *)ad didFailToLoadWithError:(NSError *)error;
- (void)adSetQDJSplashAdWillPresent:(AdSetQDJSplashAd *)ad;
- (void)adSetQDJSplashAdDidPresent:(AdSetQDJSplashAd *)ad;
- (void)adSetQDJSplashAdDidClick:(AdSetQDJSplashAd *)ad;
- (void)adSetQDJSplashAdDidSkip:(AdSetQDJSplashAd *)ad;
- (void)adSetQDJSplashAdDidClose:(AdSetQDJSplashAd *)ad;
- (void)adSetQDJSplashAdDidRecordImpression:(AdSetQDJSplashAd *)ad;
@end

@protocol AdSetQDJBannerAdDelegate <NSObject>
@optional
- (void)adSetQDJBannerAd:(AdSetQDJBannerAd *)ad didAcquireBidWithPriceInCents:(NSInteger)priceInCents;
- (void)adSetQDJBannerAd:(AdSetQDJBannerAd *)ad didLoadView:(UIView *)adView;
- (void)adSetQDJBannerAd:(AdSetQDJBannerAd *)ad didFailToLoadWithError:(NSError *)error;
- (void)adSetQDJBannerAdDidClick:(AdSetQDJBannerAd *)ad;
- (void)adSetQDJBannerAdDidRecordImpression:(AdSetQDJBannerAd *)ad;
- (void)adSetQDJBannerAdWillLeaveApplication:(AdSetQDJBannerAd *)ad;
@end

@protocol AdSetQDJPopupAdDelegate <NSObject>
@optional
- (void)adSetQDJPopupAd:(AdSetQDJPopupAd *)ad didAcquireBidWithPriceInCents:(NSInteger)priceInCents;
- (void)adSetQDJPopupAdDidLoad:(AdSetQDJPopupAd *)ad;
- (void)adSetQDJPopupAd:(AdSetQDJPopupAd *)ad didFailToLoadWithError:(NSError *)error;
- (void)adSetQDJPopupAdWillPresent:(AdSetQDJPopupAd *)ad;
- (void)adSetQDJPopupAdDidPresent:(AdSetQDJPopupAd *)ad;
- (void)adSetQDJPopupAdDidClick:(AdSetQDJPopupAd *)ad;
- (void)adSetQDJPopupAdDidClose:(AdSetQDJPopupAd *)ad;
- (void)adSetQDJPopupAdDidRecordImpression:(AdSetQDJPopupAd *)ad;
@end

@protocol AdSetQDJFeedAdDelegate <NSObject>
@optional
- (void)adSetQDJFeedAd:(AdSetQDJFeedAd *)ad didLoadItems:(NSArray *)items;
- (void)adSetQDJFeedAd:(AdSetQDJFeedAd *)ad didFailToLoadWithError:(NSError *)error;
- (void)adSetQDJFeedAd:(AdSetQDJFeedAd *)ad didClickItem:(id)item;
- (void)adSetQDJFeedAd:(AdSetQDJFeedAd *)ad didRecordImpressionForItem:(id)item;
@end

@protocol AdSetQDJVideoAdDelegate <NSObject>
@optional
- (void)adSetQDJVideoAd:(AdSetQDJVideoAd *)ad didAcquireBidWithPriceInCents:(NSInteger)priceInCents;
- (void)adSetQDJVideoAdDidLoad:(AdSetQDJVideoAd *)ad;
- (void)adSetQDJVideoAd:(AdSetQDJVideoAd *)ad didFailToLoadWithError:(NSError *)error;
- (void)adSetQDJVideoAdDidStart:(AdSetQDJVideoAd *)ad;
- (void)adSetQDJVideoAdDidFinishPlayback:(AdSetQDJVideoAd *)ad;
- (void)adSetQDJVideoAdDidClick:(AdSetQDJVideoAd *)ad;
- (void)adSetQDJVideoAdDidSkip:(AdSetQDJVideoAd *)ad;
- (void)adSetQDJVideoAdDidClose:(AdSetQDJVideoAd *)ad;
- (void)adSetQDJVideoAdDidRecordImpression:(AdSetQDJVideoAd *)ad;
- (void)adSetQDJVideoAd:(AdSetQDJVideoAd *)ad didVerifyReward:(BOOL)isValid;
@end

NS_ASSUME_NONNULL_END

#endif /* AdSetQDJAdProtocols_h */
