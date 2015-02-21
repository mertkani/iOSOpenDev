//
//  MPHTMLBannerCustomEvent.h
//  MoPub
//
//  Copyright (c) 2013 MoPub. All rights reserved.
//

#import "UABannerCustomEvent.h"
#import "MPAdWebViewAgent.h"
#import "MPPrivateBannerCustomEventDelegate.h"

@interface UAHTMLBannerCustomEvent : UABannerCustomEvent <MPAdWebViewAgentDelegate>

@property (nonatomic, weak) id <UAPrivateBannerCustomEventDelegate> delegate;

@end
