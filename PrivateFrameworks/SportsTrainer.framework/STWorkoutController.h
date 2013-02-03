/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
 */

@interface STWorkoutController : NSObject {
    NSInteger _calibrationType;
    NSInteger _customWorkoutCalories;
    float _customWorkoutDistance;
    float _customWorkoutDuration;
    NSInteger _distanceUnits;
    double _elapsedWorkoutTime;
    BOOL _skipNextEmpedSearch;
    NSInteger _workoutPreset;
    NSInteger _workoutState;
    NSInteger _workoutType;
}

@property(readonly) NSString *empedSerialNumber;
@property NSInteger calibrationType;
@property(readonly) NSInteger distanceUnits;
@property(readonly) BOOL isCalibratedForRun;
@property(readonly) BOOL isCalibratedForWalk;
@property(readonly) BOOL isExternalReceiverAttached;
@property(readonly) BOOL isExternalReceiverRequired;
@property(readonly) BOOL isLinkedToEmped;
@property(readonly) BOOL isLinkedToRemote;
@property BOOL skipNextEmpedSearch;
@property(readonly) float workoutGoal;
@property NSInteger workoutPreset;
@property NSInteger workoutState;
@property NSInteger workoutType;

+ (id)sharedWorkoutController;

- (void)_avSystemControllerDied:(id)arg1;
- (void)_copyAllWorkoutSummaries;
- (void)_empedLinkingStateChanged:(id)arg1;
- (void)_empedSearchingStateChanged:(id)arg1;
- (void)_externalReceiverDisconnected:(id)arg1;
- (void)_headphoneJackConnectionDidChange:(id)arg1;
- (void)_iapServerDied;
- (void)_iapServerWillExit:(id)arg1;
- (void)_playPowerSongEventFromRemote:(id)arg1;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_postNotificationName:(id)arg1;
- (void)_receiverStateChanged:(id)arg1;
- (void)_registerAVSystemControllerNotifications;
- (void)_remoteLinkingStateChanged:(id)arg1;
- (void)_serverResourcesStateChanged:(id)arg1;
- (void)_sportsInfoArrived:(id)arg1;
- (void)_startWorkoutEventFromRemote:(id)arg1;
- (void)_stopWorkoutEventFromRemote:(id)arg1;
- (void)_togglePauseResumeEventFromRemote:(id)arg1;
- (void)_unregisterAVSystemControllerNotifications;
- (NSInteger)_workoutDistanceUnitForIAPDistanceUnit:(NSInteger)arg1;
- (NSInteger)_workoutStateForTrainerState:(NSInteger)arg1;
- (NSInteger)_workoutTypeForIAPWorkoutType:(NSInteger)arg1;
- (void)activateServerResources;
- (BOOL)areServerResourcesActivated;
- (id)bestWorkoutTimes;
- (BOOL)calibrateFromCurrentWorkoutWithAdjustedDistance:(float)arg1;
- (NSInteger)calibrationType;
- (void)cancelWorkout;
- (void)deactivateServerResources;
- (void)dealloc;
- (NSInteger)distanceUnits;
- (BOOL)doStandardCalibrationFromCurrentWorkout;
- (id)elapsedWorkoutTimeFormattedString;
- (id)empedSerialNumber;
- (BOOL)hasPowerSong;
- (id)herculesSynchedWorkoutFilePath;
- (id)init;
- (BOOL)isCalibratedForRun;
- (BOOL)isCalibratedForWalk;
- (BOOL)isExternalReceiverAttached;
- (BOOL)isExternalReceiverRequired;
- (BOOL)isLinkedToEmped;
- (BOOL)isLinkedToRemote;
- (id)latestWorkoutProgress;
- (id)latestWorkoutSummary;
- (id)mainButtonStringForCurrentWorkout;
- (void)pauseWorkout;
- (void)playOnDemandPrompt;
- (void)playPowerSong;
- (id)powerSongName;
- (id)powerSongPersistentUIDString;
- (NSInteger)presetForWorkoutType:(NSInteger)arg1 parameter:(float)arg2;
- (BOOL)requestAllWorkoutSummaries;
- (void)resetCalibration;
- (void)resetCalibrationForType:(NSInteger)arg1;
- (void)resumeWorkout;
- (void)resync;
- (void)resyncWorkoutStateOnly;
- (void)saveCurrentWorkout;
- (void)setCalibrationType:(NSInteger)arg1;
- (void)setCustomWorkoutCalories:(NSInteger)arg1;
- (void)setCustomWorkoutDistance:(float)arg1;
- (void)setCustomWorkoutDuration:(float)arg1;
- (void)setSkipNextEmpedSearch:(BOOL)arg1;
- (void)setWorkoutPreset:(NSInteger)arg1;
- (void)setWorkoutState:(NSInteger)arg1;
- (void)setWorkoutType:(NSInteger)arg1;
- (id)shortDescriptionForWorkoutType:(NSInteger)arg1 preset:(NSInteger)arg2;
- (BOOL)skipNextEmpedSearch;
- (void)startEmpedLinking;
- (void)startRemoteLinking;
- (void)startSearchingForEmped;
- (void)startWorkout;
- (void)stopEmpedLinking;
- (void)stopSearchingForEmped;
- (void)stopWorkout;
- (id)stringQuantificationForWorkoutType:(NSInteger)arg1 preset:(NSInteger)arg2;
- (void)togglePauseResumeWorkoutFromHeadset;
- (void)unlinkRemote;
- (float)workoutGoal;
- (NSInteger)workoutPreset;
- (NSInteger)workoutState;
- (id)workoutTotals;
- (NSInteger)workoutType;

@end