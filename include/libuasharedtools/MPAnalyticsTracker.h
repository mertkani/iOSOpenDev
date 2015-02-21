//
//  MPAnalyticsTracker.h
//  MoPub
//
//  Copyright (c) 2013 MoPub. All rights reserved.
//

#import <Foundation/Foundation.h>

@class UAAdConfiguration;

@interface MPAnalyticsTracker : NSObject

+ (MPAnalyticsTracker *)tracker;

- (void)trackImpressionForConfiguration:(UAAdConfiguration *)configuration;
- (void)trackClickForConfiguration:(UAAdConfiguration *)configuration;

@end
