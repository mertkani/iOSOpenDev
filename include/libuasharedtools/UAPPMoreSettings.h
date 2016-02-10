//
//  UAPPMoreSettings.h
//  uasharedtools
//
//  Created by Enea Gjoka on 2/9/16.
//
//

#import <Foundation/Foundation.h>
#import <FXForms.h>

@interface UAPPMoreSettings : NSObject <FXForm>
@property (nonatomic, assign) BOOL should_show_ua_updates;
- (instancetype)initWithTweakName:(NSString *)tweakName;
@end
