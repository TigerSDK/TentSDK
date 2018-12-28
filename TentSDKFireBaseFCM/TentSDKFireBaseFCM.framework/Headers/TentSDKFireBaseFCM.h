//
//  TentSDKFireBaseFCM.h
//  TentSDKFireBaseFCM
//
//  Created by TW-C-060 on 2018/5/14.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <UIKit/UIKit.h>


/**初始配置*/
static NSString *const TentSDKFireBaseFCMConfigureWithApplication = @"te://fireBaseFCM/configureWithApplication";

/**设置APNSToken
 *==参数APNSToken
 */
static NSString *const TentSDKFireBaseFCMSetAPNSToken = @"te://fireBaseFCM/setAPNSToken";

/**设置主题
 *==参数topic
 */
static NSString *const TentSDKFireBaseFCMSubscribeToTopic = @"te://fireBaseFCM/subscribeToTopic";

/**退订主题
 *==参数topic
 */
static NSString *const TentSDKFireBaseFCMUnsubscribeFromTopic = @"te://fireBaseFCM/unsubscribeFromTopic";

/**退订主题
 *==参数value
 *==参数name
 */
static NSString *const TentSDKFireBaseFCMSetUserPropertyString = @"te://fireBaseFCM/setUserPropertyString";

/**设置信息
 *==参数message
 */
static NSString *const TentSDKFireBaseFCMAppDidReceiveMessage = @"te://fireBaseFCM/appDidReceiveMessage";

@interface TentSDKFireBaseFCM : NSObject

+(TentSDKFireBaseFCM *)instance;

@end

