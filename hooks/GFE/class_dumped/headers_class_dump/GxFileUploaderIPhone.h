//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSRunLoop;

@interface GxFileUploaderIPhone : NSObject
{
    NSRunLoop *runLoop;
    unsigned int bytesWritten;
    unsigned int fileSize;
}

- (void)abort;
- (BOOL)isActive;
- (BOOL)createWriteStream:(id)arg1 user:(id)arg2 pwd:(id)arg3 remotePath:(id)arg4 remoteFolderPath:(id)arg5;
- (BOOL)createReadStream:(id)arg1;
- (int)percent;
- (id)initWithRunLoop:(id)arg1;

@end
