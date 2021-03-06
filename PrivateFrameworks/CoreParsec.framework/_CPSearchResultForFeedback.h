/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPSearchResultForFeedback : PBCodable <NSCopying> {
    _CPActionItemForFeedback * _action;
    NSString * _applicationBundleIdentifier;
    NSString * _completedQuery;
    NSString * _correctedQuery;
    NSString * _fbr;
    struct { 
        unsigned int queryId : 1; 
        unsigned int rankingScore : 1; 
        unsigned int topHit : 1; 
        unsigned int type : 1; 
        unsigned int isLocalApplicationResult : 1; 
        unsigned int isStaticCorrection : 1; 
        unsigned int publiclyIndexable : 1; 
    }  _has;
    NSString * _identifier;
    NSString * _intendedQuery;
    BOOL  _isLocalApplicationResult;
    BOOL  _isStaticCorrection;
    NSMutableArray * _localFeatures;
    BOOL  _publiclyIndexable;
    _CPPunchoutForFeedback * _punchout;
    unsigned long long  _queryId;
    double  _rankingScore;
    NSString * _resultBundleId;
    NSString * _resultType;
    NSString * _sectionBundleIdentifier;
    NSString * _srf;
    int  _topHit;
    int  _type;
}

@property (nonatomic, retain) _CPActionItemForFeedback *action;
@property (nonatomic, retain) NSString *applicationBundleIdentifier;
@property (nonatomic, retain) NSString *completedQuery;
@property (nonatomic, retain) NSString *correctedQuery;
@property (nonatomic, retain) NSString *fbr;
@property (nonatomic, readonly) BOOL hasAction;
@property (nonatomic, readonly) BOOL hasApplicationBundleIdentifier;
@property (nonatomic, readonly) BOOL hasCompletedQuery;
@property (nonatomic, readonly) BOOL hasCorrectedQuery;
@property (nonatomic, readonly) BOOL hasFbr;
@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic, readonly) BOOL hasIntendedQuery;
@property (nonatomic) BOOL hasIsLocalApplicationResult;
@property (nonatomic) BOOL hasIsStaticCorrection;
@property (nonatomic) BOOL hasPubliclyIndexable;
@property (nonatomic, readonly) BOOL hasPunchout;
@property (nonatomic) BOOL hasQueryId;
@property (nonatomic) BOOL hasRankingScore;
@property (nonatomic, readonly) BOOL hasResultBundleId;
@property (nonatomic, readonly) BOOL hasResultType;
@property (nonatomic, readonly) BOOL hasSectionBundleIdentifier;
@property (nonatomic, readonly) BOOL hasSrf;
@property (nonatomic) BOOL hasTopHit;
@property (nonatomic) BOOL hasType;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *intendedQuery;
@property (nonatomic) BOOL isLocalApplicationResult;
@property (nonatomic) BOOL isStaticCorrection;
@property (nonatomic, retain) NSMutableArray *localFeatures;
@property (nonatomic) BOOL publiclyIndexable;
@property (nonatomic, retain) _CPPunchoutForFeedback *punchout;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic) double rankingScore;
@property (nonatomic, retain) NSString *resultBundleId;
@property (nonatomic, retain) NSString *resultType;
@property (nonatomic, retain) NSString *sectionBundleIdentifier;
@property (nonatomic, retain) NSString *srf;
@property (nonatomic) int topHit;
@property (nonatomic) int type;

+ (Class)localFeaturesType;

- (void).cxx_destruct;
- (int)StringAsTopHit:(id)arg1;
- (int)StringAsType:(id)arg1;
- (id)action;
- (void)addLocalFeatures:(id)arg1;
- (id)applicationBundleIdentifier;
- (void)clearLocalFeatures;
- (id)completedQuery;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedQuery;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fbr;
- (BOOL)hasAction;
- (BOOL)hasApplicationBundleIdentifier;
- (BOOL)hasCompletedQuery;
- (BOOL)hasCorrectedQuery;
- (BOOL)hasFbr;
- (BOOL)hasIdentifier;
- (BOOL)hasIntendedQuery;
- (BOOL)hasIsLocalApplicationResult;
- (BOOL)hasIsStaticCorrection;
- (BOOL)hasPubliclyIndexable;
- (BOOL)hasPunchout;
- (BOOL)hasQueryId;
- (BOOL)hasRankingScore;
- (BOOL)hasResultBundleId;
- (BOOL)hasResultType;
- (BOOL)hasSectionBundleIdentifier;
- (BOOL)hasSrf;
- (BOOL)hasTopHit;
- (BOOL)hasType;
- (unsigned int)hash;
- (id)identifier;
- (id)intendedQuery;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isLocalApplicationResult;
- (BOOL)isStaticCorrection;
- (id)localFeatures;
- (id)localFeaturesAtIndex:(unsigned int)arg1;
- (unsigned int)localFeaturesCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)publiclyIndexable;
- (id)punchout;
- (unsigned long long)queryId;
- (double)rankingScore;
- (BOOL)readFrom:(id)arg1;
- (id)resultBundleId;
- (id)resultType;
- (id)sectionBundleIdentifier;
- (void)setAction:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setCompletedQuery:(id)arg1;
- (void)setCorrectedQuery:(id)arg1;
- (void)setFbr:(id)arg1;
- (void)setHasIsLocalApplicationResult:(BOOL)arg1;
- (void)setHasIsStaticCorrection:(BOOL)arg1;
- (void)setHasPubliclyIndexable:(BOOL)arg1;
- (void)setHasQueryId:(BOOL)arg1;
- (void)setHasRankingScore:(BOOL)arg1;
- (void)setHasTopHit:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIntendedQuery:(id)arg1;
- (void)setIsLocalApplicationResult:(BOOL)arg1;
- (void)setIsStaticCorrection:(BOOL)arg1;
- (void)setLocalFeatures:(id)arg1;
- (void)setPubliclyIndexable:(BOOL)arg1;
- (void)setPunchout:(id)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setRankingScore:(double)arg1;
- (void)setResultBundleId:(id)arg1;
- (void)setResultType:(id)arg1;
- (void)setSectionBundleIdentifier:(id)arg1;
- (void)setSrf:(id)arg1;
- (void)setTopHit:(int)arg1;
- (void)setType:(int)arg1;
- (id)srf;
- (int)topHit;
- (id)topHitAsString:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
