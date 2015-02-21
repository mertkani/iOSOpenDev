//
//  MPMRAIDInterstitialCustomEvent.h
//  MoPub
//
//  Copyright (c) 2013 MoPub. All rights reserved.
//

#import "UAInterstitialCustomEvent.h"
#import "UAMRAIDInterstitialViewController.h"
#import "MPPrivateInterstitialCustomEventDelegate.h"

@interface UAMRAIDInterstitialCustomEvent : UAInterstitialCustomEvent <MPInterstitialViewControllerDelegate>

@property (nonatomic, weak) id <MPPrivateInterstitialCustomEventDelegate> delegate;

@end
