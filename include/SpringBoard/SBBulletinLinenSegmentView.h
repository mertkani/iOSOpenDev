/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBBulletinImageView.h"

@class UIView;

@interface SBBulletinLinenSegmentView : SBBulletinImageView {
	UIView *_linenView;	// 48 = 0x30
	CGSize _linenSize;	// 52 = 0x34
	SBBulletinImageView *_gradientView;	// 60 = 0x3c
}
- (id)initWithFrame:(CGRect)frame linenView:(id)view;	// 0x156fe1
- (void)dealloc;	// 0x156f81
- (void)adjustContents;	// 0x156df9
- (void)setGradientAlpha:(float)alpha;	// 0x156dd5
- (void)setFrame:(CGRect)frame;	// 0x156d81
- (void)didMoveToWindow;	// 0x156d41
@end
