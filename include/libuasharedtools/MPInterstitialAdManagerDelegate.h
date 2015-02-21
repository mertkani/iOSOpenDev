//
//  MPInterstitialAdManagerDelegate.h
//  MoPub
//
//  Copyright (c) 2013 MoPub. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MPInterstitialAdManager;
@class UAInterstitialAdController;
@class CLLocation;

@protocol MPInterstitialAdManagerDelegate <NSObject>

- (UAInterstitialAdController *)interstitialAdController;
- (CLLocation *)location;
- (id)interstitialDelegate;
- (void)managerDidLoadInterstitial:(MPInterstitialAdManager *)manager;
- (void)                       manager:(MPInterstitialAdManager *)manager
    didFailToLoadInterstitialWithError:(NSError *)error;
- (void)managerWillPresentInterstitial:(MPInterstitialAdManager *)manager;
- (void)managerDidPresentInterstitial:(MPInterstitialAdManager *)manager;
- (void)managerWillDismissInterstitial:(MPInterstitialAdManager *)manager;
- (void)managerDidDismissInterstitial:(MPInterstitialAdManager *)manager;
- (void)managerDidExpireInterstitial:(MPInterstitialAdManager *)manager;
- (void)managerDidReceiveTapEventFromInterstitial:(MPInterstitialAdManager *)manager;

@end
