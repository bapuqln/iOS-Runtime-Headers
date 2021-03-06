/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataManager : NSObject <HDDiagnosticObject, HDHealthDataManager> {
    BBDataProviderConnection * _dataProviderConnection;
    NSNumber * _lastAnchor;
    SOSContactsManager * _legacySOSContactsManager;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    NSMutableDictionary * _observersByDataType;
    unsigned int  _openTransactions;
    NSMutableDictionary * _pendingObjectsBySampleType;
    NSMutableDictionary * _pendingObjectsBySource;
    NSMutableSet * _pendingSources;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned int  _sourceObserverCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) HDProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callObservers:(id)arg1 forType:(id)arg2 source:(id)arg3 withAnchor:(id)arg4;
- (void)_callObservers:(id)arg1 withObjects:(id)arg2 type:(id)arg3 anchor:(id)arg4;
- (void)_callObserversIfPossible;
- (BOOL)_deleteObjectsWithTypes:(id)arg1 sourceIdentifier:(id)arg2 recursiveDeleteAuthorizationBlock:(id /* block */)arg3 error:(id*)arg4;
- (BOOL)_insertDataObjects:(id)arg1 intoDatabase:(id)arg2 withProvenance:(id)arg3 creationDate:(double)arg4 skipInsertionFilter:(BOOL)arg5 error:(id*)arg6;
- (id)_medicalIDURL;
- (void)_notificationQueue_notifyObserversSamplesWithTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)_notifyObserversSamplesWithTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)_notifyObserversWithAddedObjectsBySampleType:(id)arg1 objectsBySource:(id)arg2 pendingSources:(id)arg3 lastAnchor:(id)arg4;
- (id)_observersForAllTypes;
- (id)_observersForDataType:(id)arg1;
- (id)_observersForDataType:(id)arg1 sourceBundleIdentifier:(id)arg2;
- (id)_queue_observersAllTypesCreateIfNil:(BOOL)arg1;
- (id)_queue_observersForDataType:(id)arg1 createIfNil:(BOOL)arg2;
- (id)_queue_observersForDataType:(id)arg1 sourceBundleIdentifier:(id)arg2 createIfNil:(BOOL)arg3;
- (id)_queue_observersForKey:(id)arg1 createIfNil:(BOOL)arg2;
- (void)_shouldNotifyForDeletedSamplesOfTypes:(id)arg1 anchor:(id)arg2;
- (id)_unarchiveMedicalIDDataWithRawData:(id)arg1;
- (void)_updateShowMedicalIdOnWatch:(BOOL)arg1;
- (void)addObserver:(id)arg1 forDataType:(id)arg2;
- (void)addObserver:(id)arg1 forDataType:(id)arg2 sourceBundleIdentifier:(id)arg3;
- (void)addObserverForAllTypes:(id)arg1;
- (void)badgeHealthAppForEmergencyContactConsolidationWithCompletion:(id /* block */)arg1;
- (void)closeObserverTransaction;
- (BOOL)containsDataObject:(id)arg1;
- (void)dealloc;
- (BOOL)deleteDataObjects:(id)arg1 restrictedSourceEntity:(id)arg2 failIfNotFound:(BOOL)arg3 recursiveDeleteAuthorizationBlock:(id /* block */)arg4 error:(id*)arg5;
- (BOOL)deleteDataObjectsOfClass:(Class)arg1 predicate:(id)arg2 limit:(unsigned int)arg3 deletedSampleCount:(unsigned int*)arg4 notifyObservers:(BOOL)arg5 generateDeletedObjects:(BOOL)arg6 recursiveDeleteAuthorizationBlock:(id /* block */)arg7 error:(id*)arg8;
- (BOOL)deleteMedicalIDData:(id*)arg1;
- (BOOL)deleteSamplesWithSourceIdentifier:(id)arg1 error:(id*)arg2;
- (BOOL)deleteSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 recursiveDeleteAuthorizationBlock:(id /* block */)arg3 error:(id*)arg4;
- (BOOL)deleteSamplesWithTypes:(id)arg1 sourceID:(id)arg2 recursiveDeleteAuthorizationBlock:(id /* block */)arg3 error:(id*)arg4;
- (BOOL)deleteSamplesWithUUIDs:(id)arg1 generateDeletedObjects:(BOOL)arg2 database:(id)arg3 error:(id*)arg4;
- (BOOL)deleteSamplesWithUUIDs:(id)arg1 recursiveDeleteAuthorizationBlock:(id /* block */)arg2 error:(id*)arg3;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;
- (BOOL)insertDataObjects:(id)arg1 sourceEntity:(id)arg2 deviceEntity:(id)arg3 sourceVersion:(id)arg4 creationDate:(double)arg5 error:(id*)arg6;
- (BOOL)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 error:(id*)arg4;
- (BOOL)insertDataObjects:(id)arg1 withProvenance:(id)arg2 creationDate:(double)arg3 skipInsertionFilter:(BOOL)arg4 error:(id*)arg5;
- (id)medicalIDDataCreateIfNecessary:(BOOL)arg1;
- (id)medicalIDEmergencyContacts;
- (void)openObserverTransaction;
- (id)profile;
- (void)removeObserver:(id)arg1 forDataType:(id)arg2;
- (void)removeObserver:(id)arg1 forDataType:(id)arg2 sourceBundleIdentifier:(id)arg3;
- (void)removeObserverForAllTypes:(id)arg1;
- (void)setBackgroundObserverFrequency:(id)arg1 forDataType:(id)arg2 frequency:(int)arg3 completion:(id /* block */)arg4;
- (void)setProfile:(id)arg1;
- (void)shouldNotifyForDataObjects:(id)arg1 provenance:(id)arg2 database:(id)arg3 anchor:(id)arg4;
- (void)shouldNotifyForDeletedSamplesOfTypes:(id)arg1 database:(id)arg2 anchor:(id)arg3;
- (BOOL)updateMedicalIDData:(id)arg1 error:(id*)arg2;

@end
