#ifndef AdSetQDJFeedAd_h
#define AdSetQDJFeedAd_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AdSetQDJAdProtocols.h"
#import "AdSetQDJUIConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface AdSetQDJFeedAd : NSObject
@property (nonatomic, weak, nullable) id<AdSetQDJFeedAdDelegate> delegate;
@property (nonatomic, copy, readonly) NSString *placementId;
@property (nonatomic, copy, nullable) NSDictionary *requestExtras;
@property (nonatomic, strong, nullable) AdSetQDJUIConfig *styleConfiguration;
@property (nonatomic, assign) NSInteger adCount;
@property (nonatomic, assign) CGSize adSize;

/// 聚合联调建议 YES：跳过主图预热，缩短 `didLoadItems` 回调时延
@property (nonatomic, assign) BOOL skipImagePrewarm;

- (instancetype)initWithPlacementId:(NSString *)placementId;
- (void)loadAd;

/// 为 `didLoadItems:` 回调中的单条素材构建可嵌入 UITableView / UICollectionView 的视图（内部使用信息流原生布局）。
/// @param item 回调数组中的元素（运行时类型为 SDK 内部 `SSBidAd`）
/// @param width 与列表内容区一致的内容宽度（通常等于 cell 内容宽度）
- (UIView *)buildViewForFeedItem:(id)item width:(CGFloat)width;

/// 与 `buildViewForFeedItem:width:` 配套使用的行高，需传入相同的 `width`。
+ (CGFloat)heightForFeedItem:(id)item width:(CGFloat)width;

/// `didLoadItems:` 中单条素材的 CPM 竞价（分），非 SSBidAd 或无效时返回 0
+ (NSInteger)bidPriceInCentsForFeedItem:(id)item;

@end

NS_ASSUME_NONNULL_END

#endif /* AdSetQDJFeedAd_h */
