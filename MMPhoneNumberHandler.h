/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:38:59 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <ABPeoplePickerNavigationControllerDelegate.h>
#import <ABNewPersonViewControllerDelegate.h>
#import <UIActionSheetDelegate.h>

@interface MMPhoneNumberHandler : NSObject <ABPeoplePickerNavigationControllerDelegate, ABNewPersonViewControllerDelegate, UIActionSheetDelegate> {
	NSString* _phoneNumber; 
	UIViewController* _viewController; 
}
@property (assign,nonatomic) UIViewController* viewController; 				//@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSString* phoneNumber; 				//@synthesize phoneNumber=_phoneNumber - In the implementation block
+(void)makePhoneCall:(id)arg1;
+(void)handlePhoneNumber:(id)arg1;
+(id)sharedInstance;
-(id)getViewController;
-(void)onCancel:(id)arg1;
-(void)CreateNewContact:(id)arg1 viewController:(id)arg2;
-(void)AddPhoneNumberToExistContact:(id)arg1 viewController:(id)arg2;
-(void)handlePhoneNumber:(id)arg1;
-(void)showNewPersonViewController;
-(void)showPeoplePickerController;
-(void)openNewPersonViewController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
-(void)handleContactActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(void)handleTotalActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(void)showContactActionSheet:(id)arg1;
-(void)showTotalActionSheet:(id)arg1;
-(void)setPhoneNumber:(id)arg1;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(void)setViewController:(id)arg1;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
-(void)dealloc;
@end