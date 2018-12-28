//
//  TWConf.h
//  FrameworkHome
//
//  Created by TalentWalker on 14-5-9.
//  Copyright (c) 2014年 jianming zha. All rights reserved.
//
//??????????????????????????????????????????????????
#import "TEHelper.h"
#import <TentFramework/TELoadingViewController.h>
#ifndef FrameworkHome_TEConf_h
#define FrameworkHome_TEConf_h


enum {
    OCTOPUSGAME = 0,            // octopus game
    TIGERGAME                   // tiger game
};

//tent log macro
#ifdef DEBUG//
#define TLog(fmt, ...) NSLog((@"%s" " %s" " %d " fmt), __FILE__, __FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#define TLog(format, ...)
#endif

//#warning 版本号有改动时，必须修改这里
#define TW_SDK_VER_STRING       @"5.0.0"

#define ISTIGERGAME 1 //显示为tigergame

//tent Localize method ,it makes english the default language
#define TELocalizedString(key) \
[TEHelper getTELocalizedString:(key)]

//tent loading page with tiger paw and points flicker, start
#define TELoadingStart \
[[TELoadingViewController instance] startLoading]

#define TELoadingStartWithoutBg \
[[TELoadingViewController instance] startLoadingWithoutBg]

//tent loading page with tiger paw and points flicker, start with a view param
#define TELoadingStartWithView(myview) \
[[TELoadingViewController instance] startLoading:(myview)]

#define TELoadingStartWithTitle(mytitle) \
[[TELoadingViewController instance] startLoadingWithTitle:(mytitle)]

#define TELoadingStartWithTitleAndView(mytitle,view) \
[[TELoadingViewController instance] startLoadingWithTitle:(mytitle) View:(view)]

//tent loading page with tiger paw and points flicker, end
#define TELoadingEnd \
[[TELoadingViewController instance] endLoading]




#define HOST_URL [TEHelper getHost]

#define GETURL(uri) [NSString stringWithFormat:@"%@%@", HOST_URL, uri]
//#define GETURL(a,uri) [NSString stringWithFormat:@"%@/%@", a, uri]

//action
#define TE_SDK_ACTION_CENTER @"/api/user/getUserCenter"
#define TE_SDK_ACTION_PAY @"/api/pay/getConfirmPage"

#define TE_SDK_ACTION_LOGINTE @"/sdk/user/v3/login"
#define TE_SDK_ACTION_LOGINGEUST @"/sdk/user/v3/guest"
#define TE_SDK_ACTION_LOGINFB @"/sdk/user/v3/facebook"
#define TE_SDK_ACTION_LOGINVK @"/sdk/user/v3/vk"
#define TE_SDK_ACTION_FORGETPW @"/sdk/user/v3/forgot"
#define TE_SDK_ACTION_REGISTER @"/sdk/user/v3/register"

#define TE_SDK_ACTION_MESSAGELIST @"/message/getMessage"

//广告推送
#define TE_SDK_ACTION_ADSPUSHES @"/sdk/notice/v3/notice"
// 用户数据采集接口
#define TE_SDK_USERDATA @"/api/user/userDataAcquisition"
// 弹出邀请好友界面 加back
#define TE_SDK_INVITE_PAGE @"/api/user/facebookInvite"
// 邀请奖励 加back
#define TE_SDK_GIFT_PAGE @"/api/user/facebookGift"
//用户中心绑定邮箱 加back
#define TE_SDK_BINDEMAIL_PAGE @"/api/user/toBindEmail"
//用户中心信息绑定邮箱 加back
#define TE_SDK_BIND_PAGE @"/api/user/toBindAccount"
//用户中心 我的档案 加back
#define TE_SDK_SELFARCHIVES_PAGE @"/api/user/selfArchives"

//用户中心 修改密码
#define TE_SDK_CHANGEPASS_PAGE @"/api/user/toChangePass"

