//
//  CouponModel.h
//  ArtEast
//
//  Created by zyl on 16/12/26.
//  Copyright © 2016年 北京艺宝网络文化有限公司. All rights reserved.
//

/**
 *  优惠券Model
 */

#import <Foundation/Foundation.h>

@interface CouponModel : NSObject

@property (nonatomic,copy) NSString *cpns_id;
@property (nonatomic,copy) NSString *cpns_name;
@property (nonatomic,copy) NSString *memc_code;
@property (nonatomic,copy) NSString *desc;
@property (nonatomic,copy) NSString *from_time;
@property (nonatomic,copy) NSString *to_time;
@property (nonatomic,copy) NSString *STATUS;
@property (nonatomic,copy) NSString *isget;

@end
