/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPairedSync : NSObject <PSYSyncCoordinatorDelegate> {
    PSYSyncCoordinator * _coordinator;
    unsigned int  _currentOperationCount;
    <HMDPairedSyncDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) PSYSyncCoordinator *coordinator;
@property (nonatomic) unsigned int currentOperationCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDPairedSyncDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_callStartSync;
- (id)coordinator;
- (unsigned int)currentOperationCount;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)needToSync;
- (id)restrictionAsString:(unsigned int)arg1;
- (void)setCurrentOperationCount:(unsigned int)arg1;
- (void)syncComplete;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (void)syncPartiallyComplete;
- (id)workQueue;

@end