// 用户反馈 加back
#define TE_SDK_FEEDBACK_PAGE @"/api/user/userFeedback"
// 弹出支付页面
#define TE_SDK_PAY_PAGE @"/api/pay/getConfirmPage"
// 苹果支付
#define TE_SDK_PAY_IAP_URL @"/api/pay/verifyAppleOrder"
//pay
//#define TG_SDK_PAY_GETAPPSTATUS @"/api/pay/getAppStatus"
//details
#define TE_SDK_PAY_GETAPPDETAILS @"/sdk/common/v3/details"
// 社交动作采集：FB分享成功 FB邀请成功 发送的数据接口
#define TE_SDK_SOCIALACTION @"/api/user/socialActionAcquisition"
//条款
#define TE_SDK_TERMS_USERPRIVACY [NSString stringWithFormat:@"%@%@%@",  @"/views/html/policy/privacyPolicy_",[TEHelper getTermsHTMLString],@".html"]
#define TE_SDK_TERMS_TESERVE [NSString stringWithFormat:@"%@%@%@",  @"/views/html/terms/userTerms_",[TEHelper getTermsHTMLString],@".html"]

//key of postdata in message
#define TE_SDK_POSTDATAKEY_StartIndex @"start"
#define TE_SDK_POSTDATAKEY_Length @"length"

//key of postdata in tentlogin
#define TE_SDK_POSTDATAKEY_USERNAME @"username"
#define TE_SDK_POSTDATAKEY_PASSWORD @"password"
#define TE_SDK_POSTDATAKEY_EMAIL @"email"

//key of postdata in fblogin
#define TE_SDK_POSTDATAKEY_FBAPPID @"fbAppId"
#define TE_SDK_POSTDATAKEY_USERID @"fbUserId"
#define TE_SDK_POSTDATAKEY_FBDETAIL @"fbDetail"
#define TE_SDK_SKEY_NICKNAME @"nickname"

//key of postdata in VK
#define TE_SDK_POSTDATAKEY_VKAPPID @"vkAppId"
#define TE_SDK_POSTDATAKEY_VKUSERID @"vkUserId"
#define TE_SDK_POSTDATAKEY_VKDETAIL @"vkDetail"
#define TE_SDK_POSTDATAKEY_VKDisplayName @"vkAppName"

//key of login platform type
#define TE_SDK_LOGINPLATFORMTYPE @"platformtype"
#define TE_SDK_CVALUE_TELogin "ios"
#define TE_SDK_CVALUE_FBLOGIN "fbios"
#define TE_SDK_CVALUE_VKLOGIN "vkios"
#define TE_SDK_CVALUE_GUIDELOGIN "guideios"

//key of local-storage
#define TE_SDK_LSKEY_ACCESSTOKEN @"access_token"
#define TE_SDK_LSKEY_USERID @"user_id"
#define TE_SDK_LSKEY_USERNAME @"username"
#define TE_SDK_LSKEY_PostData @"fbPostData" //包括商务平台返回的detail
#define TE_SDK_LSKEY_VKPostData @"vkPstData"

//jsonkey
#define TE_SDK_JSONKEY_CODE "code"
#define TE_SDK_JSONKEY_DATA "data"
#define TE_SDK_JSONKEY_APPSTATUS "appStatus"
#define TE_SDK_JSONKEY_FBFUNPAGE "fbFunPage"

//SDK KEY  支付
#define TE_SDK_SKEY_APPID "appId"
#define TE_SDK_SKEY_PRODUCTID "productId"
#define TE_SDK_SKEY_PRODUCTNUM "productNum"
#define TE_SDK_SKEY_PRODUCTDESC "productDesc"
#define TE_SDK_SKEY_DEALPRICE "dealPrice"
#define TE_SDK_SKEY_EXTINFO "extInfo"
#define TE_SDK_SKEY_NOTIFYURL "notifyUrl"
#define TE_SDK_SKEY_USERID "userId"
#define TE_SDK_SKEY_ORDERMODE "orderMode"
#define TE_SDK_SKEY_USERNAME "userEname"

