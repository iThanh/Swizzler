/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

@class UILabel, UIView;

@interface EmailSoundVC : _ABAddressBookAddRecord
{
    _Bool forEvents;
    UILabel *_labelFooter;
    UIView *_viewFooter;
}

- (void)setForEvents:(_Bool)fp8;
- (_Bool)forEvents;
- (void)toggleVibration:(id)fp8;
- (void)toggleEmailSounds:(id)fp8;
- (id)tableView:(id)fp8 viewForFooterInSection:(int)fp12;
- (id)tableView:(id)fp8 viewForHeaderInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForFooterInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForHeaderInSection:(int)fp12;
- (float)calculateHeightForSectionFooter:(id)fp8;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillAppear:(BOOL)fp8;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)getDefaultAutomationScreenName;

@end
