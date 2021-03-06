/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:40:07 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ImportFriendsRequest : PBGeneratedMessage {
	unsigned int hasBaseRequest:1; 
	unsigned int hasOpCode:1; 
	unsigned int hasSource:1; 
	BaseRequest* baseRequest; 
	unsigned opCode; 
	unsigned source; 
}
@property (assign) unsigned source; 
@property (assign) BOOL hasSource; 
@property (assign) unsigned opCode; 
@property (assign) BOOL hasOpCode; 
@property (retain) BaseRequest* baseRequest; 
@property (assign) BOOL hasBaseRequest; 
+(id)parseFromData:(id)arg1;
-(id)SetOpCode:(unsigned)arg1;
-(id)SetBaseRequest:(id)arg1;
-(int)serializedSize;
-(void)writeToCodedOutputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1;
-(void)setHasOpCode:(BOOL)arg1;
-(void)setOpCode:(unsigned)arg1;
-(void)setHasBaseRequest:(BOOL)arg1;
-(void)setBaseRequest:(id)arg1;
-(void)setHasSource:(BOOL)arg1;
-(id)SetSource:(unsigned)arg1;
-(void)setSource:(unsigned)arg1;
-(id)init;
-(void)dealloc;
@end