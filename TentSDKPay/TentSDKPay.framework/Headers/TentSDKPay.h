//
//  TentSDKPay.h
//  TentSDKPay
//
//  Created by TW-C-060 on 2018/4/10.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <UIKit/UIKit.h>

/**支付
 *
 *@param productId
 *@param buyNum
 *@param realPrice
 *@param productName
 *@param extInfo
 *@param notifyUrl
 */
static NSString *const TentSDKPayDoPayment = @"te://login/pay/doPayment";

/**App支付
 *
 *@param productId
 *@param buyNum
 *@param realPrice
 *@param productName
 *@param extInfo
 *@param notifyUrl
 */
static NSString *const TentSDKPayDoAppPayment = @"te://login/pay/doAppPayment";

/**检查是否有掉单情况
 *
 */
static NSString *const TentSDKPayCheckTrans = @"te://login/pay/checkTrans";


@interface TentSDKPay : NSObject

@end
