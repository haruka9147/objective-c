//
//  Delegate.h
//  Assignment11
//
//  Created by 北田晴佳 on 2018/05/01.
//  Copyright © 2018 com.Haruka. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Pizza.h"
#import "Kitchen.h"

@protocol KitchenDelegate <NSObject>
- (BOOL)kitchen:(Kitchen *)kitchen shouldMakePizzaOfSize:(PizzaSize)size andToppings:(NSArray *)toppings;
- (BOOL)kitchenShouldUpgradeOrder:(Kitchen *)kitchen;
- (void)kitchenDidMakePizza:(Pizza *)pizza;
@end

@interface Delegate : NSObject
@property (nonatomic, weak) id<KitchenDelegate> delegate;
- (BOOL) askDelegate;
@end
