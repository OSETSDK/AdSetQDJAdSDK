//
//  AdSetQDJSplashProtocol.h
//  AdSetQDJAdSDK
//
//  开屏广告代理协议
//

#ifndef AdSetQDJSplashProtocol_h
#define AdSetQDJSplashProtocol_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 开屏广告代理协议，监听开屏广告各生命周期事件
@protocol AdSetQDJSplashDelegate <NSObject>

@optional

/// 竞价成功、素材尚未渲染完成（GroMore Client Bidding 应在此阶段回传 eCPM）
/// @param priceInCents CPM 价格（分）
- (void)splashAdDidAcquireBidWithPriceInCents:(NSInteger)priceInCents;

/// 开屏广告加载成功（素材已就绪，可展示）
- (void)splashAdDidLoad;

/// 开屏广告加载失败
/// @param error 失败原因
- (void)splashAdDidFailToLoad:(NSError *)error;

/// 开屏广告即将展示
- (void)splashAdWillPresent;

/// 开屏广告已展示
- (void)splashAdDidPresent;

/// 用户点击了开屏广告
- (void)splashAdDidClick;

/// 用户点击了跳过按钮
- (void)splashAdDidSkip;

/// 开屏广告已消失（倒计时结束或用户跳过）
- (void)splashAdDidDismiss;

/// 开屏广告产生曝光
- (void)splashAdDidExposeImpression;

@end

NS_ASSUME_NONNULL_END

#endif /* AdSetQDJSplashProtocol_h */
