/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class PFUbiquityStoreMetadata, PFUbiquityContainerIdentifier, NSDictionary, PFUbiquityPeerReceipt, _PFUbiquityStack, PFUbiquityPeerState, PFUbiquityLocation, NSString, NSURL, NSPersistentStoreCoordinator, NSMutableDictionary;

@interface PFUbiquitySetupAssistant : NSObject  {
    NSMutableDictionary *_options;
    NSPersistentStoreCoordinator *_psc;
    NSString *_storeType;
    NSURL *_storeURL;
    BOOL _ubiquityEnabled;
    NSURL *_ubiquityRootURL;
    NSString *_ubiquityName;
    NSString *_localPeerID;
    NSString *_modelVersionHash;
    PFUbiquityLocation *_ubiquityRootLocation;
    _PFUbiquityStack *_stack;
    PFUbiquityStoreMetadata *_storeMetadata;
    PFUbiquityPeerState *_localPeerState;
    BOOL _didBaselineCopy;
    BOOL _storeFileExists;
    BOOL _hasStoreMetadataFile;
    BOOL _hasStoreMetadataEntry;
    BOOL _hasContainerUUID;
    BOOL _hasContainerUUIDInStore;
    PFUbiquityPeerReceipt *_localPeerReceipt;
    PFUbiquityContainerIdentifier *_containerIdentifier;
    BOOL _hasLocalTransactionLogs;
}

@property(readonly) BOOL ubiquityEnabled;
@property(readonly) PFUbiquityLocation * ubiquityRootLocation;
@property(readonly) NSDictionary * options;

+ (BOOL)ubiquityMetadataTablesPresentInStore:(id)arg1;
+ (id)createDefaultLocalPeerID;
+ (BOOL)doBasicSanityCheckForUbiquityRootURL:(id)arg1 withError:(id*)arg2;
+ (id)generateMachineUUIDString;

- (id)init;
- (void)dealloc;
- (id)options;
- (void)_setUbiquityRootLocation:(id)arg1 storeName:(id)arg2 localPeerID:(id)arg3 andModelVersionHash:(id)arg4;
- (BOOL)doFirstMetadataConsistencyCheckWithError:(id*)arg1;
- (BOOL)doSecondMetadataConsistencyCheckWithStore:(id)arg1 error:(id*)arg2;
- (BOOL)migrateMetadataRoot:(id*)arg1;
- (id)ubiquityRootLocation;
- (id)initWithPersistentStoreCoordinator:(id)arg1 andStoreOptions:(id)arg2 forPersistentStoreOfType:(id)arg3 atURL:(id)arg4;
- (BOOL)validateOptionsWithError:(id*)arg1;
- (BOOL)performPreStoreSetupWithError:(id*)arg1;
- (BOOL)performPostStoreSetupWithStore:(id)arg1 error:(id*)arg2;
- (BOOL)ubiquityEnabled;

@end
