//
//  AdSetQDJFeedProtocol.h
//  AdSetQDJAdSDK
//
//  信息流广告代理协议
//

#ifndef AdSetQDJFeedProtocol_h
#define AdSetQDJFeedProtocol_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 信息流广告代理协议，监听信息流广告各生命周期事件
@protocol AdSetQDJFeedDelegate <NSObject>

@optional

/// 信息流广告加载成功
/// @param adArray 已加载的广告对象数组
- (void)feedAdDidLoad:(NSArray *)adArray;

/// 信息流广告加载失败
/// @param error 失败原因
- (void)feedAdDidFailToLoad:(NSError *)error;

/// 用户点击了某条信息流广告
/// @param adObject 被点击的广告对象
- (void)feedAdDidClick:(id)adObject;

/// 某条信息流广告产生曝光
/// @param adObject 产生曝光的广告对象
- (void)feedAdDidExpose:(id)adObject;

@end

NS_ASSUME_NONNULL_END

#endif /* AdSetQDJFeedProtocol_h */
