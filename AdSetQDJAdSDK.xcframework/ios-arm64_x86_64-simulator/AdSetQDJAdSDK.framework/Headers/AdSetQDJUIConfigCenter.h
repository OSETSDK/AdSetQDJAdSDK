#ifndef AdSetQDJUIConfigCenter_h
#define AdSetQDJUIConfigCenter_h

#import <Foundation/Foundation.h>
#import "AdSetQDJUIConfig.h"

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * const AdSetQDJUIConfigDidChangeNotification;
FOUNDATION_EXPORT NSString * const AdSetQDJUIConfigConflictNotification;
@class SSAdUIViewFactory;

@interface AdSetQDJUIConfigCenter : NSObject
@property (nonatomic, assign) BOOL debugLogEnabled;
@property (nonatomic, strong, readonly) SSAdUIViewFactory *viewFactory;

+ (instancetype)sharedCenter;
- (void)registerGlobalConfig:(AdSetQDJUIConfig *)config forFormat:(AdSetQDJUIFormat)format;
- (nullable AdSetQDJUIConfig *)globalConfigForFormat:(AdSetQDJUIFormat)format;
- (AdSetQDJUIConfig *)resolvedConfigForFormat:(AdSetQDJUIFormat)format
                               instanceConfig:(nullable AdSetQDJUIConfig *)instanceConfig;
- (void)removeGlobalConfigForFormat:(AdSetQDJUIFormat)format;
- (void)resetGlobalConfigs;
- (BOOL)applySingleOverride:(NSDictionary *)override
                   toConfig:(AdSetQDJUIConfig *)config
                     format:(AdSetQDJUIFormat)format
                      scope:(NSString *)scope
            conflictMessage:(NSString * _Nullable * _Nullable)conflictMessage;
@end

NS_ASSUME_NONNULL_END

#endif /* AdSetQDJUIConfigCenter_h */
