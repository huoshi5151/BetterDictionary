//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 14 2013 08:30:39).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

@class NSColor;

@interface SnapbackButtonCell : NSButtonCell
{
    NSColor *_tintColor;
    NSColor *_alternateTintColor;
}

@property(retain) NSColor *alternateTintColor; // @synthesize alternateTintColor=_alternateTintColor;
@property(retain) NSColor *tintColor; // @synthesize tintColor=_tintColor;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)dealloc;

@end
