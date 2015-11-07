//
//  UAPPSignUpViewController.h
//  WhatsAppPP
//
//  Created by Enea Gjoka on 11/21/14.
//
//

#import <Parse/Parse.h>
#import <ParseUI/ParseUI.h>

@interface UAPPSignUpViewController : PFSignUpViewController
-(instancetype)initWithTweakName:(NSString *)tweakName;
@end
