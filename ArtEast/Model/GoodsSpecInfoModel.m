//
//  GoodsSpecInfoModel.m
//  ArtEast
//
//  Created by yibao on 16/12/14.
//  Copyright © 2016年 北京艺宝网络文化有限公司. All rights reserved.
//

#import "GoodsSpecInfoModel.h"

@implementation GoodsSpecInfoModel

+(NSDictionary *)objectClassInArray
{
    return @{@"spec_values":[GoodsSpecModel class]};
}

@end