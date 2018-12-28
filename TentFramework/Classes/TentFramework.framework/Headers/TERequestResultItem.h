//
//  TERequestResultItem.h
//  TentFramework
//
//  Created by TW-C-060 on 2018/12/19.
//  Copyright © 2018年 xiaolei. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TERequestResultItem : NSObject

@property (nonatomic, copy) NSString *requestSignal;

@property (nonatomic, strong) NSDictionary *requestResult;

@property (nonatomic, strong) NSMutableArray *requestParameters;

@end
