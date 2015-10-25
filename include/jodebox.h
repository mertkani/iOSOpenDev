//
//  jodebox.h
//  jodebox
//
//  Created by Enea Gjoka on 10/24/15.
//  Copyright (c) 2015 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CPDistributedMessagingCenter : NSObject
+ (id)centerNamed:(id)arg1;
- (void)runServerOnCurrentThread;
- (void)registerForMessageName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (BOOL)sendMessageName:(id)arg1 userInfo:(id)arg2;
- (NSDictionary*)sendMessageAndReceiveReplyName:(NSString*)name userInfo:(NSDictionary*)info;
@end

typedef enum {
    kSong,
    kMusicVideo,
    kFeatureMovie,
    kTVEpisode,
    kPodcast
} MediaType;

@interface JODeBox : NSObject

+(NSDictionary *)importMediaType:(MediaType)type withUserInfo:(NSDictionary *)info;

+(NSDictionary *)importSongWithTitle:(NSString *)title artist:(NSString *)artist image:(UIImage *)image
                  duration:(NSNumber *)duration year:(NSNumber *)year path:(NSString *)path;

+(NSDictionary *)importMusicVideoWithTitle:(NSString *)title artist:(NSString *)artist image:(UIImage *)image
                                  duration:(NSNumber *)duration year:(NSNumber *)year path:(NSString *)path;
@end