/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoOfflineTerms : PBCodable <NSCopying> {
    NSMutableArray *_appleLanguages;
    NSString *_countryCode;
    NSString *_languageCode;
    NSData *_license;
    NSData *_multiterms;
    NSData *_warranty;
}

@property (nonatomic, retain) NSMutableArray *appleLanguages;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, readonly) BOOL hasCountryCode;
@property (nonatomic, readonly) BOOL hasLanguageCode;
@property (nonatomic, readonly) BOOL hasLicense;
@property (nonatomic, readonly) BOOL hasMultiterms;
@property (nonatomic, readonly) BOOL hasWarranty;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) NSData *license;
@property (nonatomic, retain) NSData *multiterms;
@property (nonatomic, retain) NSData *warranty;

- (void).cxx_destruct;
- (void)addAppleLanguages:(id)arg1;
- (id)appleLanguages;
- (id)appleLanguagesAtIndex:(unsigned int)arg1;
- (unsigned int)appleLanguagesCount;
- (void)clearAppleLanguages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCountryCode;
- (BOOL)hasLanguageCode;
- (BOOL)hasLicense;
- (BOOL)hasMultiterms;
- (BOOL)hasWarranty;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)languageCode;
- (id)license;
- (void)mergeFrom:(id)arg1;
- (id)multiterms;
- (BOOL)readFrom:(id)arg1;
- (void)setAppleLanguages:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLicense:(id)arg1;
- (void)setMultiterms:(id)arg1;
- (void)setWarranty:(id)arg1;
- (id)warranty;
- (void)writeTo:(id)arg1;

@end