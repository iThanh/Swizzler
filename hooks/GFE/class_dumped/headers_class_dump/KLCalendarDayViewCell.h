//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "UITableViewCell.h"

@class KLCalendarDayViewCellView;

@interface KLCalendarDayViewCell : UITableViewCell
{
    KLCalendarDayViewCellView *appView;
}

- (void)dealloc;
- (void)setHourStrings:(id)arg1;
- (void)setAppWrapper:(int)arg1 isToday:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
