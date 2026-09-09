//
//  AdSetQDJAdSDKConfig.h
//  AdSetQDJAdSDK
//
//  SDK全局配置常量
//

#ifndef AdSetQDJAdSDKConfig_h
#define AdSetQDJAdSDKConfig_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#pragma mark - 服务器地址

/// 开发环境接口地址
FOUNDATION_EXPORT NSString * const kAdSetQDJAdSDKDevBaseURL;

/// 生产环境接口地址
FOUNDATION_EXPORT NSString * const kAdSetQDJAdSDKProdBaseURL;

/// SDK User-Agent 标识
FOUNDATION_EXPORT NSString * const kAdSetQDJAdSDKUserAgent;

#pragma mark - API路径

/// SDK初始化接口路径
FOUNDATION_EXPORT NSString * const kAdSetQDJAdSDKInitPath;

/// 广告竞价接口路径
FOUNDATION_EXPORT NSString * const kAdSetQDJAdSDKBidPath;

/// 点击上报接口路径
FOUNDATION_EXPORT NSString * const kAdSetQDJAdSDKClickPath;

#pragma mark - 超时配置

/// 竞价请求超时时间（秒）
FOUNDATION_EXPORT NSTimeInterval const kAdSetQDJAdSDKBidTimeout;

/// 上报请求超时时间（秒）
FOUNDATION_EXPORT NSTimeInterval const kAdSetQDJAdSDKReportTimeout;

/// 默认请求超时时间（秒）
FOUNDATION_EXPORT NSTimeInterval const kAdSetQDJAdSDKDefaultTimeout;

#pragma mark - 版本信息

/// SDK版本号
FOUNDATION_EXPORT NSString * const kAdSetQDJAdSDKVersion;

NS_ASSUME_NONNULL_END

#endif /* AdSetQDJAdSDKConfig_h */
