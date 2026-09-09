//
//  AdSetQDJBannerProtocol.h
//  AdSetQDJAdSDK
//
//  横幅广告代理协议
//

#ifndef AdSetQDJBannerProtocol_h
#define AdSetQDJBannerProtocol_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 横幅广告代理协议，监听横幅广告各生命周期事件
@protocol AdSetQDJBannerDelegate <NSObject>

@optional

/// 竞价成功、素材尚未渲染完成
- (void)bannerAdDidAcquireBidWithPriceInCents:(NSInteger)priceInCents;

/// 横幅广告加载成功
/// @param adView 已准备好展示的广告视图
- (void)bannerAdDidLoad:(UIView *)adView;

/// 横幅广告加载失败
/// @param error 失败原因
- (void)bannerAdDidFailToLoad:(NSError *)error;

/// 用户点击了横幅广告
- (void)bannerAdDidClick;

/// 横幅广告产生曝光
- (void)bannerAdDidExpose;

/// 点击广告后即将离开当前应用（跳转到外部应用或浏览器）
- (void)bannerAdWillLeaveApplication;

@end

NS_ASSUME_NONNULL_END

#endif /* AdSetQDJBannerProtocol_h */
