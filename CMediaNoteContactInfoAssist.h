/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:42:12 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIAlertViewDelegate.h>

@interface CMediaNoteContactInfoAssist : CBaseContactInfoAssist <UIAlertViewDelegate> {
}
-(void)initHeaderView;
-(void)makeCell:(id)arg1 row:(unsigned)arg2 section:(unsigned long)arg3;
-(void)onSwitchViewOn;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(int)numberOfSectionsInTableView:(id)arg1;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
@end