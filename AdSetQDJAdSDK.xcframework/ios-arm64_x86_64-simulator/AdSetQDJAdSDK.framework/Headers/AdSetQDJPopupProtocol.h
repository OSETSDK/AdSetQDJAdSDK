//
//  AdSetQDJPopupProtocol.h
//  AdSetQDJAdSDK
//
//  插屏广告代理协议
//

#ifndef AdSetQDJPopupProtocol_h
#define AdSetQDJPopupProtocol_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 插屏广告代理协议，监听插屏广告各生命周期事件
@protocol AdSetQDJPopupDelegate <NSObject>

@optional

/// 竞价成功、素材尚未渲染完成
- (void)popupAdDidAcquireBidWithPriceInCents:(NSInteger)priceInCents;

/// 插屏广告加载成功（素材已就绪，可展示）
- (void)popupAdDidLoad;

/// 插屏广告加载失败
/// @param error 失败原因
- (void)popupAdDidFailToLoad:(NSError *)error;

/// 插屏广告即将展示
- (void)popupAdWillPresent;

/// 插屏广告已展示
- (void)popupAdDidPresent;

/// 用户点击了插屏广告
- (void)popupAdDidClick;

/// 插屏广告已消失（用户关闭）
- (void)popupAdDidDismiss;

/// 插屏广告产生曝光
- (void)popupAdDidExpose;

@end

NS_ASSUME_NONNULL_END

#endif /* AdSetQDJPopupProtocol_h */
