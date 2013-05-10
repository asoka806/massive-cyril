/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:40:15 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CSyncBaseEvent : CBaseEvent {
	NSString* m_nsLocalUsrName; 
	unsigned m_uiSyncOplogCount; 
	NSMutableSet* m_setGetUsrImgList; 
	BOOL m_bNotifyGetUsrImg; 
	NSMutableArray* m_arrMsgList; 
	NSMutableArray* m_arrContactList; 
	NSMutableArray* m_arrChatroomContactList; 
	NSMutableDictionary* m_dicChatroomMemberList; 
	NSMutableDictionary* m_dicWebWxClearUnRead; 
	BOOL m_bInit; 
}
@property (nonatomic,retain) NSMutableSet* m_setGetUsrImgList; 
@property (nonatomic,retain) NSString* m_nsLocalUsrName; 
-(void)Stop;
-(void)NotifyFromPrtl:(unsigned long)arg1 MessageInfo:(id)arg2;
-(void)setM_setGetUsrImgList:(id)arg1;
-(void)setM_nsLocalUsrName:(id)arg1;
-(BOOL)HandleBatch:(BOOL)arg1 ShowPush:(BOOL)arg2;
-(void)ModChatRoomNotify:(id)arg1 Status:(unsigned long)arg2;
-(void)QuitChatRoom:(id)arg1 UsrName:(id)arg2;
-(BOOL)processSpecialMessage:(id)arg1;
-(void)BatchModChatroomMember;
-(void)BatchModContact;
-(BOOL)BatchAddMsg:(BOOL)arg1 ShowPush:(BOOL)arg2;
-(void)NotifySessionMessage:(id)arg1 Message:(unsigned long)arg2;
-(void)NotifyArrayMessage:(id)arg1 Message:(unsigned long)arg2;
-(BOOL)HandleHelloMsg:(id)arg1 SpcialSession:(id)arg2 NotAddDBSession:(id)arg3;
-(void)ParseStatusNotify:(id)arg1 map:(struct map<long unsigned int,objc_object*,stdless<long unsigned int>,stdallocator<stdpair<const long unsigned int, objc_object*> > >*)arg2;
-(void)NotifyMessage:(id)arg1 Message:(unsigned long)arg2;
-(BOOL)AddHelloMsg:(id)arg1 HelloUser:(id)arg2 ChatName:(id)arg3 Des:(unsigned long)arg4 OpCode:(unsigned long)arg5 DBRet:(BOOL*)arg6;
-(void)AddSpecialMsg:(id)arg1 ChatName:(id)arg2 MsgWrap:(id)arg3;
-(id)StatusNotifyWebWxClearUnRead:(struct XmlReaderNode_t*)arg1 msg:(id)arg2;
-(BOOL)AddHelloMessageToDB:(id)arg1 HelloUser:(id)arg2 MsgWrap:(id)arg3 Des:(unsigned long)arg4 OpCode:(unsigned long)arg5;
-(id)init;
-(void)dealloc;
@end