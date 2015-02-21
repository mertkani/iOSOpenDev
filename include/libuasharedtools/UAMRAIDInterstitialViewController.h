//
//  MPMRAIDInterstitialViewController.h
//  MoPub
//
//  Copyright (c) 2012 MoPub, Inc. All rights reserved.
//

#import "MPInterstitialViewController.h"
#import "MPForceableOrientationProtocol.h"

////////////////////////////////////////////////////////////////////////////////////////////////////

@protocol MPMRAIDInterstitialViewControllerDelegate;
@class UAAdConfiguration;

////////////////////////////////////////////////////////////////////////////////////////////////////

@interface UAMRAIDInterstitialViewController : MPInterstitialViewController <MPForceableOrientationProtocol>

- (id)initWithAdConfiguration:(UAAdConfiguration *)configuration;
- (void)startLoading;

@end
