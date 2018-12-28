//
//  UserCenterViewController.h
//  TentFramework
//
//  Created by TWTech1 on 15-3-16.
//  Copyright (c) 2015年 jianming. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TentFramework/TentSDK.h>

//#import <FBSDKShareKit/FBSDKShareKit.h>
//#import <FBSDKCoreKit/FBSDKCoreKit.h>

@interface UserCenterViewController : UIViewController<UIWebViewDelegate,TENetworkingToolsDelegate>


//@property (nonatomic,retain) IBOutlet UILabel *glabel;
@property (nonatomic,retain) UIButton *gclose;
@property (nonatomic,retain) UIButton *gback;
//@property (nonatomic,retain) IBOutlet UIImageView *gimageview;
@property (nonatomic,retain) TEWebView *webView;
+(UserCenterViewController *)instance;
+(UserCenterViewController *)getInstance;
-(void)UserCenterViewControllerExample;
@end
