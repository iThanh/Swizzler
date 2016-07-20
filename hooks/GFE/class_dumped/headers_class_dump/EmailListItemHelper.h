//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@interface EmailListItemHelper : NSObject
{
}

+ (id)attachmentsStringForMessageType:(int)arg1 forAttachmentsCount:(unsigned int)arg2;
+ (id)priorityStringForMessageType:(int)arg1;
+ (id)repliedStringForMessageType:(int)arg1;
+ (id)flaggedStringForMessageType:(int)arg1;
+ (id)unreadStringForMessageType:(int)arg1;
+ (id)iconImagePathForMessageType:(int)arg1;
+ (id)condenseText:(id)arg1 withLength:(int)arg2;
+ (int)getEmailMessageType:(id)arg1 forceReadType:(BOOL)arg2;
+ (int)getEmailMessageType:(id)arg1;
+ (BOOL)isCalendarMeeting:(struct AnEmail *)arg1;
+ (id)removeURLTagFrom:(id)arg1;
+ (id)gxTimeToNsDate:(struct GxTime *)arg1;
+ (BOOL)isOutgoingFolder:(int)arg1;

@end
