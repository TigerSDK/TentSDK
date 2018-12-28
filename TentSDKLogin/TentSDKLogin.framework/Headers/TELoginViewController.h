//
//  TELoginViewController.h
//  TentFramework
//
//  Created by caoyuan on 2017/8/7.
//  Copyright © 2017年 jianming. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <TentFramework/TENetworkingTools.h>


@interface TELoginViewController : UIViewController<TENetworkingToolsDelegate>

@property (nonatomic,strong) NSString     *findPwNameText;
@property (nonatomic,strong) UITextField  *nameTf;



+(TELoginViewController *)instance;
+(TELoginViewController *)getInstance;
-(void)removeSelf;

-(void)clickClose;
-(void)clickTrialGame;
-(void)clickLoginWithName:(NSString *)name WithPassword:(NSString *)pw;
-(void)clickFbLogin;
-(void)clickVKLogin;
-(void)clickRegisterWithName:(NSString *)name WithPassword:(NSString *)pw WithEmail:(NSString *)email;


@end
