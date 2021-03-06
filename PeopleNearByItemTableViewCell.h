/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:39:43 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PeopleNearByItemTableViewCell : MMTableViewCell {
	UILabel* m_nickNameLabel; 
	UILabel* m_personalRemarkLabel; 
	UILabel* m_remarkContainer; 
	UILabel* m_distanceLabel; 
	MMAdaptiveLabel* m_addedLabel; 
	UIImageView* m_genderImageView; 
	UIImageView* m_remarkBKImage; 
	UIView* m_headerView; 
	UIImageView* m_albumFlagView; 
	BOOL m_showGenderIcon; 
}
@property (assign,nonatomic) BOOL showGenderIcon; 
-(void)setShowGenderIcon:(BOOL)arg1;
-(void)updateWithLbsContactInfo:(id)arg1 withHeaderView:(id)arg2;
-(void)dealloc;
@end