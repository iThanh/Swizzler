//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSArray, NSString;

@interface GmmTaskSection : NSObject
{
    BOOL isOverDue;
    NSString *title;
    NSArray *rows;
    NSString *dateTime;
}

+ (id)sectionWithTitle:(id)arg1 withDateTime:(id)arg2 andRows:(id)arg3;
@property BOOL isOverDue; // @synthesize isOverDue;
@property(retain, nonatomic) NSString *dateTime; // @synthesize dateTime;
@property(retain, nonatomic) NSArray *rows; // @synthesize rows;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (void)dealloc;

@end
