//
//  AdSetQDJAdBridge.h
//  AdSetQDJAdSDK
//
//  AdSetQDJAd iOS SDK 主入口单例
//  使用前必须调用 initWithAppId:appName:debug: 初始化
//

#ifndef AdSetQDJAdBridge_h
#define AdSetQDJAdBridge_h

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// SDK 初始化状态机，广告请求仅在 Ready 状态允许进入竞价链路
typedef NS_ENUM(NSInteger, AdSetQDJSDKInitializationState) {
    AdSetQDJSDKInitializationStateNotStarted = 0,
    AdSetQDJSDKInitializationStateInitializing,
    AdSetQDJSDKInitializationStateReady,
    AdSetQDJSDKInitializationStateFailed,
};

/// AdSetQDJAd iOS SDK 主入口，使用前必须调用 initWithAppId:appName:debug: 初始化
@interface AdSetQDJAdBridge : NSObject

/// 获取SDK单例
+ (instancetype)sharedBridge NS_SWIFT_NAME(shared());

/// 初始化SDK，建议在 AppDelegate application:didFinishLaunchingWithOptions: 中调用
/// @param appId 应用唯一标识，由后台分配
/// @param appName 应用名称
/// @param debug YES 使用开发环境，NO 使用生产环境
- (void)initWithAppId:(NSString *)appId appName:(NSString *)appName debug:(BOOL)debug;

/// SDK是否已初始化完成
@property (nonatomic, assign, readonly, getter=isInitialized) BOOL initialized;

/// SDK 初始化状态，便于区分未开始、初始化中、已就绪和失败
@property (nonatomic, assign, readonly) AdSetQDJSDKInitializationState initializationState;

/// 是否处于调试（开发环境）模式
@property (nonatomic, assign, readonly, getter=isDebug) BOOL debug;

/// 当前应用的AppId
@property (nonatomic, copy, readonly, nullable) NSString *appId;

/// 当前应用名称
@property (nonatomic, copy, readonly, nullable) NSString *appName;

/// 获取SDK版本号
+ (NSString *)sdkVersion;

#pragma mark - 日志

/// 是否已开启 SDK 日志（默认 NO，Release 集成请保持关闭）
+ (BOOL)isLogEnabled;

/// 开启或关闭 SDK 日志。集成调试时建议开启，便于根据关键节点日志定位问题。
+ (void)setLogEnabled:(BOOL)enabled;

/// 是否开启详细链路日志（可见性检测、UI 配置等）。需先开启 setLogEnabled:YES。
+ (BOOL)isVerboseLogEnabled;

/// 开启或关闭详细链路日志
+ (void)setVerboseLogEnabled:(BOOL)enabled;

#pragma mark - 网络

/// 设置广告竞价请求超时（秒），默认 5。GroMore 并行瀑布流建议 ≥12。
+ (void)setBidRequestTimeout:(NSTimeInterval)seconds;

@end

NS_ASSUME_NONNULL_END

#endif /* AdSetQDJAdBridge_h */
