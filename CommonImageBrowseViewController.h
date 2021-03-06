/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:42:40 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <MMImgageBrowseViewDelegate.h>
#import <UIActionSheetDelegate.h>

@interface CommonImageBrowseViewController : MMUIViewController <MMImgageBrowseViewDelegate, UIActionSheetDelegate> {
	MMImageBrowseView* m_imageView; 
	UIImage* m_image; 
	MMAnimationTipView* m_tipView; 
	id m_singleTapOnNav; 
}
@property (nonatomic,retain) id m_singleTapOnNav; 
-(void)initView;
-(void)showStatusBar;
-(void)willAppear;
-(void)hideStatusBar;
-(void)willDisapper;
-(void)initImageView;
-(void)handleViewWillDisappear;
-(void)handleViewWillAppear;
-(void)initNavigationBar;
-(void)onSavedPhotosAlbum:(id)arg1;
-(void)addNvGestureRecognizer;
-(void)removeNvGestureRecognizer;
-(void)onSingleTapOnNavigationBar:(id)arg1;
-(void)adjustImageViewRect;
-(void)onOperate;
-(void)setM_singleTapOnNav:(id)arg1;
-(void)onSingleTapImageBrowseView;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(id)initWithImage:(id)arg1;
-(void)viewDidLoad;
-(void)setFullScreen:(BOOL)arg1;
-(void)exitFullScreen;
-(void)dealloc;
@end