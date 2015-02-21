//
//  MPMRAIDBannerCustomEvent.h
//  MoPub
//
//  Copyright (c) 2013 MoPub. All rights reserved.
//

#import "UABannerCustomEvent.h"
#import "MPPrivateBannerCustomEventDelegate.h"

@interface UAMRAIDBannerCustomEvent : UABannerCustomEvent

@property (nonatomic, weak) id <UAPrivateBannerCustomEventDelegate> delegate;

@end
