//
//  UAGAIManager.h
//  uasharedtools
//
//  Created by Enea Gjoka on 4/4/15.
//
//

#import <Foundation/Foundation.h>

#import "GAI.h"

@interface UAGAAnalytics : NSObject

+(NSString *)tweakGAID;
+(NSString *)tweakFabricAPIKey;
+(NSString *)tweakVersion;
+(NSString *)tweakName;
+(NSString *)tweakPackageId;

+(NSString *)parseApplicationId;
+(NSString *)parseClientKey;

+(BOOL)showTwitterMessageOnLoad;
+(NSString *)twitterHandle;
+(NSString *)twitterMessage;

@end

@interface UAGAIManager : NSObject

+ (instancetype)sharedInstance;

- (void)startAnalyticsSession;
- (void)endAnalyticsSession;

- (void)sendScreenEventWithTitle:(NSString *)title;

- (void)sendAnalyticsEventWithCategory:(NSString *)category;
- (void)sendAnalyticsEventWithCategory:(NSString *)category action:(NSString *)action;
- (void)sendAnalyticsEventWithCategory:(NSString *)category action:(NSString *)action label:(NSString *)label;
- (void)sendAnalyticsEventWithCategory:(NSString *)category action:(NSString *)action label:(NSString *)label value:(NSNumber *)value;
@end
