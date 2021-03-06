/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "GTSocketCommunicationDelegate-Protocol.h"

@class GTSocketCommunication;

@interface FileDecryptionProtocol : _ABAddressBookAddRecord <GTSocketCommunicationDelegate>
{
    id _successBlock;
    GTSocketCommunication *_reader;
    BOOL _stopped;
}

+ (id)propertyForKey:(id)fp8 inRequest:(id)fp12;
+ (id)canonicalRequestForRequest:(id)fp8;
- (void)streamDidReceiveData:(id)fp8;
- (void)streamEndedWithError:(id)fp8;
- (void)stopLoading;
- (void)startLoading;
- (void)startStreamDecryption:(id)fp8;
- (void)requireMainThread;
- (id)mimeTypeForExtension:(id)fp8;
- (void)streamDecryptFile:(id)fp8 successBlock:(id)fp(null);
- (void)dealloc;
- (id)initWithRequest:(id)fp8 cachedResponse:(id)fp12 client:(id)fp16;

@end

