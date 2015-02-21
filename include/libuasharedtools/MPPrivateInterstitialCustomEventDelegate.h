//
//  MPPrivateInterstitialcustomEventDelegate.h
//  MoPub
//
//  Copyright (c) 2013 MoPub. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MPInterstitialCustomEventDelegate.h"

@class UAAdConfiguration;
@class CLLocation;

@protocol MPPrivateInterstitialCustomEventDelegate <UAInterstitialCustomEventDelegate>

- (NSString *)adUnitId;
- (UAAdConfiguration *)configuration;
- (id)interstitialDelegate;

@end
