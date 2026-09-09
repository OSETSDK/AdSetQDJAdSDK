//
//  AdSetQDJAdSDK.h
//  AdSetQDJAdSDK
//
//  AdSetQDJAd iOS SDK 伞形头文件
//  使用前请先调用 [AdSetQDJAdBridge sharedBridge] 进行初始化
//
//  iOS SDK 主要功能：
//  - 开屏广告（Splash）
//  - 横幅广告（Banner）
//  - 插屏广告（Popup）
//  - 信息流广告（Feed）
//  - 激励视频广告（Video）
//

#ifndef AdSetQDJAdSDK_h
#define AdSetQDJAdSDK_h

// 公共配置和错误码
#import "AdSetQDJAdSDKConfig.h"
#import "AdSetQDJError.h"

// SDK 主入口
#import "AdSetQDJAdBridge.h"

// 对外广告 API
#import "AdSetQDJAdProtocols.h"
#import "AdSetQDJSplashAd.h"
#import "AdSetQDJBannerAd.h"
#import "AdSetQDJPopupAd.h"
#import "AdSetQDJFeedAd.h"
#import "AdSetQDJVideoAd.h"

// 对外自定义 UI API
#import "AdSetQDJLogoConfig.h"
#import "AdSetQDJUIConfig.h"
#import "AdSetQDJUIConfigCenter.h"
// 兼容导出：确保 UI 子类型（SSAdUIColorConfig 等）在模块侧可见
#import "SSAdUIConfig.h"

#endif /* AdSetQDJAdSDK_h */
