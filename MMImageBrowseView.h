/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:42:44 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIScrollViewDelegate.h>
#import <MMImageScrollViewHelperDelegate.h>

@interface MMImageBrowseView : UIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate> {
	id<MMImgageBrowseViewDelegate> m_delegate; 
	UIView* m_vImage; 
	CGSize m_szFit; 
	MMImageScrollViewHelper* m_scrollViewHelper; 
}
@property (nonatomic,copy) NSArray* gestureRecognizers; 
@property (assign,nonatomic) float maximumZoomScale; 
@property (assign,nonatomic) float minimumZoomScale; 
@property (assign,nonatomic) float zoomScale; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) id<MMImgageBrowseViewDelegate> m_delegate; 
-(void)setM_delegate:(id)arg1;
-(void)onSingleTap:(id)arg1;
-(void)onDoubleTap:(id)arg1;
-(id)getScrollView;
-(id)viewForZooming;
-(void)UpdateImage:(id)arg1;
-(void)UpdateEmoticon:(id)arg1;
-(void)ZoomForPoint:(CGPoint)arg1;
-(void)InitEmoticonView:(id)arg1;
-(void)UpdateData:(id)arg1 orientation:(int)arg2;
-(void)InitImageView;
-(void)UpdateImage:(id)arg1 orientation:(int)arg2;
-(void)ResetScroll;
-(void)UpdateData:(id)arg1;
-(void)scrollViewDidZoom:(id)arg1;
-(id)viewForZoomingInScrollView:(id)arg1;
-(id)init;
-(void)dealloc;
@end