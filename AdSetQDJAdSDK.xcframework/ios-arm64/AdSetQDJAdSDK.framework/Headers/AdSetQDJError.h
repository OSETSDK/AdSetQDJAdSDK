//
//  AdSetQDJError.h
//  AdSetQDJAdSDK
//
//  广告SDK错误码定义
//

#ifndef AdSetQDJError_h
#define AdSetQDJError_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 广告SDK错误域
FOUNDATION_EXPORT NSString * const AdSetQDJAdErrorDomain;

/// 原始错误，等价写入 NSUnderlyingErrorKey，便于接入方排查网络或解析根因
FOUNDATION_EXPORT NSString * const AdSetQDJAdUnderlyingErrorKey;

/// 广告SDK错误码枚举
typedef NS_ERROR_ENUM(AdSetQDJAdErrorDomain, AdSetQDJAdError) {
    /// 未知错误
    AdSetQDJAdErrorUnknown          = -1,

    /// 网络请求失败（连接超时、断网等）
    AdSetQDJAdErrorNetworkFailed    = -100,

    /// 没有广告填充（服务端无广告返回）
    AdSetQDJAdErrorNoAd             = -101,

    /// 请求超时
    AdSetQDJAdErrorTimeout          = -102,

    /// 广告位ID无效或未授权
    AdSetQDJAdErrorInvalidSlotId    = -103,

    /// 服务端数据解析失败
    AdSetQDJAdErrorParseFailure     = -104,

    /// SDK未初始化，请先调用 initWithAppId:appName:debug: 方法
    AdSetQDJAdErrorSDKNotInit       = -200,

    /// 广告已过期，需要重新加载
    AdSetQDJAdErrorAdExpired        = -201,

    /// SDK 初始化中，请等待 initialized 变为 YES 后再请求广告
    AdSetQDJAdErrorSDKInitializing  = -202,

    /// SDK 初始化失败，请检查初始化参数、网络和远程配置响应
    AdSetQDJAdErrorSDKInitFailed    = -203,
};

/// 构造统一错误域 NSError，并可携带原始错误
FOUNDATION_EXPORT NSError *AdSetQDJAdMakeError(AdSetQDJAdError code,
                                               NSString * _Nullable message,
                                               NSError * _Nullable underlyingError);

/// 将内部或系统错误归一到 AdSetQDJAdErrorDomain
FOUNDATION_EXPORT NSError *AdSetQDJAdNormalizeError(NSError * _Nullable error,
                                                    AdSetQDJAdError fallbackCode,
                                                    NSString * _Nullable fallbackMessage);

NS_ASSUME_NONNULL_END

#endif /* AdSetQDJError_h */
