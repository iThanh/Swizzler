/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

#import "NSStreamDelegate-Protocol.h"

@interface GDFileManager : _CATransform3DMakeScale <NSStreamDelegate>
{
    id _delegate;
}

+ (int)getGDErrorDomainCode:(int)fp8;
+ (id)defaultManager;
- (BOOL)isFileEncrypted:(id)fp8;
- (BOOL)shouldContinueAfterMoveError:(id)fp8 withSrcURL:(id)fp12 andDstURL:(id)fp16;
- (BOOL)shouldContinueAfterCopyError:(id)fp8 withSrcURL:(id)fp12 andDstURL:(id)fp16;
- (BOOL)isFileReferenceURL:(id)fp8;
- (id)processRelativePath:(id)fp8;
- (int)createErrorObject:(id)fp8 errnoVal:(int)fp12 errorObj:(id *)fp16;
- (id)decryptURL:(id)fp8;
- (id)decryptFullPath:(id)fp8;
- (id)decryptFullPathIfNecessary:(id)fp8;
- (id)decryptPath:(id)fp8;
- (id)originalFileURLWithPath:(id)fp8;
- (id)convertToSecureContainerURL:(id)fp8;
- (id)convertToSecureContainerURLIfNecessary:(id)fp8;
- (id)convertToSecureContainerPath:(id)fp8 resolve:(BOOL)fp12;
- (id)convertToSecureContainerPath:(id)fp8;
- (id)convertToSecureContainerPathIfNecessary:(id)fp8;
- (id)uniqueFolderNameAtPath:(id)fp8;
- (BOOL)shouldUseDefaultManagerWithPath:(id)fp8;
- (BOOL)shouldUseDefaultManagerWithURL:(id)fp8;
- (id)pathContentOfSymbolicLinkAtPath:(id)fp8;
- (id)fileSystemAttributesAtPath:(id)fp8;
- (id)fileAttributesAtPath:(id)fp8 traverseLink:(BOOL)fp12;
- (id)directoryContentsAtPath:(id)fp8;
- (BOOL)createSymbolicLinkAtPath:(id)fp8 pathContent:(id)fp12;
- (BOOL)createDirectoryAtPath:(id)fp8 attributes:(id)fp12;
- (BOOL)changeFileAttributes:(id)fp8 atPath:(id)fp12;
- (id)currentDirectoryPath;
- (BOOL)changeCurrentDirectoryPath:(id)fp8;
- (id)delegate;
- (void)setDelegate:(id)fp8;
- (id)stringWithFileSystemRepresentation:(const char *)fp8 length:(unsigned int)fp12;
- (const char *)fileSystemRepresentationWithPath:(id)fp8;
- (BOOL)contentsEqualAtPath:(id)fp8 andPath:(id)fp12;
- (id)contentsAtPath:(id)fp8;
- (BOOL)setAttributes:(id)fp8 ofItemAtPath:(id)fp12 error:(id *)fp16;
- (id)attributesOfFileSystemForPath:(id)fp8 error:(id *)fp12;
- (id)attributesOfItemAtPath:(id)fp8 error:(id *)fp12;
- (id)displayNameAtPath:(id)fp8;
- (id)componentsToDisplayForPath:(id)fp8;
- (BOOL)isDeletableFileAtPath:(id)fp8;
- (BOOL)isExecutableFileAtPath:(id)fp8;
- (BOOL)isWritableFileAtPath:(id)fp8;
- (BOOL)isReadableFileAtPath:(id)fp8;
- (BOOL)fileExistsAtPath:(id)fp8 isDirectory:(char *)fp12;
- (BOOL)fileExistsAtPath:(id)fp8;
- (id)destinationOfSymbolicLinkAtPath:(id)fp8 error:(id *)fp12;
- (BOOL)linkItemAtPath:(id)fp8 toPath:(id)fp12 error:(id *)fp16;
- (BOOL)linkItemAtURL:(id)fp8 toURL:(id)fp12 error:(id *)fp16;
- (BOOL)createSymbolicLinkAtPath:(id)fp8 withDestinationPath:(id)fp12 error:(id *)fp16;
- (BOOL)createSymbolicLinkAtURL:(id)fp8 withDestinationURL:(id)fp12 error:(id *)fp16;
- (id)URLForPublishingUbiquitousItemAtURL:(id)fp8 expirationDate:(id *)fp12 error:(id *)fp16;
- (BOOL)evictUbiquitousItemAtURL:(id)fp8 error:(id *)fp12;
- (BOOL)startDownloadingUbiquitousItemAtURL:(id)fp8 error:(id *)fp12;
- (BOOL)setUbiquitous:(BOOL)fp8 itemAtURL:(id)fp12 destinationURL:(id)fp16 error:(id *)fp20;
- (BOOL)isUbiquitousItemAtURL:(id)fp8;
- (id)URLForUbiquityContainerIdentifier:(id)fp8;
- (id)ubiquityIdentityToken;
- (BOOL)moveItemAtPath:(id)fp8 toPath:(id)fp12 error:(id *)fp16;
- (BOOL)moveItemAtURL:(id)fp8 toURL:(id)fp12 error:(id *)fp16 useNameEnforcement:(BOOL)fp20;
- (BOOL)moveItemAtURL:(id)fp8 toURL:(id)fp12 error:(id *)fp16;
- (BOOL)copyItemAtPath:(id)fp8 toPath:(id)fp12 error:(id *)fp16;
- (BOOL)copyItemAtURL:(id)fp8 toURL:(id)fp12 error:(id *)fp16;
- (BOOL)replaceItemAtURL:(id)fp8 withItemAtURL:(id)fp12 backupItemName:(id)fp16 options:(unsigned int)fp20 resultingItemURL:(id *)fp24 error:(id *)fp28;
- (BOOL)removeItemAtPath:(id)fp8 error:(id *)fp12;
- (BOOL)removeItemAtURL:(id)fp8 error:(id *)fp12;
- (BOOL)createFileAtPath:(id)fp8 contents:(id)fp12 attributes:(id)fp16;
- (BOOL)createDirectoryAtPath:(id)fp8 withIntermediateDirectories:(BOOL)fp12 attributes:(id)fp16 error:(id *)fp20;
- (BOOL)createDirectoryAtURL:(id)fp8 withIntermediateDirectories:(BOOL)fp12 attributes:(id)fp16 error:(id *)fp20;
- (id)subpathsAtPath:(id)fp8;
- (id)subpathsOfDirectoryAtPath:(id)fp8 error:(id *)fp12;
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)fp8 options:(unsigned int)fp12;
- (id)enumeratorAtPath:(id)fp8;
- (id)enumeratorAtURL:(id)fp8 includingPropertiesForKeys:(id)fp12 options:(unsigned int)fp16 errorHandler:(id)fp(null);
- (id)contentsOfDirectoryAtPath:(id)fp8 error:(id *)fp12;
- (id)contentsOfDirectoryAtURL:(id)fp8 includingPropertiesForKeys:(id)fp12 options:(unsigned int)fp16 error:(id *)fp20;
- (id)URLsForDirectory:(unsigned int)fp8 inDomains:(unsigned int)fp12;
- (id)URLForDirectory:(unsigned int)fp8 inDomain:(unsigned int)fp12 appropriateForURL:(id)fp16 create:(BOOL)fp20 error:(id *)fp24;
- (void)dealloc;
- (id)init;

@end