#define TE_SDK_SKEY_PHONENUM "phoneENum"
#define TE_SDK_SKEY_MSGTITLE "msgTitle"
#define TE_SDK_SKEY_MSGBODY "msgBody"


/******key、 protocal 、action******/
#define TE_PROTOCAL_HEAD "http://twgmp/?"
#define TE_SDK_ACTION_CLOSE "close"
#define TE_SDK_ACTION_RELOAD "reload"
#define TE_SDK_SKEY_ACTION "action"

#define TE_SDK_SKEY_GIFTID "giftId"
//pay type
#define TE_SDK_ACTION_APPLE "apple"
#define TE_SDK_ACTION_NOTENOUGH "notEnough"
#define TE_SDK_ACTION_MOL "mol"
#define TE_SDK_ACTION_MIAO "miao"
//alipay，换为：alifukuan
#define TE_SDK_ACTION_ALIFUKUAN "alipay"
//paypal,改为：fukuanpal
#define TE_SDK_ACTION_FUKUANPAL "paypal"
//onepay,改为：onefukuan
#define TE_SDK_ACTION_ONEFUKUAN "onepay"
//bluepay,改为：bluefukuan
#define TE_SDK_ACTION_BLUEFUKUAN "bluepay"

//usercenter

#define TE_SDK_ACTION_DOINVITE "doInvite"   //邀请
#define TE_SDK_ACTION_SHOWGIFT "showGift"   //邀请奖励
#define TE_SDK_ACTION_GETGIFT "getGift"   //领取奖励

#define TE_SDK_ACTION_SHOWFEEDBACK "showFeedback"   //用户反馈
#define TE_SDK_ACTION_SHOWINVITE "showInvite"   //邀请好友
#define TE_SDK_ACTION_OPENURL "openUrl"
#define TE_SDK_ACTION_TELOGOUT "teLogout"

#define TE_SDK_ACTION_SHARE "fbShare"
#define TE_SDK_ACTION_INVITE "fbInvite"

/******for save to local start******/

#define TE_SDK_LOGINTYPE @"myLoginType"  //存储登陆类型
//login type
#define TE_SDK_LOGINTYPE_FACEBOOK @"FB"
#define TE_SDK_LOGINTYPE_VK @"VK"
#define TE_SDK_LOGINTYPE_VISITOR @"V"
#define TE_SDK_LOGINTYPE_TENT @"T"

//
#define TE_SDK_LOCAL_USERNAME @"username"
#define TE_SDK_LOCAL_PASSWORD @"password"


/******for view show******/

#define TE_SDK_SATHELLO_HEIGHT 40
#define CLOSEBUTTONWIDTH 80
#define CLOSEBUTTONHEIGHT 50
#define TITLEHIGHT 40


//adsAndPush
#define TE_ADSANDPUSH_ISSTOPLOADING @"isstoploading"
#define TE_ADSANDPUSH_IMAGEARRAY @"imagearray"
#define TE_ADSANDPUSH_ISSTOPLOADING_YES @"YES"
#define TE_ADSANDPUSH_ISSTOPLOADING_NO @"NO"
#define TE_LOCAL_SAVE_ADSARRAY @"adsArray"
#define TE_LOCAL_SAVE_IAPERRORARRAY @"IAPError"

//notification name
#define TE_NOTIFICATION_FLOATBUTTON @"floatbutton" //floatbutton 位置适配

//header type

#define TE_SDK_HEADER_APP_ID @"TE_APP_ID"
#define TE_SDK_HEADER_USER_ID @"TE_USER_ID"
#define TE_SDK_HEADER_SDK_VERSION @"TE_SDK_VERSION"
#define TE_SDK_HEADER_DEVICEID @"TE_DEVICE_ID"
#define TE_SDK_HEADER_SYS_LAN @"TE_SYS_LAN"
#define TE_SDK_HEADER_GAME_VERSION @"TE_GAME_VERSION"
#define TE_SDK_HEADER_PLATFORM_TYPE @"TE_OS_TYPE"
#define TE_SDK_HEADER_TIMESTAMP @"TE_TIMESTAMP"
#define TE_SDK_HEADER_SIGN @"TE_SIGN"

