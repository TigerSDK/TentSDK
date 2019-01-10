//
//  TENetworkingTools.h
//  TEameFramework
//
//  Created by TW-C-060 on 2018/12/18.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TERequestResultItem.h"

@protocol TENetworkingToolsDelegate <NSObject>

//请求成功之后的回调
- (void)requestSuccessWithResult:(TERequestResultItem *)result;

//请求失败之后的回调
- (void)requestFailedWithErrorCode:(NSString *)errorCode andErrorMsg:(NSString *)errorMsg andResult:(TERequestResultItem *)errorData;

@end

@interface TENetworkingTools : NSObject

+(TENetworkingTools *)instance;

@property (nonatomic, weak) id<TENetworkingToolsDelegate> delegate;
/*
 * 同步获取APP信息请求
 */
- (NSDictionary *)syncRequestWithGetAppDetailes;
/*
 * APP信息请求
 */
- (NSString *)requestWithGetAppDetailes;
/*
 * 给服务器发送信息
 * 无结果返回
 */
- (NSString *)requestWithSendGameInfoToServer;
/*
 * 登录接口
 * account 用户名称
 * password 用户密码
 */
- (NSString *)requestWithPasswordLoginWithAccount:(NSString *)account andPassword:(NSString *)password;
/*
 * 注册接口
 * username 用户名称
 * password 用户密码
 * email 邮箱地址
 */
- (NSString *)requestWithRegisterUserName:(NSString *)username Password:(NSString *)password Email:(NSString *)email;
/*
 * 游客登录接口
 */
- (NSString *)requestWithVisitorLogin;
/*
 * facebook登录接口
 * postData 相关的用户数据
 */
- (NSString *)requestWithFacebookLoginWithData:(NSDictionary *)postData;
/*
 * vk登录接口
 * postData 相关的用户数据
 */
- (NSString *)requestWithVKLoginWithData:(NSDictionary *)postData;
/*
 * 找回密码接口
 * username 用户名称
 * email 邮箱地址
 */
- (NSString *)requestWithFindPWUsername:(NSString *)username Email:(NSString *)email;
/*
 * 推送消息列表接口
 * start 页数
 * length 消息个数
 * language 语言种类
 */
- (NSString *)requestWithGetMessageListWithIndex:(NSString *)start andLength:(NSString *)length andLanguage:(NSString *)language;
/*
 * 推送消息记录接口
 * messageId 推送消息id
 */
- (NSString *)requestWithReadMessageWithId:(NSString *)messageId;
/*
 * facebook邀友记录接口
 * messageId 推送消息id
 */
- (NSString *)requestWithFBInvitedFriendsBackSendToTEBackEnd:(NSString *)InvitedFriends;
/*
 * 服务器获取广告接口
 */
- (NSString *)requestWithGetTheAdsFromServer;
@end
