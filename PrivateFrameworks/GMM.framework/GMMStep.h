/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSMutableArray, NSString, GMMDateTime;



@interface GMMStep : PBCodable 
{
    NSInteger _stepType;
    BOOL _hasStepType;
    NSString *_instructions;
    NSInteger _distanceMeters;
    BOOL _hasDistanceMeters;
    NSInteger _durationSeconds;
    BOOL _hasDurationSeconds;
    NSInteger _departurePointIndex;
    BOOL _hasDeparturePointIndex;
    NSString *_departureAddress;
    NSString *_arrivalAddress;
    GMMDateTime *_departureDateTime;
    GMMDateTime *_arrivalDateTime;
    NSInteger _departureIntervalSeconds;
    BOOL _hasDepartureIntervalSeconds;
    NSString *_direction;
    long long _iconId;
    BOOL _hasIconId;
    NSString *_iconSummaryText;
    BOOL _showInInstructions;
    BOOL _hasShowInInstructions;
    NSInteger _transitAgencyIndex;
    BOOL _hasTransitAgencyIndex;
    NSString *_streetViewPanoId;
    NSMutableArray *_alertIndexs;
    NSMutableArray *_notices;
    NSInteger _maneuverType;
    BOOL _hasManeuverType;
    NSInteger _maneuverTurnSide;
    BOOL _hasManeuverTurnSide;
    NSInteger _maneuverTurnNumber;
    BOOL _hasManeuverTurnNumber;
    NSMutableArray *_stepCues;
    NSString *_deprecatedDistance;
    NSString *_deprecatedDuration;
}

@property(readonly) BOOL hasInstructions;
@property(readonly) BOOL hasDepartureAddress;
@property(readonly) BOOL hasArrivalAddress;
@property(readonly) BOOL hasDepartureDateTime;
@property(readonly) BOOL hasArrivalDateTime;
@property(readonly) BOOL hasDirection;
@property(readonly) BOOL hasIconSummaryText;
@property(readonly) BOOL hasStreetViewPanoId;
@property(readonly) NSInteger alertIndexsCount;
@property(readonly) NSInteger noticesCount;
@property(readonly) NSInteger stepCuesCount;
@property(readonly) BOOL hasDeprecatedDistance;
@property(readonly) BOOL hasDeprecatedDuration;
@property(retain) NSString *deprecatedDuration;
@property(retain) NSString *deprecatedDistance;
@property(retain) NSMutableArray *stepCues;
@property(readonly) BOOL hasManeuverTurnNumber;
@property NSInteger maneuverTurnNumber;
@property(readonly) BOOL hasManeuverTurnSide;
@property NSInteger maneuverTurnSide;
@property(readonly) BOOL hasManeuverType;
@property NSInteger maneuverType;
@property(retain) NSMutableArray *notices;
@property(retain) NSMutableArray *alertIndexs;
@property(retain) NSString *streetViewPanoId;
@property(readonly) BOOL hasTransitAgencyIndex;
@property NSInteger transitAgencyIndex;
@property(readonly) BOOL hasShowInInstructions;
@property BOOL showInInstructions;
@property(retain) NSString *iconSummaryText;
@property(readonly) BOOL hasIconId;
@property long long iconId;
@property(retain) NSString *direction;
@property(readonly) BOOL hasDepartureIntervalSeconds;
@property NSInteger departureIntervalSeconds;
@property(retain) GMMDateTime *arrivalDateTime;
@property(retain) GMMDateTime *departureDateTime;
@property(retain) NSString *arrivalAddress;
@property(retain) NSString *departureAddress;
@property(readonly) BOOL hasDeparturePointIndex;
@property NSInteger departurePointIndex;
@property(readonly) BOOL hasDurationSeconds;
@property NSInteger durationSeconds;
@property(readonly) BOOL hasDistanceMeters;
@property NSInteger distanceMeters;
@property(retain) NSString *instructions;
@property(readonly) BOOL hasStepType;
@property NSInteger stepType;


