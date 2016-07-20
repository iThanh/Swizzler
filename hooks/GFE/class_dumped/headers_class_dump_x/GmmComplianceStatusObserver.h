/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@interface GmmComplianceStatusObserver : _ABAddressBookAddRecord
{
    BOOL _observing;
    id <GmmComplianceStatusObserverDelegate> _delegate;
}

- (void)setObserving:(BOOL)fp8;
- (BOOL)isObserving;
- (id)delegate;
- (void)notifyDelegateAboutComplianceCheckStatus:(BOOL)fp8;
- (void)notifyDelegateAboutComplianceCheckSuccess;
- (void)notifyDelegateAboutComplianceCheckFailure;
- (void)stopObserving;
- (void)startObserving;
- (void)setDelegate:(id)fp8;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)fp8;

@end
