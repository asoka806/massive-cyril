/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:41:28 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ModChatRoomMemberFlag : PBGeneratedMessage {
	unsigned int hasChatRoomName:1; 
	unsigned int hasUserName:1; 
	unsigned int hasFlagSwitch:1; 
	unsigned int hasValue:1; 
	NSString* chatRoomName; 
	NSString* userName; 
	unsigned flagSwitch; 
	unsigned value; 
}
@property (assign) unsigned value; 
@property (assign) BOOL hasValue; 
@property (assign) unsigned flagSwitch; 
@property (assign) BOOL hasFlagSwitch; 
@property (retain) NSString* userName; 
@property (assign) BOOL hasUserName; 
@property (retain) NSString* chatRoomName; 
@property (assign) BOOL hasChatRoomName; 
+(id)parseFromData:(id)arg1;
-(id)SetUserName:(id)arg1;
-(id)SetValue:(unsigned)arg1;
-(int)serializedSize;
-(void)setHasUserName:(BOOL)arg1;
-(void)writeToCodedOutputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1;
-(void)setHasFlagSwitch:(BOOL)arg1;
-(id)SetFlagSwitch:(unsigned)arg1;
-(void)setFlagSwitch:(unsigned)arg1;
-(void)setHasChatRoomName:(BOOL)arg1;
-(id)SetChatRoomName:(id)arg1;
-(void)setChatRoomName:(id)arg1;
-(void)setValue:(unsigned)arg1;
-(void)setUserName:(id)arg1;
-(void)setHasValue:(BOOL)arg1;
-(id)init;
-(void)dealloc;
@end