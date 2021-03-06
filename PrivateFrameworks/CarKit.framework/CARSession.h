/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CARSession : NSObject {
    NSData * _MFiCertSerial;
    CARSessionConfiguration * _configuration;
    struct OpaqueFigEndpoint { } * _endpoint;
    NSObject<OS_dispatch_queue> * _queue;
    <CARSessionDelegate> * _sessionDelegate;
}

@property (nonatomic, copy) NSData *MFiCertSerial;
@property (nonatomic, retain) CARSessionConfiguration *configuration;
@property (nonatomic, readonly, copy) NSNumber *electronicTollCollectionAvailable;
@property (nonatomic, readonly, copy) NSNumber *limitUserInterfaces;
@property (nonatomic, readonly, copy) NSNumber *nightMode;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) <CARSessionDelegate> *sessionDelegate;

+ (int)_siriRequestEventForEndpointAction:(id)arg1;

- (void).cxx_destruct;
- (id)MFiCertSerial;
- (id)MFiCertificateSerialNumber;
- (id)_endpointValueForKey:(struct __CFString { }*)arg1;
- (void)_handleOpenURL:(id)arg1;
- (void)_handleSiriRequestEvent:(int)arg1;
- (void)_performExtendedEndpointAction:(id /* block */)arg1;
- (void)_setEndpointValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (id)configuration;
- (void)dealloc;
- (id)description;
- (id)electronicTollCollectionAvailable;
- (struct OpaqueFigEndpoint { }*)endpoint;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1;
- (id)limitUserInterfaces;
- (id)nightMode;
- (BOOL)ownsScreen;
- (BOOL)ownsTurnByTurnNavigation;
- (id)queue;
- (BOOL)recognizingSpeech;
- (void)requestCarUI;
- (void)requestCarUIForURL:(id)arg1;
- (id)requestTurnByTurnNavigationOwnership;
- (id)sessionDelegate;
- (void)setConfiguration:(id)arg1;
- (void)setMFiCertSerial:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSessionDelegate:(id)arg1;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (void)takeScreenForConnection;

@end
