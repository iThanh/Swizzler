//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "NSXMLParserDelegate.h"

@class NSMutableArray, NSMutableString, ServerPrefsWrapper;

@interface ServerPrefsWrapperBuilderFromXml : NSObject <NSXMLParserDelegate>
{
    NSMutableString *curValue;
    NSMutableArray *myContactsSyncFields;
    ServerPrefsWrapper *myServerPrefsWrapper;
}

@property(retain, nonatomic) ServerPrefsWrapper *myServerPrefsWrapper; // @synthesize myServerPrefsWrapper;
@property(retain, nonatomic) NSMutableArray *myContactsSyncFields; // @synthesize myContactsSyncFields;
@property(retain, nonatomic) NSMutableString *curValue; // @synthesize curValue;
- (void)dealloc;
- (void)resetCurValue;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)buildFromXml:(id)arg1;
- (id)init;

@end
