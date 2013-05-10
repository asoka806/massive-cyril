/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:43:17 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MMBarButton : UIButton {
	int iContentWidth; 
	int iContentHight; 
	int iOriginWidth; 
	int iOriginHeight; 
}
@property (assign,nonatomic) int iOriginHeight; 
@property (assign,nonatomic) int iOriginWidth; 
@property (assign,nonatomic) int iContentHight; 
@property (assign,nonatomic) int iContentWidth; 
-(void)setIOriginWidth:(int)arg1;
-(void)setIContentWidth:(int)arg1;
-(void)setIContentHight:(int)arg1;
-(void)setIOriginHeight:(int)arg1;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
-(CGRect)backgroundRectForBounds:(CGRect)arg1;
@end