- (void)writeTo:(id)arg1;
- (BOOL)showInInstructions;
- (NSInteger)departurePointIndex;
- (BOOL)hasDistanceMeters;
- (BOOL)hasDurationSeconds;
- (NSInteger)stepType;
- (id)arrivalDateTime;
- (NSInteger)distanceMeters;
- (id)arrivalAddress;
- (NSInteger)durationSeconds;
- (id)notices;
- (NSInteger)transitAgencyIndex;
- (NSInteger)departureIntervalSeconds;
- (id)departureAddress;
- (id)instructions;
- (id)departureDateTime;
- (long long)iconId;
- (BOOL)hasTransitAgencyIndex;
- (id)streetViewPanoId;
- (void)setDirection:(id)arg1;
- (id)direction;
- (id)dictionaryRepresentation;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (BOOL)hasDirection;
- (BOOL)hasIconId;
- (BOOL)hasManeuverTurnSide;
- (NSInteger)noticesCount;
- (BOOL)hasArrivalAddress;
- (void)setStepType:(NSInteger)arg1;
- (BOOL)hasInstructions;
- (void)setDeparturePointIndex:(NSInteger)arg1;
- (void)setDepartureIntervalSeconds:(NSInteger)arg1;
- (void)setIconId:(long long)arg1;
- (BOOL)hasIconSummaryText;
- (void)setShowInInstructions:(BOOL)arg1;
- (void)setTransitAgencyIndex:(NSInteger)arg1;
- (NSInteger)alertIndexsCount;
- (void)setAlertIndex:(NSInteger)arg1 atIndex:(NSUInteger)arg2;
- (NSInteger)alertIndexAtIndex:(NSUInteger)arg1;
- (void)addAlertIndex:(NSInteger)arg1;
- (void)setNotice:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)noticeAtIndex:(NSUInteger)arg1;
- (void)addNotice:(id)arg1;
- (void)setManeuverType:(NSInteger)arg1;
- (void)setManeuverTurnSide:(NSInteger)arg1;
- (void)setManeuverTurnNumber:(NSInteger)arg1;
- (NSInteger)stepCuesCount;
- (void)setStepCue:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)stepCueAtIndex:(NSUInteger)arg1;
- (void)addStepCue:(id)arg1;
- (void)setDeprecatedDuration:(id)arg1;
- (void)setDeprecatedDistance:(id)arg1;
- (id)stepCues;
- (void)setStepCues:(id)arg1;
- (BOOL)hasManeuverTurnNumber;
- (BOOL)hasManeuverType;
- (void)setNotices:(id)arg1;
- (id)alertIndexs;
- (void)setAlertIndexs:(id)arg1;
- (BOOL)hasShowInInstructions;
- (void)setIconSummaryText:(id)arg1;
- (BOOL)hasDepartureIntervalSeconds;
- (void)setDepartureDateTime:(id)arg1;
- (void)setArrivalAddress:(id)arg1;
- (void)setDepartureAddress:(id)arg1;
- (NSInteger)maneuverTurnNumber;
- (NSInteger)maneuverTurnSide;
- (NSInteger)maneuverType;
- (id)iconSummaryText;
- (BOOL)hasDeprecatedDuration;
- (BOOL)hasDeprecatedDistance;
- (BOOL)hasArrivalDateTime;
- (void)setDistanceMeters:(NSInteger)arg1;
- (void)setDurationSeconds:(NSInteger)arg1;
- (void)setArrivalDateTime:(id)arg1;
- (id)deprecatedDuration;
- (id)deprecatedDistance;
- (BOOL)hasStreetViewPanoId;
- (void)setStreetViewPanoId:(id)arg1;
- (BOOL)hasDepartureDateTime;
- (BOOL)hasStepType;
- (BOOL)hasDepartureAddress;
- (BOOL)hasDeparturePointIndex;
- (void)setInstructions:(id)arg1;

@end