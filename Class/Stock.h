//
//  Stock.h
//  kvc&kvo
//
//  Created by yangxiangwei on 15/8/27.
//  Copyright (c) 2015年 yangxiangwei. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Stock : NSObject{
    NSString *stockName;
    float price;
}
@property(nonatomic,strong)NSString *level;
@end
