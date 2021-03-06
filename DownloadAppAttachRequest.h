/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:40:01 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface DownloadAppAttachRequest : PBGeneratedMessage {
	unsigned int hasRotation:1; 
	unsigned int hasAppId:1; 
	unsigned int hasMediaId:1; 
	unsigned int hasUserName:1; 
	unsigned int hasOutFmt:1; 
	unsigned int hasBaseRequest:1; 
	unsigned int hasSdkVersion:1; 
	unsigned int hasTotalLen:1; 
	unsigned int hasStartPos:1; 
	unsigned int hasDataLen:1; 
	unsigned int hasType:1; 
	int rotation; 
	NSString* appId; 
	NSString* mediaId; 
	NSString* userName; 
	NSString* outFmt; 
	BaseRequest* baseRequest; 
	unsigned sdkVersion; 
	unsigned totalLen; 
	unsigned startPos; 
	unsigned dataLen; 
	unsigned type; 
}
@property (assign) unsigned type; 
@property (assign) BOOL hasType; 
@property (assign) int rotation; 
@property (assign) BOOL hasRotation; 
@property (retain) NSString* outFmt; 
@property (assign) BOOL hasOutFmt; 
@property (assign) unsigned dataLen; 
@property (assign) BOOL hasDataLen; 
@property (assign) unsigned startPos; 
@property (assign) BOOL hasStartPos; 
@property (assign) unsigned totalLen; 
@property (assign) BOOL hasTotalLen; 
@property (retain) NSString* userName; 
@property (assign) BOOL hasUserName; 
@property (retain) NSString* mediaId; 
@property (assign) BOOL hasMediaId; 
@property (assign) unsigned sdkVersion; 
@property (assign) BOOL hasSdkVersion; 
@property (retain) NSString* appId; 
@property (assign) BOOL hasAppId; 
@property (retain) BaseRequest* baseRequest; 
@property (assign) BOOL hasBaseRequest; 
+(id)parseFromData:(id)arg1;
-(id)SetType:(unsigned)arg1;
-(id)SetUserName:(id)arg1;
-(id)SetAppId:(id)arg1;
-(id)SetBaseRequest:(id)arg1;
-(int)serializedSize;
-(void)setHasUserName:(BOOL)arg1;
-(void)writeToCodedOutputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1;
-(void)setHasRotation:(BOOL)arg1;
-(void)setHasOutFmt:(BOOL)arg1;
-(id)SetRotation:(int)arg1;
-(id)SetOutFmt:(id)arg1;
-(void)setOutFmt:(id)arg1;
-(void)setHasAppId:(BOOL)arg1;
-(void)setHasSdkVersion:(BOOL)arg1;
-(id)SetSdkVersion:(unsigned)arg1;
-(void)setSdkVersion:(unsigned)arg1;
-(void)setHasMediaId:(BOOL)arg1;
-(void)setHasDataLen:(BOOL)arg1;
-(void)setHasStartPos:(BOOL)arg1;
-(void)setHasTotalLen:(BOOL)arg1;
-(id)SetMediaId:(id)arg1;
-(id)SetDataLen:(unsigned)arg1;
-(id)SetStartPos:(unsigned)arg1;
-(id)SetTotalLen:(unsigned)arg1;
-(void)setDataLen:(unsigned)arg1;
-(void)setStartPos:(unsigned)arg1;
-(void)setTotalLen:(unsigned)arg1;
-(void)setMediaId:(id)arg1;
-(void)setHasBaseRequest:(BOOL)arg1;
-(void)setBaseRequest:(id)arg1;
-(void)setType:(unsigned)arg1;
-(void)setRotation:(int)arg1;
-(void)setHasType:(BOOL)arg1;
-(void)setUserName:(id)arg1;
-(void)setAppId:(id)arg1;
-(id)init;
-(void)dealloc;
@end