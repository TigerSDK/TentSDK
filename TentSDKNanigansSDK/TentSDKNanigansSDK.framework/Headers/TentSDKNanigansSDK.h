//
//  TentSDKNanigansSDK.h
//  TentSDKNanigansSDK
//
//  Created by TW-C-060 on 2018/4/13.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <UIKit/UIKit.h>

/**NanigansSDK的didFinishLaunchingWithOptions配置
 *@param NanigansAppID
 *@param FacebookAppID 传入值
 */
static NSString *const TentSDKLoginNanigansSDKDidFinishLaunchingWithOptions = @"te://login/nanigansSDK/didFinishLaunchingWithOptions";


/**NanigansSDK的trackAppLaunch配置
 *
 *@param url 传入值
 */
static NSString *const TentSDKLoginNanigansSDKTrackAppLaunch = @"te://login/nanigansSDK/trackAppLaunch";


/**NanigansSDK的trackUserRegistration配置
 *
 *@param userId 传入值
 */
static NSString *const TentSDKLoginNanigansSDKTrackUserRegistration = @"te://login/nanigansSDK/trackUserRegistration";


/**NanigansSDK的trackSingleProductPurchase配置
 *
 *@param ContentID
 *@param Price
 *@param Currency
 *@param quantity
 *@param extraParams
 */
static NSString *const TentSDKLoginNanigansSDKTrackSingleProductPurchase = @"te://login/nanigansSDK/trackSingleProductPurchase";


@interface TentSDKNanigansSDK : NSObject


@end

