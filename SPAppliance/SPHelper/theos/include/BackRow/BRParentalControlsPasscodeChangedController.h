/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"


__attribute__((visibility("hidden")))
@interface BRParentalControlsPasscodeChangedController : BRMenuController <BRMenuListItemProvider> {
@private
	BRController *_guardedController;	// 100 = 0x64
	NSString **_menuItemNameKeys;	// 104 = 0x68
	BOOL _passcodeMatched;	// 108 = 0x6c
}
- (id)initWithMatch:(BOOL)match guarding:(id)guarding;	// 0x3160b951
- (void)dealloc;	// 0x3160b909
- (float)heightForRow:(long)row;	// 0x3160b6bd
- (long)itemCount;	// 0x3160b6a5
- (id)itemForRow:(long)row;	// 0x3160b6f9
- (void)itemSelected:(long)selected;	// 0x3160b759
- (BOOL)rowSelectable:(long)selectable;	// 0x3160b6c1
- (id)titleForRow:(long)row;	// 0x3160b6c5
@end

