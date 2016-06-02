//
//  UAPConfigManager.h
//  uasharedtools
//
//  Created by Enea Gjoka on 5/3/15.
//
//

#import <Foundation/Foundation.h>
#import <UAJSONModel.h>
#import "UAPDataStore.h"

#ifdef SLB
#define kConfigKeyPrefix @"SL_"
#else
#define kConfigKeyPrefix @"AP_"
#endif

#ifdef DEBUG
#define kConfigKeySuffix @"_DB"
#else
#define kConfigKeySuffix @"_RC"
#endif

@class UAPConfig;

typedef void(^UAPConfigResultBlock)(UAPConfig *config, NSError *error);

@interface UAPConfig : UAJSONModel
@property (nonatomic, strong) NSDictionary *params;
+ (void)getConfigInBackgroundWithBlock:(UAPConfigResultBlock)block;
/**
 Returns the object associated with a given key.
 
 @param key The key for which to return the corresponding configuration value.
 
 @return The value associated with `key`, or `nil` if there is no such value.
 */
- (id)objectForKey:(NSString *)key;

/**
 Returns the object associated with a given key.
 
 This method enables usage of literal syntax on `PFConfig`.
 E.g. `NSString *value = config[@"key"];`
 
 @see objectForKey:
 
 @param keyedSubscript The keyed subscript for which to return the corresponding configuration value.
 
 @return The value associated with `key`, or `nil` if there is no such value.
 */
- (id)objectForKeyedSubscript:(NSString *)keyedSubscript;
@end

@interface UAPConfigManager : NSObject
@property (nonatomic, strong) UAPConfig *config;
@property (nonatomic, assign) BOOL parseInitialized;

+ (instancetype)sharedManager;
- (void)fetchConfigIfNeeded;
- (void)forceFetchConfig;

- (BOOL)mainViewAdsEnabled;
- (BOOL)fsAdsEnabled;

- (double)adRefreshTimeout;
- (BOOL)forceLoadBannerAds;

- (NSString *)jsPatchCommonString;
- (NSString *)jsPatchString;

+ (id <UAPDataStoreProtocol>)dataStore;
@end
