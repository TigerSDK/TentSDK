//
//  TEScrollView.h
//  TentFramework
//
//  Created by TWTech1 on 15/6/30.
//  Copyright (c) 2015年 jianming. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TEImageViewDelegate

@optional
-(void)Touched:(id)sender;

@end

@interface TEImageView : UIImageView
@property(nonatomic,assign) id<TEImageViewDelegate> delegate;
@end
