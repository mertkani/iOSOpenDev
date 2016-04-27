//
//  UAAdManager.h
//  VinePlus
//
//  Created by Enea Gjoka on 11/8/14.
//
//

#import <Foundation/Foundation.h>

#import "UAPConfigManager.h"
#import <MPAdView.h>

@protocol UAAdManagerProtocol <NSObject>
@required
- (BOOL)shouldHookViewController;
- (CGFloat)adYPositionWithSize:(CGSize)size;
- (void)uaDeviceOrientationChanged:(id)sender;
- (UIViewController *)viewControllerForPresentingModalView;
@end

@protocol UAAdManagerAdRemovalProtocol <NSObject>
@optional
- (void)presentAdRemovalController;
@end

@interface UAAdManager : NSObject <UAAdManagerAdRemovalProtocol>

@property (nonatomic, strong) MPAdView *adView;
@property (nonatomic, strong) UIView *adViewContainer;
@property (nonatomic, assign) BOOL canReloadAd;
@property (nonatomic, weak) NSTimer *currentTimer;
@property (nonatomic, weak) UIViewController <UAAdManagerProtocol> *currentController;

+ (instancetype)sharedInstance;
- (BOOL)shouldShowAds;
- (void)updateAdViewFrame;
- (void)showBannerAdView;
- (void)hideBannerAdView;
- (void)disableAdLoad;
- (void)loadAd;
- (void)pauseAd;
- (void)checkAdStatus;
- (void)showInterstitial;
- (void)repositionOrAddAdViewOnController:(UIViewController <UAAdManagerProtocol>*)controller;

//Configurables
+ (NSString *)tweetURL;
+ (NSString *)appKeychainKey;
+ (void)tweetMeFromController:(UIViewController *)controller;
+ (void)userDidTweetToRemoveAds;

@end