#define TE_SDK_MD5_KEY @"554d8aa80ef347e32e6b5a59fcce4e59"

//platform type cause this could only be ios,so do not define other types
#define TE_SDK_PLATFORM_TYPE_IOS @"ios"

//#define TG_SDK_SATHELLO_HEIGHT 30
//#define TG_SDK_SATHELLO_HEIGHT 40
#define TE_SDK_LOGINVIEWLOGINTITLE_HEIGHT 36
#define TE_SDK_LOGINVIEWFORGETPW_LEFTBARGIN 40

//************************************************************************************************************************************************************/
// 登陆
#define TW_SDK_LOGIN GETURL( @"/api/user/toLogin")

// Facebook login
#define TW_SDK_LOGIN_FB GETURL(@"/api/user/fbLogin")

//游客登陆
#define TW_SDK_LOGIN_VLOGIN GETURL( @"/api/user/vLogin")

// 自动登录
#define TW_SDK_AUTO_LOGIN GETURL(@"/api/user/login")

// 查询应用状态
#define TW_SDK_GET_APP_STATUS GETURL(@"/api/pay/getAppStatus")

// 苹果支付
#define TW_SDK_PAY_IAP_URL GETURL( @"/api/pay/verifyAppleOrderNew")

// 弹出支付页面
#define TW_SDK_PAY_VIEW GETURL(@"/api/pay/getConfirmPage")

// 弹出用户中心
#define TW_SDK_CENTER_VIEW GETURL(@"/api/user/getUserCenter")

// 获取服务器上第三方的参数配置
#define TW_SDK_GET_THIRDPARTY_INFO GETURL(@"/api/pay/getTPI")

// 社交动作采集：FB分享成功 FB邀请成功 发送的数据接口
#define TW_SDK_SOCIALACTION GETURL(@"/api/user/socialActionAcquisition")

// 弹出邀请好友界面
#define TW_SDK_INVITE_PAGE GETURL(@"/api/user/facebookInvite")

// 邀请奖励
#define TW_SDK_GIFT_PAGE GETURL(@"/api/user/facebookGift")

// 用户反馈
#define TW_SDK_FEEDBACK_PAGE GETURL(@"/api/user/userFeedback")

// 用户数据采集接口
#define TW_SDK_USERDATA GETURL(@"/api/user/userDataAcquisition")

#define TW_PROTOCOL_HEAD "http://twgmp/?"
#define TW_PROTOCOL_HEAD_LEN 14

#define TW_SDK_ACTION_TYPE_CLOSE "close"
#define TW_SDK_ACTION_TYPE_RELOAD "reload"
#define TW_SDK_ACTION_TYPE_DOINVITE "doInvite"   //邀请
#define TW_SDK_ACTION_TYPE_SHOWGIFT "showGift"   //邀请奖励
#define TW_SDK_ACTION_TYPE_GETGIFT "getGift"   //领取奖励
#define TW_SDK_ACTION_TYPE_SHOWFEEDBACK "showFeedback"   //用户反馈
#define TW_SDK_ACTION_TYPE_SHOWINVITE "showInvite"   //邀请好友
#define TW_SDK_ACTION_TYPE_LOGIN "encode"
#define TW_SDK_ACTION_TYPE_TOKEN "getToken"
#define TW_SDK_ACTION_TYPE_APPLE "apple"
#define TW_SDK_ACTION_TYPE_NOTENOUGH "notEnough"
//暂时没有用到
//#define TW_SDK_ACTION_TYPE_MOL "mol"
//#define TW_SDK_ACTION_TYPE_MIAO "miao"
//#define TW_SDK_ACTION_TYPE_ALIPAY "alipay"
//#define TW_SDK_ACTION_TYPE_PAYPAL "paypal"
#define TW_SDK_ACTION_TYPE_FBLOGIN "fbLogin"
#define TW_SDK_ACTION_TYPE_FBLOGOUT "fbLogout"
#define TW_SDK_ACTION_TYPE_VLOGIN "vLogin"
#define TW_SDK_ACTION_TYPE_OPENURL "openUrl"
#define TW_SDK_ACTION_TYPE_TELOGOUT "teLogout"
//#define TW_SDK_ACTION_TYPE_ONEPAY "onepay"

