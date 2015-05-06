//
//  UAPConfigManager.h
//  uasharedtools
//
//  Created by Enea Gjoka on 5/3/15.
//
//

#import <Foundation/Foundation.h>
#import <Parse/PFConfig.h>

@interface UAPConfigManager : NSObject

@property (nonatomic, strong) PFConfig *config;

+ (instancetype)sharedManager;
- (void)fetchConfigIfNeeded;

@end
