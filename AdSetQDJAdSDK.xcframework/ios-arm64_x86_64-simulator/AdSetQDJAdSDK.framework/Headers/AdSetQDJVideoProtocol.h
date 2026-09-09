//
//  AdSetQDJVideoProtocol.h
//  AdSetQDJAdSDK
//
//  激励视频广告代理协议
//

#ifndef AdSetQDJVideoProtocol_h
#define AdSetQDJVideoProtocol_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 激励视频广告代理协议，监听视频广告各生命周期事件
@protocol AdSetQDJVideoDelegate <NSObject>

@optional

/// 竞价成功、素材尚未渲染完成
- (void)videoAdDidAcquireBidWithPriceInCents:(NSInteger)priceInCents;

/// 激励视频广告加载成功（素材已就绪，可展示）
- (void)videoAdDidLoad;

/// 激励视频广告加载失败
/// @param error 失败原因
- (void)videoAdDidFailToLoad:(NSError *)error;

/// 激励视频广告开始播放
- (void)videoAdDidStart;

/// 激励视频广告播放完成
- (void)videoAdDidPlayFinished;

/// 用户点击了视频广告
- (void)videoAdDidClick;

/// 用户跳过了视频广告
- (void)videoAdDidSkip;

/// 用户关闭了视频广告
- (void)videoAdDidClose;

/// 激励视频广告产生曝光
- (void)videoAdDidExpose;

/// 激励验证完成回调
/// @param isValid YES表示用户完整观看视频，可发放激励；NO表示未完整观看，不发放激励
- (void)videoAdDidRewardVerified:(BOOL)isValid;

@end

NS_ASSUME_NONNULL_END

#endif /* AdSetQDJVideoProtocol_h */
