/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSelectionHandler.h"


@interface BRMainMenuSelectionHandler : NSObject <BRSelectionHandler> {
@private
	id<BRSelectionHandler> _handler;	// 4 = 0x4
}
+ (id)handlerWithHandler:(id)handler;	// 0x3165ccdd
- (id)initWithHandler:(id)handler;	// 0x3165cc8d
- (void)dealloc;	// 0x3165cc45
- (BOOL)handleSelectionForControl:(id)control;	// 0x315a1369
@end

