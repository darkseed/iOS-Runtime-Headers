/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@class PCPersistentTimer;



@interface PHMMultiStageGrowthAlgorithm : PHMGrowthAlgorithm 
{
    NSInteger _growthStage;
    NSInteger _highWatermark;
    NSInteger _currentInterval;
    NSInteger _initialGrowthStageHighWatermark;
    NSInteger _initialGrowthStageLastAttempt;
    BOOL _leaveSteadyState;
    PCPersistentTimer *_steadyStateRecalibrationTimer;
}


- (id)initWithHBInterval:(NSInteger)arg1;
- (void)dealloc;
- (void)_setCurrentInterval:(NSInteger)arg1;
- (NSInteger)currentInterval;
- (BOOL)isCalibrating;
- (void)_handleInitialGrowthAction:(NSInteger)arg1;
- (void)_handleBackoffAction:(NSInteger)arg1;
- (void)_leaveSteadyState:(id)arg1;
- (void)_handleSteadyStateAction:(NSInteger)arg1;
- (void)_handleRefinedGrowthAction:(NSInteger)arg1;
- (id)_stringForAction:(NSInteger)arg1;
- (id)_stringForStage:(NSInteger)arg1;
- (void)_logState;
- (NSInteger)calculateWithAction:(NSInteger)arg1;
- (NSInteger)_steadyStateTimeout;
- (void)_resetSteadyStateTimer;
- (void)_resetAlgorithm;

@end