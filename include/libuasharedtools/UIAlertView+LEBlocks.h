//
//  UIAlertView+LEBlocks.h
//  LEAlertController
//
//  Created by Lasha Efremidze on 3/25/15.
//  Copyright (c) 2015 Lasha Efremidze. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^UAUIAlertViewBlock)(UIAlertView *alertView);
typedef void (^UAUIAlertViewCompletionBlock)(UIAlertView *alertView, NSInteger buttonIndex);

@interface UIAlertView (LEBlocks)

@property (nonatomic, copy) UAUIAlertViewBlock didPresentBlockUA;
@property (nonatomic, copy) UAUIAlertViewCompletionBlock clickedButtonBlockUA;

@end
