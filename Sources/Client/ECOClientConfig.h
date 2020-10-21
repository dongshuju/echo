//
//  ECOClientConfig.h
//  EchoSDK
//
//  Created by zhanghe on 2019/10/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ECOClientConfig : NSObject

/**
 * 默认获取CFBundleIdentifier作为appId，你也可以自己修改它
 */
@property (nonatomic, copy) NSString *appId;

/**
 * 默认获取CFBundleDisplayName作为appName，你也可以自己修改它
 */
@property (nonatomic, copy) NSString *appName;
/**
 * 是否开启RetainCircleDetector，默认为否
 */
@property (nonatomic, assign) BOOL retainCircleDetector;

@end

NS_ASSUME_NONNULL_END
