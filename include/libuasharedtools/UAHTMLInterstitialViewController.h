//
//  MPHTMLInterstitialViewController.h
//  MoPub
//
//  Copyright (c) 2012 MoPub, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "MPAdWebViewAgent.h"
#import "MPInterstitialViewController.h"

@class UAAdConfiguration;

@interface UAHTMLInterstitialViewController : MPInterstitialViewController <MPAdWebViewAgentDelegate>

@property (nonatomic, strong) MPAdWebViewAgent *backingViewAgent;
@property (nonatomic, weak) id customMethodDelegate;

- (void)loadConfiguration:(UAAdConfiguration *)configuration;

@end
