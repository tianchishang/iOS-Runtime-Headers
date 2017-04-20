/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPFlowDivert : NEAppProxyProviderContainer {
    NSPConfiguration * _configuration;
    NEFlowDivertFileHandle * _flowDivertControlHandle;
    NEFlowDivertFileHandle * _flowDivertDataHandle;
    NEPolicySession * _policySession;
    BOOL  _shouldResetPolicies;
    BOOL  _started;
}

@property (retain) NSPConfiguration *configuration;
@property (retain) NEFlowDivertFileHandle *flowDivertControlHandle;
@property (retain) NEFlowDivertFileHandle *flowDivertDataHandle;
@property (retain) NEPolicySession *policySession;
@property BOOL shouldResetPolicies;
@property BOOL started;

- (void).cxx_destruct;
- (void)addPoliciesForAgent:(id)arg1 conditions:(id)arg2;
- (void)addPoliciesForDivertDNSOnly:(id)arg1 domainConditions:(id)arg2 divertResult:(id)arg3;
- (void)addPolicy:(id)arg1;
- (id)configuration;
- (id)createFlowDivertSocketHandles;
- (id)createPolicySession;
- (void)destroyFlowDivertSocketHandles;
- (void)destroyPolicySession;
- (void)didFailWithError:(id)arg1;
- (void)didStartWithError:(id)arg1;
- (id)flowDivertControlHandle;
- (id)flowDivertDataHandle;
- (id)getAgentResults:(id)arg1;
- (id)getEffectiveAppRules:(id)arg1;
- (id)getExecutableConditions:(id)arg1;
- (id)initWithDelegate:(id)arg1 providerClass:(Class)arg2 configuration:(id)arg3;
- (id)policySession;
- (BOOL)resetPolicies:(BOOL)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setFlowDivertControlHandle:(id)arg1;
- (void)setFlowDivertDataHandle:(id)arg1;
- (void)setPolicySession:(id)arg1;
- (void)setShouldResetPolicies:(BOOL)arg1;
- (void)setStarted:(BOOL)arg1;
- (BOOL)shouldInstallFlowDivert:(id)arg1;
- (BOOL)shouldResetPolicies;
- (void)startWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (BOOL)started;
- (void)stop;
- (void)teardown;

@end