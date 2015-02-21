//
//  MPHTMLInterstitialCustomEvent.h
//  MoPub
//
//  Copyright (c) 2013 MoPub. All rights reserved.
//

#import "UAInterstitialCustomEvent.h"
#import "UAHTMLInterstitialViewController.h"
#import "MPPrivateInterstitialCustomEventDelegate.h"

@interface UAHTMLInterstitialCustomEvent : UAInterstitialCustomEvent <MPInterstitialViewControllerDelegate>

@property (nonatomic, weak) id <MPPrivateInterstitialCustomEventDelegate> delegate;

@end
