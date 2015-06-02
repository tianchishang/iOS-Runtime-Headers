/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoContentRequest : PBRequest <NSCopying> {
    unsigned int _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
        unsigned int highPriority : 1; 
    } _has;
    BOOL _highPriority;
    NSString *_messageId;
}

@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) BOOL hasHighPriority;
@property (nonatomic, readonly) BOOL hasMessageId;
@property (nonatomic) BOOL highPriority;
@property (nonatomic, retain) NSString *messageId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (BOOL)hasFullSyncVersion;
- (BOOL)hasHighPriority;
- (BOOL)hasMessageId;
- (unsigned int)hash;
- (BOOL)highPriority;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messageId;
- (BOOL)readFrom:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(BOOL)arg1;
- (void)setHasHighPriority:(BOOL)arg1;
- (void)setHighPriority:(BOOL)arg1;
- (void)setMessageId:(id)arg1;
- (void)writeTo:(id)arg1;

@end