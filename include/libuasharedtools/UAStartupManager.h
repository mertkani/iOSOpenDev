//
//  UAStartupManager.h
//  uasharedtools
//
//  Created by Enea Gjoka on 2/20/16.
//
//

#import <Foundation/Foundation.h>

@interface UAStartupManager : NSObject
+(void)startCrashManagerIfNeeded;
+(BOOL)shouldLoadHooks;
+(void)resetNumberOfCrashes;
+(void)addExceptionHandlers;
@end
