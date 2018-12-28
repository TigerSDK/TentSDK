//
//  TentSDKLoginVK.h
//  TentSDKLoginVK
//
//  Created by TW-C-060 on 2018/4/9.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <UIKit/UIKit.h>

/**processOpenURL
 *
 *@param url
 *@param sourceApplication
 */
static NSString *const TentSDKLoginVKProcessOpenURL = @"te://login/vk/processOpenURL";

/**VK分享
 *
 *@param text
 *@param uploadImages
 *@param linkTitle
 *@param linkUrl
 */
static NSString *const TentSDKLoginVKShare = @"te://login/vk/share";

/**VK自动登录*/
static NSString *const TentSDKLoginVKForVKAutoLogin = @"te://login/vk/forVKAutoLogin";

/**VK注销*/
static NSString *const TentSDKLoginVKForceLogout = @"te://login/vk/forceLogout";

/**VK登录*/
static NSString *const TentSDKLoginVKLogin = @"te://login/vk/login";


@interface TentSDKLoginVK : NSObject

@end
