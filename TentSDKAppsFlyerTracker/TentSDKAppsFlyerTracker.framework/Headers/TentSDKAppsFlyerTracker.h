//
//  TentSDKAppsFlyerTracker.h
//  TentSDKAppsFlyerTracker
//
//  Created by TW-C-060 on 2018/4/12.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <UIKit/UIKit.h>


/**支付
 *
 *@param sappsflyerDevKey
 *@param sappleAppID
 */
static NSString *const TentSDKAppsFlyerTrackerDidFinishLaunchingWithOptions = @"te://login/AppsFlyerTracker/didFinishLaunchingWithOptions";

/**
 */
static NSString *const TentSDKAppsFlyerTrackerTrackAppLaunch = @"te://login/AppsFlyerTracker/trackAppLaunch";

/**
 *
 *@param trackEvent
 *@param withValue
 */
static NSString *const TentSDKAppsFlyerTrackerTrackEventWithValue = @"te://login/AppsFlyerTracker/trackEvent";



@interface TentSDKAppsFlyerTracker : NSObject


@end

