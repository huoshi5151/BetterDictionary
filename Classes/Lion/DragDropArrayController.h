/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSArrayController.h"

#import "NSTableViewDataSource-Protocol.h"

@class NSTableView;

@interface DragDropArrayController : NSArrayController <NSTableViewDataSource>
{
    NSTableView *_tableView;
}

- (void)awakeFromNib;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (void)_moveObjectsInArrangedObjectsFromIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)_rowsFromIndexSet:(id)arg1;
- (id)_indexSetFromRows:(id)arg1;
- (long long)_rowsAboveRow:(long long)arg1 inIndexSet:(id)arg2;

@end
