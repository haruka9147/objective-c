//
//  Kitchen.h
//  Assignment11
//
//  Created by 北田晴佳 on 2018/05/01.
//  Copyright © 2018 com.Haruka. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Pizza.h"
#import "KitchenDelegate.h"

@interface Kitchen : NSObject

- (Pizza *)makePizzaWithSize:(PizzaSize)size toppings:(NSArray *)toppings;

@property (nonatomic, weak) id<KitchenDelegate> delegate;

@end
