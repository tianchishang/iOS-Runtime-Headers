/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class HSCloudClient, NSObject<HSCloudAvailability>, NSObject<OS_dispatch_queue>;

@interface MPCloudController : NSObject {
    NSObject<HSCloudAvailability> *_cloudAvailabilityController;
    HSCloudClient *_cloudClient;
    int _preferencesChangedNotifyToken;
    NSObject<OS_dispatch_queue> *_queue;
    bool_isCloudEnabled;
    bool_isInitialImport;
    bool_isUpdateInProgress;
    bool_jaliscoGeniusEnabled;
    bool_preferencesChangedNotifyTokenIsValid;
}

@property(readonly) bool canDefaultMediaLibraryShowCloudContent;
@property(readonly) bool canShowCloudDownloadButtons;
@property(readonly) bool canShowCloudMusic;
@property(readonly) bool canShowCloudVideo;
@property(readonly) HSCloudClient * cloudClient;
@property(readonly) bool enablingJaliscoGeniusRequiresTerms;
@property(readonly) bool hasCloudLockerAccount;
@property(readonly) bool hasPurchaseHistoryAccount;
@property(readonly) bool isCloudEnabled;
@property(readonly) bool isGeniusEnabled;
@property(readonly) bool isInitialImport;
@property(readonly) bool isUpdateInProgress;
@property(getter=isJaliscoGeniusEnabled,readonly) bool jaliscoGeniusEnabled;

+ (bool)isMediaApplication;
+ (void)migrateCellularDataPreferencesIfNeeded;
+ (id)sharedCloudController;

- (void).cxx_destruct;
- (void)_initializeUpdateInProgressState;
- (void)acceptJaliscGeniusTermsAndConditionsVersion:(long long)arg1 withCompletionHandler:(id)arg2;
- (void)addGeniusPlaylistWithName:(id)arg1 seedItemSagaIDs:(id)arg2 itemSagaIDs:(id)arg3 completionHandler:(id)arg4;
- (void)addPlaylistWithName:(id)arg1 completionHandler:(id)arg2;
- (void)becomeActive;
- (void)becomeActiveAndWaitUntilDone:(bool)arg1;
- (bool)canDefaultMediaLibraryShowCloudContent;
- (bool)canShowCloudDownloadButtons;
- (void)canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (bool)canShowCloudMusic;
- (void)canShowCloudTracksDidChangeNotification:(id)arg1;
- (bool)canShowCloudVideo;
- (id)cloudClient;
- (void)dealloc;
- (bool)enablingJaliscoGeniusRequiresTerms;
- (bool)hasCloudLockerAccount;
- (bool)hasProperNetworkConditionsToPlayMedia;
- (bool)hasPurchaseHistoryAccount;
- (void)incrementItemProperty:(id)arg1 forSagaID:(unsigned long long)arg2;
- (id)init;
- (bool)isCellularDataRestricted;
- (void)isCellularDataRestrictedDidChangeNotification:(id)arg1;
- (bool)isCloudEnabled;
- (bool)isGeniusEnabled;
- (bool)isInitialImport;
- (bool)isJaliscoGeniusEnabled;
- (bool)isUpdateInProgress;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)loadJaliscoGeniusTermsAndConditionsWithCompletionHandler:(id)arg1;
- (void)loadUpdateProgressWithCompletionHandler:(id)arg1;
- (void)removePlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)resignActive;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (bool)shouldProhibitActionsForCurrentNetworkConditions;
- (void)updatePlaylistWithSagaID:(unsigned long long)arg1 itemSagaIDs:(id)arg2 completionHandler:(id)arg3;
- (void)uploadItemProperties;

@end