//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPasteboard.h"

@interface GDUIPastboard : UIPasteboard
{
}

+ (id)keyAfterRemovingPrefixFromKey:(id)arg1;
+ (BOOL)keyContainsPrefix:(id)arg1;
+ (id)gdPasteboardWithUniqueName;
+ (id)gdPasteboardWithName:(id)arg1 create:(BOOL)arg2;
+ (id)gdGeneralPasteboard;
+ (id)readPasteboardItemsFromContainer;
+ (void)savePasteboardItemsToContainer:(id)arg1;
+ (id)encryptedStringFromData:(id)arg1;
+ (id)decryptString:(id)arg1;
+ (id)encryptString:(id)arg1;
+ (id)decryptData:(id)arg1;
+ (id)encryptData:(id)arg1;

@end
