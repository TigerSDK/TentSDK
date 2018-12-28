//
//  TEAlertViewController.h
//  TentFramework
//
//  Created by TWTech1 on 15-5-13.
//  Copyright (c) 2015年 jianming. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void (^TEAlertViewButtonClick)(int indext);


@interface TEAlertViewController : UIViewController
{
    TEAlertViewButtonClick AlertViewBlock;
}
@property (nonatomic,retain)  UILabel* alertTitle;
@property (nonatomic,retain)  UILabel* alertContent;
@property (nonatomic,retain) NSMutableArray* buttonArray;

-(TEAlertViewController *)initWithMessage:(NSString *)message;
-(TEAlertViewController *)initWithTitle:(NSString *)title Message:(NSString *)message;
-(TEAlertViewController *)initWithTitle:(NSString *)title Message:(NSString *)message WithBlock:(TEAlertViewButtonClick)myblock ButtonTitle:(NSString *)buttontitle,...;

-(void)show;
-(void)confirmButtonClicked;
@end