#define TW_SDK_SKEY_ACTION "action"
#define TW_SDK_SKEY_GIFTID "giftId"
#define TW_SDK_SKEY_REMEMBER_PASS "isRememberPass"
#define TW_SDK_SKEY_PASSWORD "password"
#define TW_SDK_SKEY_USERNAME "username"
#define TW_SDK_SKEY_AUTO_LOGIN "isAutoLogin"
#define TW_SDK_SKEY_APPID "appId"
#define TW_SDK_SKEY_USERID "user_id"
#define TW_SDK_SKEY_ACCESSTOKEN "access_token"
#define TW_SDK_SKEY_CODE "code"
#define TW_SDK_SKEY_ERRORMSG "errorMsg"
#define TW_SDK_SKEY_DATA "data"
#define TW_SDK_SKEY_PRODUCTID "productId"
#define TW_SDK_SKEY_PRODUCTNUM "productNum"
#define TW_SDK_SKEY_PRODUCTDESC "productDesc"
#define TW_SDK_SKEY_MIAOPRICE "miaoPrice"
#define TW_SDK_SKEY_DEALPRICE "dealPrice"
#define TW_SDK_SKEY_RECEIPT "receipt"
#define TW_SDK_SKEY_EXTINFO "extInfo"
#define TW_SDK_SKEY_NOTIFYURL "notifyUrl"
#define TW_SDK_SKEY_ORDERMODE "orderMode"
#define TW_SDK_SKEY_UPAYID "userId"
#define TW_SDK_SKEY_PLATFORMTYPE "platformType"
#define TW_SDK_SKEY_CURRENCY "currency"
#define TW_SDK_SKEY_ORDERID "orderId"
#define TW_SDK_SKEY_ICCPP "iccpp"
#define TW_SDK_SKEY_ISCPP "iscpp"
#define TW_SDK_SKEY_STCPP "stcpp"
#define TW_SDK_SKEY_LOGINTYPE "myLoginType"  //存储登陆类型
#define TW_SDK_SKEY_PHONENUM "phoneNum"
#define TW_SDK_SKEY_MSGTITLE "msgTitle"
#define TW_SDK_SKEY_MSGBODY "msgBody"




#define TW_SDK_APP_STATUS_TEST 1    // 测试阶段
#define TW_SDK_APP_STATUS_AUDIT 2   // 审核阶段
#define TW_SDK_APP_STATUS_RELEASE 3 // 发布阶段
#define TW_SDK_APP_STATUS_DOWN -1   // 下架阶段

#define TW_SDK_CKEY_DATAS "data"

#define TW_SDK_ACTION_SHARE "fbShare"
#define TW_SDK_ACTION_INVITE "fbInvite"



// 错误码
#define TW_SDK_ERROR_100 100
#define TW_SDK_ERROR_101 101
#define TW_SDK_ERROR_102 102
#define TW_SDK_ERROR_103 103
#define TW_SDK_ERROR_104 104
#define TW_SDK_ERROR_105 105


//新版登录UI，布局宏
#define screenSize CGRectMake(0, 0, [[UIScreen mainScreen] bounds].size.width, [[UIScreen mainScreen] bounds].size.height).size
#define ScreenScale ((screenSize.width<screenSize.height?screenSize.width:screenSize.height) / 375.0)

#define LoginViewWidth ((screenSize.width<screenSize.height?screenSize.width:screenSize.height) - 45 * ScreenScale)
#define LoginViewHeight (LoginViewWidth * 32 / 33.0)
//登录View的内部比例系数
#define LoginViewScale (LoginViewWidth / 330.0)

#endif
