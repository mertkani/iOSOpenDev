//
//  UAPPAdsSettings.h
//  PaymentLibrary
//
//  Created by Enea Gjoka on 11/6/15.
//  Copyright © 2015 UnlimApps Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FXForms.h>

#import "UAPPLoginPaymentHandler.h"

#define kUAPPPaymentCompleteNotification    @"com.unlimapps.paypalpaymentcomplete"
#define kUAPPUserLoginStatusChanged         @"com.unlimapps.userloginstatuschanged"

@interface UAPPAdsSettings : NSObject <FXForm>

@property (nonatomic, strong) UAPPLoginPaymentHandler *loginHandler;

- (instancetype)initWithTweakName:(NSString *)tweakName tweakPrice:(NSString *)tweakPrice paypalKeys:(NSDictionary *)paypalKeys;
@end
