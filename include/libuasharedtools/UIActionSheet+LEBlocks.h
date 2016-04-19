//
//  UIActionSheet+LEBlocks.h
//  LEAlertController
//
//  Created by Lasha Efremidze on 3/25/15.
//  Copyright (c) 2015 Lasha Efremidze. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^UAUIActionSheetBlock)(UIActionSheet *actionSheet);
typedef void (^UAUIActionSheetCompletionBlock)(UIActionSheet *actionSheet, NSInteger buttonIndex);

@interface UIActionSheet (LEBlocks)

@property (nonatomic, copy) UAUIActionSheetBlock didPresentBlockUA;
@property (nonatomic, copy) UAUIActionSheetCompletionBlock clickedButtonBlockUA;

@end
