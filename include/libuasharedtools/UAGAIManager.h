//
//  UAGAIManager.h
//  uasharedtools
//
//  Created by Enea Gjoka on 4/4/15.
//
//

#import <Foundation/Foundation.h>

#import "GAI.h"

@interface UAGAIManager : NSObject

+ (instancetype)sharedInstance;
+ (id <GAITracker>)GAITracker;

- (void)startAnalyticsSession;
- (void)endAnalyticsSession;

- (void)sendScreenEventWithTitle:(NSString *)title;

- (void)sendAnalyticsEventWithCategory:(NSString *)category;
- (void)sendAnalyticsEventWithCategory:(NSString *)category action:(NSString *)action;
- (void)sendAnalyticsEventWithCategory:(NSString *)category action:(NSString *)action label:(NSString *)label;
- (void)sendAnalyticsEventWithCategory:(NSString *)category action:(NSString *)action label:(NSString *)label value:(NSNumber *)value;
@end
