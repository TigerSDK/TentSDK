//
//  TentSDKLogin.h
//  TentSDKLogin
//
//  Created by TW-C-060 on 2018/3/27.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <TentSDKLogin/LoginLogic.h>
#import <TentSDKLogin/TELoginViewController.h>
#import <TentSDKLogin/UserCenterViewController.h>

/**登录初始化*/
static NSString *const TentSDKLoginInit = @"te://login/init";
/**用户登录*/
static NSString *const TentSDKLoginDoLogin = @"te://login/doLogin";
/**用户登出*/
static NSString *const TentSDKLoginDoLogout = @"te://login/doLogout";
/**用户中心*/
static NSString *const TentSDKLoginUserCenter = @"te://login/userCenter";
/*
 *向悬浮框显示数组 中添加项，例如添加广告项
 *各个项 的对应如下：
 *0 用户中心 = 个人
 *1 公告
 *2 客服
 *3 粉丝页
 *4 论坛
 *5 推荐游戏
 *6 注销 = 退出
 *@param index
 *@return NSArray
 */
static NSString *const TentSDKLoginFloatAddTheShowedIndex = @"te://login/floatAddTheShowedIndex";
/**下载Images*/
static NSString *const TentSDKLoginDownloadsImages = @"te://login/downloadsImages";

/* 用户推送信息 */
static NSString *const TentSDKUserMessageList = @"te://login/messageList";
/**下载Images*/
static NSString *const TentSDKUserMessageCount = @"te://login/messageCount";

@interface TentSDKLogin : NSObject
/**
 HellowBar展示，目前用于Facebook管理类

 @param nickname nickname description
 */
+ (void)helloBarShow:(NSString *)nickname;

@end
