//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//
// SDK Root: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.1.sdk/
//

#import "NSObject.h"

#import "GoodTrustServicesHandlerObserver.h"
#import "UIAlertViewDelegate.h"

@class NSString, SBAlertView;

@interface SBGoodVaultInteractionHandler : NSObject <GoodTrustServicesHandlerObserver, UIAlertViewDelegate>
{
    NSString *_gvRequestId;
    SBAlertView *_currentAllertView;
    id <SBGoodVaultInteractionHandlerObserver> _observer;
}

@property(retain, nonatomic) SBAlertView *currentAllertView; // @synthesize currentAllertView=_currentAllertView;
@property(retain, nonatomic) NSString *gvRequestId; // @synthesize gvRequestId=_gvRequestId;
- (void)onError:(int)arg1 type:(int)arg2;
- (void)onResponseReceived:(int)arg1 withData:(id)arg2;
- (void)onRequestSent:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)cancel;
- (BOOL)receiveAndInstallIdentityCertInDataBase;
- (void)dealloc;
- (id)initWithObserver:(id)arg1;
- (BOOL)installCertificate:(id)arg1;
- (void)displayInstalationCompleteMessage;
- (void)displayInstalationFailedMessage:(id)arg1;
- (void)displayInstalationInProgressMessage;
- (void)dismissCurrentMessage;
- (void)notifyObserver;
- (void)displayMessageOnMainThread:(id)arg1;

@end

