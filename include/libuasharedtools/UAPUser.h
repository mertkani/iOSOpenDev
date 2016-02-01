//
//  UAPUser.h
//  uasharedtools
//
//  Created by Enea Gjoka on 1/29/16.
//
//

#import "UAJSONModel.h"
#import "UAPConstants.h"

@interface UAPUserManager : NSObject
+ (instancetype)sharedManager;
- (void)fetchCurrentUserIfNeeded:(UAPUserResultBlock)block force:(BOOL)force;
@end

@interface UAPUser : UAJSONModel

@property (nonatomic, copy)   NSString *username;
@property (nonatomic, copy)   NSString *email;
@property (nonatomic, assign) BOOL premium;
@property (nonatomic, strong) NSArray *packages;

- (BOOL)adsRemoved;

+ (UAPUser *)currentUser;
+ (void)logOut;
+ (void)update:(UAPUserResultBlock)block;
+ (void)requestPasswordResetForEmailInBackground:(NSString *)email
                                           block:(UAPBooleanResultBlock)block;
+ (void)signUpInBackground:(NSDictionary *)params
                 withBlock:(UAPUserResultBlock)block;
+ (void)logInWithUsernameInBackground:(NSString *)username
                             password:(NSString *)password
                                block:(UAPUserResultBlock)block;
@end
