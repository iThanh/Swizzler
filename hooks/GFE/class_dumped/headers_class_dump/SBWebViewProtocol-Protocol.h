//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

@class NSString, NSURLRequest, UIWebView;

@protocol SBWebViewProtocol <NSObject>
- (void)didFinishLoadingWithTag:(int)arg1 fromWebView:(UIWebView *)arg2 withPageSource:(NSString *)arg3;
- (BOOL)shouldLoadPageWithTag:(int)arg1 fromWebView:(UIWebView *)arg2 withRequest:(NSURLRequest *)arg3 navigationType:(int)arg4;
@end
