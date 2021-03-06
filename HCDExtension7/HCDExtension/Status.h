//
//  Status.h
//  HCDExtension
//
//  Created by 黄成都 on 15/9/20.
//  Copyright (c) 2015年 黄成都. All rights reserved.
//

#import <Foundation/Foundation.h>
@class HCDUser;
@interface Status : NSObject
/** 微博文本内容 */
@property (copy, nonatomic) NSString *text;
/** 微博作者 */
@property (strong, nonatomic) HCDUser *user;
/** 转发的微博 */
@property (strong, nonatomic) Status *retweetedStatus;
@end
