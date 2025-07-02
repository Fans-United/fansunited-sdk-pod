#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class FUSDKAPIClientService, FUSDKAPIClientServiceCompanion, FUSDKAchievementsStats, FUSDKAchievementsStatsCompanion, FUSDKActionValue, FUSDKActionValueCompanion, FUSDKActionValueItem, FUSDKActionValueItemCompanion, FUSDKActionsEnum, FUSDKActionsEnumCompanion, FUSDKActivityAction, FUSDKActivityActionTypeDeserializer, FUSDKActivityContext, FUSDKActivityContextCompanion, FUSDKActivityFilters, FUSDKActivityResponseBody, FUSDKActivityResponseBodyCompanion, FUSDKAssetsFlag, FUSDKAssetsFlagCompanion, FUSDKAssetsHeadshot, FUSDKAssetsHeadshotCompanion, FUSDKAssetsModel, FUSDKAssetsModelCompanion, FUSDKAuthPlugin, FUSDKAuthPluginConfiguration, FUSDKAuthPluginPlugin, FUSDKAuthRequirementType, FUSDKAuthRequirementTypeCompanion, FUSDKAutomaticModeration, FUSDKAutomaticModerationCompanion, FUSDKBadgeAsset, FUSDKBadgeAssetCompanion, FUSDKBadgeConfigData, FUSDKBadgeConfigDataCompanion, FUSDKBadgeConfigRequirement, FUSDKBadgeConfigRequirementCompanion, FUSDKBadgeModel, FUSDKBadgeModelCompanion, FUSDKBadgesModel, FUSDKBadgesModelCompanion, FUSDKBadgesValue, FUSDKBadgesValueCompanion, FUSDKBothTeamsScoreCompanion, FUSDKBrandingColorsModel, FUSDKBrandingColorsModelCompanion, FUSDKBrandingImagesModel, FUSDKBrandingImagesModelCompanion, FUSDKBrandingModel, FUSDKBrandingModelCompanion, FUSDKBrandingUrlsModel, FUSDKBrandingUrlsModelCompanion, FUSDKBreakdown, FUSDKBreakdownCompanion, FUSDKBreakdownResult, FUSDKBreakdownResultCompanion, FUSDKBuildType, FUSDKByModel<T>, FUSDKByModelCompanion, FUSDKCalculatedOneXTwoFromScores, FUSDKCampaign, FUSDKCampaignCompanion, FUSDKClassicQuizzesStats, FUSDKClassicQuizzesStatsCompanion, FUSDKClientBadges, FUSDKClientBadgesCompanion, FUSDKClientFeatures, FUSDKClientFeaturesCompanion, FUSDKCompetitionBasicModel, FUSDKCompetitionBasicModelCompanion, FUSDKCompetitionFilters, FUSDKCompetitionFiltersCompanion, FUSDKCompetitionFullModel, FUSDKCompetitionFullModelCompanion, FUSDKCompetitionType, FUSDKCondition, FUSDKConditionCompanion, FUSDKConditionType, FUSDKConditionTypeCompanion, FUSDKContent, FUSDKContentCompanion, FUSDKContestModel, FUSDKContestModelCompanion, FUSDKContestModelGameModel, FUSDKContestModelGameModelCompanion, FUSDKContestModelTemplateModel, FUSDKContestModelTemplateModelCompanion, FUSDKContestType, FUSDKContestTypeCompanion, FUSDKContestWinners, FUSDKContestWinnersCompanion, FUSDKCornersMap, FUSDKCornersMapCompanion, FUSDKCornersMatchCompanion, FUSDKCorrectScoreAdvCompanion, FUSDKCorrectScoreCompanion, FUSDKCorrectScoreHTCompanion, FUSDKCreateActivityRequestBody, FUSDKCreateActivityRequestBodyCompanion, FUSDKCreatePost, FUSDKCreatePostCompanion, FUSDKCreatePredictionRequest, FUSDKCreatePredictionRequestCompanion, FUSDKCursorMeta, FUSDKCursorMetaCompanion, FUSDKCursorPagination, FUSDKCursorPaginationCompanion, FUSDKCursorResponse<R>, FUSDKCursorResponseCompanion, FUSDKDetailedProfileModel, FUSDKDetailedProfileModelCompanion, FUSDKDictionary, FUSDKDictionaryCompanion, FUSDKDisableCachePlugin, FUSDKDisableCachePluginConfig, FUSDKDisableCachePluginPlugin, FUSDKDiscussion, FUSDKDiscussionComment, FUSDKDiscussionCommentCompanion, FUSDKDiscussionCompanion, FUSDKDiscussionConfig, FUSDKDiscussionConfigCompanion, FUSDKDiscussionContext, FUSDKDiscussionContextCompanion, FUSDKDiscussionResponse<R>, FUSDKDiscussionResponseCompanion, FUSDKDiscussionStats, FUSDKDiscussionStatsCompanion, FUSDKDiscussionStatus, FUSDKDiscussionType, FUSDKDiscussionsBadgeRequirements, FUSDKDiscussionsBadgeRequirementsCompanion, FUSDKDiscussionsBadgesValue, FUSDKDiscussionsBadgesValueCompanion, FUSDKDiscussionsFilters, FUSDKDiscussionsFiltersCompanion, FUSDKDiscussionsSortTypes, FUSDKDoubleChanceCompanion, FUSDKDoubleChanceData, FUSDKDoubleChanceDataCompanion, FUSDKDoubleChanceMap, FUSDKDoubleChanceMapCompanion, FUSDKEditVersion, FUSDKEditVersionCompanion, FUSDKEitherOrStats, FUSDKEitherOrStatsCompanion, FUSDKEntitiesFollowsFilters, FUSDKEntitiesFollowsFiltersCompanion, FUSDKErrorCodes, FUSDKErrorMessages, FUSDKErrorStatuses, FUSDKFUSDKConfig, FUSDKFansUnitedError, FUSDKFansUnitedErrorCompanion, FUSDKFansUnitedErrorResponse, FUSDKFansUnitedErrorResponseCompanion, FUSDKFansUnitedException, FUSDKFansUnitedExceptionCompanion, FUSDKFansUnitedJsonConfig, FUSDKFansUnitedSDK, FUSDKFansUnitedSDKCompanion, FUSDKFilterCase, FUSDKFilterCaseCompanion, FUSDKFixture, FUSDKFixtureCompanion, FUSDKFixtureListSerializer, FUSDKFixturesGameModel, FUSDKFixturesGameModelCompanion, FUSDKFixturesMatchQuizModel, FUSDKFixturesMatchQuizModelCompanion, FUSDKFixturesTopXModel, FUSDKFixturesTopXModelCompanion, FUSDKFollowStatus, FUSDKFollowStatusCompanion, FUSDKFollowersModel, FUSDKFollowersModelCompanion, FUSDKFollowingModel, FUSDKFollowingModelCompanion, FUSDKFollows, FUSDKFollowsBreakdown, FUSDKFollowsBreakdownCompanion, FUSDKFollowsCompanion, FUSDKFootballBadgeRequirements, FUSDKFootballBadgeRequirementsCompanion, FUSDKFootballBadgesValue, FUSDKFootballBadgesValueCompanion, FUSDKFootballCountryModel, FUSDKFootballCountryModelCompanion, FUSDKFullInterest, FUSDKFullInterestCompanion, FUSDKFullTime1X2Companion, FUSDKFullnessProfile, FUSDKFullnessProfileCompanion, FUSDKGameBadgeRequirements, FUSDKGameBadgeRequirementsCompanion, FUSDKGameBadgesValue, FUSDKGameBadgesValueCompanion, FUSDKGameBaseModel, FUSDKGameBaseModelCompanion, FUSDKGameByIdModel, FUSDKGameByIdModelCompanion, FUSDKGameFilters, FUSDKGameListModel, FUSDKGameListModelCompanion, FUSDKGameMarketsResults, FUSDKGameMarketsResultsCompanion, FUSDKGameMatchOutcome, FUSDKGameMatchOutcomeCompanion, FUSDKGameMatchOutcomeData, FUSDKGameMatchOutcomeDataCompanion, FUSDKGameMatchQuizListModel, FUSDKGameMatchQuizListModelCompanion, FUSDKGamePredictionsStats, FUSDKGamePredictionsStatsCompanion, FUSDKGameResult, FUSDKGameResultCompanion, FUSDKGameResultsModel, FUSDKGameResultsModelCompanion, FUSDKGameStatus, FUSDKGameStatusCompanion, FUSDKGameTopXListModel, FUSDKGameTopXListModelCompanion, FUSDKGameType, FUSDKGameTypeCompanion, FUSDKGamesBadgeRequirements, FUSDKGamesBadgeRequirementsCompanion, FUSDKGamesBadgeType, FUSDKGamesBadgeTypeCompanion, FUSDKGamesBadgesValue, FUSDKGamesBadgesValueCompanion, FUSDKGender, FUSDKGenderCompanion, FUSDKGoldenGoal, FUSDKGoldenGoalCompanion, FUSDKGoldenGoalsType, FUSDKGoldenGoalsTypeCompanion, FUSDKGoogleJsonConfig, FUSDKHTFTMap, FUSDKHTFTMapCompanion, FUSDKHalfTime1X2Companion, FUSDKHalfTimeFullTimeCompanion, FUSDKHalfTimeFullTimeData, FUSDKHalfTimeFullTimeDataCompanion, FUSDKHighestSuccessRateFilters, FUSDKIDSchema, FUSDKIdEntities, FUSDKIdEntitiesCompanion, FUSDKIdsMap, FUSDKIdsMapCompanion, FUSDKImages, FUSDKImagesCompanion, FUSDKInstantSerializer, FUSDKInterest, FUSDKInterestCompanion, FUSDKInterestSource, FUSDKInterestSourceCompanion, FUSDKKotlinAbstractCoroutineContextElement, FUSDKKotlinAbstractCoroutineContextKey<B, E>, FUSDKKotlinArray<T>, FUSDKKotlinByteArray, FUSDKKotlinByteIterator, FUSDKKotlinCancellationException, FUSDKKotlinEnum<E>, FUSDKKotlinEnumCompanion, FUSDKKotlinException, FUSDKKotlinIllegalStateException, FUSDKKotlinKTypeProjection, FUSDKKotlinKTypeProjectionCompanion, FUSDKKotlinKVariance, FUSDKKotlinNothing, FUSDKKotlinRuntimeException, FUSDKKotlinThrowable, FUSDKKotlinUnit, FUSDKKotlinx_coroutines_coreCoroutineDispatcher, FUSDKKotlinx_coroutines_coreCoroutineDispatcherKey, FUSDKKotlinx_datetimeInstant, FUSDKKotlinx_datetimeInstantCompanion, FUSDKKotlinx_io_coreBuffer, FUSDKKotlinx_serialization_coreSerialKind, FUSDKKotlinx_serialization_coreSerializersModule, FUSDKKotlinx_serialization_jsonClassDiscriminatorMode, FUSDKKotlinx_serialization_jsonJson, FUSDKKotlinx_serialization_jsonJsonConfiguration, FUSDKKotlinx_serialization_jsonJsonDefault, FUSDKKotlinx_serialization_jsonJsonElement, FUSDKKotlinx_serialization_jsonJsonElementCompanion, FUSDKKtor_client_coreHttpClient, FUSDKKtor_client_coreHttpClientCall, FUSDKKtor_client_coreHttpClientCallCompanion, FUSDKKtor_client_coreHttpClientConfig<T>, FUSDKKtor_client_coreHttpClientEngineConfig, FUSDKKtor_client_coreHttpReceivePipeline, FUSDKKtor_client_coreHttpReceivePipelinePhases, FUSDKKtor_client_coreHttpRequestBuilder, FUSDKKtor_client_coreHttpRequestBuilderCompanion, FUSDKKtor_client_coreHttpRequestData, FUSDKKtor_client_coreHttpRequestPipeline, FUSDKKtor_client_coreHttpRequestPipelinePhases, FUSDKKtor_client_coreHttpResponse, FUSDKKtor_client_coreHttpResponseContainer, FUSDKKtor_client_coreHttpResponseData, FUSDKKtor_client_coreHttpResponsePipeline, FUSDKKtor_client_coreHttpResponsePipelinePhases, FUSDKKtor_client_coreHttpSendPipeline, FUSDKKtor_client_coreHttpSendPipelinePhases, FUSDKKtor_client_coreProxyConfig, FUSDKKtor_eventsEventDefinition<T>, FUSDKKtor_eventsEvents, FUSDKKtor_httpContentType, FUSDKKtor_httpContentTypeCompanion, FUSDKKtor_httpHeaderValueParam, FUSDKKtor_httpHeaderValueWithParameters, FUSDKKtor_httpHeaderValueWithParametersCompanion, FUSDKKtor_httpHeadersBuilder, FUSDKKtor_httpHttpMethod, FUSDKKtor_httpHttpMethodCompanion, FUSDKKtor_httpHttpProtocolVersion, FUSDKKtor_httpHttpProtocolVersionCompanion, FUSDKKtor_httpHttpStatusCode, FUSDKKtor_httpHttpStatusCodeCompanion, FUSDKKtor_httpOutgoingContent, FUSDKKtor_httpURLBuilder, FUSDKKtor_httpURLBuilderCompanion, FUSDKKtor_httpURLProtocol, FUSDKKtor_httpURLProtocolCompanion, FUSDKKtor_httpUrl, FUSDKKtor_httpUrlCompanion, FUSDKKtor_utilsAttributeKey<T>, FUSDKKtor_utilsGMTDate, FUSDKKtor_utilsGMTDateCompanion, FUSDKKtor_utilsMonth, FUSDKKtor_utilsMonthCompanion, FUSDKKtor_utilsPipeline<TSubject, TContext>, FUSDKKtor_utilsPipelinePhase, FUSDKKtor_utilsStringValuesBuilderImpl, FUSDKKtor_utilsTypeInfo, FUSDKKtor_utilsWeekDay, FUSDKKtor_utilsWeekDayCompanion, FUSDKLeadModel, FUSDKLeadModelCompanion, FUSDKLeadRequestBody, FUSDKLeadRequestBodyCompanion, FUSDKLeaderboardFilters, FUSDKLeaderboardFiltersCompanion, FUSDKLeaderboardHighestSuccessRate, FUSDKLeaderboardHighestSuccessRateCompanion, FUSDKLeaderboardModel, FUSDKLeaderboardModelCompanion, FUSDKLeaderboardTemplate, FUSDKLeaderboardTemplateCompanion, FUSDKLeagueLeaderboardFilters, FUSDKLeagueLeaderboardFiltersCompanion, FUSDKLoyaltyConfig, FUSDKLoyaltyConfigAction, FUSDKLoyaltyConfigActionCompanion, FUSDKLoyaltyConfigCompanion, FUSDKMainCursorFilters, FUSDKMainCursorFiltersCompanion, FUSDKMapAnySerializer, FUSDKMarket, FUSDKMarketCompanion, FUSDKMarketPredictionValueCompanion, FUSDKMarketPredictions, FUSDKMarketPredictionsCompanion, FUSDKMarketSummary, FUSDKMarketSummaryCompanion, FUSDKMarkets, FUSDKMarketsCompanion, FUSDKMarketsResults, FUSDKMarketsResultsCompanion, FUSDKMatchBasicModel, FUSDKMatchBasicModelCompanion, FUSDKMatchContext, FUSDKMatchContextCompanion, FUSDKMatchCorrectScoreMarketResult, FUSDKMatchCorrectScoreMarketResultCompanion, FUSDKMatchFilters, FUSDKMatchFiltersCompanion, FUSDKMatchFullModel, FUSDKMatchFullModelCompanion, FUSDKMatchMarketResultsFactory, FUSDKMatchMarketsResults, FUSDKMatchMarketsResultsCompanion, FUSDKMatchPlayerMarketResult, FUSDKMatchPlayerMarketResultCompanion, FUSDKMatchQuizConfig, FUSDKMatchQuizConfigCompanion, FUSDKMatchQuizRequestModel, FUSDKMatchScore, FUSDKMatchScoreCompanion, FUSDKMatchScoreResult, FUSDKMatchScoreResultCompanion, FUSDKMatchStatResult, FUSDKMatchStatResultCompanion, FUSDKMatchStats, FUSDKMatchStatsCompanion, FUSDKMatchStatus, FUSDKMatchSummaryModel, FUSDKMatchSummaryModelCompanion, FUSDKMatchType, FUSDKMatchTypeCompanion, FUSDKMeta, FUSDKMetaCompanion, FUSDKMiniGamesBadgeRequirements, FUSDKMiniGamesBadgeRequirementsCompanion, FUSDKMiniGamesBadgesValue, FUSDKMiniGamesBadgesValueCompanion, FUSDKModerationType, FUSDKMutableProfile, FUSDKMutableProfileCompanion, FUSDKNoYesModel, FUSDKNoYesModelCompanion, FUSDKNoYesModelValue, FUSDKNoYesModelValueCompanion, FUSDKNormalizedActivityContext, FUSDKNormalizedActivityContextCompanion, FUSDKNormalizedCreateActivityRequestBody, FUSDKNormalizedCreateActivityRequestBodyCompanion, FUSDKNormalizedTag, FUSDKNormalizedTagCompanion, FUSDKOneXTwoData, FUSDKOneXTwoDataCompanion, FUSDKOneXTwoMap, FUSDKOneXTwoMapCompanion, FUSDKOutcome, FUSDKOutcomeCompanion, FUSDKOverCorners_10_5Companion, FUSDKOverCorners_11_5Companion, FUSDKOverCorners_12_5Companion, FUSDKOverCorners_13_5Companion, FUSDKOverCorners_6_5Companion, FUSDKOverCorners_7_5Companion, FUSDKOverCorners_8_5Companion, FUSDKOverCorners_9_5Companion, FUSDKOverGoals_0_5Companion, FUSDKOverGoals_1_5Companion, FUSDKOverGoals_2_5Companion, FUSDKOverGoals_3_5Companion, FUSDKOverGoals_4_5Companion, FUSDKOverGoals_5_5Companion, FUSDKOverGoals_6_5Companion, FUSDKOwnActivityFilters, FUSDKOwnActivityFiltersCompanion, FUSDKPLAYER_MARKETS, FUSDKPagedMeta, FUSDKPagedMetaCompanion, FUSDKPagedResponse<R>, FUSDKPagedResponseCompanion, FUSDKPagination, FUSDKPaginationCompanion, FUSDKPagination_, FUSDKPagination_Companion, FUSDKPartialProfile, FUSDKPartialProfileCompanion, FUSDKPenaltyMatchCompanion, FUSDKPlayerBasicModel, FUSDKPlayerBasicModelCompanion, FUSDKPlayerFilters, FUSDKPlayerFiltersCompanion, FUSDKPlayerFullModel, FUSDKPlayerFullModelCompanion, FUSDKPlayerMap, FUSDKPlayerMapCompanion, FUSDKPlayerMarketSummary, FUSDKPlayerMarketSummaryCompanion, FUSDKPlayerPerformanceCompanion, FUSDKPlayerRedCardCompanion, FUSDKPlayerScoreCompanion, FUSDKPlayerScoreFirstGoalCompanion, FUSDKPlayerScoreFirstGoalCreateCompanion, FUSDKPlayerScoreHattrickCompanion, FUSDKPlayerScoreTwiceCompanion, FUSDKPlayerSquadModel, FUSDKPlayerSquadModelCompanion, FUSDKPlayerTimelineModel, FUSDKPlayerTimelineModelCompanion, FUSDKPlayerYellowCardCompanion, FUSDKPoints, FUSDKPointsActivity, FUSDKPointsActivityCompanion, FUSDKPointsAlternative, FUSDKPointsAlternativeCompanion, FUSDKPointsCompanion, FUSDKPointsGeneral, FUSDKPointsGeneralCompanion, FUSDKPointsPredictor, FUSDKPointsPredictorCompanion, FUSDKPollBadgesValue, FUSDKPollBadgesValueCompanion, FUSDKPosition, FUSDKPostsCountPerDiscussion, FUSDKPostsCountPerDiscussionCompanion, FUSDKPostsFilters, FUSDKPostsFiltersCompanion, FUSDKPostsSortTypes, FUSDKPotmBadgesValue, FUSDKPotmBadgesValueCompanion, FUSDKPredictionFixture, FUSDKPredictionFixtureCompanion, FUSDKPredictionMatchQuizModel, FUSDKPredictionMatchQuizModelCompanion, FUSDKPredictionPartial, FUSDKPredictionPartialCompanion, FUSDKPredictionResponseModel, FUSDKPredictionResponseModelCompanion, FUSDKPredictionResult, FUSDKPredictionResultCompanion, FUSDKPredictionStatus, FUSDKPredictionStatusCompanion, FUSDKPredictionTopXModel, FUSDKPredictionTopXModelCompanion, FUSDKPredictionType, FUSDKPredictionTypeCompanion, FUSDKPredictionsFilters, FUSDKPredictionsFiltersCompanion, FUSDKPredictionsStats, FUSDKPredictionsStatsCompanion, FUSDKPredictionsStatsResponse, FUSDKPredictionsStatsResponseCompanion, FUSDKPredictorBadgeRequirements, FUSDKPredictorBadgeRequirementsCompanion, FUSDKPredictorBadgesValue, FUSDKPredictorBadgesValueCompanion, FUSDKPredictorConfig, FUSDKPredictorConfigCompanion, FUSDKProfileCountry, FUSDKProfileCountryCompanion, FUSDKProfileModel, FUSDKProfileModelCompanion, FUSDKProfileRank, FUSDKProfileRankCompanion, FUSDKProfileStatsModel, FUSDKProfileStatsModelCompanion, FUSDKProfileStatsResponse, FUSDKProfileStatsResponseCompanion, FUSDKRankType, FUSDKRankTypeCompanion, FUSDKReactToPost, FUSDKReactToPostCompanion, FUSDKReaction, FUSDKReactionCompanion, FUSDKReactionType, FUSDKReadOnlyProfile, FUSDKReadOnlyProfileCompanion, FUSDKRedCardMatchCompanion, FUSDKRelatedEntityRelationship, FUSDKRelatedEntityRelationshipCompanion, FUSDKRelatedEntityRelationshipType, FUSDKRelatedEntityRelationshipTypeCompanion, FUSDKRelatedEntityType, FUSDKRelatedEntityTypeCompanion, FUSDKRelatedEntityTypeDeserializer, FUSDKRemapResult, FUSDKReport, FUSDKReportCompanion, FUSDKReportPost, FUSDKReportPostCompanion, FUSDKReportReasonType, FUSDKReportReasonTypeCompanion, FUSDKRequestFollow, FUSDKRequestFollowCompanion, FUSDKResourceType, FUSDKResultModel, FUSDKResultModelCompanion, FUSDKResultStatus, FUSDKResultStatusCompanion, FUSDKRewards, FUSDKRewardsCompanion, FUSDKRewardsV2, FUSDKRewardsV2Companion, FUSDKSDKConfig, FUSDKScoreMap, FUSDKScoreMapCompanion, FUSDKSearchEntity, FUSDKSearchFilters, FUSDKSearchFiltersCompanion, FUSDKSearchResult, FUSDKSearchResultCompanion, FUSDKSimpleResponse<R>, FUSDKSimpleResponseCompanion, FUSDKSinglePredictionsBreakdown, FUSDKSinglePredictionsBreakdownCompanion, FUSDKSinglePredictionsCompetitionBreakdown, FUSDKSinglePredictionsCompetitionBreakdownCompanion, FUSDKSinglePredictionsStats, FUSDKSinglePredictionsStatsCompanion, FUSDKSinglePredictionsStatsResponse, FUSDKSinglePredictionsStatsResponseCompanion, FUSDKSinglePredictionsTeamBreakdown, FUSDKSinglePredictionsTeamBreakdownCompanion, FUSDKSnakeCaseNamingStrategy, FUSDKSortOrder, FUSDKStatus, FUSDKStatusCompanion, FUSDKSubdomainName, FUSDKSuccessRatePercent, FUSDKSuccessRatePercentCompanion, FUSDKSuccessRateScope, FUSDKSuccessRateScopeCompanion, FUSDKSuccessRates, FUSDKSuccessRatesCompanion, FUSDKSummarizedBreakdown, FUSDKSummarizedBreakdownCompanion, FUSDKTag, FUSDKTagCompanion, FUSDKTeamBasicModel, FUSDKTeamBasicModelCompanion, FUSDKTeamFilters, FUSDKTeamFiltersCompanion, FUSDKTeamFormDirection, FUSDKTeamFormDirectionCompanion, FUSDKTeamFormFilters, FUSDKTeamFormFiltersCompanion, FUSDKTeamFormMatch, FUSDKTeamFormMatchCompanion, FUSDKTeamFormModel, FUSDKTeamFormModelCompanion, FUSDKTeamFormResult, FUSDKTeamFormResultCompanion, FUSDKTeamFullModel, FUSDKTeamFullModelCompanion, FUSDKTemplateFilters, FUSDKTemplateFiltersCompanion, FUSDKTemplateStatus, FUSDKTemplateType, FUSDKTemplateTypeCompanion, FUSDKTieBreakersType, FUSDKTieBreakersTypeCompanion, FUSDKTiebreaker, FUSDKTiebreakerCompanion, FUSDKTiebreakerModel, FUSDKTiebreakerModelCompanion, FUSDKTiebreakers, FUSDKTiebreakersCompanion, FUSDKTier, FUSDKTierCompanion, FUSDKTimeTiebreaker, FUSDKTimeTiebreakerCompanion, FUSDKTimelineEvent, FUSDKTimelineEventCompanion, FUSDKTokenHolder, FUSDKTopCorrectScores, FUSDKTopCorrectScoresCompanion, FUSDKTopDiscussionEntityType, FUSDKTopDiscussionsFilters, FUSDKTopDiscussionsFiltersCompanion, FUSDKTopPlayerModel, FUSDKTopPlayerModelCompanion, FUSDKTopXConfig, FUSDKTopXConfigCompanion, FUSDKTopXPredictionRequestModel, FUSDKType, FUSDKUpdatePost, FUSDKUpdatePostCompanion, FUSDKUpdateProfile, FUSDKUpdateProfileCompanion, FUSDKUserActivityAction, FUSDKUserActivityActionCompanion, FUSDKUserActivityFilters, FUSDKUserActivityFiltersCompanion, FUSDKUserDataConfig, FUSDKUserDataConfigCompanion, FUSDKUserListWinners, FUSDKUserListWinnersCompanion, FUSDKUserRankingFilters, FUSDKUserRankingFiltersCompanion, FUSDKValue1X2, FUSDKValue1X2Companion, FUSDKValueDoubleChance, FUSDKValueDoubleChanceCompanion, FUSDKValueHTFT, FUSDKValueHTFTCompanion, FUSDKValueOverCorner, FUSDKValueOverCornerCompanion, FUSDKValueOverGoals, FUSDKValueOverGoalsCompanion, FUSDKVotingBadgeRequirements, FUSDKVotingBadgeRequirementsCompanion, FUSDKVotingBadgesValue, FUSDKVotingBadgesValueCompanion, FUSDKYesNoData, FUSDKYesNoDataCompanion;

@protocol FUSDKBinaryPrediction, FUSDKIActivity, FUSDKIClient, FUSDKIDiscussions, FUSDKIFUSDKTokenProvider, FUSDKIFootball, FUSDKIGame, FUSDKIGameHelpers, FUSDKILoyalty, FUSDKIMatchQuiz, FUSDKIPredictor, FUSDKIPredictorHelpers, FUSDKIProfile, FUSDKIRemappable, FUSDKIRemapper, FUSDKITopX, FUSDKKotlinAnnotation, FUSDKKotlinAutoCloseable, FUSDKKotlinComparable, FUSDKKotlinContinuation, FUSDKKotlinContinuationInterceptor, FUSDKKotlinCoroutineContext, FUSDKKotlinCoroutineContextElement, FUSDKKotlinCoroutineContextKey, FUSDKKotlinFunction, FUSDKKotlinIterator, FUSDKKotlinKAnnotatedElement, FUSDKKotlinKCallable, FUSDKKotlinKClass, FUSDKKotlinKClassifier, FUSDKKotlinKDeclarationContainer, FUSDKKotlinKProperty, FUSDKKotlinKType, FUSDKKotlinMapEntry, FUSDKKotlinSequence, FUSDKKotlinSuspendFunction2, FUSDKKotlinx_coroutines_coreChildHandle, FUSDKKotlinx_coroutines_coreChildJob, FUSDKKotlinx_coroutines_coreCoroutineScope, FUSDKKotlinx_coroutines_coreDisposableHandle, FUSDKKotlinx_coroutines_coreJob, FUSDKKotlinx_coroutines_coreParentJob, FUSDKKotlinx_coroutines_coreRunnable, FUSDKKotlinx_coroutines_coreSelectClause, FUSDKKotlinx_coroutines_coreSelectClause0, FUSDKKotlinx_coroutines_coreSelectInstance, FUSDKKotlinx_io_coreRawSink, FUSDKKotlinx_io_coreRawSource, FUSDKKotlinx_io_coreSink, FUSDKKotlinx_io_coreSource, FUSDKKotlinx_serialization_coreCompositeDecoder, FUSDKKotlinx_serialization_coreCompositeEncoder, FUSDKKotlinx_serialization_coreDecoder, FUSDKKotlinx_serialization_coreDeserializationStrategy, FUSDKKotlinx_serialization_coreEncoder, FUSDKKotlinx_serialization_coreKSerializer, FUSDKKotlinx_serialization_coreSerialDescriptor, FUSDKKotlinx_serialization_coreSerialFormat, FUSDKKotlinx_serialization_coreSerializationStrategy, FUSDKKotlinx_serialization_coreSerializersModuleCollector, FUSDKKotlinx_serialization_coreStringFormat, FUSDKKotlinx_serialization_jsonJsonNamingStrategy, FUSDKKtor_client_coreHttpClientEngine, FUSDKKtor_client_coreHttpClientEngineCapability, FUSDKKtor_client_coreHttpClientEngineFactory, FUSDKKtor_client_coreHttpClientPlugin, FUSDKKtor_client_coreHttpRequest, FUSDKKtor_httpHeaders, FUSDKKtor_httpHttpMessage, FUSDKKtor_httpHttpMessageBuilder, FUSDKKtor_httpParameters, FUSDKKtor_httpParametersBuilder, FUSDKKtor_ioByteReadChannel, FUSDKKtor_ioCloseable, FUSDKKtor_ioJvmSerializable, FUSDKKtor_utilsAttributes, FUSDKKtor_utilsStringValues, FUSDKKtor_utilsStringValuesBuilder, FUSDKMarketPredictionValue, FUSDKPatchDto, FUSDKPlayerPrediction;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface FUSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface FUSDKBase (FUSDKBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface FUSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface FUSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorFUSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface FUSDKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface FUSDKByte : FUSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface FUSDKUByte : FUSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface FUSDKShort : FUSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface FUSDKUShort : FUSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface FUSDKInt : FUSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface FUSDKUInt : FUSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface FUSDKLong : FUSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface FUSDKULong : FUSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface FUSDKFloat : FUSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface FUSDKDouble : FUSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface FUSDKBoolean : FUSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("KotlinComparable")))
@protocol FUSDKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface FUSDKKotlinEnum<E> : FUSDKBase <FUSDKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TopDiscussionEntityType")))
@interface FUSDKTopDiscussionEntityType : FUSDKKotlinEnum<FUSDKTopDiscussionEntityType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKTopDiscussionEntityType *team __attribute__((swift_name("team")));
@property (class, readonly) FUSDKTopDiscussionEntityType *player __attribute__((swift_name("player")));
@property (class, readonly) FUSDKTopDiscussionEntityType *competition __attribute__((swift_name("competition")));
+ (FUSDKKotlinArray<FUSDKTopDiscussionEntityType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKTopDiscussionEntityType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuildType")))
@interface FUSDKBuildType : FUSDKKotlinEnum<FUSDKBuildType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKBuildType *debug __attribute__((swift_name("debug")));
@property (class, readonly) FUSDKBuildType *release_ __attribute__((swift_name("release_")));
+ (FUSDKKotlinArray<FUSDKBuildType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKBuildType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FUSDKConfig")))
@interface FUSDKFUSDKConfig : FUSDKBase
- (instancetype)initWithApiKey:(NSString *)apiKey clientId:(NSString *)clientId lang:(NSString *)lang idSchema:(FUSDKIDSchema *)idSchema environment:(NSString *)environment authProvider:(id<FUSDKIFUSDKTokenProvider>)authProvider __attribute__((swift_name("init(apiKey:clientId:lang:idSchema:environment:authProvider:)"))) __attribute__((objc_designated_initializer));
- (FUSDKFUSDKConfig *)doCopyApiKey:(NSString *)apiKey clientId:(NSString *)clientId lang:(NSString *)lang idSchema:(FUSDKIDSchema *)idSchema environment:(NSString *)environment authProvider:(id<FUSDKIFUSDKTokenProvider>)authProvider __attribute__((swift_name("doCopy(apiKey:clientId:lang:idSchema:environment:authProvider:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) id<FUSDKIFUSDKTokenProvider> authProvider __attribute__((swift_name("authProvider")));
@property (readonly) NSString *clientId __attribute__((swift_name("clientId")));
@property (readonly) NSString *environment __attribute__((swift_name("environment")));
@property (readonly) FUSDKIDSchema *idSchema __attribute__((swift_name("idSchema")));
@property (readonly) NSString *lang __attribute__((swift_name("lang")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FansUnitedSDK")))
@interface FUSDKFansUnitedSDK : FUSDKBase
@property (class, readonly, getter=companion) FUSDKFansUnitedSDKCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)activityWithCompletionHandler:(void (^)(id<FUSDKIActivity> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("activity(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clientWithCompletionHandler:(void (^)(id<FUSDKIClient> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("client(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discussionsWithCompletionHandler:(void (^)(id<FUSDKIDiscussions> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discussions(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)footballWithCompletionHandler:(void (^)(id<FUSDKIFootball> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("football(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)idMappingWithCompletionHandler:(void (^)(id<FUSDKIRemapper> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("idMapping(completionHandler:)")));
- (void)doInitConfig:(FUSDKFUSDKConfig *)config __attribute__((swift_name("doInit(config:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)loyaltyWithCompletionHandler:(void (^)(id<FUSDKILoyalty> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("loyalty(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)matchQuizWithCompletionHandler:(void (^)(id<FUSDKIMatchQuiz> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("matchQuiz(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)predictorWithCompletionHandler:(void (^)(id<FUSDKIPredictor> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("predictor(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)profileWithCompletionHandler:(void (^)(id<FUSDKIProfile> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("profile(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshTokenWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("refreshToken(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)topXWithCompletionHandler:(void (^)(id<FUSDKITopX> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("topX(completionHandler:)")));
@property FUSDKTokenHolder *tokenHolder __attribute__((swift_name("tokenHolder")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FansUnitedSDK.Companion")))
@interface FUSDKFansUnitedSDKCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFansUnitedSDKCompanion *shared __attribute__((swift_name("shared")));
- (FUSDKFansUnitedSDK *)getInstance __attribute__((swift_name("getInstance()")));
- (FUSDKFansUnitedSDK *)doInitConfig:(FUSDKFUSDKConfig *)config __attribute__((swift_name("doInit(config:)")));
@end

__attribute__((swift_name("IFUSDKTokenProvider")))
@protocol FUSDKIFUSDKTokenProvider
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTokenWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getToken(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)logoutWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("logout(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SDKConfig")))
@interface FUSDKSDKConfig : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sDKConfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKSDKConfig *shared __attribute__((swift_name("shared")));
- (BOOL)isDebugBuild __attribute__((swift_name("isDebugBuild()")));
@property (readonly) NSString *API_BASE_URL __attribute__((swift_name("API_BASE_URL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubdomainName")))
@interface FUSDKSubdomainName : FUSDKKotlinEnum<FUSDKSubdomainName *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKSubdomainName *football __attribute__((swift_name("football")));
@property (class, readonly) FUSDKSubdomainName *profile __attribute__((swift_name("profile")));
@property (class, readonly) FUSDKSubdomainName *prediction __attribute__((swift_name("prediction")));
@property (class, readonly) FUSDKSubdomainName *loyalty __attribute__((swift_name("loyalty")));
@property (class, readonly) FUSDKSubdomainName *client __attribute__((swift_name("client")));
@property (class, readonly) FUSDKSubdomainName *discussions __attribute__((swift_name("discussions")));
@property (class, readonly) FUSDKSubdomainName *idMapping __attribute__((swift_name("idMapping")));
+ (FUSDKKotlinArray<FUSDKSubdomainName *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKSubdomainName *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActivityApiService")))
@interface FUSDKActivityApiService : FUSDKBase
- (instancetype)initWithApiClient:(FUSDKAPIClientService *)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createActivityBody:(FUSDKNormalizedCreateActivityRequestBody *)body completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createActivity(body:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteActivityActivityId:(NSString *)activityId completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteActivity(activityId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getActivitiesForUserUserId:(NSString *)userId filters:(FUSDKUserActivityFilters * _Nullable)filters disableCache:(BOOL)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getActivitiesForUser(userId:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOwnActivitiesAction:(FUSDKActionsEnum * _Nullable)action limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page disableCache:(BOOL)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOwnActivities(action:limit:page:disableCache:completionHandler:)")));
@end

__attribute__((swift_name("IActivity")))
@protocol FUSDKIActivity
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addAction:(FUSDKActionsEnum *)action tags:(NSArray<FUSDKTag *> *)tags content:(FUSDKContent * _Nullable)content campaign:(FUSDKCampaign * _Nullable)campaign completionHandler:(void (^)(FUSDKActivityResponseBody * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("add(action:tags:content:campaign:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addClickAdTags:(NSArray<FUSDKTag *> *)tags content:(FUSDKContent * _Nullable)content campaign:(FUSDKCampaign * _Nullable)campaign completionHandler:(void (^)(FUSDKActivityResponseBody * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("addClickAd(tags:content:campaign:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addCommentTags:(NSArray<FUSDKTag *> *)tags content:(FUSDKContent * _Nullable)content campaign:(FUSDKCampaign * _Nullable)campaign completionHandler:(void (^)(FUSDKActivityResponseBody * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("addComment(tags:content:campaign:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addContentConsumedTags:(NSArray<FUSDKTag *> *)tags content:(FUSDKContent * _Nullable)content campaign:(FUSDKCampaign * _Nullable)campaign completionHandler:(void (^)(FUSDKActivityResponseBody * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("addContentConsumed(tags:content:campaign:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addConvertTags:(NSArray<FUSDKTag *> *)tags content:(FUSDKContent * _Nullable)content campaign:(FUSDKCampaign * _Nullable)campaign completionHandler:(void (^)(FUSDKActivityResponseBody * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("addConvert(tags:content:campaign:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addPageViewTags:(NSArray<FUSDKTag *> *)tags content:(FUSDKContent * _Nullable)content campaign:(FUSDKCampaign * _Nullable)campaign completionHandler:(void (^)(FUSDKActivityResponseBody * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("addPageView(tags:content:campaign:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addShareTags:(NSArray<FUSDKTag *> *)tags content:(FUSDKContent * _Nullable)content campaign:(FUSDKCampaign * _Nullable)campaign completionHandler:(void (^)(FUSDKActivityResponseBody * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("addShare(tags:content:campaign:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteActivityId:(NSString *)activityId completionHandler:(void (^)(FUSDKBoolean * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(activityId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)dislikeTags:(NSArray<FUSDKTag *> *)tags content:(FUSDKContent * _Nullable)content campaign:(FUSDKCampaign * _Nullable)campaign completionHandler:(void (^)(FUSDKActivityResponseBody * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("dislike(tags:content:campaign:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getForUserUserId:(NSString *)userId filters:(FUSDKUserActivityFilters * _Nullable)filters disableCache:(BOOL)disableCache completionHandler:(void (^)(FUSDKPagedResponse<NSArray<FUSDKActivityResponseBody *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getForUser(userId:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOwnFilters:(FUSDKOwnActivityFilters * _Nullable)filters disableCache:(BOOL)disableCache completionHandler:(void (^)(FUSDKPagedResponse<NSArray<FUSDKActivityResponseBody *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getOwn(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)likeTags:(NSArray<FUSDKTag *> *)tags content:(FUSDKContent * _Nullable)content campaign:(FUSDKCampaign * _Nullable)campaign completionHandler:(void (^)(FUSDKActivityResponseBody * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("like(tags:content:campaign:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/fansunitedmedia/sdk/network/serialization/ActivityActionTypeDeserializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionsEnum")))
@interface FUSDKActionsEnum : FUSDKKotlinEnum<FUSDKActionsEnum *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKActionsEnumCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKActionsEnum *like __attribute__((swift_name("like")));
@property (class, readonly) FUSDKActionsEnum *dislike __attribute__((swift_name("dislike")));
@property (class, readonly) FUSDKActionsEnum *pageView __attribute__((swift_name("pageView")));
@property (class, readonly) FUSDKActionsEnum *contentConsumed __attribute__((swift_name("contentConsumed")));
@property (class, readonly) FUSDKActionsEnum *share __attribute__((swift_name("share")));
@property (class, readonly) FUSDKActionsEnum *comment __attribute__((swift_name("comment")));
@property (class, readonly) FUSDKActionsEnum *clickAd __attribute__((swift_name("clickAd")));
@property (class, readonly) FUSDKActionsEnum *predictionMade __attribute__((swift_name("predictionMade")));
@property (class, readonly) FUSDKActionsEnum *convert __attribute__((swift_name("convert")));
@property (class, readonly) FUSDKActionsEnum *manageInterests __attribute__((swift_name("manageInterests")));
@property (class, readonly) FUSDKActionsEnum *gameParticipation __attribute__((swift_name("gameParticipation")));
@property (class, readonly) FUSDKActionsEnum *articleConsumed __attribute__((swift_name("articleConsumed")));
@property (class, readonly) FUSDKActionsEnum *videoConsumed __attribute__((swift_name("videoConsumed")));
@property (class, readonly) FUSDKActionsEnum *shortVideoConsumed __attribute__((swift_name("shortVideoConsumed")));
@property (class, readonly) FUSDKActionsEnum *longVideoConsumed __attribute__((swift_name("longVideoConsumed")));
@property (class, readonly) FUSDKActionsEnum *audioConsumed __attribute__((swift_name("audioConsumed")));
@property (class, readonly) FUSDKActionsEnum *galleryConsumed __attribute__((swift_name("galleryConsumed")));
@property (class, readonly) FUSDKActionsEnum *imageConsumed __attribute__((swift_name("imageConsumed")));
@property (class, readonly) FUSDKActionsEnum *pollParticipation __attribute__((swift_name("pollParticipation")));
@property (class, readonly) FUSDKActionsEnum *addInterest __attribute__((swift_name("addInterest")));
@property (class, readonly) FUSDKActionsEnum *removeInterest __attribute__((swift_name("removeInterest")));
+ (FUSDKKotlinArray<FUSDKActionsEnum *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKActionsEnum *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionsEnum.Companion")))
@interface FUSDKActionsEnumCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKActionsEnumCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActivityAction")))
@interface FUSDKActivityAction : FUSDKKotlinEnum<FUSDKActivityAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKActivityAction *like __attribute__((swift_name("like")));
@property (class, readonly) FUSDKActivityAction *dislike __attribute__((swift_name("dislike")));
@property (class, readonly) FUSDKActivityAction *pageView __attribute__((swift_name("pageView")));
@property (class, readonly) FUSDKActivityAction *contentConsumed __attribute__((swift_name("contentConsumed")));
@property (class, readonly) FUSDKActivityAction *share __attribute__((swift_name("share")));
@property (class, readonly) FUSDKActivityAction *comment __attribute__((swift_name("comment")));
@property (class, readonly) FUSDKActivityAction *clickAd __attribute__((swift_name("clickAd")));
@property (class, readonly) FUSDKActivityAction *conversion __attribute__((swift_name("conversion")));
@property (class, readonly) FUSDKActivityAction *convert __attribute__((swift_name("convert")));
@property (class, readonly) FUSDKActivityAction *predictionMade __attribute__((swift_name("predictionMade")));
+ (FUSDKKotlinArray<FUSDKActivityAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKActivityAction *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActivityContext")))
@interface FUSDKActivityContext : FUSDKBase
- (instancetype)initWithContent:(FUSDKContent * _Nullable)content tags:(NSArray<FUSDKTag *> * _Nullable)tags campaign:(FUSDKCampaign * _Nullable)campaign __attribute__((swift_name("init(content:tags:campaign:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKActivityContextCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKActivityContext *)doCopyContent:(FUSDKContent * _Nullable)content tags:(NSArray<FUSDKTag *> * _Nullable)tags campaign:(FUSDKCampaign * _Nullable)campaign __attribute__((swift_name("doCopy(content:tags:campaign:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKCampaign * _Nullable campaign __attribute__((swift_name("campaign")));
@property (readonly) FUSDKContent * _Nullable content __attribute__((swift_name("content")));
@property (readonly) NSArray<FUSDKTag *> * _Nullable tags __attribute__((swift_name("tags")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActivityContext.Companion")))
@interface FUSDKActivityContextCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKActivityContextCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActivityFilters")))
@interface FUSDKActivityFilters : FUSDKBase
- (instancetype)initWithPage:(FUSDKInt * _Nullable)page limit:(FUSDKInt * _Nullable)limit __attribute__((swift_name("init(page:limit:)"))) __attribute__((objc_designated_initializer));
- (FUSDKActivityFilters *)doCopyPage:(FUSDKInt * _Nullable)page limit:(FUSDKInt * _Nullable)limit __attribute__((swift_name("doCopy(page:limit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) FUSDKInt * _Nullable page __attribute__((swift_name("page")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActivityResponseBody")))
@interface FUSDKActivityResponseBody : FUSDKBase
- (instancetype)initWithId:(NSString * _Nullable)id profileId:(NSString * _Nullable)profileId property:(NSString * _Nullable)property value:(NSString * _Nullable)value action:(FUSDKActionsEnum * _Nullable)action context:(FUSDKActivityContext * _Nullable)context points:(int32_t)points __attribute__((swift_name("init(id:profileId:property:value:action:context:points:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKActivityResponseBodyCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKActivityResponseBody *)doCopyId:(NSString * _Nullable)id profileId:(NSString * _Nullable)profileId property:(NSString * _Nullable)property value:(NSString * _Nullable)value action:(FUSDKActionsEnum * _Nullable)action context:(FUSDKActivityContext * _Nullable)context points:(int32_t)points __attribute__((swift_name("doCopy(id:profileId:property:value:action:context:points:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKActionsEnum * _Nullable action __attribute__((swift_name("action")));
@property (readonly) FUSDKActivityContext * _Nullable context __attribute__((swift_name("context")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) NSString * _Nullable profileId __attribute__((swift_name("profileId")));
@property (readonly) NSString * _Nullable property __attribute__((swift_name("property")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActivityResponseBody.Companion")))
@interface FUSDKActivityResponseBodyCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKActivityResponseBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Campaign")))
@interface FUSDKCampaign : FUSDKBase
- (instancetype)initWithId:(NSString * _Nullable)id label:(NSString * _Nullable)label __attribute__((swift_name("init(id:label:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKCampaignCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKCampaign *)doCopyId:(NSString * _Nullable)id label:(NSString * _Nullable)label __attribute__((swift_name("doCopy(id:label:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Campaign.Companion")))
@interface FUSDKCampaignCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKCampaignCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Content")))
@interface FUSDKContent : FUSDKBase
- (instancetype)initWithType:(NSString * _Nullable)type id:(NSString * _Nullable)id label:(NSString * _Nullable)label __attribute__((swift_name("init(type:id:label:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKContentCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKContent *)doCopyType:(NSString * _Nullable)type id:(NSString * _Nullable)id label:(NSString * _Nullable)label __attribute__((swift_name("doCopy(type:id:label:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Content.Companion")))
@interface FUSDKContentCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKContentCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateActivityRequestBody")))
@interface FUSDKCreateActivityRequestBody : FUSDKBase
- (instancetype)initWithAction:(FUSDKActionsEnum *)action context:(FUSDKActivityContext *)context __attribute__((swift_name("init(action:context:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKCreateActivityRequestBodyCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKCreateActivityRequestBody *)doCopyAction:(FUSDKActionsEnum *)action context:(FUSDKActivityContext *)context __attribute__((swift_name("doCopy(action:context:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKActionsEnum *action __attribute__((swift_name("action")));
@property (readonly) FUSDKActivityContext *context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateActivityRequestBody.Companion")))
@interface FUSDKCreateActivityRequestBodyCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKCreateActivityRequestBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NormalizedActivityContext")))
@interface FUSDKNormalizedActivityContext : FUSDKBase
- (instancetype)initWithContent:(FUSDKContent * _Nullable)content tags:(NSArray<FUSDKNormalizedTag *> *)tags campaign:(FUSDKCampaign * _Nullable)campaign __attribute__((swift_name("init(content:tags:campaign:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKNormalizedActivityContextCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKNormalizedActivityContext *)doCopyContent:(FUSDKContent * _Nullable)content tags:(NSArray<FUSDKNormalizedTag *> *)tags campaign:(FUSDKCampaign * _Nullable)campaign __attribute__((swift_name("doCopy(content:tags:campaign:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKCampaign * _Nullable campaign __attribute__((swift_name("campaign")));
@property (readonly) FUSDKContent * _Nullable content __attribute__((swift_name("content")));
@property (readonly) NSArray<FUSDKNormalizedTag *> *tags __attribute__((swift_name("tags")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NormalizedActivityContext.Companion")))
@interface FUSDKNormalizedActivityContextCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKNormalizedActivityContextCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NormalizedCreateActivityRequestBody")))
@interface FUSDKNormalizedCreateActivityRequestBody : FUSDKBase
- (instancetype)initWithAction:(FUSDKActionsEnum *)action context:(FUSDKNormalizedActivityContext *)context __attribute__((swift_name("init(action:context:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKNormalizedCreateActivityRequestBodyCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKNormalizedCreateActivityRequestBody *)doCopyAction:(FUSDKActionsEnum *)action context:(FUSDKNormalizedActivityContext *)context __attribute__((swift_name("doCopy(action:context:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKActionsEnum *action __attribute__((swift_name("action")));
@property (readonly) FUSDKNormalizedActivityContext *context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NormalizedCreateActivityRequestBody.Companion")))
@interface FUSDKNormalizedCreateActivityRequestBodyCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKNormalizedCreateActivityRequestBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NormalizedTag")))
@interface FUSDKNormalizedTag : FUSDKBase
- (instancetype)initWithId:(NSString * _Nullable)id source:(NSString * _Nullable)source type:(NSString * _Nullable)type __attribute__((swift_name("init(id:source:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKNormalizedTagCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKNormalizedTag *)doCopyId:(NSString * _Nullable)id source:(NSString * _Nullable)source type:(NSString * _Nullable)type __attribute__((swift_name("doCopy(id:source:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable source __attribute__((swift_name("source")));
@property (readonly) NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NormalizedTag.Companion")))
@interface FUSDKNormalizedTagCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKNormalizedTagCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OwnActivityFilters")))
@interface FUSDKOwnActivityFilters : FUSDKBase
- (instancetype)initWithAction:(FUSDKActionsEnum * _Nullable)action page:(FUSDKInt * _Nullable)page limit:(FUSDKInt * _Nullable)limit __attribute__((swift_name("init(action:page:limit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOwnActivityFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKOwnActivityFilters *)doCopyAction:(FUSDKActionsEnum * _Nullable)action page:(FUSDKInt * _Nullable)page limit:(FUSDKInt * _Nullable)limit __attribute__((swift_name("doCopy(action:page:limit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKActionsEnum * _Nullable action __attribute__((swift_name("action")));
@property (readonly) FUSDKInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) FUSDKInt * _Nullable page __attribute__((swift_name("page")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OwnActivityFilters.Companion")))
@interface FUSDKOwnActivityFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOwnActivityFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("IRemappable")))
@protocol FUSDKIRemappable
@required
- (FUSDKResourceType * _Nullable)getResourceType __attribute__((swift_name("getResourceType()")));
- (id<FUSDKKotlinKProperty>)getTargetProp __attribute__((swift_name("getTargetProp()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tag")))
@interface FUSDKTag : FUSDKBase <FUSDKIRemappable>
- (instancetype)initWithId:(NSString *)id source:(NSString *)source type:(FUSDKResourceType *)type __attribute__((swift_name("init(id:source:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTagCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTag *)doCopyId:(NSString *)id source:(NSString *)source type:(FUSDKResourceType *)type __attribute__((swift_name("doCopy(id:source:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (FUSDKResourceType *)getResourceType __attribute__((swift_name("getResourceType()")));
- (NSString *(^)(void))getTargetProp __attribute__((swift_name("getTargetProp()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *source __attribute__((swift_name("source")));
@property (readonly) FUSDKResourceType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tag.Companion")))
@interface FUSDKTagCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTagCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserActivityAction")))
@interface FUSDKUserActivityAction : FUSDKKotlinEnum<FUSDKUserActivityAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKUserActivityActionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKUserActivityAction *like __attribute__((swift_name("like")));
@property (class, readonly) FUSDKUserActivityAction *dislike __attribute__((swift_name("dislike")));
@property (class, readonly) FUSDKUserActivityAction *share __attribute__((swift_name("share")));
@property (class, readonly) FUSDKUserActivityAction *comment __attribute__((swift_name("comment")));
@property (class, readonly) FUSDKUserActivityAction *predictionMade __attribute__((swift_name("predictionMade")));
+ (FUSDKKotlinArray<FUSDKUserActivityAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKUserActivityAction *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserActivityAction.Companion")))
@interface FUSDKUserActivityActionCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKUserActivityActionCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserActivityFilters")))
@interface FUSDKUserActivityFilters : FUSDKBase
- (instancetype)initWithAction:(FUSDKUserActivityAction * _Nullable)action page:(FUSDKInt * _Nullable)page limit:(FUSDKInt * _Nullable)limit __attribute__((swift_name("init(action:page:limit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKUserActivityFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKUserActivityFilters *)doCopyAction:(FUSDKUserActivityAction * _Nullable)action page:(FUSDKInt * _Nullable)page limit:(FUSDKInt * _Nullable)limit __attribute__((swift_name("doCopy(action:page:limit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKUserActivityAction * _Nullable action __attribute__((swift_name("action")));
@property (readonly) FUSDKInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) FUSDKInt * _Nullable page __attribute__((swift_name("page")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserActivityFilters.Companion")))
@interface FUSDKUserActivityFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKUserActivityFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientApiService")))
@interface FUSDKClientApiService : FUSDKBase
- (instancetype)initWithApiClient:(FUSDKAPIClientService *)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getClientFeaturesClientId:(NSString * _Nullable)clientId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getClientFeatures(clientId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getClientFeaturesDiscussionClientId:(NSString * _Nullable)clientId completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getClientFeaturesDiscussion(clientId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getClientFeaturesLoyaltyClientId:(NSString * _Nullable)clientId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getClientFeaturesLoyalty(clientId:disableCache:completionHandler:)")));
@end

__attribute__((swift_name("IClient")))
@protocol FUSDKIClient
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getClientFeaturesDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKSimpleResponse<FUSDKClientFeatures *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getClientFeatures(disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getClientFeaturesDiscussionWithCompletionHandler:(void (^)(FUSDKSimpleResponse<FUSDKDiscussionConfig *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getClientFeaturesDiscussion(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getClientFeaturesLoyaltyDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKSimpleResponse<FUSDKLoyaltyConfig *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getClientFeaturesLoyalty(disableCache:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientFeatures")))
@interface FUSDKClientFeatures : FUSDKBase
- (instancetype)initWithPredictor:(FUSDKPredictorConfig * _Nullable)predictor topX:(FUSDKTopXConfig * _Nullable)topX matchQuiz:(FUSDKMatchQuizConfig * _Nullable)matchQuiz loyalty:(FUSDKLoyaltyConfig * _Nullable)loyalty __attribute__((swift_name("init(predictor:topX:matchQuiz:loyalty:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKClientFeaturesCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKClientFeatures *)doCopyPredictor:(FUSDKPredictorConfig * _Nullable)predictor topX:(FUSDKTopXConfig * _Nullable)topX matchQuiz:(FUSDKMatchQuizConfig * _Nullable)matchQuiz loyalty:(FUSDKLoyaltyConfig * _Nullable)loyalty __attribute__((swift_name("doCopy(predictor:topX:matchQuiz:loyalty:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKLoyaltyConfig * _Nullable loyalty __attribute__((swift_name("loyalty")));
@property (readonly) FUSDKMatchQuizConfig * _Nullable matchQuiz __attribute__((swift_name("matchQuiz")));
@property (readonly) FUSDKPredictorConfig * _Nullable predictor __attribute__((swift_name("predictor")));
@property (readonly) FUSDKTopXConfig * _Nullable topX __attribute__((swift_name("topX")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientFeatures.Companion")))
@interface FUSDKClientFeaturesCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKClientFeaturesCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IDSchema")))
@interface FUSDKIDSchema : FUSDKKotlinEnum<FUSDKIDSchema *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKIDSchema *native __attribute__((swift_name("native")));
@property (class, readonly) FUSDKIDSchema *enetpulse __attribute__((swift_name("enetpulse")));
@property (class, readonly) FUSDKIDSchema *sportradar __attribute__((swift_name("sportradar")));
@property (class, readonly) FUSDKIDSchema *sportal365 __attribute__((swift_name("sportal365")));
@property (class, readonly) FUSDKIDSchema *apifootball __attribute__((swift_name("apifootball")));
+ (FUSDKKotlinArray<FUSDKIDSchema *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKIDSchema *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("PatchDto")))
@protocol FUSDKPatchDto
@required
- (NSDictionary<NSString *, FUSDKKotlinx_serialization_jsonJsonElement *> *)toPatchJsonObject __attribute__((swift_name("toPatchJsonObject()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrandingColorsModel")))
@interface FUSDKBrandingColorsModel : FUSDKBase
- (instancetype)initWithPrimaryColor:(NSString * _Nullable)primaryColor secondaryColor:(NSString * _Nullable)secondaryColor contentColor:(NSString * _Nullable)contentColor backgroundColor:(NSString * _Nullable)backgroundColor borderColor:(NSString * _Nullable)borderColor additionalColor:(NSString * _Nullable)additionalColor __attribute__((swift_name("init(primaryColor:secondaryColor:contentColor:backgroundColor:borderColor:additionalColor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKBrandingColorsModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKBrandingColorsModel *)doCopyPrimaryColor:(NSString * _Nullable)primaryColor secondaryColor:(NSString * _Nullable)secondaryColor contentColor:(NSString * _Nullable)contentColor backgroundColor:(NSString * _Nullable)backgroundColor borderColor:(NSString * _Nullable)borderColor additionalColor:(NSString * _Nullable)additionalColor __attribute__((swift_name("doCopy(primaryColor:secondaryColor:contentColor:backgroundColor:borderColor:additionalColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="additional_color")
*/
@property (readonly) NSString * _Nullable additionalColor __attribute__((swift_name("additionalColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="background_color")
*/
@property (readonly) NSString * _Nullable backgroundColor __attribute__((swift_name("backgroundColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="border_color")
*/
@property (readonly) NSString * _Nullable borderColor __attribute__((swift_name("borderColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content_color")
*/
@property (readonly) NSString * _Nullable contentColor __attribute__((swift_name("contentColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="primary_color")
*/
@property (readonly) NSString * _Nullable primaryColor __attribute__((swift_name("primaryColor")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="secondary_color")
*/
@property (readonly) NSString * _Nullable secondaryColor __attribute__((swift_name("secondaryColor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrandingColorsModel.Companion")))
@interface FUSDKBrandingColorsModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKBrandingColorsModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrandingImagesModel")))
@interface FUSDKBrandingImagesModel : FUSDKBase
- (instancetype)initWithMainLogo:(NSString * _Nullable)mainLogo mobileLogo:(NSString * _Nullable)mobileLogo backgroundImage:(NSString * _Nullable)backgroundImage mobileBackgroundImage:(NSString * _Nullable)mobileBackgroundImage additionalImage:(NSString * _Nullable)additionalImage __attribute__((swift_name("init(mainLogo:mobileLogo:backgroundImage:mobileBackgroundImage:additionalImage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKBrandingImagesModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKBrandingImagesModel *)doCopyMainLogo:(NSString * _Nullable)mainLogo mobileLogo:(NSString * _Nullable)mobileLogo backgroundImage:(NSString * _Nullable)backgroundImage mobileBackgroundImage:(NSString * _Nullable)mobileBackgroundImage additionalImage:(NSString * _Nullable)additionalImage __attribute__((swift_name("doCopy(mainLogo:mobileLogo:backgroundImage:mobileBackgroundImage:additionalImage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="additional_image")
*/
@property (readonly) NSString * _Nullable additionalImage __attribute__((swift_name("additionalImage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="background_image")
*/
@property (readonly) NSString * _Nullable backgroundImage __attribute__((swift_name("backgroundImage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="main_logo")
*/
@property (readonly) NSString * _Nullable mainLogo __attribute__((swift_name("mainLogo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mobile_background_image")
*/
@property (readonly) NSString * _Nullable mobileBackgroundImage __attribute__((swift_name("mobileBackgroundImage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mobile_logo")
*/
@property (readonly) NSString * _Nullable mobileLogo __attribute__((swift_name("mobileLogo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrandingImagesModel.Companion")))
@interface FUSDKBrandingImagesModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKBrandingImagesModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrandingModel")))
@interface FUSDKBrandingModel : FUSDKBase
- (instancetype)initWithColors:(FUSDKBrandingColorsModel * _Nullable)colors urls:(FUSDKBrandingUrlsModel * _Nullable)urls images:(FUSDKBrandingImagesModel * _Nullable)images __attribute__((swift_name("init(colors:urls:images:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKBrandingModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKBrandingModel *)doCopyColors:(FUSDKBrandingColorsModel * _Nullable)colors urls:(FUSDKBrandingUrlsModel * _Nullable)urls images:(FUSDKBrandingImagesModel * _Nullable)images __attribute__((swift_name("doCopy(colors:urls:images:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKBrandingColorsModel * _Nullable colors __attribute__((swift_name("colors")));
@property (readonly) FUSDKBrandingImagesModel * _Nullable images __attribute__((swift_name("images")));
@property (readonly) FUSDKBrandingUrlsModel * _Nullable urls __attribute__((swift_name("urls")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrandingModel.Companion")))
@interface FUSDKBrandingModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKBrandingModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrandingUrlsModel")))
@interface FUSDKBrandingUrlsModel : FUSDKBase
- (instancetype)initWithPrimaryUrl:(NSString * _Nullable)primaryUrl secondaryUrl:(NSString * _Nullable)secondaryUrl privacyPolicyUrl:(NSString * _Nullable)privacyPolicyUrl termsAndConditionsUrl:(NSString * _Nullable)termsAndConditionsUrl additionalUrl:(NSString * _Nullable)additionalUrl __attribute__((swift_name("init(primaryUrl:secondaryUrl:privacyPolicyUrl:termsAndConditionsUrl:additionalUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKBrandingUrlsModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKBrandingUrlsModel *)doCopyPrimaryUrl:(NSString * _Nullable)primaryUrl secondaryUrl:(NSString * _Nullable)secondaryUrl privacyPolicyUrl:(NSString * _Nullable)privacyPolicyUrl termsAndConditionsUrl:(NSString * _Nullable)termsAndConditionsUrl additionalUrl:(NSString * _Nullable)additionalUrl __attribute__((swift_name("doCopy(primaryUrl:secondaryUrl:privacyPolicyUrl:termsAndConditionsUrl:additionalUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="additional_url")
*/
@property (readonly) NSString * _Nullable additionalUrl __attribute__((swift_name("additionalUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="primary_url")
*/
@property (readonly) NSString * _Nullable primaryUrl __attribute__((swift_name("primaryUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="privacy_policy_url")
*/
@property (readonly) NSString * _Nullable privacyPolicyUrl __attribute__((swift_name("privacyPolicyUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="secondary_url")
*/
@property (readonly) NSString * _Nullable secondaryUrl __attribute__((swift_name("secondaryUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="terms_and_conditions_url")
*/
@property (readonly) NSString * _Nullable termsAndConditionsUrl __attribute__((swift_name("termsAndConditionsUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrandingUrlsModel.Companion")))
@interface FUSDKBrandingUrlsModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKBrandingUrlsModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Images")))
@interface FUSDKImages : FUSDKBase
- (instancetype)initWithMain:(NSString * _Nullable)main cover:(NSString * _Nullable)cover mobile:(NSString * _Nullable)mobile __attribute__((swift_name("init(main:cover:mobile:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKImagesCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKImages *)doCopyMain:(NSString * _Nullable)main cover:(NSString * _Nullable)cover mobile:(NSString * _Nullable)mobile __attribute__((swift_name("doCopy(main:cover:mobile:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable cover __attribute__((swift_name("cover")));
@property (readonly) NSString * _Nullable main __attribute__((swift_name("main")));
@property (readonly) NSString * _Nullable mobile __attribute__((swift_name("mobile")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Images.Companion")))
@interface FUSDKImagesCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKImagesCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SortOrder")))
@interface FUSDKSortOrder : FUSDKKotlinEnum<FUSDKSortOrder *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKSortOrder *asc __attribute__((swift_name("asc")));
@property (class, readonly) FUSDKSortOrder *desc __attribute__((swift_name("desc")));
+ (FUSDKKotlinArray<FUSDKSortOrder *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKSortOrder *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CursorMeta")))
@interface FUSDKCursorMeta : FUSDKBase
- (instancetype)initWithPagination:(FUSDKCursorPagination * _Nullable)pagination __attribute__((swift_name("init(pagination:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKCursorMetaCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKCursorMeta *)doCopyPagination:(FUSDKCursorPagination * _Nullable)pagination __attribute__((swift_name("doCopy(pagination:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKCursorPagination * _Nullable pagination __attribute__((swift_name("pagination")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CursorMeta.Companion")))
@interface FUSDKCursorMetaCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKCursorMetaCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CursorPagination")))
@interface FUSDKCursorPagination : FUSDKBase
- (instancetype)initWithItemsPerPage:(int32_t)itemsPerPage nextPageStartsAfter:(NSString * _Nullable)nextPageStartsAfter __attribute__((swift_name("init(itemsPerPage:nextPageStartsAfter:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKCursorPaginationCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKCursorPagination *)doCopyItemsPerPage:(int32_t)itemsPerPage nextPageStartsAfter:(NSString * _Nullable)nextPageStartsAfter __attribute__((swift_name("doCopy(itemsPerPage:nextPageStartsAfter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t itemsPerPage __attribute__((swift_name("itemsPerPage")));
@property NSString * _Nullable nextPageStartsAfter __attribute__((swift_name("nextPageStartsAfter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CursorPagination.Companion")))
@interface FUSDKCursorPaginationCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKCursorPaginationCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CursorResponse")))
@interface FUSDKCursorResponse<R> : FUSDKBase
- (instancetype)initWithData:(R _Nullable)data meta:(FUSDKCursorMeta * _Nullable)meta __attribute__((swift_name("init(data:meta:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKCursorResponseCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKCursorResponse<R> *)doCopyData:(R _Nullable)data meta:(FUSDKCursorMeta * _Nullable)meta __attribute__((swift_name("doCopy(data:meta:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) R _Nullable data __attribute__((swift_name("data")));
@property FUSDKCursorMeta * _Nullable meta __attribute__((swift_name("meta")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CursorResponseCompanion")))
@interface FUSDKCursorResponseCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKCursorResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<FUSDKKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PagedMeta")))
@interface FUSDKPagedMeta : FUSDKBase
- (instancetype)initWithPagination:(FUSDKPagination * _Nullable)pagination __attribute__((swift_name("init(pagination:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPagedMetaCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPagedMeta *)doCopyPagination:(FUSDKPagination * _Nullable)pagination __attribute__((swift_name("doCopy(pagination:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKPagination * _Nullable pagination __attribute__((swift_name("pagination")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PagedMeta.Companion")))
@interface FUSDKPagedMetaCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPagedMetaCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PagedResponse")))
@interface FUSDKPagedResponse<R> : FUSDKBase
- (instancetype)initWithData:(R _Nullable)data meta:(FUSDKPagedMeta * _Nullable)meta __attribute__((swift_name("init(data:meta:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPagedResponseCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPagedResponse<R> *)doCopyData:(R _Nullable)data meta:(FUSDKPagedMeta * _Nullable)meta __attribute__((swift_name("doCopy(data:meta:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) R _Nullable data __attribute__((swift_name("data")));
@property FUSDKPagedMeta * _Nullable meta __attribute__((swift_name("meta")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PagedResponseCompanion")))
@interface FUSDKPagedResponseCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPagedResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<FUSDKKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pagination")))
@interface FUSDKPagination : FUSDKBase
- (instancetype)initWithCurrentPage:(int32_t)currentPage itemsPerPage:(int32_t)itemsPerPage totalItems:(int32_t)totalItems numberOfPages:(int32_t)numberOfPages __attribute__((swift_name("init(currentPage:itemsPerPage:totalItems:numberOfPages:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPaginationCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPagination *)doCopyCurrentPage:(int32_t)currentPage itemsPerPage:(int32_t)itemsPerPage totalItems:(int32_t)totalItems numberOfPages:(int32_t)numberOfPages __attribute__((swift_name("doCopy(currentPage:itemsPerPage:totalItems:numberOfPages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t currentPage __attribute__((swift_name("currentPage")));
@property (readonly) int32_t itemsPerPage __attribute__((swift_name("itemsPerPage")));
@property (readonly) int32_t numberOfPages __attribute__((swift_name("numberOfPages")));
@property (readonly) int32_t totalItems __attribute__((swift_name("totalItems")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pagination.Companion")))
@interface FUSDKPaginationCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPaginationCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleResponse")))
@interface FUSDKSimpleResponse<R> : FUSDKBase
- (instancetype)initWithData:(R _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKSimpleResponseCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKSimpleResponse<R> *)doCopyData:(R _Nullable)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) R _Nullable data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleResponseCompanion")))
@interface FUSDKSimpleResponseCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKSimpleResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<FUSDKKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end

__attribute__((swift_name("DiscussionApiService")))
@interface FUSDKDiscussionApiService : FUSDKBase
- (instancetype)initWithApiClient:(FUSDKAPIClientService *)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createPostDiscussionId:(NSString *)discussionId createPost:(FUSDKCreatePost *)createPost completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createPost(discussionId:createPost:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deletePostPostId:(NSString *)postId completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deletePost(postId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllDiscussionIds:(NSArray<NSString *> * _Nullable)discussionIds label:(NSString * _Nullable)label discussionUrl:(NSString * _Nullable)discussionUrl fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate fromCount:(NSString * _Nullable)fromCount toCount:(NSString * _Nullable)toCount status:(FUSDKDiscussionStatus * _Nullable)status sort:(FUSDKDiscussionsSortTypes * _Nullable)sort limit:(FUSDKInt * _Nullable)limit skipDeleted:(FUSDKBoolean * _Nullable)skipDeleted startAfter:(NSString * _Nullable)startAfter disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAll(discussionIds:label:discussionUrl:fromDate:toDate:fromCount:toCount:status:sort:limit:skipDeleted:startAfter:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getByIdDiscussionId:(NSString * _Nullable)discussionId completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getById(discussionId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOwnPostsStartAfter:(NSString * _Nullable)startAfter limit:(FUSDKInt * _Nullable)limit sort:(FUSDKPostsSortTypes * _Nullable)sort skipDeleted:(FUSDKBoolean * _Nullable)skipDeleted skipModerated:(FUSDKBoolean * _Nullable)skipModerated completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOwnPosts(startAfter:limit:sort:skipDeleted:skipModerated:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPostByIdPostId:(NSString *)postId completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPostById(postId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPostRepliesPostId:(NSString *)postId startAfter:(NSString * _Nullable)startAfter limit:(FUSDKInt * _Nullable)limit sort:(FUSDKPostsSortTypes * _Nullable)sort skipDeleted:(FUSDKBoolean * _Nullable)skipDeleted skipModerated:(FUSDKBoolean * _Nullable)skipModerated disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPostReplies(postId:startAfter:limit:sort:skipDeleted:skipModerated:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPostsCountForDiscussionDiscussionIds:(NSArray<NSString *> *)discussionIds disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPostsCountForDiscussion(discussionIds:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPostsCountForManyDiscussionsDiscussionIds:(NSArray<NSString *> *)discussionIds completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPostsCountForManyDiscussions(discussionIds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPostsForDiscussionDiscussionId:(NSString *)discussionId startAfter:(NSString * _Nullable)startAfter limit:(FUSDKInt * _Nullable)limit sort:(FUSDKPostsSortTypes * _Nullable)sort skipDeleted:(FUSDKBoolean * _Nullable)skipDeleted skipModerated:(FUSDKBoolean * _Nullable)skipModerated completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPostsForDiscussion(discussionId:startAfter:limit:sort:skipDeleted:skipModerated:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTopDiscussionsContentType:(NSString * _Nullable)contentType entityIds:(NSArray<NSString *> * _Nullable)entityIds fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate startAfter:(NSString * _Nullable)startAfter limit:(FUSDKInt * _Nullable)limit disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTopDiscussions(contentType:entityIds:fromDate:toDate:startAfter:limit:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserPostsUserId:(NSString *)userId startAfter:(NSString * _Nullable)startAfter limit:(FUSDKInt * _Nullable)limit sort:(FUSDKPostsSortTypes * _Nullable)sort skipDeleted:(FUSDKBoolean * _Nullable)skipDeleted skipModerated:(FUSDKBoolean * _Nullable)skipModerated disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserPosts(userId:startAfter:limit:sort:skipDeleted:skipModerated:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reactToPostPostId:(NSString *)postId reactToPost:(FUSDKReactToPost *)reactToPost completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reactToPost(postId:reactToPost:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reportPostPostId:(NSString *)postId reportPost:(FUSDKReportPost *)reportPost completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reportPost(postId:reportPost:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updatePostPostId:(NSString *)postId updatePost:(FUSDKUpdatePost *)updatePost completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updatePost(postId:updatePost:completionHandler:)")));
@end

__attribute__((swift_name("IDiscussions")))
@protocol FUSDKIDiscussions
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createPostDiscussionId:(NSString *)discussionId createPost:(FUSDKCreatePost *)createPost completionHandler:(void (^)(FUSDKSimpleResponse<FUSDKDiscussionComment *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("createPost(discussionId:createPost:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deletePostPostId:(NSString *)postId completionHandler:(void (^)(FUSDKKotlinUnit * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("deletePost(postId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAllFilters:(FUSDKDiscussionsFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKDiscussion *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAll(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getByIdDiscussionId:(NSString *)discussionId completionHandler_:(void (^)(FUSDKSimpleResponse<FUSDKDiscussion *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getById(discussionId:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConfigWithCompletionHandler:(void (^)(FUSDKDiscussionConfig * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getConfig(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOwnPostsFilters:(FUSDKPostsFilters * _Nullable)filters completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKDiscussionComment *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getOwnPosts(filters:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPostByIdPostId:(NSString *)postId completionHandler:(void (^)(FUSDKSimpleResponse<FUSDKDiscussionComment *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getPostById(postId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPostRepliesPostId:(NSString *)postId filters:(FUSDKPostsFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKDiscussionResponse<NSArray<FUSDKDiscussionComment *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getPostReplies(postId:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPostsDiscussionId:(NSString *)discussionId filters:(FUSDKPostsFilters * _Nullable)filters completionHandler:(void (^)(FUSDKDiscussionResponse<NSArray<FUSDKDiscussionComment *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getPosts(discussionId:filters:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPostsCountDiscussionIds:(NSArray<NSString *> *)discussionIds disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKSimpleResponse<NSArray<FUSDKPostsCountPerDiscussion *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getPostsCount(discussionIds:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPostsCountExtendedDiscussionIds:(NSArray<NSString *> *)discussionIds completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKPostsCountPerDiscussion *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getPostsCountExtended(discussionIds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTopDiscussionsFilters:(FUSDKTopDiscussionsFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKDiscussion *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getTopDiscussions(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserPostsUserId:(NSString *)userId filters:(FUSDKPostsFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKDiscussionComment *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserPosts(userId:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reactPostId:(NSString *)postId reactionType:(FUSDKReactionType *)reactionType completionHandler:(void (^)(FUSDKSimpleResponse<FUSDKDiscussionComment *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("react(postId:reactionType:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reportPostPostId:(NSString *)postId reason:(FUSDKReportReasonType *)reason reasonDetails:(NSString * _Nullable)reasonDetails completionHandler:(void (^)(FUSDKSimpleResponse<FUSDKDiscussionComment *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("reportPost(postId:reason:reasonDetails:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updatePostPostId:(NSString *)postId content:(NSString *)content completionHandler:(void (^)(FUSDKSimpleResponse<FUSDKDiscussionComment *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("updatePost(postId:content:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutomaticModeration")))
@interface FUSDKAutomaticModeration : FUSDKBase
- (instancetype)initWithEnabled:(BOOL)enabled moderateLinks:(BOOL)moderateLinks linksWhitelist:(NSArray<NSString *> * _Nullable)linksWhitelist moderatorProfileId:(NSString *)moderatorProfileId dictionary:(FUSDKDictionary *)dictionary __attribute__((swift_name("init(enabled:moderateLinks:linksWhitelist:moderatorProfileId:dictionary:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKAutomaticModerationCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKAutomaticModeration *)doCopyEnabled:(BOOL)enabled moderateLinks:(BOOL)moderateLinks linksWhitelist:(NSArray<NSString *> * _Nullable)linksWhitelist moderatorProfileId:(NSString *)moderatorProfileId dictionary:(FUSDKDictionary *)dictionary __attribute__((swift_name("doCopy(enabled:moderateLinks:linksWhitelist:moderatorProfileId:dictionary:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKDictionary *dictionary __attribute__((swift_name("dictionary")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) NSArray<NSString *> * _Nullable linksWhitelist __attribute__((swift_name("linksWhitelist")));
@property (readonly) BOOL moderateLinks __attribute__((swift_name("moderateLinks")));
@property (readonly) NSString *moderatorProfileId __attribute__((swift_name("moderatorProfileId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutomaticModeration.Companion")))
@interface FUSDKAutomaticModerationCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKAutomaticModerationCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreatePost")))
@interface FUSDKCreatePost : FUSDKBase
- (instancetype)initWithContent:(NSString *)content replyId:(NSString * _Nullable)replyId anonymousNickname:(NSString * _Nullable)anonymousNickname context:(FUSDKDiscussionContext * _Nullable)context discussionUrl:(NSString * _Nullable)discussionUrl discussionLabel:(NSString * _Nullable)discussionLabel __attribute__((swift_name("init(content:replyId:anonymousNickname:context:discussionUrl:discussionLabel:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKCreatePostCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKCreatePost *)doCopyContent:(NSString *)content replyId:(NSString * _Nullable)replyId anonymousNickname:(NSString * _Nullable)anonymousNickname context:(FUSDKDiscussionContext * _Nullable)context discussionUrl:(NSString * _Nullable)discussionUrl discussionLabel:(NSString * _Nullable)discussionLabel __attribute__((swift_name("doCopy(content:replyId:anonymousNickname:context:discussionUrl:discussionLabel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable anonymousNickname __attribute__((swift_name("anonymousNickname")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) FUSDKDiscussionContext * _Nullable context __attribute__((swift_name("context")));
@property (readonly) NSString * _Nullable discussionLabel __attribute__((swift_name("discussionLabel")));
@property (readonly) NSString * _Nullable discussionUrl __attribute__((swift_name("discussionUrl")));
@property (readonly) NSString * _Nullable replyId __attribute__((swift_name("replyId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreatePost.Companion")))
@interface FUSDKCreatePostCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKCreatePostCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dictionary")))
@interface FUSDKDictionary : FUSDKBase
- (instancetype)initWithReason:(NSString *)reason words:(NSArray<NSString *> *)words __attribute__((swift_name("init(reason:words:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKDictionaryCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKDictionary *)doCopyReason:(NSString *)reason words:(NSArray<NSString *> *)words __attribute__((swift_name("doCopy(reason:words:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *reason __attribute__((swift_name("reason")));
@property (readonly) NSArray<NSString *> *words __attribute__((swift_name("words")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dictionary.Companion")))
@interface FUSDKDictionaryCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKDictionaryCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Discussion")))
@interface FUSDKDiscussion : FUSDKBase
- (instancetype)initWithId:(NSString *)id label:(NSString * _Nullable)label discussionType:(FUSDKDiscussionType * _Nullable)discussionType moderationType:(FUSDKModerationType *)moderationType postsCount:(int32_t)postsCount lastPostId:(NSString * _Nullable)lastPostId discussionUrl:(NSString * _Nullable)discussionUrl createdAt:(FUSDKKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)updatedAt pinnedPosts:(NSArray<NSString *> * _Nullable)pinnedPosts context:(FUSDKActivityContext * _Nullable)context status:(FUSDKDiscussionStatus * _Nullable)status deleted:(FUSDKBoolean * _Nullable)deleted deletedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)deletedAt deletedBy:(NSString * _Nullable)deletedBy customFields:(NSDictionary<NSString *, id> * _Nullable)customFields __attribute__((swift_name("init(id:label:discussionType:moderationType:postsCount:lastPostId:discussionUrl:createdAt:updatedAt:pinnedPosts:context:status:deleted:deletedAt:deletedBy:customFields:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKDiscussionCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKDiscussion *)doCopyId:(NSString *)id label:(NSString * _Nullable)label discussionType:(FUSDKDiscussionType * _Nullable)discussionType moderationType:(FUSDKModerationType *)moderationType postsCount:(int32_t)postsCount lastPostId:(NSString * _Nullable)lastPostId discussionUrl:(NSString * _Nullable)discussionUrl createdAt:(FUSDKKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)updatedAt pinnedPosts:(NSArray<NSString *> * _Nullable)pinnedPosts context:(FUSDKActivityContext * _Nullable)context status:(FUSDKDiscussionStatus * _Nullable)status deleted:(FUSDKBoolean * _Nullable)deleted deletedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)deletedAt deletedBy:(NSString * _Nullable)deletedBy customFields:(NSDictionary<NSString *, id> * _Nullable)customFields __attribute__((swift_name("doCopy(id:label:discussionType:moderationType:postsCount:lastPostId:discussionUrl:createdAt:updatedAt:pinnedPosts:context:status:deleted:deletedAt:deletedBy:customFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKActivityContext * _Nullable context __attribute__((swift_name("context")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSDictionary<NSString *, id> * _Nullable customFields __attribute__((swift_name("customFields")));
@property (readonly) FUSDKBoolean * _Nullable deleted __attribute__((swift_name("deleted")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable deletedAt __attribute__((swift_name("deletedAt")));
@property (readonly) NSString * _Nullable deletedBy __attribute__((swift_name("deletedBy")));
@property (readonly) FUSDKDiscussionType * _Nullable discussionType __attribute__((swift_name("discussionType")));
@property (readonly) NSString * _Nullable discussionUrl __attribute__((swift_name("discussionUrl")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSString * _Nullable lastPostId __attribute__((swift_name("lastPostId")));
@property (readonly) FUSDKModerationType *moderationType __attribute__((swift_name("moderationType")));
@property (readonly) NSArray<NSString *> * _Nullable pinnedPosts __attribute__((swift_name("pinnedPosts")));
@property (readonly) int32_t postsCount __attribute__((swift_name("postsCount")));
@property (readonly) FUSDKDiscussionStatus * _Nullable status __attribute__((swift_name("status")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Discussion.Companion")))
@interface FUSDKDiscussionCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKDiscussionCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionComment")))
@interface FUSDKDiscussionComment : FUSDKBase
- (instancetype)initWithId:(NSString *)id discussionId:(NSString *)discussionId anonymousNickname:(NSString * _Nullable)anonymousNickname content:(NSString *)content createdAt:(FUSDKKotlinx_datetimeInstant *)createdAt deletedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)deletedAt updatedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)updatedAt reactionsCount:(FUSDKInt * _Nullable)reactionsCount repliesCount:(int32_t)repliesCount replyId:(NSString * _Nullable)replyId userId:(NSString * _Nullable)userId moderated:(FUSDKBoolean * _Nullable)moderated moderatedBy:(NSString * _Nullable)moderatedBy moderatedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)moderatedAt moderatedReason:(NSString * _Nullable)moderatedReason deleted:(FUSDKBoolean * _Nullable)deleted deletedBy:(NSString * _Nullable)deletedBy privatePost:(FUSDKBoolean * _Nullable)privatePost reactions:(NSArray<FUSDKReaction *> * _Nullable)reactions userModel:(FUSDKProfileModel * _Nullable)userModel versions:(NSArray<FUSDKEditVersion *> *)versions reportsCount:(int32_t)reportsCount reports:(NSArray<FUSDKReport *> *)reports __attribute__((swift_name("init(id:discussionId:anonymousNickname:content:createdAt:deletedAt:updatedAt:reactionsCount:repliesCount:replyId:userId:moderated:moderatedBy:moderatedAt:moderatedReason:deleted:deletedBy:privatePost:reactions:userModel:versions:reportsCount:reports:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKDiscussionCommentCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)areRepliesLoaded __attribute__((swift_name("areRepliesLoaded()")));
- (FUSDKDiscussionComment *)doCopyId:(NSString *)id discussionId:(NSString *)discussionId anonymousNickname:(NSString * _Nullable)anonymousNickname content:(NSString *)content createdAt:(FUSDKKotlinx_datetimeInstant *)createdAt deletedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)deletedAt updatedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)updatedAt reactionsCount:(FUSDKInt * _Nullable)reactionsCount repliesCount:(int32_t)repliesCount replyId:(NSString * _Nullable)replyId userId:(NSString * _Nullable)userId moderated:(FUSDKBoolean * _Nullable)moderated moderatedBy:(NSString * _Nullable)moderatedBy moderatedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)moderatedAt moderatedReason:(NSString * _Nullable)moderatedReason deleted:(FUSDKBoolean * _Nullable)deleted deletedBy:(NSString * _Nullable)deletedBy privatePost:(FUSDKBoolean * _Nullable)privatePost reactions:(NSArray<FUSDKReaction *> * _Nullable)reactions userModel:(FUSDKProfileModel * _Nullable)userModel versions:(NSArray<FUSDKEditVersion *> *)versions reportsCount:(int32_t)reportsCount reports:(NSArray<FUSDKReport *> *)reports __attribute__((swift_name("doCopy(id:discussionId:anonymousNickname:content:createdAt:deletedAt:updatedAt:reactionsCount:repliesCount:replyId:userId:moderated:moderatedBy:moderatedAt:moderatedReason:deleted:deletedBy:privatePost:reactions:userModel:versions:reportsCount:reports:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString * _Nullable)getAuthorName __attribute__((swift_name("getAuthorName()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isReply __attribute__((swift_name("isReply()")));
- (void)setRepliesLoadedRepliesLoaded:(BOOL)repliesLoaded __attribute__((swift_name("setRepliesLoaded(repliesLoaded:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL _repliesLoaded __attribute__((swift_name("_repliesLoaded")));
@property (readonly) NSString * _Nullable anonymousNickname __attribute__((swift_name("anonymousNickname")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) FUSDKKotlinx_datetimeInstant *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) FUSDKBoolean * _Nullable deleted __attribute__((swift_name("deleted")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable deletedAt __attribute__((swift_name("deletedAt")));
@property (readonly) NSString * _Nullable deletedBy __attribute__((swift_name("deletedBy")));
@property (readonly) NSString *discussionId __attribute__((swift_name("discussionId")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) FUSDKBoolean * _Nullable moderated __attribute__((swift_name("moderated")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable moderatedAt __attribute__((swift_name("moderatedAt")));
@property (readonly) NSString * _Nullable moderatedBy __attribute__((swift_name("moderatedBy")));
@property (readonly) NSString * _Nullable moderatedReason __attribute__((swift_name("moderatedReason")));
@property (readonly) FUSDKBoolean * _Nullable privatePost __attribute__((swift_name("privatePost")));
@property (readonly) NSArray<FUSDKReaction *> * _Nullable reactions __attribute__((swift_name("reactions")));
@property (readonly) FUSDKInt * _Nullable reactionsCount __attribute__((swift_name("reactionsCount")));
@property (readonly) int32_t repliesCount __attribute__((swift_name("repliesCount")));
@property (readonly) NSString * _Nullable replyId __attribute__((swift_name("replyId")));
@property (readonly) NSArray<FUSDKReport *> *reports __attribute__((swift_name("reports")));
@property (readonly) int32_t reportsCount __attribute__((swift_name("reportsCount")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@property FUSDKProfileModel * _Nullable userModel __attribute__((swift_name("userModel")));
@property (readonly) NSArray<FUSDKEditVersion *> *versions __attribute__((swift_name("versions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionComment.Companion")))
@interface FUSDKDiscussionCommentCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKDiscussionCommentCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionConfig")))
@interface FUSDKDiscussionConfig : FUSDKBase
- (instancetype)initWithEnabled:(BOOL)enabled clientId:(NSString *)clientId automaticModeration:(FUSDKAutomaticModeration *)automaticModeration __attribute__((swift_name("init(enabled:clientId:automaticModeration:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKDiscussionConfigCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKDiscussionConfig *)doCopyEnabled:(BOOL)enabled clientId:(NSString *)clientId automaticModeration:(FUSDKAutomaticModeration *)automaticModeration __attribute__((swift_name("doCopy(enabled:clientId:automaticModeration:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKAutomaticModeration *automaticModeration __attribute__((swift_name("automaticModeration")));
@property (readonly) NSString *clientId __attribute__((swift_name("clientId")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionConfig.Companion")))
@interface FUSDKDiscussionConfigCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKDiscussionConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionContext")))
@interface FUSDKDiscussionContext : FUSDKBase
- (instancetype)initWithContent:(FUSDKContent *)content tags:(NSArray<FUSDKTag *> *)tags __attribute__((swift_name("init(content:tags:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKDiscussionContextCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKDiscussionContext *)doCopyContent:(FUSDKContent *)content tags:(NSArray<FUSDKTag *> *)tags __attribute__((swift_name("doCopy(content:tags:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKContent *content __attribute__((swift_name("content")));
@property (readonly) NSArray<FUSDKTag *> *tags __attribute__((swift_name("tags")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionContext.Companion")))
@interface FUSDKDiscussionContextCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKDiscussionContextCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionResponse")))
@interface FUSDKDiscussionResponse<R> : FUSDKBase
- (instancetype)initWithData:(R _Nullable)data meta:(FUSDKMeta * _Nullable)meta __attribute__((swift_name("init(data:meta:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKDiscussionResponseCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKDiscussionResponse<R> *)doCopyData:(R _Nullable)data meta:(FUSDKMeta * _Nullable)meta __attribute__((swift_name("doCopy(data:meta:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) R _Nullable data __attribute__((swift_name("data")));
@property FUSDKMeta * _Nullable meta __attribute__((swift_name("meta")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionResponseCompanion")))
@interface FUSDKDiscussionResponseCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKDiscussionResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<FUSDKKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionStatus")))
@interface FUSDKDiscussionStatus : FUSDKKotlinEnum<FUSDKDiscussionStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKDiscussionStatus *active __attribute__((swift_name("active")));
@property (class, readonly) FUSDKDiscussionStatus *inactive __attribute__((swift_name("inactive")));
+ (FUSDKKotlinArray<FUSDKDiscussionStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKDiscussionStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionType")))
@interface FUSDKDiscussionType : FUSDKKotlinEnum<FUSDKDiscussionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKDiscussionType *privateLeague __attribute__((swift_name("privateLeague")));
@property (class, readonly) FUSDKDiscussionType *commentSection __attribute__((swift_name("commentSection")));
+ (FUSDKKotlinArray<FUSDKDiscussionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKDiscussionType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionsFilters")))
@interface FUSDKDiscussionsFilters : FUSDKBase
- (instancetype)initWithDiscussionIds:(NSArray<NSString *> * _Nullable)discussionIds label:(NSString * _Nullable)label discussionUrl:(NSString * _Nullable)discussionUrl fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate fromCount:(NSString * _Nullable)fromCount toCount:(NSString * _Nullable)toCount status:(FUSDKDiscussionStatus * _Nullable)status sort:(FUSDKDiscussionsSortTypes * _Nullable)sort limit:(FUSDKInt * _Nullable)limit skipDeleted:(FUSDKBoolean * _Nullable)skipDeleted startAfter:(NSString * _Nullable)startAfter __attribute__((swift_name("init(discussionIds:label:discussionUrl:fromDate:toDate:fromCount:toCount:status:sort:limit:skipDeleted:startAfter:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKDiscussionsFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKDiscussionsFilters *)doCopyDiscussionIds:(NSArray<NSString *> * _Nullable)discussionIds label:(NSString * _Nullable)label discussionUrl:(NSString * _Nullable)discussionUrl fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate fromCount:(NSString * _Nullable)fromCount toCount:(NSString * _Nullable)toCount status:(FUSDKDiscussionStatus * _Nullable)status sort:(FUSDKDiscussionsSortTypes * _Nullable)sort limit:(FUSDKInt * _Nullable)limit skipDeleted:(FUSDKBoolean * _Nullable)skipDeleted startAfter:(NSString * _Nullable)startAfter __attribute__((swift_name("doCopy(discussionIds:label:discussionUrl:fromDate:toDate:fromCount:toCount:status:sort:limit:skipDeleted:startAfter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable discussionIds __attribute__((swift_name("discussionIds")));
@property (readonly) NSString * _Nullable discussionUrl __attribute__((swift_name("discussionUrl")));
@property (readonly) NSString * _Nullable fromCount __attribute__((swift_name("fromCount")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable fromDate __attribute__((swift_name("fromDate")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) FUSDKInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) FUSDKBoolean * _Nullable skipDeleted __attribute__((swift_name("skipDeleted")));
@property (readonly) FUSDKDiscussionsSortTypes * _Nullable sort __attribute__((swift_name("sort")));
@property (readonly) NSString * _Nullable startAfter __attribute__((swift_name("startAfter")));
@property (readonly) FUSDKDiscussionStatus * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable toCount __attribute__((swift_name("toCount")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable toDate __attribute__((swift_name("toDate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionsFilters.Companion")))
@interface FUSDKDiscussionsFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKDiscussionsFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionsSortTypes")))
@interface FUSDKDiscussionsSortTypes : FUSDKKotlinEnum<FUSDKDiscussionsSortTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKDiscussionsSortTypes *createdAtAsc __attribute__((swift_name("createdAtAsc")));
@property (class, readonly) FUSDKDiscussionsSortTypes *createdAtDesc __attribute__((swift_name("createdAtDesc")));
@property (class, readonly) FUSDKDiscussionsSortTypes *postsCountAsc __attribute__((swift_name("postsCountAsc")));
@property (class, readonly) FUSDKDiscussionsSortTypes *postsCountDesc __attribute__((swift_name("postsCountDesc")));
+ (FUSDKKotlinArray<FUSDKDiscussionsSortTypes *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKDiscussionsSortTypes *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EditVersion")))
@interface FUSDKEditVersion : FUSDKBase
- (instancetype)initWithContent:(NSString *)content updatedAt:(FUSDKKotlinx_datetimeInstant *)updatedAt __attribute__((swift_name("init(content:updatedAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKEditVersionCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKEditVersion *)doCopyContent:(NSString *)content updatedAt:(FUSDKKotlinx_datetimeInstant *)updatedAt __attribute__((swift_name("doCopy(content:updatedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) FUSDKKotlinx_datetimeInstant *updatedAt __attribute__((swift_name("updatedAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EditVersion.Companion")))
@interface FUSDKEditVersionCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKEditVersionCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meta")))
@interface FUSDKMeta : FUSDKBase
- (instancetype)initWithPagination:(FUSDKPagination_ * _Nullable)pagination __attribute__((swift_name("init(pagination:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMetaCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMeta *)doCopyPagination:(FUSDKPagination_ * _Nullable)pagination __attribute__((swift_name("doCopy(pagination:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKPagination_ * _Nullable pagination __attribute__((swift_name("pagination")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Meta.Companion")))
@interface FUSDKMetaCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMetaCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ModerationType")))
@interface FUSDKModerationType : FUSDKKotlinEnum<FUSDKModerationType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKModerationType *user __attribute__((swift_name("user")));
@property (class, readonly) FUSDKModerationType *staff __attribute__((swift_name("staff")));
+ (FUSDKKotlinArray<FUSDKModerationType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKModerationType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pagination_")))
@interface FUSDKPagination_ : FUSDKBase
- (instancetype)initWithLastCommentCreateTimestamp:(FUSDKKotlinx_datetimeInstant * _Nullable)lastCommentCreateTimestamp totalItems:(int32_t)totalItems nextPageStartsAfter:(NSString * _Nullable)nextPageStartsAfter __attribute__((swift_name("init(lastCommentCreateTimestamp:totalItems:nextPageStartsAfter:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPagination_Companion *companion __attribute__((swift_name("companion")));
- (FUSDKPagination_ *)doCopyLastCommentCreateTimestamp:(FUSDKKotlinx_datetimeInstant * _Nullable)lastCommentCreateTimestamp totalItems:(int32_t)totalItems nextPageStartsAfter:(NSString * _Nullable)nextPageStartsAfter __attribute__((swift_name("doCopy(lastCommentCreateTimestamp:totalItems:nextPageStartsAfter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable lastCommentCreateTimestamp __attribute__((swift_name("lastCommentCreateTimestamp")));
@property (readonly) NSString * _Nullable nextPageStartsAfter __attribute__((swift_name("nextPageStartsAfter")));
@property (readonly) int32_t totalItems __attribute__((swift_name("totalItems")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Pagination_.Companion")))
@interface FUSDKPagination_Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPagination_Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostsCountPerDiscussion")))
@interface FUSDKPostsCountPerDiscussion : FUSDKBase
- (instancetype)initWithId:(NSString *)id postsCount:(int32_t)postsCount __attribute__((swift_name("init(id:postsCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPostsCountPerDiscussionCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPostsCountPerDiscussion *)doCopyId:(NSString *)id postsCount:(int32_t)postsCount __attribute__((swift_name("doCopy(id:postsCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) int32_t postsCount __attribute__((swift_name("postsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostsCountPerDiscussion.Companion")))
@interface FUSDKPostsCountPerDiscussionCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPostsCountPerDiscussionCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostsFilters")))
@interface FUSDKPostsFilters : FUSDKBase
- (instancetype)initWithStartAfter:(NSString * _Nullable)startAfter limit:(FUSDKInt * _Nullable)limit sort:(FUSDKPostsSortTypes * _Nullable)sort skipDeleted:(FUSDKBoolean * _Nullable)skipDeleted skipModerated:(FUSDKBoolean * _Nullable)skipModerated __attribute__((swift_name("init(startAfter:limit:sort:skipDeleted:skipModerated:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPostsFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPostsFilters *)doCopyStartAfter:(NSString * _Nullable)startAfter limit:(FUSDKInt * _Nullable)limit sort:(FUSDKPostsSortTypes * _Nullable)sort skipDeleted:(FUSDKBoolean * _Nullable)skipDeleted skipModerated:(FUSDKBoolean * _Nullable)skipModerated __attribute__((swift_name("doCopy(startAfter:limit:sort:skipDeleted:skipModerated:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) FUSDKBoolean * _Nullable skipDeleted __attribute__((swift_name("skipDeleted")));
@property (readonly) FUSDKBoolean * _Nullable skipModerated __attribute__((swift_name("skipModerated")));
@property (readonly) FUSDKPostsSortTypes * _Nullable sort __attribute__((swift_name("sort")));
@property (readonly) NSString * _Nullable startAfter __attribute__((swift_name("startAfter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostsFilters.Companion")))
@interface FUSDKPostsFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPostsFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PostsSortTypes")))
@interface FUSDKPostsSortTypes : FUSDKKotlinEnum<FUSDKPostsSortTypes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKPostsSortTypes *oldest __attribute__((swift_name("oldest")));
@property (class, readonly) FUSDKPostsSortTypes *latest __attribute__((swift_name("latest")));
@property (class, readonly) FUSDKPostsSortTypes *interacted __attribute__((swift_name("interacted")));
@property (class, readonly) FUSDKPostsSortTypes *popular __attribute__((swift_name("popular")));
+ (FUSDKKotlinArray<FUSDKPostsSortTypes *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKPostsSortTypes *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReactToPost")))
@interface FUSDKReactToPost : FUSDKBase
- (instancetype)initWithReaction:(FUSDKReactionType *)reaction __attribute__((swift_name("init(reaction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKReactToPostCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKReactToPost *)doCopyReaction:(FUSDKReactionType *)reaction __attribute__((swift_name("doCopy(reaction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKReactionType *reaction __attribute__((swift_name("reaction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReactToPost.Companion")))
@interface FUSDKReactToPostCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKReactToPostCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Reaction")))
@interface FUSDKReaction : FUSDKBase
- (instancetype)initWithReactionCount:(int32_t)reactionCount type:(FUSDKReactionType *)type __attribute__((swift_name("init(reactionCount:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKReactionCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKReaction *)doCopyReactionCount:(int32_t)reactionCount type:(FUSDKReactionType *)type __attribute__((swift_name("doCopy(reactionCount:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t reactionCount __attribute__((swift_name("reactionCount")));
@property (readonly) FUSDKReactionType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Reaction.Companion")))
@interface FUSDKReactionCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKReactionCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReactionType")))
@interface FUSDKReactionType : FUSDKKotlinEnum<FUSDKReactionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKReactionType *like __attribute__((swift_name("like")));
@property (class, readonly) FUSDKReactionType *love __attribute__((swift_name("love")));
@property (class, readonly) FUSDKReactionType *laugh __attribute__((swift_name("laugh")));
@property (class, readonly) FUSDKReactionType *care __attribute__((swift_name("care")));
@property (class, readonly) FUSDKReactionType *wow __attribute__((swift_name("wow")));
@property (class, readonly) FUSDKReactionType *sad __attribute__((swift_name("sad")));
@property (class, readonly) FUSDKReactionType *dislike __attribute__((swift_name("dislike")));
@property (class, readonly) FUSDKReactionType *angry __attribute__((swift_name("angry")));
+ (FUSDKKotlinArray<FUSDKReactionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKReactionType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Report")))
@interface FUSDKReport : FUSDKBase
- (instancetype)initWithUserId:(NSString *)userId reason:(FUSDKReactionType *)reason reasonDetails:(NSString * _Nullable)reasonDetails __attribute__((swift_name("init(userId:reason:reasonDetails:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKReportCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKReport *)doCopyUserId:(NSString *)userId reason:(FUSDKReactionType *)reason reasonDetails:(NSString * _Nullable)reasonDetails __attribute__((swift_name("doCopy(userId:reason:reasonDetails:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKReactionType *reason __attribute__((swift_name("reason")));
@property (readonly) NSString * _Nullable reasonDetails __attribute__((swift_name("reasonDetails")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Report.Companion")))
@interface FUSDKReportCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKReportCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReportPost")))
@interface FUSDKReportPost : FUSDKBase
- (instancetype)initWithReason:(FUSDKReportReasonType *)reason reasonDetails:(NSString * _Nullable)reasonDetails __attribute__((swift_name("init(reason:reasonDetails:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKReportPostCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKReportPost *)doCopyReason:(FUSDKReportReasonType *)reason reasonDetails:(NSString * _Nullable)reasonDetails __attribute__((swift_name("doCopy(reason:reasonDetails:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKReportReasonType *reason __attribute__((swift_name("reason")));
@property (readonly) NSString * _Nullable reasonDetails __attribute__((swift_name("reasonDetails")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReportPost.Companion")))
@interface FUSDKReportPostCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKReportPostCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReportReasonType")))
@interface FUSDKReportReasonType : FUSDKKotlinEnum<FUSDKReportReasonType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKReportReasonTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKReportReasonType *spam __attribute__((swift_name("spam")));
@property (class, readonly) FUSDKReportReasonType *notOnTheSubject __attribute__((swift_name("notOnTheSubject")));
@property (class, readonly) FUSDKReportReasonType *ad __attribute__((swift_name("ad")));
@property (class, readonly) FUSDKReportReasonType *copyright __attribute__((swift_name("copyright")));
@property (class, readonly) FUSDKReportReasonType *explicitSexualContent __attribute__((swift_name("explicitSexualContent")));
@property (class, readonly) FUSDKReportReasonType *hatefulSpeech __attribute__((swift_name("hatefulSpeech")));
@property (class, readonly) FUSDKReportReasonType *insult __attribute__((swift_name("insult")));
@property (class, readonly) FUSDKReportReasonType *other __attribute__((swift_name("other")));
+ (FUSDKKotlinArray<FUSDKReportReasonType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKReportReasonType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReportReasonType.Companion")))
@interface FUSDKReportReasonTypeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKReportReasonTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TopDiscussionsFilters")))
@interface FUSDKTopDiscussionsFilters : FUSDKBase
- (instancetype)initWithContentType:(NSString * _Nullable)contentType entityIds:(NSArray<NSString *> * _Nullable)entityIds entityType:(FUSDKTopDiscussionEntityType * _Nullable)entityType fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate startAfter:(NSString * _Nullable)startAfter limit:(FUSDKInt * _Nullable)limit __attribute__((swift_name("init(contentType:entityIds:entityType:fromDate:toDate:startAfter:limit:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTopDiscussionsFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTopDiscussionsFilters *)doCopyContentType:(NSString * _Nullable)contentType entityIds:(NSArray<NSString *> * _Nullable)entityIds entityType:(FUSDKTopDiscussionEntityType * _Nullable)entityType fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate startAfter:(NSString * _Nullable)startAfter limit:(FUSDKInt * _Nullable)limit __attribute__((swift_name("doCopy(contentType:entityIds:entityType:fromDate:toDate:startAfter:limit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) NSArray<NSString *> * _Nullable entityIds __attribute__((swift_name("entityIds")));
@property (readonly) FUSDKTopDiscussionEntityType * _Nullable entityType __attribute__((swift_name("entityType")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable fromDate __attribute__((swift_name("fromDate")));
@property (readonly) FUSDKInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) NSString * _Nullable startAfter __attribute__((swift_name("startAfter")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable toDate __attribute__((swift_name("toDate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TopDiscussionsFilters.Companion")))
@interface FUSDKTopDiscussionsFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTopDiscussionsFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdatePost")))
@interface FUSDKUpdatePost : FUSDKBase
- (instancetype)initWithContent:(NSString *)content __attribute__((swift_name("init(content:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKUpdatePostCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKUpdatePost *)doCopyContent:(NSString *)content __attribute__((swift_name("doCopy(content:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdatePost.Companion")))
@interface FUSDKUpdatePostCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKUpdatePostCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("FootballApiService")))
@interface FUSDKFootballApiService : FUSDKBase
- (instancetype)initWithApiClient:(FUSDKAPIClientService *)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCompetitionByIdId:(NSString *)id disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCompetitionById(id:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCompetitionsCompetitionIds:(NSString * _Nullable)competitionIds countryId:(NSString * _Nullable)countryId name:(NSString * _Nullable)name gender:(FUSDKGender * _Nullable)gender type:(FUSDKCompetitionType * _Nullable)type sortField:(NSString * _Nullable)sortField sortOrder:(FUSDKSortOrder * _Nullable)sortOrder disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCompetitions(competitionIds:countryId:name:gender:type:sortField:sortOrder:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCountriesDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCountries(disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMatchByIdId:(NSString *)id disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMatchById(id:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMatchesCountryIds:(NSString * _Nullable)countryIds competitionIds:(NSString * _Nullable)competitionIds matchIds:(NSString * _Nullable)matchIds status:(FUSDKMatchStatus * _Nullable)status teamIds:(NSString * _Nullable)teamIds fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page sortField:(NSString * _Nullable)sortField sortOrder:(FUSDKSortOrder * _Nullable)sortOrder disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMatches(countryIds:competitionIds:matchIds:status:teamIds:fromDate:toDate:limit:page:sortField:sortOrder:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getNextMatchForPlayerId:(NSString *)id disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getNextMatchForPlayer(id:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getNextMatchForTeamId:(NSString *)id disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getNextMatchForTeam(id:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPlayerByIdId:(NSString *)id disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPlayerById(id:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPlayersName:(NSString * _Nullable)name countryId:(NSString * _Nullable)countryId playerIds:(NSString * _Nullable)playerIds scope:(NSString * _Nullable)scope limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page sortField:(NSString * _Nullable)sortField sortOrder:(FUSDKSortOrder * _Nullable)sortOrder disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPlayers(name:countryId:playerIds:scope:limit:page:sortField:sortOrder:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPrevMatchForPlayerId:(NSString *)id disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPrevMatchForPlayer(id:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPrevMatchForTeamId:(NSString *)id disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPrevMatchForTeam(id:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTeamByIdId:(NSString *)id disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTeamById(id:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTeamsName:(NSString * _Nullable)name countryId:(NSString * _Nullable)countryId national:(FUSDKBoolean * _Nullable)national gender:(FUSDKGender * _Nullable)gender limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page sortField:(NSString * _Nullable)sortField sortOrder:(FUSDKSortOrder * _Nullable)sortOrder teamIds:(NSString * _Nullable)teamIds scope:(NSString *)scope disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTeams(name:countryId:national:gender:limit:page:sortField:sortOrder:teamIds:scope:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTemplateMatchesTemplateId:(NSString *)templateId groupId:(NSString * _Nullable)groupId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTemplateMatches(templateId:groupId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTopCompetitionsDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTopCompetitions(disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTopPlayersDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTopPlayers(disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTopTeamsDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTopTeams(disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchQuery:(NSString *)query entities:(NSString * _Nullable)entities scope:(NSString * _Nullable)scope disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("search(query:entities:scope:disableCache:completionHandler:)")));
@end

__attribute__((swift_name("IFootball")))
@protocol FUSDKIFootball
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCompetitionByIdId:(NSString *)id disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCompetitionFullModel * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCompetitionById(id:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCompetitionsFilters:(FUSDKCompetitionFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(NSArray<FUSDKCompetitionBasicModel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCompetitions(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCountriesDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(NSArray<FUSDKFootballCountryModel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCountries(disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMatchByIdId:(NSString *)id disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKMatchFullModel * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMatchById(id:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMatchesFilters:(FUSDKMatchFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKPagedResponse<NSArray<FUSDKMatchBasicModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMatches(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getNextMatchForPlayerId:(NSString *)id disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKMatchFullModel * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getNextMatchForPlayer(id:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getNextMatchForTeamId:(NSString *)id disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKMatchFullModel * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getNextMatchForTeam(id:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPlayerByIdId:(NSString *)id disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKPlayerFullModel * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPlayerById(id:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPlayersFilters:(FUSDKPlayerFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKPagedResponse<NSArray<FUSDKPlayerBasicModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getPlayers(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPrevMatchForPlayerId:(NSString *)id disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKMatchFullModel * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPrevMatchForPlayer(id:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPrevMatchForTeamId:(NSString *)id disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKMatchFullModel * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPrevMatchForTeam(id:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTeamByIdId:(NSString *)id disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKTeamFullModel * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTeamById(id:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTeamFormTeamId:(NSString *)teamId filters:(FUSDKTeamFormFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKTeamFormModel * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTeamForm(teamId:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTeamsFilters:(FUSDKTeamFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKPagedResponse<NSArray<FUSDKTeamBasicModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getTeams(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTopCompetitionsDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(NSArray<FUSDKCompetitionBasicModel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTopCompetitions(disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTopPlayersDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(NSArray<FUSDKPlayerBasicModel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTopPlayers(disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTopTeamsDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(NSArray<FUSDKTeamBasicModel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTopTeams(disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchFilters:(FUSDKSearchFilters *)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKSearchResult * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("search(filters:disableCache:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AssetsFlag")))
@interface FUSDKAssetsFlag : FUSDKBase
- (instancetype)initWithFlag:(NSString * _Nullable)flag __attribute__((swift_name("init(flag:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKAssetsFlagCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKAssetsFlag *)doCopyFlag:(NSString * _Nullable)flag __attribute__((swift_name("doCopy(flag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable flag __attribute__((swift_name("flag")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AssetsFlag.Companion")))
@interface FUSDKAssetsFlagCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKAssetsFlagCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AssetsHeadshot")))
@interface FUSDKAssetsHeadshot : FUSDKBase
- (instancetype)initWithHeadshot:(NSString *)headshot __attribute__((swift_name("init(headshot:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKAssetsHeadshotCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKAssetsHeadshot *)doCopyHeadshot:(NSString *)headshot __attribute__((swift_name("doCopy(headshot:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *headshot __attribute__((swift_name("headshot")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AssetsHeadshot.Companion")))
@interface FUSDKAssetsHeadshotCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKAssetsHeadshotCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AssetsModel")))
@interface FUSDKAssetsModel : FUSDKBase
- (instancetype)initWithLogo:(NSString * _Nullable)logo __attribute__((swift_name("init(logo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKAssetsModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKAssetsModel *)doCopyLogo:(NSString * _Nullable)logo __attribute__((swift_name("doCopy(logo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable logo __attribute__((swift_name("logo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AssetsModel.Companion")))
@interface FUSDKAssetsModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKAssetsModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompetitionBasicModel")))
@interface FUSDKCompetitionBasicModel : FUSDKBase
- (instancetype)initWithId:(NSString *)id country:(FUSDKFootballCountryModel * _Nullable)country gender:(FUSDKGender * _Nullable)gender assets:(FUSDKAssetsModel * _Nullable)assets type:(FUSDKCompetitionType * _Nullable)type name:(NSString *)name __attribute__((swift_name("init(id:country:gender:assets:type:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKCompetitionBasicModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKCompetitionBasicModel *)doCopyId:(NSString *)id country:(FUSDKFootballCountryModel * _Nullable)country gender:(FUSDKGender * _Nullable)gender assets:(FUSDKAssetsModel * _Nullable)assets type:(FUSDKCompetitionType * _Nullable)type name:(NSString *)name __attribute__((swift_name("doCopy(id:country:gender:assets:type:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKAssetsModel * _Nullable assets __attribute__((swift_name("assets")));
@property (readonly) FUSDKFootballCountryModel * _Nullable country __attribute__((swift_name("country")));
@property (readonly) FUSDKGender * _Nullable gender __attribute__((swift_name("gender")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) FUSDKCompetitionType * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompetitionBasicModel.Companion")))
@interface FUSDKCompetitionBasicModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKCompetitionBasicModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompetitionFilters")))
@interface FUSDKCompetitionFilters : FUSDKBase
- (instancetype)initWithCountryId:(NSString * _Nullable)countryId name:(NSString * _Nullable)name gender:(FUSDKGender * _Nullable)gender type:(FUSDKCompetitionType * _Nullable)type sortField:(NSString * _Nullable)sortField sortOrder:(FUSDKSortOrder * _Nullable)sortOrder competitionIds:(NSArray<NSString *> * _Nullable)competitionIds __attribute__((swift_name("init(countryId:name:gender:type:sortField:sortOrder:competitionIds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKCompetitionFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKCompetitionFilters *)doCopyCountryId:(NSString * _Nullable)countryId name:(NSString * _Nullable)name gender:(FUSDKGender * _Nullable)gender type:(FUSDKCompetitionType * _Nullable)type sortField:(NSString * _Nullable)sortField sortOrder:(FUSDKSortOrder * _Nullable)sortOrder competitionIds:(NSArray<NSString *> * _Nullable)competitionIds __attribute__((swift_name("doCopy(countryId:name:gender:type:sortField:sortOrder:competitionIds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable competitionIds __attribute__((swift_name("competitionIds")));
@property (readonly) NSString * _Nullable countryId __attribute__((swift_name("countryId")));
@property (readonly) FUSDKGender * _Nullable gender __attribute__((swift_name("gender")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable sortField __attribute__((swift_name("sortField")));
@property (readonly) FUSDKSortOrder * _Nullable sortOrder __attribute__((swift_name("sortOrder")));
@property (readonly) FUSDKCompetitionType * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompetitionFilters.Companion")))
@interface FUSDKCompetitionFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKCompetitionFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompetitionFullModel")))
@interface FUSDKCompetitionFullModel : FUSDKBase
- (instancetype)initWithId:(NSString *)id country:(FUSDKFootballCountryModel * _Nullable)country gender:(FUSDKGender * _Nullable)gender assets:(FUSDKAssetsModel * _Nullable)assets type:(FUSDKCompetitionType *)type name:(NSString *)name participants:(NSArray<FUSDKTeamFullModel *> * _Nullable)participants __attribute__((swift_name("init(id:country:gender:assets:type:name:participants:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKCompetitionFullModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKCompetitionFullModel *)doCopyId:(NSString *)id country:(FUSDKFootballCountryModel * _Nullable)country gender:(FUSDKGender * _Nullable)gender assets:(FUSDKAssetsModel * _Nullable)assets type:(FUSDKCompetitionType *)type name:(NSString *)name participants:(NSArray<FUSDKTeamFullModel *> * _Nullable)participants __attribute__((swift_name("doCopy(id:country:gender:assets:type:name:participants:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKAssetsModel * _Nullable assets __attribute__((swift_name("assets")));
@property (readonly) FUSDKFootballCountryModel * _Nullable country __attribute__((swift_name("country")));
@property (readonly) FUSDKGender * _Nullable gender __attribute__((swift_name("gender")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<FUSDKTeamFullModel *> * _Nullable participants __attribute__((swift_name("participants")));
@property (readonly) FUSDKCompetitionType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompetitionFullModel.Companion")))
@interface FUSDKCompetitionFullModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKCompetitionFullModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompetitionType")))
@interface FUSDKCompetitionType : FUSDKKotlinEnum<FUSDKCompetitionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKCompetitionType *cup __attribute__((swift_name("cup")));
@property (class, readonly) FUSDKCompetitionType *league __attribute__((swift_name("league")));
@property (class, readonly) FUSDKCompetitionType *playoff __attribute__((swift_name("playoff")));
+ (FUSDKKotlinArray<FUSDKCompetitionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKCompetitionType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FootballCountryModel")))
@interface FUSDKFootballCountryModel : FUSDKBase
- (instancetype)initWithId:(NSString *)id countryCode:(NSString * _Nullable)countryCode assets:(FUSDKAssetsFlag * _Nullable)assets name:(NSString *)name alias:(NSString * _Nullable)alias __attribute__((swift_name("init(id:countryCode:assets:name:alias:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKFootballCountryModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKFootballCountryModel *)doCopyId:(NSString *)id countryCode:(NSString * _Nullable)countryCode assets:(FUSDKAssetsFlag * _Nullable)assets name:(NSString *)name alias:(NSString * _Nullable)alias __attribute__((swift_name("doCopy(id:countryCode:assets:name:alias:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable alias __attribute__((swift_name("alias")));
@property (readonly) FUSDKAssetsFlag * _Nullable assets __attribute__((swift_name("assets")));
@property (readonly) NSString * _Nullable countryCode __attribute__((swift_name("countryCode")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FootballCountryModel.Companion")))
@interface FUSDKFootballCountryModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFootballCountryModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Gender")))
@interface FUSDKGender : FUSDKKotlinEnum<FUSDKGender *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKGenderCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKGender *male __attribute__((swift_name("male")));
@property (class, readonly) FUSDKGender *female __attribute__((swift_name("female")));
@property (class, readonly) FUSDKGender *unspecified __attribute__((swift_name("unspecified")));
+ (FUSDKKotlinArray<FUSDKGender *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKGender *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Gender.Companion")))
@interface FUSDKGenderCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGenderCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("MatchBasicModel")))
@interface FUSDKMatchBasicModel : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id kickoffAt:(FUSDKKotlinx_datetimeInstant * _Nullable)kickoffAt finishedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)finishedAt updatedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)updatedAt availableMarkets:(NSArray<FUSDKMarket *> * _Nullable)availableMarkets homeTeam:(FUSDKTeamBasicModel * _Nullable)homeTeam awayTeam:(FUSDKTeamBasicModel * _Nullable)awayTeam isDeleted:(BOOL)isDeleted undecided:(BOOL)undecided lineupsConfirmed:(FUSDKBoolean * _Nullable)lineupsConfirmed startedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)startedAt minute:(FUSDKInt * _Nullable)minute scores:(FUSDKMatchScore * _Nullable)scores context:(FUSDKMatchContext * _Nullable)context status:(FUSDKStatus * _Nullable)status serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:kickoffAt:finishedAt:updatedAt:availableMarkets:homeTeam:awayTeam:isDeleted:undecided:lineupsConfirmed:startedAt:minute:scores:context:status:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMatchBasicModelCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<FUSDKMarket *> * _Nullable availableMarkets __attribute__((swift_name("availableMarkets")));
@property FUSDKTeamBasicModel *awayTeam __attribute__((swift_name("awayTeam")));
@property (readonly) FUSDKMatchContext * _Nullable context __attribute__((swift_name("context")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable finishedAt __attribute__((swift_name("finishedAt")));
@property FUSDKTeamBasicModel *homeTeam __attribute__((swift_name("homeTeam")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isDeleted __attribute__((swift_name("isDeleted")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable kickoffAt __attribute__((swift_name("kickoffAt")));
@property (readonly) FUSDKBoolean * _Nullable lineupsConfirmed __attribute__((swift_name("lineupsConfirmed")));
@property (readonly) FUSDKInt * _Nullable minute __attribute__((swift_name("minute")));
@property (readonly) FUSDKMatchScore * _Nullable scores __attribute__((swift_name("scores")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable startedAt __attribute__((swift_name("startedAt")));
@property (readonly) FUSDKStatus * _Nullable status __attribute__((swift_name("status")));
@property (readonly) BOOL undecided __attribute__((swift_name("undecided")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchBasicModel.Companion")))
@interface FUSDKMatchBasicModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMatchBasicModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchContext")))
@interface FUSDKMatchContext : FUSDKBase
- (instancetype)initWithCompetition:(FUSDKCompetitionBasicModel * _Nullable)competition __attribute__((swift_name("init(competition:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMatchContextCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMatchContext *)doCopyCompetition:(FUSDKCompetitionBasicModel * _Nullable)competition __attribute__((swift_name("doCopy(competition:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKCompetitionBasicModel * _Nullable competition __attribute__((swift_name("competition")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchContext.Companion")))
@interface FUSDKMatchContextCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMatchContextCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchFilters")))
@interface FUSDKMatchFilters : FUSDKBase
- (instancetype)initWithCountryIds:(NSArray<NSString *> * _Nullable)countryIds competitionIds:(NSArray<NSString *> * _Nullable)competitionIds matchIds:(NSArray<NSString *> * _Nullable)matchIds status:(FUSDKMatchStatus * _Nullable)status teamIds:(NSArray<NSString *> * _Nullable)teamIds fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page sortField:(NSString * _Nullable)sortField sortOrder:(FUSDKSortOrder * _Nullable)sortOrder __attribute__((swift_name("init(countryIds:competitionIds:matchIds:status:teamIds:fromDate:toDate:limit:page:sortField:sortOrder:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMatchFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMatchFilters *)doCopyCountryIds:(NSArray<NSString *> * _Nullable)countryIds competitionIds:(NSArray<NSString *> * _Nullable)competitionIds matchIds:(NSArray<NSString *> * _Nullable)matchIds status:(FUSDKMatchStatus * _Nullable)status teamIds:(NSArray<NSString *> * _Nullable)teamIds fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page sortField:(NSString * _Nullable)sortField sortOrder:(FUSDKSortOrder * _Nullable)sortOrder __attribute__((swift_name("doCopy(countryIds:competitionIds:matchIds:status:teamIds:fromDate:toDate:limit:page:sortField:sortOrder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable competitionIds __attribute__((swift_name("competitionIds")));
@property (readonly) NSArray<NSString *> * _Nullable countryIds __attribute__((swift_name("countryIds")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable fromDate __attribute__((swift_name("fromDate")));
@property (readonly) FUSDKInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) NSArray<NSString *> * _Nullable matchIds __attribute__((swift_name("matchIds")));
@property (readonly) FUSDKInt * _Nullable page __attribute__((swift_name("page")));
@property (readonly) NSString * _Nullable sortField __attribute__((swift_name("sortField")));
@property (readonly) FUSDKSortOrder * _Nullable sortOrder __attribute__((swift_name("sortOrder")));
@property (readonly) FUSDKMatchStatus * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSArray<NSString *> * _Nullable teamIds __attribute__((swift_name("teamIds")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable toDate __attribute__((swift_name("toDate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchFilters.Companion")))
@interface FUSDKMatchFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMatchFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchFullModel")))
@interface FUSDKMatchFullModel : FUSDKMatchBasicModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id kickoffAt:(FUSDKKotlinx_datetimeInstant * _Nullable)kickoffAt finishedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)finishedAt updatedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)updatedAt availableMarkets:(NSArray<FUSDKMarket *> * _Nullable)availableMarkets homeTeam:(FUSDKTeamBasicModel * _Nullable)homeTeam awayTeam:(FUSDKTeamBasicModel * _Nullable)awayTeam isDeleted:(BOOL)isDeleted undecided:(BOOL)undecided lineupsConfirmed:(FUSDKBoolean * _Nullable)lineupsConfirmed startedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)startedAt minute:(FUSDKInt * _Nullable)minute scores:(FUSDKMatchScore * _Nullable)scores context:(FUSDKMatchContext * _Nullable)context status:(FUSDKStatus * _Nullable)status serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:kickoffAt:finishedAt:updatedAt:availableMarkets:homeTeam:awayTeam:isDeleted:undecided:lineupsConfirmed:startedAt:minute:scores:context:status:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKMatchFullModelCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) FUSDKMatchStats * _Nullable stats __attribute__((swift_name("stats")));
@property (readonly) NSArray<FUSDKTimelineEvent *> * _Nullable timeline __attribute__((swift_name("timeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchFullModel.Companion")))
@interface FUSDKMatchFullModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMatchFullModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchScore")))
@interface FUSDKMatchScore : FUSDKBase
- (instancetype)initWithFtScore:(FUSDKMatchScoreResult * _Nullable)ftScore htScore:(FUSDKMatchScoreResult * _Nullable)htScore aetScore:(FUSDKMatchScoreResult * _Nullable)aetScore aggScore:(FUSDKMatchScoreResult * _Nullable)aggScore penScore:(FUSDKMatchScoreResult * _Nullable)penScore __attribute__((swift_name("init(ftScore:htScore:aetScore:aggScore:penScore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMatchScoreCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMatchScore *)doCopyFtScore:(FUSDKMatchScoreResult * _Nullable)ftScore htScore:(FUSDKMatchScoreResult * _Nullable)htScore aetScore:(FUSDKMatchScoreResult * _Nullable)aetScore aggScore:(FUSDKMatchScoreResult * _Nullable)aggScore penScore:(FUSDKMatchScoreResult * _Nullable)penScore __attribute__((swift_name("doCopy(ftScore:htScore:aetScore:aggScore:penScore:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKMatchScoreResult * _Nullable aetScore __attribute__((swift_name("aetScore")));
@property (readonly) FUSDKMatchScoreResult * _Nullable aggScore __attribute__((swift_name("aggScore")));
@property (readonly) FUSDKMatchScoreResult * _Nullable ftScore __attribute__((swift_name("ftScore")));
@property (readonly) FUSDKMatchScoreResult * _Nullable htScore __attribute__((swift_name("htScore")));
@property (readonly) FUSDKMatchScoreResult * _Nullable penScore __attribute__((swift_name("penScore")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchScore.Companion")))
@interface FUSDKMatchScoreCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMatchScoreCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchScoreResult")))
@interface FUSDKMatchScoreResult : FUSDKBase
- (instancetype)initWithHomeGoals:(FUSDKInt * _Nullable)homeGoals awayGoals:(FUSDKInt * _Nullable)awayGoals __attribute__((swift_name("init(homeGoals:awayGoals:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMatchScoreResultCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMatchScoreResult *)doCopyHomeGoals:(FUSDKInt * _Nullable)homeGoals awayGoals:(FUSDKInt * _Nullable)awayGoals __attribute__((swift_name("doCopy(homeGoals:awayGoals:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKInt * _Nullable awayGoals __attribute__((swift_name("awayGoals")));
@property (readonly) FUSDKInt * _Nullable homeGoals __attribute__((swift_name("homeGoals")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchScoreResult.Companion")))
@interface FUSDKMatchScoreResultCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMatchScoreResultCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchStatResult")))
@interface FUSDKMatchStatResult : FUSDKBase
- (instancetype)initWithHomeTeam:(FUSDKInt * _Nullable)homeTeam awayTeam:(FUSDKInt * _Nullable)awayTeam __attribute__((swift_name("init(homeTeam:awayTeam:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMatchStatResultCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMatchStatResult *)doCopyHomeTeam:(FUSDKInt * _Nullable)homeTeam awayTeam:(FUSDKInt * _Nullable)awayTeam __attribute__((swift_name("doCopy(homeTeam:awayTeam:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKInt * _Nullable awayTeam __attribute__((swift_name("awayTeam")));
@property (readonly) FUSDKInt * _Nullable homeTeam __attribute__((swift_name("homeTeam")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchStatResult.Companion")))
@interface FUSDKMatchStatResultCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMatchStatResultCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchStats")))
@interface FUSDKMatchStats : FUSDKBase
- (instancetype)initWithCorners:(FUSDKMatchStatResult * _Nullable)corners crosses:(FUSDKMatchStatResult * _Nullable)crosses offside:(FUSDKMatchStatResult * _Nullable)offside shotsOn:(FUSDKMatchStatResult * _Nullable)shotsOn throwIn:(FUSDKMatchStatResult * _Nullable)throwIn redCards:(FUSDKMatchStatResult * _Nullable)redCards shotsOff:(FUSDKMatchStatResult * _Nullable)shotsOff goalKicks:(FUSDKMatchStatResult * _Nullable)goalKicks possession:(FUSDKMatchStatResult * _Nullable)possession treatments:(FUSDKMatchStatResult * _Nullable)treatments yellowCards:(FUSDKMatchStatResult * _Nullable)yellowCards shotsBlocked:(FUSDKMatchStatResult * _Nullable)shotsBlocked substitutions:(FUSDKMatchStatResult * _Nullable)substitutions counterAttacks:(FUSDKMatchStatResult * _Nullable)counterAttacks foulsCommitted:(FUSDKMatchStatResult * _Nullable)foulsCommitted __attribute__((swift_name("init(corners:crosses:offside:shotsOn:throwIn:redCards:shotsOff:goalKicks:possession:treatments:yellowCards:shotsBlocked:substitutions:counterAttacks:foulsCommitted:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMatchStatsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMatchStats *)doCopyCorners:(FUSDKMatchStatResult * _Nullable)corners crosses:(FUSDKMatchStatResult * _Nullable)crosses offside:(FUSDKMatchStatResult * _Nullable)offside shotsOn:(FUSDKMatchStatResult * _Nullable)shotsOn throwIn:(FUSDKMatchStatResult * _Nullable)throwIn redCards:(FUSDKMatchStatResult * _Nullable)redCards shotsOff:(FUSDKMatchStatResult * _Nullable)shotsOff goalKicks:(FUSDKMatchStatResult * _Nullable)goalKicks possession:(FUSDKMatchStatResult * _Nullable)possession treatments:(FUSDKMatchStatResult * _Nullable)treatments yellowCards:(FUSDKMatchStatResult * _Nullable)yellowCards shotsBlocked:(FUSDKMatchStatResult * _Nullable)shotsBlocked substitutions:(FUSDKMatchStatResult * _Nullable)substitutions counterAttacks:(FUSDKMatchStatResult * _Nullable)counterAttacks foulsCommitted:(FUSDKMatchStatResult * _Nullable)foulsCommitted __attribute__((swift_name("doCopy(corners:crosses:offside:shotsOn:throwIn:redCards:shotsOff:goalKicks:possession:treatments:yellowCards:shotsBlocked:substitutions:counterAttacks:foulsCommitted:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKMatchStatResult * _Nullable corners __attribute__((swift_name("corners")));
@property (readonly) FUSDKMatchStatResult * _Nullable counterAttacks __attribute__((swift_name("counterAttacks")));
@property (readonly) FUSDKMatchStatResult * _Nullable crosses __attribute__((swift_name("crosses")));
@property (readonly) FUSDKMatchStatResult * _Nullable foulsCommitted __attribute__((swift_name("foulsCommitted")));
@property (readonly) FUSDKMatchStatResult * _Nullable goalKicks __attribute__((swift_name("goalKicks")));
@property (readonly) FUSDKMatchStatResult * _Nullable offside __attribute__((swift_name("offside")));
@property (readonly) FUSDKMatchStatResult * _Nullable possession __attribute__((swift_name("possession")));
@property (readonly) FUSDKMatchStatResult * _Nullable redCards __attribute__((swift_name("redCards")));
@property (readonly) FUSDKMatchStatResult * _Nullable shotsBlocked __attribute__((swift_name("shotsBlocked")));
@property (readonly) FUSDKMatchStatResult * _Nullable shotsOff __attribute__((swift_name("shotsOff")));
@property (readonly) FUSDKMatchStatResult * _Nullable shotsOn __attribute__((swift_name("shotsOn")));
@property (readonly) FUSDKMatchStatResult * _Nullable substitutions __attribute__((swift_name("substitutions")));
@property (readonly) FUSDKMatchStatResult * _Nullable throwIn __attribute__((swift_name("throwIn")));
@property (readonly) FUSDKMatchStatResult * _Nullable treatments __attribute__((swift_name("treatments")));
@property (readonly) FUSDKMatchStatResult * _Nullable yellowCards __attribute__((swift_name("yellowCards")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchStats.Companion")))
@interface FUSDKMatchStatsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMatchStatsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchStatus")))
@interface FUSDKMatchStatus : FUSDKKotlinEnum<FUSDKMatchStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKMatchStatus *live __attribute__((swift_name("live")));
@property (class, readonly) FUSDKMatchStatus *upcoming __attribute__((swift_name("upcoming")));
@property (class, readonly) FUSDKMatchStatus *finished __attribute__((swift_name("finished")));
+ (FUSDKKotlinArray<FUSDKMatchStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKMatchStatus *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerBasicModel")))
@interface FUSDKPlayerBasicModel : FUSDKBase
- (instancetype)initWithId:(NSString *)id country:(FUSDKFootballCountryModel * _Nullable)country birthDate:(NSString * _Nullable)birthDate name:(NSString *)name firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName position:(FUSDKPosition * _Nullable)position assets:(FUSDKAssetsHeadshot * _Nullable)assets isDeleted:(BOOL)isDeleted undecided:(BOOL)undecided __attribute__((swift_name("init(id:country:birthDate:name:firstName:lastName:position:assets:isDeleted:undecided:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPlayerBasicModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPlayerBasicModel *)doCopyId:(NSString *)id country:(FUSDKFootballCountryModel * _Nullable)country birthDate:(NSString * _Nullable)birthDate name:(NSString *)name firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName position:(FUSDKPosition * _Nullable)position assets:(FUSDKAssetsHeadshot * _Nullable)assets isDeleted:(BOOL)isDeleted undecided:(BOOL)undecided __attribute__((swift_name("doCopy(id:country:birthDate:name:firstName:lastName:position:assets:isDeleted:undecided:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKAssetsHeadshot * _Nullable assets __attribute__((swift_name("assets")));
@property (readonly) NSString * _Nullable birthDate __attribute__((swift_name("birthDate")));
@property (readonly) FUSDKFootballCountryModel * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isDeleted __attribute__((swift_name("isDeleted")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) FUSDKPosition * _Nullable position __attribute__((swift_name("position")));
@property (readonly) BOOL undecided __attribute__((swift_name("undecided")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerBasicModel.Companion")))
@interface FUSDKPlayerBasicModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPlayerBasicModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerFilters")))
@interface FUSDKPlayerFilters : FUSDKBase
- (instancetype)initWithCountryId:(NSString * _Nullable)countryId scope:(NSArray<NSString *> * _Nullable)scope name:(NSString * _Nullable)name playerIds:(NSArray<NSString *> * _Nullable)playerIds limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page sortField:(NSString * _Nullable)sortField sortOrder:(FUSDKSortOrder * _Nullable)sortOrder __attribute__((swift_name("init(countryId:scope:name:playerIds:limit:page:sortField:sortOrder:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPlayerFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPlayerFilters *)doCopyCountryId:(NSString * _Nullable)countryId scope:(NSArray<NSString *> * _Nullable)scope name:(NSString * _Nullable)name playerIds:(NSArray<NSString *> * _Nullable)playerIds limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page sortField:(NSString * _Nullable)sortField sortOrder:(FUSDKSortOrder * _Nullable)sortOrder __attribute__((swift_name("doCopy(countryId:scope:name:playerIds:limit:page:sortField:sortOrder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable countryId __attribute__((swift_name("countryId")));
@property (readonly) FUSDKInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) FUSDKInt * _Nullable page __attribute__((swift_name("page")));
@property (readonly) NSArray<NSString *> * _Nullable playerIds __attribute__((swift_name("playerIds")));
@property (readonly) NSArray<NSString *> * _Nullable scope __attribute__((swift_name("scope")));
@property (readonly) NSString * _Nullable sortField __attribute__((swift_name("sortField")));
@property (readonly) FUSDKSortOrder * _Nullable sortOrder __attribute__((swift_name("sortOrder")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerFilters.Companion")))
@interface FUSDKPlayerFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPlayerFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerFullModel")))
@interface FUSDKPlayerFullModel : FUSDKBase
- (instancetype)initWithId:(NSString *)id country:(FUSDKFootballCountryModel * _Nullable)country birthDate:(NSString * _Nullable)birthDate firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName position:(FUSDKPosition * _Nullable)position assets:(FUSDKAssetsHeadshot * _Nullable)assets name:(NSString *)name teams:(NSArray<FUSDKTeamBasicModel *> * _Nullable)teams competitions:(NSArray<FUSDKCompetitionBasicModel *> * _Nullable)competitions isDeleted:(BOOL)isDeleted undecided:(BOOL)undecided __attribute__((swift_name("init(id:country:birthDate:firstName:lastName:position:assets:name:teams:competitions:isDeleted:undecided:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPlayerFullModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPlayerFullModel *)doCopyId:(NSString *)id country:(FUSDKFootballCountryModel * _Nullable)country birthDate:(NSString * _Nullable)birthDate firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName position:(FUSDKPosition * _Nullable)position assets:(FUSDKAssetsHeadshot * _Nullable)assets name:(NSString *)name teams:(NSArray<FUSDKTeamBasicModel *> * _Nullable)teams competitions:(NSArray<FUSDKCompetitionBasicModel *> * _Nullable)competitions isDeleted:(BOOL)isDeleted undecided:(BOOL)undecided __attribute__((swift_name("doCopy(id:country:birthDate:firstName:lastName:position:assets:name:teams:competitions:isDeleted:undecided:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKAssetsHeadshot * _Nullable assets __attribute__((swift_name("assets")));
@property (readonly) NSString * _Nullable birthDate __attribute__((swift_name("birthDate")));
@property (readonly) NSArray<FUSDKCompetitionBasicModel *> * _Nullable competitions __attribute__((swift_name("competitions")));
@property (readonly) FUSDKFootballCountryModel * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isDeleted __attribute__((swift_name("isDeleted")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) FUSDKPosition * _Nullable position __attribute__((swift_name("position")));
@property (readonly) NSArray<FUSDKTeamBasicModel *> * _Nullable teams __attribute__((swift_name("teams")));
@property (readonly) BOOL undecided __attribute__((swift_name("undecided")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerFullModel.Companion")))
@interface FUSDKPlayerFullModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPlayerFullModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerSquadModel")))
@interface FUSDKPlayerSquadModel : FUSDKBase
- (instancetype)initWithId:(NSString *)id country:(FUSDKFootballCountryModel * _Nullable)country birthDate:(NSString * _Nullable)birthDate name:(NSString *)name position:(FUSDKPosition * _Nullable)position assets:(FUSDKAssetsHeadshot * _Nullable)assets startDate:(FUSDKKotlinx_datetimeInstant * _Nullable)startDate endDate:(FUSDKKotlinx_datetimeInstant * _Nullable)endDate shirtNumber:(FUSDKInt * _Nullable)shirtNumber loan:(FUSDKBoolean * _Nullable)loan __attribute__((swift_name("init(id:country:birthDate:name:position:assets:startDate:endDate:shirtNumber:loan:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPlayerSquadModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPlayerSquadModel *)doCopyId:(NSString *)id country:(FUSDKFootballCountryModel * _Nullable)country birthDate:(NSString * _Nullable)birthDate name:(NSString *)name position:(FUSDKPosition * _Nullable)position assets:(FUSDKAssetsHeadshot * _Nullable)assets startDate:(FUSDKKotlinx_datetimeInstant * _Nullable)startDate endDate:(FUSDKKotlinx_datetimeInstant * _Nullable)endDate shirtNumber:(FUSDKInt * _Nullable)shirtNumber loan:(FUSDKBoolean * _Nullable)loan __attribute__((swift_name("doCopy(id:country:birthDate:name:position:assets:startDate:endDate:shirtNumber:loan:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKAssetsHeadshot * _Nullable assets __attribute__((swift_name("assets")));
@property (readonly) NSString * _Nullable birthDate __attribute__((swift_name("birthDate")));
@property (readonly) FUSDKFootballCountryModel * _Nullable country __attribute__((swift_name("country")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/fansunitedmedia/sdk/network/serialization/InstantSerializer))
*/
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable endDate __attribute__((swift_name("endDate")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) FUSDKBoolean * _Nullable loan __attribute__((swift_name("loan")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) FUSDKPosition * _Nullable position __attribute__((swift_name("position")));
@property (readonly) FUSDKInt * _Nullable shirtNumber __attribute__((swift_name("shirtNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/fansunitedmedia/sdk/network/serialization/InstantSerializer))
*/
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable startDate __attribute__((swift_name("startDate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerSquadModel.Companion")))
@interface FUSDKPlayerSquadModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPlayerSquadModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerTimelineModel")))
@interface FUSDKPlayerTimelineModel : FUSDKBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name position:(FUSDKPosition * _Nullable)position shirtNumber:(FUSDKInt * _Nullable)shirtNumber assets:(FUSDKAssetsHeadshot * _Nullable)assets type:(NSString *)type __attribute__((swift_name("init(id:name:position:shirtNumber:assets:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPlayerTimelineModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPlayerTimelineModel *)doCopyId:(NSString *)id name:(NSString *)name position:(FUSDKPosition * _Nullable)position shirtNumber:(FUSDKInt * _Nullable)shirtNumber assets:(FUSDKAssetsHeadshot * _Nullable)assets type:(NSString *)type __attribute__((swift_name("doCopy(id:name:position:shirtNumber:assets:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKAssetsHeadshot * _Nullable assets __attribute__((swift_name("assets")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) FUSDKPosition * _Nullable position __attribute__((swift_name("position")));
@property (readonly) FUSDKInt * _Nullable shirtNumber __attribute__((swift_name("shirtNumber")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerTimelineModel.Companion")))
@interface FUSDKPlayerTimelineModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPlayerTimelineModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Position")))
@interface FUSDKPosition : FUSDKKotlinEnum<FUSDKPosition *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKPosition *defender __attribute__((swift_name("defender")));
@property (class, readonly) FUSDKPosition *forward __attribute__((swift_name("forward")));
@property (class, readonly) FUSDKPosition *midfielder __attribute__((swift_name("midfielder")));
@property (class, readonly) FUSDKPosition *keeper __attribute__((swift_name("keeper")));
+ (FUSDKKotlinArray<FUSDKPosition *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKPosition *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchEntity")))
@interface FUSDKSearchEntity : FUSDKKotlinEnum<FUSDKSearchEntity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKSearchEntity *teams __attribute__((swift_name("teams")));
@property (class, readonly) FUSDKSearchEntity *players __attribute__((swift_name("players")));
@property (class, readonly) FUSDKSearchEntity *competitions __attribute__((swift_name("competitions")));
+ (FUSDKKotlinArray<FUSDKSearchEntity *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKSearchEntity *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFilters")))
@interface FUSDKSearchFilters : FUSDKBase
- (instancetype)initWithEntities:(NSArray<FUSDKSearchEntity *> * _Nullable)entities query:(NSString * _Nullable)query scope:(NSArray<NSString *> * _Nullable)scope __attribute__((swift_name("init(entities:query:scope:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKSearchFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKSearchFilters *)doCopyEntities:(NSArray<FUSDKSearchEntity *> * _Nullable)entities query:(NSString * _Nullable)query scope:(NSArray<NSString *> * _Nullable)scope __attribute__((swift_name("doCopy(entities:query:scope:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKSearchEntity *> * _Nullable entities __attribute__((swift_name("entities")));
@property (readonly) NSString * _Nullable query __attribute__((swift_name("query")));
@property (readonly) NSArray<NSString *> * _Nullable scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchFilters.Companion")))
@interface FUSDKSearchFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKSearchFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchResult")))
@interface FUSDKSearchResult : FUSDKBase
- (instancetype)initWithTeams:(NSArray<FUSDKTeamBasicModel *> * _Nullable)teams players:(NSArray<FUSDKPlayerBasicModel *> * _Nullable)players competitions:(NSArray<FUSDKCompetitionBasicModel *> * _Nullable)competitions __attribute__((swift_name("init(teams:players:competitions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKSearchResultCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKSearchResult *)doCopyTeams:(NSArray<FUSDKTeamBasicModel *> * _Nullable)teams players:(NSArray<FUSDKPlayerBasicModel *> * _Nullable)players competitions:(NSArray<FUSDKCompetitionBasicModel *> * _Nullable)competitions __attribute__((swift_name("doCopy(teams:players:competitions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKCompetitionBasicModel *> * _Nullable competitions __attribute__((swift_name("competitions")));
@property (readonly) NSArray<FUSDKPlayerBasicModel *> * _Nullable players __attribute__((swift_name("players")));
@property (readonly) NSArray<FUSDKTeamBasicModel *> * _Nullable teams __attribute__((swift_name("teams")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchResult.Companion")))
@interface FUSDKSearchResultCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKSearchResultCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status")))
@interface FUSDKStatus : FUSDKBase
- (instancetype)initWithType:(NSString *)type subType:(NSString *)subType __attribute__((swift_name("init(type:subType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKStatusCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKStatus *)doCopyType:(NSString *)type subType:(NSString *)subType __attribute__((swift_name("doCopy(type:subType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *subType __attribute__((swift_name("subType")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Status.Companion")))
@interface FUSDKStatusCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamBasicModel")))
@interface FUSDKTeamBasicModel : FUSDKBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name gender:(FUSDKGender * _Nullable)gender code:(NSString * _Nullable)code national:(FUSDKBoolean * _Nullable)national assets:(FUSDKAssetsModel * _Nullable)assets country:(FUSDKFootballCountryModel * _Nullable)country fullName:(NSString * _Nullable)fullName shortName:(NSString * _Nullable)shortName isDeleted:(BOOL)isDeleted undecided:(FUSDKBoolean * _Nullable)undecided __attribute__((swift_name("init(id:name:gender:code:national:assets:country:fullName:shortName:isDeleted:undecided:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTeamBasicModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTeamBasicModel *)doCopyId:(NSString *)id name:(NSString *)name gender:(FUSDKGender * _Nullable)gender code:(NSString * _Nullable)code national:(FUSDKBoolean * _Nullable)national assets:(FUSDKAssetsModel * _Nullable)assets country:(FUSDKFootballCountryModel * _Nullable)country fullName:(NSString * _Nullable)fullName shortName:(NSString * _Nullable)shortName isDeleted:(BOOL)isDeleted undecided:(FUSDKBoolean * _Nullable)undecided __attribute__((swift_name("doCopy(id:name:gender:code:national:assets:country:fullName:shortName:isDeleted:undecided:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKAssetsModel * _Nullable assets __attribute__((swift_name("assets")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) FUSDKFootballCountryModel * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));
@property (readonly) FUSDKGender * _Nullable gender __attribute__((swift_name("gender")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isDeleted __attribute__((swift_name("isDeleted")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) FUSDKBoolean * _Nullable national __attribute__((swift_name("national")));
@property (readonly) NSString * _Nullable shortName __attribute__((swift_name("shortName")));
@property (readonly) FUSDKBoolean * _Nullable undecided __attribute__((swift_name("undecided")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamBasicModel.Companion")))
@interface FUSDKTeamBasicModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTeamBasicModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamFilters")))
@interface FUSDKTeamFilters : FUSDKBase
- (instancetype)initWithName:(NSString * _Nullable)name countryId:(NSString * _Nullable)countryId national:(BOOL)national gender:(FUSDKGender * _Nullable)gender limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page scope:(NSArray<NSString *> * _Nullable)scope sortField:(NSString * _Nullable)sortField sortOrder:(FUSDKSortOrder * _Nullable)sortOrder teamIds:(NSArray<NSString *> * _Nullable)teamIds __attribute__((swift_name("init(name:countryId:national:gender:limit:page:scope:sortField:sortOrder:teamIds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTeamFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTeamFilters *)doCopyName:(NSString * _Nullable)name countryId:(NSString * _Nullable)countryId national:(BOOL)national gender:(FUSDKGender * _Nullable)gender limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page scope:(NSArray<NSString *> * _Nullable)scope sortField:(NSString * _Nullable)sortField sortOrder:(FUSDKSortOrder * _Nullable)sortOrder teamIds:(NSArray<NSString *> * _Nullable)teamIds __attribute__((swift_name("doCopy(name:countryId:national:gender:limit:page:scope:sortField:sortOrder:teamIds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable countryId __attribute__((swift_name("countryId")));
@property (readonly) FUSDKGender * _Nullable gender __attribute__((swift_name("gender")));
@property (readonly) FUSDKInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) BOOL national __attribute__((swift_name("national")));
@property (readonly) FUSDKInt * _Nullable page __attribute__((swift_name("page")));
@property (readonly) NSArray<NSString *> * _Nullable scope __attribute__((swift_name("scope")));
@property (readonly) NSString * _Nullable sortField __attribute__((swift_name("sortField")));
@property (readonly) FUSDKSortOrder * _Nullable sortOrder __attribute__((swift_name("sortOrder")));
@property (readonly) NSArray<NSString *> * _Nullable teamIds __attribute__((swift_name("teamIds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamFilters.Companion")))
@interface FUSDKTeamFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTeamFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamFormDirection")))
@interface FUSDKTeamFormDirection : FUSDKKotlinEnum<FUSDKTeamFormDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKTeamFormDirectionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKTeamFormDirection *ltr __attribute__((swift_name("ltr")));
@property (class, readonly) FUSDKTeamFormDirection *rtl __attribute__((swift_name("rtl")));
+ (FUSDKKotlinArray<FUSDKTeamFormDirection *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKTeamFormDirection *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamFormDirection.Companion")))
@interface FUSDKTeamFormDirectionCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTeamFormDirectionCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamFormFilters")))
@interface FUSDKTeamFormFilters : FUSDKBase
- (instancetype)initWithCompetitionId:(NSString * _Nullable)competitionId limit:(int32_t)limit direction:(FUSDKTeamFormDirection *)direction __attribute__((swift_name("init(competitionId:limit:direction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTeamFormFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTeamFormFilters *)doCopyCompetitionId:(NSString * _Nullable)competitionId limit:(int32_t)limit direction:(FUSDKTeamFormDirection *)direction __attribute__((swift_name("doCopy(competitionId:limit:direction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable competitionId __attribute__((swift_name("competitionId")));
@property (readonly) FUSDKTeamFormDirection *direction __attribute__((swift_name("direction")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamFormFilters.Companion")))
@interface FUSDKTeamFormFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTeamFormFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamFormMatch")))
@interface FUSDKTeamFormMatch : FUSDKBase
- (instancetype)initWithMatchModel:(FUSDKMatchBasicModel *)matchModel isHomeGame:(BOOL)isHomeGame result:(FUSDKTeamFormResult *)result __attribute__((swift_name("init(matchModel:isHomeGame:result:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTeamFormMatchCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTeamFormMatch *)doCopyMatchModel:(FUSDKMatchBasicModel *)matchModel isHomeGame:(BOOL)isHomeGame result:(FUSDKTeamFormResult *)result __attribute__((swift_name("doCopy(matchModel:isHomeGame:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isHomeGame __attribute__((swift_name("isHomeGame")));
@property (readonly) FUSDKMatchBasicModel *matchModel __attribute__((swift_name("matchModel")));
@property (readonly) FUSDKTeamFormResult *result __attribute__((swift_name("result")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamFormMatch.Companion")))
@interface FUSDKTeamFormMatchCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTeamFormMatchCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamFormModel")))
@interface FUSDKTeamFormModel : FUSDKBase
- (instancetype)initWithTeamId:(NSString *)teamId matches:(NSArray<FUSDKTeamFormMatch *> *)matches __attribute__((swift_name("init(teamId:matches:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTeamFormModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTeamFormModel *)doCopyTeamId:(NSString *)teamId matches:(NSArray<FUSDKTeamFormMatch *> *)matches __attribute__((swift_name("doCopy(teamId:matches:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKTeamFormMatch *> *matches __attribute__((swift_name("matches")));
@property (readonly) NSString *teamId __attribute__((swift_name("teamId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamFormModel.Companion")))
@interface FUSDKTeamFormModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTeamFormModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamFormResult")))
@interface FUSDKTeamFormResult : FUSDKKotlinEnum<FUSDKTeamFormResult *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKTeamFormResultCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKTeamFormResult *win __attribute__((swift_name("win")));
@property (class, readonly) FUSDKTeamFormResult *draw __attribute__((swift_name("draw")));
@property (class, readonly) FUSDKTeamFormResult *loss __attribute__((swift_name("loss")));
+ (FUSDKKotlinArray<FUSDKTeamFormResult *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKTeamFormResult *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamFormResult.Companion")))
@interface FUSDKTeamFormResultCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTeamFormResultCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamFullModel")))
@interface FUSDKTeamFullModel : FUSDKBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name gender:(FUSDKGender * _Nullable)gender code:(NSString * _Nullable)code national:(FUSDKBoolean * _Nullable)national assets:(FUSDKAssetsModel * _Nullable)assets country:(FUSDKFootballCountryModel * _Nullable)country fullName:(NSString * _Nullable)fullName shortName:(NSString * _Nullable)shortName competitions:(NSArray<FUSDKCompetitionBasicModel *> * _Nullable)competitions squad:(NSArray<FUSDKPlayerSquadModel *> * _Nullable)squad isDeleted:(BOOL)isDeleted undecided:(BOOL)undecided __attribute__((swift_name("init(id:name:gender:code:national:assets:country:fullName:shortName:competitions:squad:isDeleted:undecided:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTeamFullModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTeamFullModel *)doCopyId:(NSString *)id name:(NSString *)name gender:(FUSDKGender * _Nullable)gender code:(NSString * _Nullable)code national:(FUSDKBoolean * _Nullable)national assets:(FUSDKAssetsModel * _Nullable)assets country:(FUSDKFootballCountryModel * _Nullable)country fullName:(NSString * _Nullable)fullName shortName:(NSString * _Nullable)shortName competitions:(NSArray<FUSDKCompetitionBasicModel *> * _Nullable)competitions squad:(NSArray<FUSDKPlayerSquadModel *> * _Nullable)squad isDeleted:(BOOL)isDeleted undecided:(BOOL)undecided __attribute__((swift_name("doCopy(id:name:gender:code:national:assets:country:fullName:shortName:competitions:squad:isDeleted:undecided:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKAssetsModel * _Nullable assets __attribute__((swift_name("assets")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSArray<FUSDKCompetitionBasicModel *> * _Nullable competitions __attribute__((swift_name("competitions")));
@property (readonly) FUSDKFootballCountryModel * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));
@property (readonly) FUSDKGender * _Nullable gender __attribute__((swift_name("gender")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isDeleted __attribute__((swift_name("isDeleted")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) FUSDKBoolean * _Nullable national __attribute__((swift_name("national")));
@property (readonly) NSString * _Nullable shortName __attribute__((swift_name("shortName")));
@property NSArray<FUSDKPlayerSquadModel *> * _Nullable squad __attribute__((swift_name("squad")));
@property (readonly) BOOL undecided __attribute__((swift_name("undecided")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TeamFullModel.Companion")))
@interface FUSDKTeamFullModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTeamFullModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimelineEvent")))
@interface FUSDKTimelineEvent : FUSDKBase
- (instancetype)initWithMinute:(FUSDKInt * _Nullable)minute type:(NSString *)type teamId:(NSString *)teamId player:(FUSDKPlayerTimelineModel *)player relatedPlayer:(FUSDKPlayerTimelineModel * _Nullable)relatedPlayer __attribute__((swift_name("init(minute:type:teamId:player:relatedPlayer:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTimelineEventCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTimelineEvent *)doCopyMinute:(FUSDKInt * _Nullable)minute type:(NSString *)type teamId:(NSString *)teamId player:(FUSDKPlayerTimelineModel *)player relatedPlayer:(FUSDKPlayerTimelineModel * _Nullable)relatedPlayer __attribute__((swift_name("doCopy(minute:type:teamId:player:relatedPlayer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKInt * _Nullable minute __attribute__((swift_name("minute")));
@property (readonly) FUSDKPlayerTimelineModel *player __attribute__((swift_name("player")));
@property (readonly) FUSDKPlayerTimelineModel * _Nullable relatedPlayer __attribute__((swift_name("relatedPlayer")));
@property NSString *teamId __attribute__((swift_name("teamId")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimelineEvent.Companion")))
@interface FUSDKTimelineEventCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTimelineEventCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TopPlayerModel")))
@interface FUSDKTopPlayerModel : FUSDKBase
- (instancetype)initWithId:(NSString *)id country:(FUSDKFootballCountryModel * _Nullable)country birthDate:(NSString * _Nullable)birthDate firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName name:(NSString *)name position:(FUSDKPosition * _Nullable)position assets:(FUSDKAssetsHeadshot * _Nullable)assets __attribute__((swift_name("init(id:country:birthDate:firstName:lastName:name:position:assets:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTopPlayerModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTopPlayerModel *)doCopyId:(NSString *)id country:(FUSDKFootballCountryModel * _Nullable)country birthDate:(NSString * _Nullable)birthDate firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName name:(NSString *)name position:(FUSDKPosition * _Nullable)position assets:(FUSDKAssetsHeadshot * _Nullable)assets __attribute__((swift_name("doCopy(id:country:birthDate:firstName:lastName:name:position:assets:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKAssetsHeadshot * _Nullable assets __attribute__((swift_name("assets")));
@property (readonly) NSString * _Nullable birthDate __attribute__((swift_name("birthDate")));
@property (readonly) FUSDKFootballCountryModel * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) FUSDKPosition * _Nullable position __attribute__((swift_name("position")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TopPlayerModel.Companion")))
@interface FUSDKTopPlayerModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTopPlayerModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("IGame")))
@protocol FUSDKIGame
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deletePredictionGameId:(NSString *)predictionGameId completionHandler:(void (^)(FUSDKBoolean * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(predictionGameId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConfigDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getConfig(disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentGameResultsDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKGameResultsModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentGameResults(disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getGameByIdGameId:(NSString *)gameId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKGameByIdModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getGameById(gameId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getGamePredictionsGameId:(NSString *)gameId filters:(FUSDKPredictionsFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKPredictionResponseModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getGamePredictions(gameId:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getGameResultsGameId:(NSString *)gameId filters:(FUSDKMainCursorFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKGameResultsModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getGameResults(gameId:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getGameWinnersGameId:(NSString *)gameId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKContestWinners * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getGameWinners(gameId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getGamesFilters:(FUSDKGameFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKGameListModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getGames(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMarketsResultsForGameGameId:(NSString *)gameId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKGameMarketsResults * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMarketsResultsForGame(gameId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMyGamePredictionGameId:(NSString *)gameId completionHandler:(void (^)(NSArray<FUSDKPredictionResponseModel *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMyGamePrediction(gameId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserGamePredictionUserId:(NSString *)userId gameId:(NSString *)gameId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(NSArray<FUSDKPredictionResponseModel *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserGamePrediction(userId:gameId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)helpersWithCompletionHandler:(void (^)(id<FUSDKIGameHelpers> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("helpers(completionHandler:)")));
@end

__attribute__((swift_name("IMatchQuiz")))
@protocol FUSDKIMatchQuiz <FUSDKIGame>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMyGameEditionsFilters:(FUSDKMainCursorFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKGameMatchQuizListModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMyGameEditions(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserGameEditionsUserId:(NSString *)userId filters:(FUSDKMainCursorFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKGameMatchQuizListModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserGameEditions(userId:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)playRequest:(FUSDKMatchQuizRequestModel *)request completionHandler:(void (^)(FUSDKPredictionResponseModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("play(request:completionHandler:)")));
@end

__attribute__((swift_name("ITopX")))
@protocol FUSDKITopX <FUSDKIGame>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMyGameEditionsFilters:(FUSDKMainCursorFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKGameTopXListModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMyGameEditions(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserGameEditionsUserId:(NSString *)userId filters:(FUSDKMainCursorFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKGameTopXListModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserGameEditions(userId:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)playRequest:(FUSDKTopXPredictionRequestModel *)request completionHandler_:(void (^)(FUSDKPredictionResponseModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("play(request:completionHandler_:)")));
@end

__attribute__((swift_name("IGameHelpers")))
@protocol FUSDKIGameHelpers
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)findCurrentGameGames:(NSArray<FUSDKGameListModel *> *)games completionHandler:(void (^)(FUSDKGameListModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("findCurrentGame(games:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)findLastGameGames:(NSArray<FUSDKGameListModel *> *)games completionHandler:(void (^)(FUSDKGameListModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("findLastGame(games:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)findNextGameGames:(NSArray<FUSDKGameListModel *> *)games completionHandler:(void (^)(FUSDKGameListModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("findNextGame(games:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("ContestModel")))
@interface FUSDKContestModel : FUSDKBase
@property (class, readonly, getter=companion) FUSDKContestModelCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContestModel.Companion")))
@interface FUSDKContestModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKContestModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
 *   kotlinx.serialization.SerialName(value="game")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContestModel.GameModel")))
@interface FUSDKContestModelGameModel : FUSDKContestModel
- (instancetype)initWithGame:(FUSDKGameListModel *)game __attribute__((swift_name("init(game:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKContestModelGameModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKContestModelGameModel *)doCopyGame:(FUSDKGameListModel *)game __attribute__((swift_name("doCopy(game:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKGameListModel *game __attribute__((swift_name("game")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContestModel.GameModelCompanion")))
@interface FUSDKContestModelGameModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKContestModelGameModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
 *   kotlinx.serialization.SerialName(value="template")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContestModel.TemplateModel")))
@interface FUSDKContestModelTemplateModel : FUSDKContestModel
- (instancetype)initWithTemplate:(FUSDKLeaderboardTemplate *)template_ __attribute__((swift_name("init(template:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKContestModelTemplateModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKContestModelTemplateModel *)doCopyTemplate:(FUSDKLeaderboardTemplate *)template_ __attribute__((swift_name("doCopy(template:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=template) FUSDKLeaderboardTemplate *template_ __attribute__((swift_name("template_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContestModel.TemplateModelCompanion")))
@interface FUSDKContestModelTemplateModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKContestModelTemplateModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContestType")))
@interface FUSDKContestType : FUSDKKotlinEnum<FUSDKContestType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKContestTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKContestType *game __attribute__((swift_name("game")));
@property (class, readonly) FUSDKContestType *template_ __attribute__((swift_name("template_")));
+ (FUSDKKotlinArray<FUSDKContestType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKContestType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContestType.Companion")))
@interface FUSDKContestTypeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKContestTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContestWinners")))
@interface FUSDKContestWinners : FUSDKBase
- (instancetype)initWithContestId:(NSString *)contestId contestType:(FUSDKContestType *)contestType contestModel:(FUSDKContestModel * _Nullable)contestModel description:(NSString *)description userList:(NSArray<FUSDKUserListWinners *> *)userList __attribute__((swift_name("init(contestId:contestType:contestModel:description:userList:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKContestWinnersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKContestWinners *)doCopyContestId:(NSString *)contestId contestType:(FUSDKContestType *)contestType contestModel:(FUSDKContestModel * _Nullable)contestModel description:(NSString *)description userList:(NSArray<FUSDKUserListWinners *> *)userList __attribute__((swift_name("doCopy(contestId:contestType:contestModel:description:userList:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="contest_id")
*/
@property (readonly) NSString *contestId __attribute__((swift_name("contestId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="contest_model")
*/
@property (readonly) FUSDKContestModel * _Nullable contestModel __attribute__((swift_name("contestModel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="contest_type")
*/
@property (readonly) FUSDKContestType *contestType __attribute__((swift_name("contestType")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_list")
*/
@property (readonly) NSArray<FUSDKUserListWinners *> *userList __attribute__((swift_name("userList")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContestWinners.Companion")))
@interface FUSDKContestWinnersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKContestWinnersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("FixturesGameModel")))
@interface FUSDKFixturesGameModel : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 matchId:(NSString * _Nullable)matchId matchType:(FUSDKMatchType * _Nullable)matchType market:(FUSDKMarket * _Nullable)market matchModel:(FUSDKMatchBasicModel * _Nullable)matchModel matchStatus:(FUSDKStatus * _Nullable)matchStatus serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:matchId:matchType:market:matchModel:matchStatus:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKFixturesGameModelCompanion *companion __attribute__((swift_name("companion")));
@property FUSDKMarket * _Nullable market __attribute__((swift_name("market")));
@property NSString *matchId __attribute__((swift_name("matchId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="match_model")
*/
@property FUSDKMatchBasicModel * _Nullable matchModel __attribute__((swift_name("matchModel")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="match_status")
*/
@property (readonly) FUSDKStatus * _Nullable matchStatus __attribute__((swift_name("matchStatus")));
@property (readonly) FUSDKMatchType *matchType __attribute__((swift_name("matchType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FixturesGameModel.Companion")))
@interface FUSDKFixturesGameModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFixturesGameModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FixturesMatchQuizModel")))
@interface FUSDKFixturesMatchQuizModel : FUSDKFixturesGameModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 matchId:(NSString * _Nullable)matchId matchType:(FUSDKMatchType * _Nullable)matchType market:(FUSDKMarket * _Nullable)market matchModel:(FUSDKMatchBasicModel * _Nullable)matchModel matchStatus:(FUSDKStatus * _Nullable)matchStatus serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:matchId:matchType:market:matchModel:matchStatus:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKFixturesMatchQuizModelCompanion *companion __attribute__((swift_name("companion")));
@property FUSDKPredictionMatchQuizModel * _Nullable prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FixturesMatchQuizModel.Companion")))
@interface FUSDKFixturesMatchQuizModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFixturesMatchQuizModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FixturesTopXModel")))
@interface FUSDKFixturesTopXModel : FUSDKFixturesGameModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 matchId:(NSString * _Nullable)matchId matchType:(FUSDKMatchType * _Nullable)matchType market:(FUSDKMarket * _Nullable)market matchModel:(FUSDKMatchBasicModel * _Nullable)matchModel matchStatus:(FUSDKStatus * _Nullable)matchStatus serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:matchId:matchType:market:matchModel:matchStatus:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKFixturesTopXModelCompanion *companion __attribute__((swift_name("companion")));
@property FUSDKPredictionTopXModel * _Nullable prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FixturesTopXModel.Companion")))
@interface FUSDKFixturesTopXModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFixturesTopXModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("GameBaseModel")))
@interface FUSDKGameBaseModel : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id title:(NSString * _Nullable)title description:(NSString * _Nullable)description type:(FUSDKGameType * _Nullable)type status:(FUSDKGameStatus * _Nullable)status predictionsCutoff:(FUSDKKotlinx_datetimeInstant * _Nullable)predictionsCutoff authRequirement:(FUSDKAuthRequirementType * _Nullable)authRequirement scheduleOpenAt:(FUSDKKotlinx_datetimeInstant * _Nullable)scheduleOpenAt tiebreaker:(FUSDKTimeTiebreaker * _Nullable)tiebreaker participantsCount:(int32_t)participantsCount related:(NSArray<FUSDKRelatedEntityRelationship *> * _Nullable)related excludedProfileIds:(NSArray<NSString *> * _Nullable)excludedProfileIds rules:(NSString * _Nullable)rules labels:(NSDictionary<NSString *, NSString *> * _Nullable)labels customFields:(NSDictionary<NSString *, NSString *> * _Nullable)customFields branding:(FUSDKBrandingModel * _Nullable)branding flags:(NSArray<NSString *> * _Nullable)flags images:(FUSDKImages * _Nullable)images createdAt:(FUSDKKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)updatedAt serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:title:description:type:status:predictionsCutoff:authRequirement:scheduleOpenAt:tiebreaker:participantsCount:related:excludedProfileIds:rules:labels:customFields:branding:flags:images:createdAt:updatedAt:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKGameBaseModelCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) FUSDKAuthRequirementType * _Nullable authRequirement __attribute__((swift_name("authRequirement")));
@property (readonly) FUSDKBrandingModel * _Nullable branding __attribute__((swift_name("branding")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable customFields __attribute__((swift_name("customFields")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSArray<NSString *> * _Nullable excludedProfileIds __attribute__((swift_name("excludedProfileIds")));
@property NSArray<NSString *> * _Nullable flags __attribute__((swift_name("flags")));
@property NSString *id __attribute__((swift_name("id")));
@property FUSDKImages * _Nullable images __attribute__((swift_name("images")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable labels __attribute__((swift_name("labels")));
@property (readonly) int32_t participantsCount __attribute__((swift_name("participantsCount")));
@property FUSDKKotlinx_datetimeInstant *predictionsCutoff __attribute__((swift_name("predictionsCutoff")));
@property (readonly) NSArray<FUSDKRelatedEntityRelationship *> * _Nullable related __attribute__((swift_name("related")));
@property NSString * _Nullable rules __attribute__((swift_name("rules")));
@property FUSDKKotlinx_datetimeInstant * _Nullable scheduleOpenAt __attribute__((swift_name("scheduleOpenAt")));
@property FUSDKGameStatus *status __attribute__((swift_name("status")));
@property (readonly) FUSDKTimeTiebreaker * _Nullable tiebreaker __attribute__((swift_name("tiebreaker")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@property FUSDKGameType *type __attribute__((swift_name("type")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameBaseModel.Companion")))
@interface FUSDKGameBaseModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGameBaseModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("GameListModel")))
@interface FUSDKGameListModel : FUSDKGameBaseModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id title:(NSString * _Nullable)title description:(NSString * _Nullable)description type:(FUSDKGameType * _Nullable)type status:(FUSDKGameStatus * _Nullable)status predictionsCutoff:(FUSDKKotlinx_datetimeInstant * _Nullable)predictionsCutoff authRequirement:(FUSDKAuthRequirementType * _Nullable)authRequirement scheduleOpenAt:(FUSDKKotlinx_datetimeInstant * _Nullable)scheduleOpenAt tiebreaker:(FUSDKTimeTiebreaker * _Nullable)tiebreaker participantsCount:(int32_t)participantsCount related:(NSArray<FUSDKRelatedEntityRelationship *> * _Nullable)related excludedProfileIds:(NSArray<NSString *> * _Nullable)excludedProfileIds rules:(NSString * _Nullable)rules labels:(NSDictionary<NSString *, NSString *> * _Nullable)labels customFields:(NSDictionary<NSString *, NSString *> * _Nullable)customFields branding:(FUSDKBrandingModel * _Nullable)branding flags:(NSArray<NSString *> * _Nullable)flags images:(FUSDKImages * _Nullable)images createdAt:(FUSDKKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)updatedAt fixtures:(NSArray<FUSDKFixturesGameModel *> * _Nullable)fixtures serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:title:description:type:status:predictionsCutoff:authRequirement:scheduleOpenAt:tiebreaker:participantsCount:related:excludedProfileIds:rules:labels:customFields:branding:flags:images:createdAt:updatedAt:fixtures:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id title:(NSString * _Nullable)title description:(NSString * _Nullable)description type:(FUSDKGameType * _Nullable)type status:(FUSDKGameStatus * _Nullable)status predictionsCutoff:(FUSDKKotlinx_datetimeInstant * _Nullable)predictionsCutoff authRequirement:(FUSDKAuthRequirementType * _Nullable)authRequirement scheduleOpenAt:(FUSDKKotlinx_datetimeInstant * _Nullable)scheduleOpenAt tiebreaker:(FUSDKTimeTiebreaker * _Nullable)tiebreaker participantsCount:(int32_t)participantsCount related:(NSArray<FUSDKRelatedEntityRelationship *> * _Nullable)related excludedProfileIds:(NSArray<NSString *> * _Nullable)excludedProfileIds rules:(NSString * _Nullable)rules labels:(NSDictionary<NSString *, NSString *> * _Nullable)labels customFields:(NSDictionary<NSString *, NSString *> * _Nullable)customFields branding:(FUSDKBrandingModel * _Nullable)branding flags:(NSArray<NSString *> * _Nullable)flags images:(FUSDKImages * _Nullable)images createdAt:(FUSDKKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)updatedAt serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:title:description:type:status:predictionsCutoff:authRequirement:scheduleOpenAt:tiebreaker:participantsCount:related:excludedProfileIds:rules:labels:customFields:branding:flags:images:createdAt:updatedAt:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKGameListModelCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<FUSDKFixturesGameModel *> *fixtures __attribute__((swift_name("fixtures")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameByIdModel")))
@interface FUSDKGameByIdModel : FUSDKGameListModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id title:(NSString * _Nullable)title description:(NSString * _Nullable)description type:(FUSDKGameType * _Nullable)type status:(FUSDKGameStatus * _Nullable)status predictionsCutoff:(FUSDKKotlinx_datetimeInstant * _Nullable)predictionsCutoff authRequirement:(FUSDKAuthRequirementType * _Nullable)authRequirement scheduleOpenAt:(FUSDKKotlinx_datetimeInstant * _Nullable)scheduleOpenAt tiebreaker:(FUSDKTimeTiebreaker * _Nullable)tiebreaker participantsCount:(int32_t)participantsCount related:(NSArray<FUSDKRelatedEntityRelationship *> * _Nullable)related excludedProfileIds:(NSArray<NSString *> * _Nullable)excludedProfileIds rules:(NSString * _Nullable)rules labels:(NSDictionary<NSString *, NSString *> * _Nullable)labels customFields:(NSDictionary<NSString *, NSString *> * _Nullable)customFields branding:(FUSDKBrandingModel * _Nullable)branding flags:(NSArray<NSString *> * _Nullable)flags images:(FUSDKImages * _Nullable)images createdAt:(FUSDKKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)updatedAt fixtures:(NSArray<FUSDKFixturesGameModel *> * _Nullable)fixtures serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:title:description:type:status:predictionsCutoff:authRequirement:scheduleOpenAt:tiebreaker:participantsCount:related:excludedProfileIds:rules:labels:customFields:branding:flags:images:createdAt:updatedAt:fixtures:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKGameByIdModelCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable adContent __attribute__((swift_name("adContent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameByIdModel.Companion")))
@interface FUSDKGameByIdModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGameByIdModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameFilters")))
@interface FUSDKGameFilters : FUSDKBase
- (instancetype)initWithLimit:(FUSDKInt * _Nullable)limit startAfter:(NSString * _Nullable)startAfter status:(FUSDKGameStatus * _Nullable)status type:(FUSDKGameType * _Nullable)type gameIds:(NSArray<NSString *> * _Nullable)gameIds sortOrder:(FUSDKSortOrder * _Nullable)sortOrder __attribute__((swift_name("init(limit:startAfter:status:type:gameIds:sortOrder:)"))) __attribute__((objc_designated_initializer));
- (FUSDKGameFilters *)doCopyLimit:(FUSDKInt * _Nullable)limit startAfter:(NSString * _Nullable)startAfter status:(FUSDKGameStatus * _Nullable)status type:(FUSDKGameType * _Nullable)type gameIds:(NSArray<NSString *> * _Nullable)gameIds sortOrder:(FUSDKSortOrder * _Nullable)sortOrder __attribute__((swift_name("doCopy(limit:startAfter:status:type:gameIds:sortOrder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable gameIds __attribute__((swift_name("gameIds")));
@property (readonly) FUSDKInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) FUSDKSortOrder * _Nullable sortOrder __attribute__((swift_name("sortOrder")));
@property (readonly) NSString * _Nullable startAfter __attribute__((swift_name("startAfter")));
@property (readonly) FUSDKGameStatus * _Nullable status __attribute__((swift_name("status")));
@property (readonly) FUSDKGameType * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameListModel.Companion")))
@interface FUSDKGameListModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGameListModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameMarketsResults")))
@interface FUSDKGameMarketsResults : FUSDKBase
- (instancetype)initWithGameId:(NSString * _Nullable)gameId results:(NSArray<FUSDKMarketsResults *> * _Nullable)results tieBreakers:(FUSDKTieBreakersType * _Nullable)tieBreakers __attribute__((swift_name("init(gameId:results:tieBreakers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKGameMarketsResultsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKGameMarketsResults *)doCopyGameId:(NSString * _Nullable)gameId results:(NSArray<FUSDKMarketsResults *> * _Nullable)results tieBreakers:(FUSDKTieBreakersType * _Nullable)tieBreakers __attribute__((swift_name("doCopy(gameId:results:tieBreakers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable gameId __attribute__((swift_name("gameId")));
@property (readonly) NSArray<FUSDKMarketsResults *> * _Nullable results __attribute__((swift_name("results")));
@property (readonly) FUSDKTieBreakersType * _Nullable tieBreakers __attribute__((swift_name("tieBreakers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameMarketsResults.Companion")))
@interface FUSDKGameMarketsResultsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGameMarketsResultsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameMatchOutcome")))
@interface FUSDKGameMatchOutcome : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) FUSDKGameMatchOutcomeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString * _Nullable gameId __attribute__((swift_name("gameId")));
@property (readonly) NSArray<FUSDKGameMatchOutcomeData *> * _Nullable results __attribute__((swift_name("results")));
@property (readonly) FUSDKTiebreakers * _Nullable tieBreakers __attribute__((swift_name("tieBreakers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameMatchOutcome.Companion")))
@interface FUSDKGameMatchOutcomeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGameMatchOutcomeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameMatchOutcomeData")))
@interface FUSDKGameMatchOutcomeData : FUSDKBase
- (instancetype)initWithMatchId:(NSString *)matchId market:(FUSDKMarket *)market matchStatus:(FUSDKStatus *)matchStatus result:(NSArray<NSString *> * _Nullable)result __attribute__((swift_name("init(matchId:market:matchStatus:result:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKGameMatchOutcomeDataCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKGameMatchOutcomeData *)doCopyMatchId:(NSString *)matchId market:(FUSDKMarket *)market matchStatus:(FUSDKStatus *)matchStatus result:(NSArray<NSString *> * _Nullable)result __attribute__((swift_name("doCopy(matchId:market:matchStatus:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKMarket *market __attribute__((swift_name("market")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) FUSDKStatus *matchStatus __attribute__((swift_name("matchStatus")));
@property NSArray<NSString *> * _Nullable result __attribute__((swift_name("result")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameMatchOutcomeData.Companion")))
@interface FUSDKGameMatchOutcomeDataCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGameMatchOutcomeDataCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameMatchQuizListModel")))
@interface FUSDKGameMatchQuizListModel : FUSDKGameBaseModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id title:(NSString * _Nullable)title description:(NSString * _Nullable)description type:(FUSDKGameType * _Nullable)type status:(FUSDKGameStatus * _Nullable)status predictionsCutoff:(FUSDKKotlinx_datetimeInstant * _Nullable)predictionsCutoff authRequirement:(FUSDKAuthRequirementType * _Nullable)authRequirement scheduleOpenAt:(FUSDKKotlinx_datetimeInstant * _Nullable)scheduleOpenAt tiebreaker:(FUSDKTimeTiebreaker * _Nullable)tiebreaker participantsCount:(int32_t)participantsCount related:(NSArray<FUSDKRelatedEntityRelationship *> * _Nullable)related excludedProfileIds:(NSArray<NSString *> * _Nullable)excludedProfileIds rules:(NSString * _Nullable)rules labels:(NSDictionary<NSString *, NSString *> * _Nullable)labels customFields:(NSDictionary<NSString *, NSString *> * _Nullable)customFields branding:(FUSDKBrandingModel * _Nullable)branding flags:(NSArray<NSString *> * _Nullable)flags images:(FUSDKImages * _Nullable)images createdAt:(FUSDKKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)updatedAt serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:title:description:type:status:predictionsCutoff:authRequirement:scheduleOpenAt:tiebreaker:participantsCount:related:excludedProfileIds:rules:labels:customFields:branding:flags:images:createdAt:updatedAt:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKGameMatchQuizListModelCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<FUSDKFixturesMatchQuizModel *> *fixtures __attribute__((swift_name("fixtures")));
@property FUSDKPredictionStatus * _Nullable outcome __attribute__((swift_name("outcome")));
@property FUSDKInt * _Nullable points __attribute__((swift_name("points")));
@property NSString * _Nullable predictionId __attribute__((swift_name("predictionId")));
@property FUSDKKotlinx_datetimeInstant * _Nullable predictionsMadeAt __attribute__((swift_name("predictionsMadeAt")));
@property FUSDKKotlinx_datetimeInstant * _Nullable predictionsUpdatedAt __attribute__((swift_name("predictionsUpdatedAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameMatchQuizListModel.Companion")))
@interface FUSDKGameMatchQuizListModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGameMatchQuizListModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameResult")))
@interface FUSDKGameResult : FUSDKBase
- (instancetype)initWithMatchId:(NSString *)matchId matchModel:(FUSDKMatchBasicModel * _Nullable)matchModel outcome:(FUSDKOutcome *)outcome __attribute__((swift_name("init(matchId:matchModel:outcome:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKGameResultCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKGameResult *)doCopyMatchId:(NSString *)matchId matchModel:(FUSDKMatchBasicModel * _Nullable)matchModel outcome:(FUSDKOutcome *)outcome __attribute__((swift_name("doCopy(matchId:matchModel:outcome:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property FUSDKMatchBasicModel * _Nullable matchModel __attribute__((swift_name("matchModel")));
@property (readonly) FUSDKOutcome *outcome __attribute__((swift_name("outcome")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameResult.Companion")))
@interface FUSDKGameResultCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGameResultCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameResultsModel")))
@interface FUSDKGameResultsModel : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) FUSDKGameResultsModelCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) NSArray<FUSDKGameResult *> * _Nullable results __attribute__((swift_name("results")));
@property (readonly) FUSDKTiebreaker * _Nullable tiebreaker __attribute__((swift_name("tiebreaker")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameResultsModel.Companion")))
@interface FUSDKGameResultsModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGameResultsModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameStatus")))
@interface FUSDKGameStatus : FUSDKKotlinEnum<FUSDKGameStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKGameStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKGameStatus *canceled __attribute__((swift_name("canceled")));
@property (class, readonly) FUSDKGameStatus *closed __attribute__((swift_name("closed")));
@property (class, readonly) FUSDKGameStatus *live __attribute__((swift_name("live")));
@property (class, readonly) FUSDKGameStatus *open __attribute__((swift_name("open")));
@property (class, readonly) FUSDKGameStatus *pending __attribute__((swift_name("pending")));
@property (class, readonly) FUSDKGameStatus *settled __attribute__((swift_name("settled")));
+ (FUSDKKotlinArray<FUSDKGameStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKGameStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameStatus.Companion")))
@interface FUSDKGameStatusCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGameStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameTopXListModel")))
@interface FUSDKGameTopXListModel : FUSDKGameBaseModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id title:(NSString * _Nullable)title description:(NSString * _Nullable)description type:(FUSDKGameType * _Nullable)type status:(FUSDKGameStatus * _Nullable)status predictionsCutoff:(FUSDKKotlinx_datetimeInstant * _Nullable)predictionsCutoff authRequirement:(FUSDKAuthRequirementType * _Nullable)authRequirement scheduleOpenAt:(FUSDKKotlinx_datetimeInstant * _Nullable)scheduleOpenAt tiebreaker:(FUSDKTimeTiebreaker * _Nullable)tiebreaker participantsCount:(int32_t)participantsCount related:(NSArray<FUSDKRelatedEntityRelationship *> * _Nullable)related excludedProfileIds:(NSArray<NSString *> * _Nullable)excludedProfileIds rules:(NSString * _Nullable)rules labels:(NSDictionary<NSString *, NSString *> * _Nullable)labels customFields:(NSDictionary<NSString *, NSString *> * _Nullable)customFields branding:(FUSDKBrandingModel * _Nullable)branding flags:(NSArray<NSString *> * _Nullable)flags images:(FUSDKImages * _Nullable)images createdAt:(FUSDKKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)updatedAt serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:title:description:type:status:predictionsCutoff:authRequirement:scheduleOpenAt:tiebreaker:participantsCount:related:excludedProfileIds:rules:labels:customFields:branding:flags:images:createdAt:updatedAt:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKGameTopXListModelCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<FUSDKFixturesTopXModel *> *fixtures __attribute__((swift_name("fixtures")));
@property FUSDKPredictionStatus * _Nullable outcome __attribute__((swift_name("outcome")));
@property FUSDKInt * _Nullable points __attribute__((swift_name("points")));
@property NSString * _Nullable predictionId __attribute__((swift_name("predictionId")));
@property FUSDKTiebreakerModel * _Nullable predictionTiebreaker __attribute__((swift_name("predictionTiebreaker")));
@property FUSDKKotlinx_datetimeInstant * _Nullable predictionsMadeAt __attribute__((swift_name("predictionsMadeAt")));
@property FUSDKKotlinx_datetimeInstant * _Nullable predictionsUpdatedAt __attribute__((swift_name("predictionsUpdatedAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameTopXListModel.Companion")))
@interface FUSDKGameTopXListModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGameTopXListModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameType")))
@interface FUSDKGameType : FUSDKKotlinEnum<FUSDKGameType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKGameTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKGameType *topX __attribute__((swift_name("topX")));
@property (class, readonly) FUSDKGameType *matchQuiz __attribute__((swift_name("matchQuiz")));
@property (class, readonly) FUSDKGameType *single __attribute__((swift_name("single")));
+ (FUSDKKotlinArray<FUSDKGameType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKGameType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameType.Companion")))
@interface FUSDKGameTypeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGameTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GoldenGoal")))
@interface FUSDKGoldenGoal : FUSDKBase
- (instancetype)initWithMatchId:(NSString *)matchId playerId:(NSString *)playerId minute:(int32_t)minute goalType:(NSString *)goalType __attribute__((swift_name("init(matchId:playerId:minute:goalType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKGoldenGoalCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKGoldenGoal *)doCopyMatchId:(NSString *)matchId playerId:(NSString *)playerId minute:(int32_t)minute goalType:(NSString *)goalType __attribute__((swift_name("doCopy(matchId:playerId:minute:goalType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *goalType __attribute__((swift_name("goalType")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) int32_t minute __attribute__((swift_name("minute")));
@property NSString *playerId __attribute__((swift_name("playerId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GoldenGoal.Companion")))
@interface FUSDKGoldenGoalCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGoldenGoalCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GoldenGoalsType")))
@interface FUSDKGoldenGoalsType : FUSDKBase
- (instancetype)initWithMinute:(int32_t)minute matchId:(NSString *)matchId matchModel:(FUSDKMatchBasicModel * _Nullable)matchModel playerId:(NSString *)playerId playerModel:(FUSDKPlayerBasicModel * _Nullable)playerModel goalType:(NSString *)goalType __attribute__((swift_name("init(minute:matchId:matchModel:playerId:playerModel:goalType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKGoldenGoalsTypeCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKGoldenGoalsType *)doCopyMinute:(int32_t)minute matchId:(NSString *)matchId matchModel:(FUSDKMatchBasicModel * _Nullable)matchModel playerId:(NSString *)playerId playerModel:(FUSDKPlayerBasicModel * _Nullable)playerModel goalType:(NSString *)goalType __attribute__((swift_name("doCopy(minute:matchId:matchModel:playerId:playerModel:goalType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *goalType __attribute__((swift_name("goalType")));
@property (readonly) NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) FUSDKMatchBasicModel * _Nullable matchModel __attribute__((swift_name("matchModel")));
@property (readonly) int32_t minute __attribute__((swift_name("minute")));
@property (readonly) NSString *playerId __attribute__((swift_name("playerId")));
@property (readonly) FUSDKPlayerBasicModel * _Nullable playerModel __attribute__((swift_name("playerModel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GoldenGoalsType.Companion")))
@interface FUSDKGoldenGoalsTypeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGoldenGoalsTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainCursorFilters")))
@interface FUSDKMainCursorFilters : FUSDKBase
- (instancetype)initWithLimit:(FUSDKInt * _Nullable)limit startAfter:(NSString * _Nullable)startAfter __attribute__((swift_name("init(limit:startAfter:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMainCursorFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMainCursorFilters *)doCopyLimit:(FUSDKInt * _Nullable)limit startAfter:(NSString * _Nullable)startAfter __attribute__((swift_name("doCopy(limit:startAfter:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) NSString * _Nullable startAfter __attribute__((swift_name("startAfter")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainCursorFilters.Companion")))
@interface FUSDKMainCursorFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMainCursorFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketsResults")))
@interface FUSDKMarketsResults : FUSDKBase
- (instancetype)initWithMatchId:(NSString *)matchId market:(FUSDKMarket *)market result:(NSArray<NSString *> *)result matchModel:(FUSDKMatchBasicModel * _Nullable)matchModel matchStatus:(FUSDKStatus *)matchStatus playerModels:(NSArray<FUSDKPlayerBasicModel *> * _Nullable)playerModels __attribute__((swift_name("init(matchId:market:result:matchModel:matchStatus:playerModels:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMarketsResultsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMarketsResults *)doCopyMatchId:(NSString *)matchId market:(FUSDKMarket *)market result:(NSArray<NSString *> *)result matchModel:(FUSDKMatchBasicModel * _Nullable)matchModel matchStatus:(FUSDKStatus *)matchStatus playerModels:(NSArray<FUSDKPlayerBasicModel *> * _Nullable)playerModels __attribute__((swift_name("doCopy(matchId:market:result:matchModel:matchStatus:playerModels:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKMarket *market __attribute__((swift_name("market")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) FUSDKMatchBasicModel * _Nullable matchModel __attribute__((swift_name("matchModel")));
@property (readonly) FUSDKStatus *matchStatus __attribute__((swift_name("matchStatus")));
@property (readonly) NSArray<FUSDKPlayerBasicModel *> * _Nullable playerModels __attribute__((swift_name("playerModels")));
@property (readonly) NSArray<NSString *> *result __attribute__((swift_name("result")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketsResults.Companion")))
@interface FUSDKMarketsResultsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMarketsResultsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchQuizConfig")))
@interface FUSDKMatchQuizConfig : FUSDKBase
- (instancetype)initWithEnabled:(BOOL)enabled defaultMarkets:(NSArray<FUSDKMarket *> * _Nullable)defaultMarkets competitionsWhitelist:(NSArray<NSString *> * _Nullable)competitionsWhitelist __attribute__((swift_name("init(enabled:defaultMarkets:competitionsWhitelist:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMatchQuizConfigCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMatchQuizConfig *)doCopyEnabled:(BOOL)enabled defaultMarkets:(NSArray<FUSDKMarket *> * _Nullable)defaultMarkets competitionsWhitelist:(NSArray<NSString *> * _Nullable)competitionsWhitelist __attribute__((swift_name("doCopy(enabled:defaultMarkets:competitionsWhitelist:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSString *> * _Nullable competitionsWhitelist __attribute__((swift_name("competitionsWhitelist")));
@property (readonly) NSArray<FUSDKMarket *> * _Nullable defaultMarkets __attribute__((swift_name("defaultMarkets")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchQuizConfig.Companion")))
@interface FUSDKMatchQuizConfigCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMatchQuizConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchQuizRequestModel")))
@interface FUSDKMatchQuizRequestModel : FUSDKBase
- (instancetype)initWithGameInstanceId:(NSString *)gameInstanceId fixtures:(NSArray<FUSDKPredictionFixture *> *)fixtures __attribute__((swift_name("init(gameInstanceId:fixtures:)"))) __attribute__((objc_designated_initializer));
- (FUSDKMatchQuizRequestModel *)doCopyGameInstanceId:(NSString *)gameInstanceId fixtures:(NSArray<FUSDKPredictionFixture *> *)fixtures __attribute__((swift_name("doCopy(gameInstanceId:fixtures:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKPredictionFixture *> *fixtures __attribute__((swift_name("fixtures")));
@property (readonly) NSString *gameInstanceId __attribute__((swift_name("gameInstanceId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionMatchQuizModel")))
@interface FUSDKPredictionMatchQuizModel : FUSDKBase
- (instancetype)initWithValue:(id _Nullable)value playerId:(NSString * _Nullable)playerId playerModel:(FUSDKPlayerBasicModel * _Nullable)playerModel result:(FUSDKResultModel * _Nullable)result __attribute__((swift_name("init(value:playerId:playerModel:result:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPredictionMatchQuizModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPredictionMatchQuizModel *)doCopyValue:(id _Nullable)value playerId:(NSString * _Nullable)playerId playerModel:(FUSDKPlayerBasicModel * _Nullable)playerModel result:(FUSDKResultModel * _Nullable)result __attribute__((swift_name("doCopy(value:playerId:playerModel:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable playerId __attribute__((swift_name("playerId")));
@property (readonly) FUSDKPlayerBasicModel * _Nullable playerModel __attribute__((swift_name("playerModel")));
@property (readonly) FUSDKResultModel * _Nullable result __attribute__((swift_name("result")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionMatchQuizModel.Companion")))
@interface FUSDKPredictionMatchQuizModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPredictionMatchQuizModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionTopXModel")))
@interface FUSDKPredictionTopXModel : FUSDKBase
- (instancetype)initWithValue:(id _Nullable)value result:(FUSDKResultModel * _Nullable)result __attribute__((swift_name("init(value:result:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPredictionTopXModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPredictionTopXModel *)doCopyValue:(id _Nullable)value result:(FUSDKResultModel * _Nullable)result __attribute__((swift_name("doCopy(value:result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKResultModel * _Nullable result __attribute__((swift_name("result")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionTopXModel.Companion")))
@interface FUSDKPredictionTopXModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPredictionTopXModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultModel")))
@interface FUSDKResultModel : FUSDKBase
- (instancetype)initWithSettledAt:(FUSDKKotlinx_datetimeInstant * _Nullable)settledAt resettledAt:(FUSDKKotlinx_datetimeInstant * _Nullable)resettledAt status:(FUSDKResultStatus * _Nullable)status outcome:(FUSDKOutcome * _Nullable)outcome points:(int32_t)points __attribute__((swift_name("init(settledAt:resettledAt:status:outcome:points:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKResultModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKResultModel *)doCopySettledAt:(FUSDKKotlinx_datetimeInstant * _Nullable)settledAt resettledAt:(FUSDKKotlinx_datetimeInstant * _Nullable)resettledAt status:(FUSDKResultStatus * _Nullable)status outcome:(FUSDKOutcome * _Nullable)outcome points:(int32_t)points __attribute__((swift_name("doCopy(settledAt:resettledAt:status:outcome:points:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKOutcome * _Nullable outcome __attribute__((swift_name("outcome")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable resettledAt __attribute__((swift_name("resettledAt")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable settledAt __attribute__((swift_name("settledAt")));
@property (readonly) FUSDKResultStatus * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultModel.Companion")))
@interface FUSDKResultModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKResultModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TieBreakersType")))
@interface FUSDKTieBreakersType : FUSDKBase
- (instancetype)initWithGoldenGoals:(NSArray<FUSDKGoldenGoalsType *> *)goldenGoals __attribute__((swift_name("init(goldenGoals:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTieBreakersTypeCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTieBreakersType *)doCopyGoldenGoals:(NSArray<FUSDKGoldenGoalsType *> *)goldenGoals __attribute__((swift_name("doCopy(goldenGoals:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKGoldenGoalsType *> *goldenGoals __attribute__((swift_name("goldenGoals")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TieBreakersType.Companion")))
@interface FUSDKTieBreakersTypeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTieBreakersTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TiebreakerModel")))
@interface FUSDKTiebreakerModel : FUSDKBase
- (instancetype)initWithGoldenGoal:(FUSDKInt * _Nullable)goldenGoal __attribute__((swift_name("init(goldenGoal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTiebreakerModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTiebreakerModel *)doCopyGoldenGoal:(FUSDKInt * _Nullable)goldenGoal __attribute__((swift_name("doCopy(goldenGoal:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKInt * _Nullable goldenGoal __attribute__((swift_name("goldenGoal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TiebreakerModel.Companion")))
@interface FUSDKTiebreakerModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTiebreakerModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tiebreakers")))
@interface FUSDKTiebreakers : FUSDKBase
- (instancetype)initWithGoldenGoals:(NSArray<FUSDKGoldenGoal *> * _Nullable)goldenGoals __attribute__((swift_name("init(goldenGoals:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTiebreakersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTiebreakers *)doCopyGoldenGoals:(NSArray<FUSDKGoldenGoal *> * _Nullable)goldenGoals __attribute__((swift_name("doCopy(goldenGoals:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKGoldenGoal *> * _Nullable goldenGoals __attribute__((swift_name("goldenGoals")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tiebreakers.Companion")))
@interface FUSDKTiebreakersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTiebreakersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeTiebreaker")))
@interface FUSDKTimeTiebreaker : FUSDKBase
- (instancetype)initWithTimeTiebreaker:(BOOL)timeTiebreaker __attribute__((swift_name("init(timeTiebreaker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTimeTiebreakerCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTimeTiebreaker *)doCopyTimeTiebreaker:(BOOL)timeTiebreaker __attribute__((swift_name("doCopy(timeTiebreaker:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="time_tiebreaker")
*/
@property (readonly) BOOL timeTiebreaker __attribute__((swift_name("timeTiebreaker")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeTiebreaker.Companion")))
@interface FUSDKTimeTiebreakerCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTimeTiebreakerCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TopXConfig")))
@interface FUSDKTopXConfig : FUSDKBase
- (instancetype)initWithEnabled:(BOOL)enabled minFixtures:(int32_t)minFixtures maxFixtures:(int32_t)maxFixtures competitionsWhitelist:(NSArray<NSString *> * _Nullable)competitionsWhitelist __attribute__((swift_name("init(enabled:minFixtures:maxFixtures:competitionsWhitelist:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTopXConfigCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTopXConfig *)doCopyEnabled:(BOOL)enabled minFixtures:(int32_t)minFixtures maxFixtures:(int32_t)maxFixtures competitionsWhitelist:(NSArray<NSString *> * _Nullable)competitionsWhitelist __attribute__((swift_name("doCopy(enabled:minFixtures:maxFixtures:competitionsWhitelist:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable competitionsWhitelist __attribute__((swift_name("competitionsWhitelist")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) int32_t maxFixtures __attribute__((swift_name("maxFixtures")));
@property (readonly) int32_t minFixtures __attribute__((swift_name("minFixtures")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TopXConfig.Companion")))
@interface FUSDKTopXConfigCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTopXConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TopXPredictionRequestModel")))
@interface FUSDKTopXPredictionRequestModel : FUSDKBase
- (instancetype)initWithGameInstanceId:(NSString *)gameInstanceId fixtures:(NSArray<FUSDKPredictionFixture *> *)fixtures tiebreaker:(FUSDKTiebreaker * _Nullable)tiebreaker __attribute__((swift_name("init(gameInstanceId:fixtures:tiebreaker:)"))) __attribute__((objc_designated_initializer));
- (FUSDKTopXPredictionRequestModel *)doCopyGameInstanceId:(NSString *)gameInstanceId fixtures:(NSArray<FUSDKPredictionFixture *> *)fixtures tiebreaker:(FUSDKTiebreaker * _Nullable)tiebreaker __attribute__((swift_name("doCopy(gameInstanceId:fixtures:tiebreaker:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKPredictionFixture *> *fixtures __attribute__((swift_name("fixtures")));
@property (readonly) NSString *gameInstanceId __attribute__((swift_name("gameInstanceId")));
@property (readonly) FUSDKTiebreaker * _Nullable tiebreaker __attribute__((swift_name("tiebreaker")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserListWinners")))
@interface FUSDKUserListWinners : FUSDKBase
- (instancetype)initWithPosition:(NSString *)position profileId:(NSString *)profileId profileModel:(FUSDKProfileModel * _Nullable)profileModel note:(NSString *)note tags:(NSArray<NSString *> *)tags __attribute__((swift_name("init(position:profileId:profileModel:note:tags:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKUserListWinnersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKUserListWinners *)doCopyPosition:(NSString *)position profileId:(NSString *)profileId profileModel:(FUSDKProfileModel * _Nullable)profileModel note:(NSString *)note tags:(NSArray<NSString *> *)tags __attribute__((swift_name("doCopy(position:profileId:profileModel:note:tags:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *note __attribute__((swift_name("note")));
@property (readonly) NSString *position __attribute__((swift_name("position")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="profile_id")
*/
@property (readonly) NSString *profileId __attribute__((swift_name("profileId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="profile_model")
*/
@property FUSDKProfileModel * _Nullable profileModel __attribute__((swift_name("profileModel")));
@property (readonly) NSArray<NSString *> *tags __attribute__((swift_name("tags")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserListWinners.Companion")))
@interface FUSDKUserListWinnersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKUserListWinnersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("ILoyalty")))
@protocol FUSDKILoyalty
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getClientBadgesDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKBadgesModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getClientBadges(disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConfigDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKLoyaltyConfig * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getConfig(disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEntitiesFollowsFilters:(FUSDKEntitiesFollowsFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKSimpleResponse<FUSDKFollows *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getEntitiesFollows(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHighestSuccessRateFilters:(FUSDKHighestSuccessRateFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKSimpleResponse<NSArray<FUSDKLeaderboardHighestSuccessRate *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getHighestSuccessRate(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLeaderboardTemplateId:(NSString *)templateId filters:(FUSDKLeaderboardFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKPagedResponse<NSArray<FUSDKLeaderboardModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getLeaderboard(templateId:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLeaderboardForGameGameId:(NSString *)gameId limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKPagedResponse<NSArray<FUSDKLeaderboardModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getLeaderboardForGame(gameId:limit:page:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLeaderboardForLeagueLeagueId:(NSString *)leagueId filters:(FUSDKLeagueLeaderboardFilters * _Nullable)filters completionHandler:(void (^)(FUSDKPagedResponse<NSArray<FUSDKLeaderboardModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getLeaderboardForLeague(leagueId:filters:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOwnRankingsFilters:(FUSDKUserRankingFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKPagedResponse<NSArray<FUSDKProfileRank *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getOwnRankings(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTemplateByIdTemplateId:(NSString *)templateId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKSimpleResponse<FUSDKLeaderboardTemplate *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getTemplateById(templateId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTemplateMatchesTemplateId:(NSString *)templateId groupId:(NSString * _Nullable)groupId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKSimpleResponse<NSArray<FUSDKMatchFullModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getTemplateMatches(templateId:groupId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTemplateWinnersTemplateId:(NSString *)templateId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKSimpleResponse<FUSDKContestWinners *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getTemplateWinners(templateId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTemplatesFilters:(FUSDKTemplateFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKSimpleResponse<NSArray<FUSDKLeaderboardTemplate *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getTemplates(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserRankingsUserId:(NSString *)userId filters:(FUSDKUserRankingFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKPagedResponse<NSArray<FUSDKProfileRank *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserRankings(userId:filters:disableCache:completionHandler:)")));
@end

__attribute__((swift_name("LoyaltyApiService")))
@interface FUSDKLoyaltyApiService : FUSDKBase
- (instancetype)initWithApiClient:(FUSDKAPIClientService *)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConfigWithCompletionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getConfig(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConfigV2WithCompletionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getConfigV2(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEntitiesFollowsCompetitions:(NSArray<NSString *> * _Nullable)competitions teams:(NSArray<NSString *> * _Nullable)teams players:(NSArray<NSString *> * _Nullable)players disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEntitiesFollows(competitions:teams:players:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getHighestSuccessRateFromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate usersCount:(FUSDKInt * _Nullable)usersCount minimumPredictions:(FUSDKInt * _Nullable)minimumPredictions market:(FUSDKMarket * _Nullable)market disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getHighestSuccessRate(fromDate:toDate:usersCount:minimumPredictions:market:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLeaderboardTemplateId:(NSString *)templateId groupId:(NSString * _Nullable)groupId limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLeaderboard(templateId:groupId:limit:page:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLeaderboardForGameGameId:(NSString *)gameId limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLeaderboardForGame(gameId:limit:page:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLeaderboardForLeagueLeagueId:(NSString *)leagueId templateId:(NSString *)templateId limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLeaderboardForLeague(leagueId:templateId:limit:page:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOwnStatisticsWithCompletionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOwnStatistics(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTemplateByIdTemplateId:(NSString *)templateId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTemplateById(templateId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTemplateWinnersTemplateId:(NSString *)templateId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTemplateWinners(templateId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTemplatesFlags:(NSString * _Nullable)flags status:(FUSDKTemplateStatus * _Nullable)status type:(FUSDKTemplateType * _Nullable)type activeFrom:(NSString * _Nullable)activeFrom activeTo:(NSString * _Nullable)activeTo createdFrom:(NSString * _Nullable)createdFrom createdTo:(NSString * _Nullable)createdTo updatedFrom:(NSString * _Nullable)updatedFrom updatedTo:(NSString * _Nullable)updatedTo disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTemplates(flags:status:type:activeFrom:activeTo:createdFrom:createdTo:updatedFrom:updatedTo:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserRankingsUserId:(NSString *)userId rankType:(FUSDKRankType * _Nullable)rankType gameType:(FUSDKGameType * _Nullable)gameType typeIds:(NSArray<NSString *> * _Nullable)typeIds limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page sortOrder:(FUSDKSortOrder * _Nullable)sortOrder disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserRankings(userId:rankType:gameType:typeIds:limit:page:sortOrder:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserStatisticsUserId:(NSString *)userId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserStatistics(userId:disableCache:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AchievementsStats")))
@interface FUSDKAchievementsStats : FUSDKBase
- (instancetype)initWithId:(NSString *)id achievedAt:(FUSDKKotlinx_datetimeInstant *)achievedAt __attribute__((swift_name("init(id:achievedAt:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKAchievementsStatsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKAchievementsStats *)doCopyId:(NSString *)id achievedAt:(FUSDKKotlinx_datetimeInstant *)achievedAt __attribute__((swift_name("doCopy(id:achievedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/fansunitedmedia/sdk/network/serialization/InstantSerializer))
*/
@property (readonly) FUSDKKotlinx_datetimeInstant *achievedAt __attribute__((swift_name("achievedAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AchievementsStats.Companion")))
@interface FUSDKAchievementsStatsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKAchievementsStatsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionValue")))
@interface FUSDKActionValue : FUSDKBase
- (instancetype)initWithValue:(NSArray<FUSDKActionValueItem *> * _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKActionValueCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKActionValue *)doCopyValue:(NSArray<FUSDKActionValueItem *> * _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKActionValueItem *> * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionValue.Companion")))
@interface FUSDKActionValueCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKActionValueCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionValueItem")))
@interface FUSDKActionValueItem : FUSDKBase
- (instancetype)initWithId:(FUSDKLoyaltyConfigAction *)id weight:(FUSDKInt * _Nullable)weight multiplier:(int32_t)multiplier __attribute__((swift_name("init(id:weight:multiplier:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKActionValueItemCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKActionValueItem *)doCopyId:(FUSDKLoyaltyConfigAction *)id weight:(FUSDKInt * _Nullable)weight multiplier:(int32_t)multiplier __attribute__((swift_name("doCopy(id:weight:multiplier:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKLoyaltyConfigAction *id __attribute__((swift_name("id")));
@property (readonly) int32_t multiplier __attribute__((swift_name("multiplier")));
@property (readonly) FUSDKInt * _Nullable weight __attribute__((swift_name("weight")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActionValueItem.Companion")))
@interface FUSDKActionValueItemCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKActionValueItemCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BadgeAsset")))
@interface FUSDKBadgeAsset : FUSDKBase
- (instancetype)initWithMainImageUrl:(NSString * _Nullable)mainImageUrl __attribute__((swift_name("init(mainImageUrl:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKBadgeAssetCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKBadgeAsset *)doCopyMainImageUrl:(NSString * _Nullable)mainImageUrl __attribute__((swift_name("doCopy(mainImageUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable mainImageUrl __attribute__((swift_name("mainImageUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BadgeAsset.Companion")))
@interface FUSDKBadgeAssetCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKBadgeAssetCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BadgeConfigData")))
@interface FUSDKBadgeConfigData : FUSDKBase
- (instancetype)initWithId:(NSString *)id enabled:(BOOL)enabled label:(NSString *)label assets:(FUSDKBadgeAsset * _Nullable)assets requirements:(FUSDKBadgeConfigRequirement * _Nullable)requirements __attribute__((swift_name("init(id:enabled:label:assets:requirements:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKBadgeConfigDataCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKBadgeConfigData *)doCopyId:(NSString *)id enabled:(BOOL)enabled label:(NSString *)label assets:(FUSDKBadgeAsset * _Nullable)assets requirements:(FUSDKBadgeConfigRequirement * _Nullable)requirements __attribute__((swift_name("doCopy(id:enabled:label:assets:requirements:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKBadgeAsset * _Nullable assets __attribute__((swift_name("assets")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) FUSDKBadgeConfigRequirement * _Nullable requirements __attribute__((swift_name("requirements")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BadgeConfigData.Companion")))
@interface FUSDKBadgeConfigDataCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKBadgeConfigDataCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BadgeConfigRequirement")))
@interface FUSDKBadgeConfigRequirement : FUSDKBase
- (instancetype)initWithPoints:(FUSDKInt * _Nullable)points gameParticipationCount:(FUSDKInt * _Nullable)gameParticipationCount predictionsMade:(FUSDKInt * _Nullable)predictionsMade correctPredictions:(FUSDKInt * _Nullable)correctPredictions totalDiscussionPoints:(FUSDKInt * _Nullable)totalDiscussionPoints postsCount:(FUSDKInt * _Nullable)postsCount postPoints:(FUSDKInt * _Nullable)postPoints reactionsCount:(FUSDKInt * _Nullable)reactionsCount __attribute__((swift_name("init(points:gameParticipationCount:predictionsMade:correctPredictions:totalDiscussionPoints:postsCount:postPoints:reactionsCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKBadgeConfigRequirementCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKBadgeConfigRequirement *)doCopyPoints:(FUSDKInt * _Nullable)points gameParticipationCount:(FUSDKInt * _Nullable)gameParticipationCount predictionsMade:(FUSDKInt * _Nullable)predictionsMade correctPredictions:(FUSDKInt * _Nullable)correctPredictions totalDiscussionPoints:(FUSDKInt * _Nullable)totalDiscussionPoints postsCount:(FUSDKInt * _Nullable)postsCount postPoints:(FUSDKInt * _Nullable)postPoints reactionsCount:(FUSDKInt * _Nullable)reactionsCount __attribute__((swift_name("doCopy(points:gameParticipationCount:predictionsMade:correctPredictions:totalDiscussionPoints:postsCount:postPoints:reactionsCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKInt * _Nullable correctPredictions __attribute__((swift_name("correctPredictions")));
@property (readonly) FUSDKInt * _Nullable gameParticipationCount __attribute__((swift_name("gameParticipationCount")));
@property (readonly) FUSDKInt * _Nullable points __attribute__((swift_name("points")));
@property (readonly) FUSDKInt * _Nullable postPoints __attribute__((swift_name("postPoints")));
@property (readonly) FUSDKInt * _Nullable postsCount __attribute__((swift_name("postsCount")));
@property (readonly) FUSDKInt * _Nullable predictionsMade __attribute__((swift_name("predictionsMade")));
@property (readonly) FUSDKInt * _Nullable reactionsCount __attribute__((swift_name("reactionsCount")));
@property (readonly) FUSDKInt * _Nullable totalDiscussionPoints __attribute__((swift_name("totalDiscussionPoints")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BadgeConfigRequirement.Companion")))
@interface FUSDKBadgeConfigRequirementCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKBadgeConfigRequirementCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BadgeModel")))
@interface FUSDKBadgeModel : FUSDKBase
- (instancetype)initWithPredictor:(NSArray<FUSDKBadgeConfigData *> * _Nullable)predictor topX:(NSArray<FUSDKBadgeConfigData *> * _Nullable)topX matchQuiz:(NSArray<FUSDKBadgeConfigData *> * _Nullable)matchQuiz __attribute__((swift_name("init(predictor:topX:matchQuiz:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKBadgeModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKBadgeModel *)doCopyPredictor:(NSArray<FUSDKBadgeConfigData *> * _Nullable)predictor topX:(NSArray<FUSDKBadgeConfigData *> * _Nullable)topX matchQuiz:(NSArray<FUSDKBadgeConfigData *> * _Nullable)matchQuiz __attribute__((swift_name("doCopy(predictor:topX:matchQuiz:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKBadgeConfigData *> * _Nullable matchQuiz __attribute__((swift_name("matchQuiz")));
@property (readonly) NSArray<FUSDKBadgeConfigData *> * _Nullable predictor __attribute__((swift_name("predictor")));
@property (readonly) NSArray<FUSDKBadgeConfigData *> * _Nullable topX __attribute__((swift_name("topX")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BadgeModel.Companion")))
@interface FUSDKBadgeModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKBadgeModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BadgesModel")))
@interface FUSDKBadgesModel : FUSDKBase
- (instancetype)initWithPredictor:(NSArray<FUSDKPredictorBadgesValue *> *)predictor topX:(NSArray<FUSDKGameBadgesValue *> *)topX matchQuiz:(NSArray<FUSDKGameBadgesValue *> *)matchQuiz games:(NSArray<FUSDKGamesBadgesValue *> *)games football:(NSArray<FUSDKFootballBadgesValue *> *)football classicQuizzes:(NSArray<FUSDKMiniGamesBadgesValue *> *)classicQuizzes eitherOr:(NSArray<FUSDKMiniGamesBadgesValue *> *)eitherOr discussions:(NSArray<FUSDKDiscussionsBadgesValue *> *)discussions voting:(FUSDKVotingBadgesValue *)voting __attribute__((swift_name("init(predictor:topX:matchQuiz:games:football:classicQuizzes:eitherOr:discussions:voting:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKBadgesModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKBadgesModel *)doCopyPredictor:(NSArray<FUSDKPredictorBadgesValue *> *)predictor topX:(NSArray<FUSDKGameBadgesValue *> *)topX matchQuiz:(NSArray<FUSDKGameBadgesValue *> *)matchQuiz games:(NSArray<FUSDKGamesBadgesValue *> *)games football:(NSArray<FUSDKFootballBadgesValue *> *)football classicQuizzes:(NSArray<FUSDKMiniGamesBadgesValue *> *)classicQuizzes eitherOr:(NSArray<FUSDKMiniGamesBadgesValue *> *)eitherOr discussions:(NSArray<FUSDKDiscussionsBadgesValue *> *)discussions voting:(FUSDKVotingBadgesValue *)voting __attribute__((swift_name("doCopy(predictor:topX:matchQuiz:games:football:classicQuizzes:eitherOr:discussions:voting:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKMiniGamesBadgesValue *> *classicQuizzes __attribute__((swift_name("classicQuizzes")));
@property (readonly) NSArray<FUSDKDiscussionsBadgesValue *> *discussions __attribute__((swift_name("discussions")));
@property (readonly) NSArray<FUSDKMiniGamesBadgesValue *> *eitherOr __attribute__((swift_name("eitherOr")));
@property (readonly) NSArray<FUSDKFootballBadgesValue *> *football __attribute__((swift_name("football")));
@property (readonly) NSArray<FUSDKGamesBadgesValue *> *games __attribute__((swift_name("games")));
@property (readonly) NSArray<FUSDKGameBadgesValue *> *matchQuiz __attribute__((swift_name("matchQuiz")));
@property (readonly) NSArray<FUSDKPredictorBadgesValue *> *predictor __attribute__((swift_name("predictor")));
@property (readonly) NSArray<FUSDKGameBadgesValue *> *topX __attribute__((swift_name("topX")));
@property (readonly) FUSDKVotingBadgesValue *voting __attribute__((swift_name("voting")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BadgesModel.Companion")))
@interface FUSDKBadgesModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKBadgesModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("BadgesValue")))
@interface FUSDKBadgesValue : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id label:(NSString * _Nullable)label description:(NSString * _Nullable)description flags:(NSArray<NSString *> * _Nullable)flags assets:(FUSDKBadgeAsset * _Nullable)assets enabled:(BOOL)enabled serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:label:description:flags:assets:enabled:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKBadgesValueCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) FUSDKBadgeAsset * _Nullable assets __attribute__((swift_name("assets")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property BOOL enabled __attribute__((swift_name("enabled")));
@property NSArray<NSString *> * _Nullable flags __attribute__((swift_name("flags")));
@property NSString *id __attribute__((swift_name("id")));
@property NSString *label __attribute__((swift_name("label")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BadgesValue.Companion")))
@interface FUSDKBadgesValueCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKBadgesValueCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("SuccessRatePercent")))
@interface FUSDKSuccessRatePercent : FUSDKBase
- (instancetype)initWithSuccessRatePercent:(int32_t)successRatePercent __attribute__((swift_name("init(successRatePercent:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSeen0:(int32_t)seen0 successRatePercent:(int32_t)successRatePercent serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:successRatePercent:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKSuccessRatePercentCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t successRatePercent __attribute__((swift_name("successRatePercent")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ByModel")))
@interface FUSDKByModel<T> : FUSDKSuccessRatePercent
- (instancetype)initWithModel:(T _Nullable)model __attribute__((swift_name("init(model:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSuccessRatePercent:(int32_t)successRatePercent __attribute__((swift_name("init(successRatePercent:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 successRatePercent:(int32_t)successRatePercent serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:successRatePercent:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKByModelCompanion *companion __attribute__((swift_name("companion")));
@property T _Nullable model __attribute__((swift_name("model")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ByModelCompanion")))
@interface FUSDKByModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKByModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeSerial0:(id<FUSDKKotlinx_serialization_coreKSerializer>)typeSerial0 __attribute__((swift_name("serializer(typeSerial0:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClassicQuizzesStats")))
@interface FUSDKClassicQuizzesStats : FUSDKBase
- (instancetype)initWithParticipationCount:(FUSDKInt * _Nullable)participationCount points:(FUSDKInt * _Nullable)points __attribute__((swift_name("init(participationCount:points:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKClassicQuizzesStatsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKClassicQuizzesStats *)doCopyParticipationCount:(FUSDKInt * _Nullable)participationCount points:(FUSDKInt * _Nullable)points __attribute__((swift_name("doCopy(participationCount:points:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKInt * _Nullable participationCount __attribute__((swift_name("participationCount")));
@property (readonly) FUSDKInt * _Nullable points __attribute__((swift_name("points")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClassicQuizzesStats.Companion")))
@interface FUSDKClassicQuizzesStatsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKClassicQuizzesStatsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientBadges")))
@interface FUSDKClientBadges : FUSDKBase
- (instancetype)initWithGeneral:(NSArray<NSString *> * _Nullable)general predictor:(NSArray<NSString *> * _Nullable)predictor topX:(NSArray<NSString *> * _Nullable)topX matchQuiz:(NSArray<NSString *> * _Nullable)matchQuiz __attribute__((swift_name("init(general:predictor:topX:matchQuiz:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKClientBadgesCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKClientBadges *)doCopyGeneral:(NSArray<NSString *> * _Nullable)general predictor:(NSArray<NSString *> * _Nullable)predictor topX:(NSArray<NSString *> * _Nullable)topX matchQuiz:(NSArray<NSString *> * _Nullable)matchQuiz __attribute__((swift_name("doCopy(general:predictor:topX:matchQuiz:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable general __attribute__((swift_name("general")));
@property (readonly) NSArray<NSString *> * _Nullable matchQuiz __attribute__((swift_name("matchQuiz")));
@property (readonly) NSArray<NSString *> * _Nullable predictor __attribute__((swift_name("predictor")));
@property (readonly) NSArray<NSString *> * _Nullable topX __attribute__((swift_name("topX")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientBadges.Companion")))
@interface FUSDKClientBadgesCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKClientBadgesCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Condition")))
@interface FUSDKCondition : FUSDKBase
- (instancetype)initWithList:(NSArray<FUSDKConditionType *> * _Nullable)list __attribute__((swift_name("init(list:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKConditionCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKCondition *)doCopyList:(NSArray<FUSDKConditionType *> * _Nullable)list __attribute__((swift_name("doCopy(list:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKConditionType *> * _Nullable list __attribute__((swift_name("list")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Condition.Companion")))
@interface FUSDKConditionCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKConditionCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConditionType")))
@interface FUSDKConditionType : FUSDKKotlinEnum<FUSDKConditionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKConditionTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKConditionType *fullProfile __attribute__((swift_name("fullProfile")));
@property (class, readonly) FUSDKConditionType *favouriteTeam __attribute__((swift_name("favouriteTeam")));
+ (FUSDKKotlinArray<FUSDKConditionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKConditionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConditionType.Companion")))
@interface FUSDKConditionTypeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKConditionTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionStats")))
@interface FUSDKDiscussionStats : FUSDKBase
- (instancetype)initWithTotalPoints:(FUSDKInt * _Nullable)totalPoints postPoints:(FUSDKInt * _Nullable)postPoints postsMade:(FUSDKInt * _Nullable)postsMade reactionPoints:(FUSDKInt * _Nullable)reactionPoints reactionCount:(FUSDKInt * _Nullable)reactionCount __attribute__((swift_name("init(totalPoints:postPoints:postsMade:reactionPoints:reactionCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKDiscussionStatsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKDiscussionStats *)doCopyTotalPoints:(FUSDKInt * _Nullable)totalPoints postPoints:(FUSDKInt * _Nullable)postPoints postsMade:(FUSDKInt * _Nullable)postsMade reactionPoints:(FUSDKInt * _Nullable)reactionPoints reactionCount:(FUSDKInt * _Nullable)reactionCount __attribute__((swift_name("doCopy(totalPoints:postPoints:postsMade:reactionPoints:reactionCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKInt * _Nullable postPoints __attribute__((swift_name("postPoints")));
@property (readonly) FUSDKInt * _Nullable postsMade __attribute__((swift_name("postsMade")));
@property (readonly) FUSDKInt * _Nullable reactionCount __attribute__((swift_name("reactionCount")));
@property (readonly) FUSDKInt * _Nullable reactionPoints __attribute__((swift_name("reactionPoints")));
@property (readonly) FUSDKInt * _Nullable totalPoints __attribute__((swift_name("totalPoints")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionStats.Companion")))
@interface FUSDKDiscussionStatsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKDiscussionStatsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionsBadgeRequirements")))
@interface FUSDKDiscussionsBadgeRequirements : FUSDKBase
- (instancetype)initWithTotalDiscussionPoints:(int32_t)totalDiscussionPoints postsCount:(int32_t)postsCount postPoints:(int32_t)postPoints reactionsCount:(int32_t)reactionsCount __attribute__((swift_name("init(totalDiscussionPoints:postsCount:postPoints:reactionsCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKDiscussionsBadgeRequirementsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKDiscussionsBadgeRequirements *)doCopyTotalDiscussionPoints:(int32_t)totalDiscussionPoints postsCount:(int32_t)postsCount postPoints:(int32_t)postPoints reactionsCount:(int32_t)reactionsCount __attribute__((swift_name("doCopy(totalDiscussionPoints:postsCount:postPoints:reactionsCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t postPoints __attribute__((swift_name("postPoints")));
@property (readonly) int32_t postsCount __attribute__((swift_name("postsCount")));
@property (readonly) int32_t reactionsCount __attribute__((swift_name("reactionsCount")));
@property (readonly) int32_t totalDiscussionPoints __attribute__((swift_name("totalDiscussionPoints")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionsBadgeRequirements.Companion")))
@interface FUSDKDiscussionsBadgeRequirementsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKDiscussionsBadgeRequirementsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionsBadgesValue")))
@interface FUSDKDiscussionsBadgesValue : FUSDKBadgesValue
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id label:(NSString * _Nullable)label description:(NSString * _Nullable)description flags:(NSArray<NSString *> * _Nullable)flags assets:(FUSDKBadgeAsset * _Nullable)assets enabled:(BOOL)enabled serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:label:description:flags:assets:enabled:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKDiscussionsBadgesValueCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) FUSDKDiscussionsBadgeRequirements * _Nullable requirements __attribute__((swift_name("requirements")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscussionsBadgesValue.Companion")))
@interface FUSDKDiscussionsBadgesValueCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKDiscussionsBadgesValueCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EitherOrStats")))
@interface FUSDKEitherOrStats : FUSDKBase
- (instancetype)initWithParticipationCount:(FUSDKInt * _Nullable)participationCount __attribute__((swift_name("init(participationCount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKEitherOrStatsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKEitherOrStats *)doCopyParticipationCount:(FUSDKInt * _Nullable)participationCount __attribute__((swift_name("doCopy(participationCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKInt * _Nullable participationCount __attribute__((swift_name("participationCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EitherOrStats.Companion")))
@interface FUSDKEitherOrStatsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKEitherOrStatsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EntitiesFollowsFilters")))
@interface FUSDKEntitiesFollowsFilters : FUSDKBase
- (instancetype)initWithFootballCompetitions:(NSArray<NSString *> * _Nullable)footballCompetitions footballTeams:(NSArray<NSString *> * _Nullable)footballTeams footballPlayers:(NSArray<NSString *> * _Nullable)footballPlayers __attribute__((swift_name("init(footballCompetitions:footballTeams:footballPlayers:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKEntitiesFollowsFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKEntitiesFollowsFilters *)doCopyFootballCompetitions:(NSArray<NSString *> * _Nullable)footballCompetitions footballTeams:(NSArray<NSString *> * _Nullable)footballTeams footballPlayers:(NSArray<NSString *> * _Nullable)footballPlayers __attribute__((swift_name("doCopy(footballCompetitions:footballTeams:footballPlayers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable footballCompetitions __attribute__((swift_name("footballCompetitions")));
@property (readonly) NSArray<NSString *> * _Nullable footballPlayers __attribute__((swift_name("footballPlayers")));
@property (readonly) NSArray<NSString *> * _Nullable footballTeams __attribute__((swift_name("footballTeams")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EntitiesFollowsFilters.Companion")))
@interface FUSDKEntitiesFollowsFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKEntitiesFollowsFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Follows")))
@interface FUSDKFollows : FUSDKBase
- (instancetype)initWithBreakdown:(NSArray<FUSDKFollowsBreakdown *> *)breakdown total:(int32_t)total __attribute__((swift_name("init(breakdown:total:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKFollowsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKFollows *)doCopyBreakdown:(NSArray<FUSDKFollowsBreakdown *> *)breakdown total:(int32_t)total __attribute__((swift_name("doCopy(breakdown:total:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKFollowsBreakdown *> *breakdown __attribute__((swift_name("breakdown")));
@property (readonly) int32_t total __attribute__((swift_name("total")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Follows.Companion")))
@interface FUSDKFollowsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFollowsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FollowsBreakdown")))
@interface FUSDKFollowsBreakdown : FUSDKBase <FUSDKIRemappable>
- (instancetype)initWithId:(NSString *)id count:(int32_t)count model:(id _Nullable)model __attribute__((swift_name("init(id:count:model:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKFollowsBreakdownCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKFollowsBreakdown *)doCopyId:(NSString *)id count:(int32_t)count model:(id _Nullable)model __attribute__((swift_name("doCopy(id:count:model:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (FUSDKResourceType * _Nullable)getResourceType __attribute__((swift_name("getResourceType()")));
- (NSString *(^)(void))getTargetProp __attribute__((swift_name("getTargetProp()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property NSString *id __attribute__((swift_name("id")));
@property id _Nullable model __attribute__((swift_name("model")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FollowsBreakdown.Companion")))
@interface FUSDKFollowsBreakdownCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFollowsBreakdownCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FootballBadgeRequirements")))
@interface FUSDKFootballBadgeRequirements : FUSDKBase <FUSDKIRemappable>
- (instancetype)initWithPredictionsNumber:(int32_t)predictionsNumber correctPredictions:(int32_t)correctPredictions points:(int32_t)points entityId:(NSString *)entityId entityType:(FUSDKResourceType *)entityType __attribute__((swift_name("init(predictionsNumber:correctPredictions:points:entityId:entityType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKFootballBadgeRequirementsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKFootballBadgeRequirements *)doCopyPredictionsNumber:(int32_t)predictionsNumber correctPredictions:(int32_t)correctPredictions points:(int32_t)points entityId:(NSString *)entityId entityType:(FUSDKResourceType *)entityType __attribute__((swift_name("doCopy(predictionsNumber:correctPredictions:points:entityId:entityType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (FUSDKResourceType *)getResourceType __attribute__((swift_name("getResourceType()")));
- (NSString *(^)(void))getTargetProp __attribute__((swift_name("getTargetProp()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t correctPredictions __attribute__((swift_name("correctPredictions")));
@property (readonly) NSString *entityId __attribute__((swift_name("entityId")));
@property (readonly) FUSDKResourceType *entityType __attribute__((swift_name("entityType")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) int32_t predictionsNumber __attribute__((swift_name("predictionsNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FootballBadgeRequirements.Companion")))
@interface FUSDKFootballBadgeRequirementsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFootballBadgeRequirementsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FootballBadgesValue")))
@interface FUSDKFootballBadgesValue : FUSDKBadgesValue
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id label:(NSString * _Nullable)label description:(NSString * _Nullable)description flags:(NSArray<NSString *> * _Nullable)flags assets:(FUSDKBadgeAsset * _Nullable)assets enabled:(BOOL)enabled serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:label:description:flags:assets:enabled:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKFootballBadgesValueCompanion *companion __attribute__((swift_name("companion")));
@property FUSDKFootballBadgeRequirements * _Nullable requirements __attribute__((swift_name("requirements")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FootballBadgesValue.Companion")))
@interface FUSDKFootballBadgesValueCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFootballBadgesValueCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("GameBadgeRequirements")))
@interface FUSDKGameBadgeRequirements : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 participationCount:(int32_t)participationCount points:(int32_t)points fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:participationCount:points:fromDate:toDate:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKGameBadgeRequirementsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable fromDate __attribute__((swift_name("fromDate")));
@property (readonly) int32_t participationCount __attribute__((swift_name("participationCount")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable toDate __attribute__((swift_name("toDate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameBadgeRequirements.Companion")))
@interface FUSDKGameBadgeRequirementsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGameBadgeRequirementsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameBadgesValue")))
@interface FUSDKGameBadgesValue : FUSDKBadgesValue
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id label:(NSString * _Nullable)label description:(NSString * _Nullable)description flags:(NSArray<NSString *> * _Nullable)flags assets:(FUSDKBadgeAsset * _Nullable)assets enabled:(BOOL)enabled serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:label:description:flags:assets:enabled:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKGameBadgesValueCompanion *companion __attribute__((swift_name("companion")));
@property FUSDKGameBadgeRequirements * _Nullable requirements __attribute__((swift_name("requirements")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GameBadgesValue.Companion")))
@interface FUSDKGameBadgesValueCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGameBadgesValueCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GamePredictionsStats")))
@interface FUSDKGamePredictionsStats : FUSDKBase
- (instancetype)initWithParticipations:(int32_t)participations points:(int32_t)points __attribute__((swift_name("init(participations:points:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKGamePredictionsStatsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKGamePredictionsStats *)doCopyParticipations:(int32_t)participations points:(int32_t)points __attribute__((swift_name("doCopy(participations:points:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t participations __attribute__((swift_name("participations")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GamePredictionsStats.Companion")))
@interface FUSDKGamePredictionsStatsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGamePredictionsStatsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GamesBadgeRequirements")))
@interface FUSDKGamesBadgeRequirements : FUSDKGameBadgeRequirements
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 participationCount:(int32_t)participationCount points:(int32_t)points fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:participationCount:points:fromDate:toDate:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKGamesBadgeRequirementsCompanion *companion __attribute__((swift_name("companion")));
@property NSArray<FUSDKGamesBadgeType *> * _Nullable specificGames __attribute__((swift_name("specificGames")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GamesBadgeRequirements.Companion")))
@interface FUSDKGamesBadgeRequirementsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGamesBadgeRequirementsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GamesBadgeType")))
@interface FUSDKGamesBadgeType : FUSDKBase
- (instancetype)initWithGameType:(FUSDKGameType * _Nullable)gameType gameId:(NSString * _Nullable)gameId __attribute__((swift_name("init(gameType:gameId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKGamesBadgeTypeCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKGamesBadgeType *)doCopyGameType:(FUSDKGameType * _Nullable)gameType gameId:(NSString * _Nullable)gameId __attribute__((swift_name("doCopy(gameType:gameId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable gameId __attribute__((swift_name("gameId")));
@property FUSDKGameType * _Nullable gameType __attribute__((swift_name("gameType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GamesBadgeType.Companion")))
@interface FUSDKGamesBadgeTypeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGamesBadgeTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GamesBadgesValue")))
@interface FUSDKGamesBadgesValue : FUSDKBadgesValue
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id label:(NSString * _Nullable)label description:(NSString * _Nullable)description flags:(NSArray<NSString *> * _Nullable)flags assets:(FUSDKBadgeAsset * _Nullable)assets enabled:(BOOL)enabled serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:label:description:flags:assets:enabled:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKGamesBadgesValueCompanion *companion __attribute__((swift_name("companion")));
@property FUSDKGamesBadgeRequirements * _Nullable requirements __attribute__((swift_name("requirements")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GamesBadgesValue.Companion")))
@interface FUSDKGamesBadgesValueCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGamesBadgesValueCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HighestSuccessRateFilters")))
@interface FUSDKHighestSuccessRateFilters : FUSDKBase
- (instancetype)initWithMarket:(FUSDKMarket * _Nullable)market fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate usersCount:(FUSDKInt * _Nullable)usersCount minimumPredictions:(FUSDKInt * _Nullable)minimumPredictions __attribute__((swift_name("init(market:fromDate:toDate:usersCount:minimumPredictions:)"))) __attribute__((objc_designated_initializer));
- (FUSDKHighestSuccessRateFilters *)doCopyMarket:(FUSDKMarket * _Nullable)market fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate usersCount:(FUSDKInt * _Nullable)usersCount minimumPredictions:(FUSDKInt * _Nullable)minimumPredictions __attribute__((swift_name("doCopy(market:fromDate:toDate:usersCount:minimumPredictions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable fromDate __attribute__((swift_name("fromDate")));
@property (readonly) FUSDKMarket * _Nullable market __attribute__((swift_name("market")));
@property (readonly) FUSDKInt * _Nullable minimumPredictions __attribute__((swift_name("minimumPredictions")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable toDate __attribute__((swift_name("toDate")));
@property (readonly) FUSDKInt * _Nullable usersCount __attribute__((swift_name("usersCount")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeaderboardFilters")))
@interface FUSDKLeaderboardFilters : FUSDKBase
- (instancetype)initWithGroupId:(NSString * _Nullable)groupId limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page __attribute__((swift_name("init(groupId:limit:page:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKLeaderboardFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKLeaderboardFilters *)doCopyGroupId:(NSString * _Nullable)groupId limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page __attribute__((swift_name("doCopy(groupId:limit:page:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable groupId __attribute__((swift_name("groupId")));
@property (readonly) FUSDKInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) FUSDKInt * _Nullable page __attribute__((swift_name("page")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeaderboardFilters.Companion")))
@interface FUSDKLeaderboardFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKLeaderboardFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("LeaderboardModel")))
@interface FUSDKLeaderboardModel : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 position:(int32_t)position profileId:(NSString * _Nullable)profileId points:(int32_t)points predictionsMade:(int32_t)predictionsMade profileModel:(FUSDKProfileModel * _Nullable)profileModel serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:position:profileId:points:predictionsMade:profileModel:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKLeaderboardModelCompanion *companion __attribute__((swift_name("companion")));
@property int32_t points __attribute__((swift_name("points")));
@property int32_t position __attribute__((swift_name("position")));
@property int32_t predictionsMade __attribute__((swift_name("predictionsMade")));
@property NSString *profileId __attribute__((swift_name("profileId")));
@property FUSDKProfileModel * _Nullable profileModel __attribute__((swift_name("profileModel")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeaderboardHighestSuccessRate")))
@interface FUSDKLeaderboardHighestSuccessRate : FUSDKLeaderboardModel
- (instancetype)initWithSuccessRatePercent:(int32_t)successRatePercent __attribute__((swift_name("init(successRatePercent:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 position:(int32_t)position profileId:(NSString * _Nullable)profileId points:(int32_t)points predictionsMade:(int32_t)predictionsMade profileModel:(FUSDKProfileModel * _Nullable)profileModel serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:position:profileId:points:predictionsMade:profileModel:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKLeaderboardHighestSuccessRateCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKLeaderboardHighestSuccessRate *)doCopySuccessRatePercent:(int32_t)successRatePercent __attribute__((swift_name("doCopy(successRatePercent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t successRatePercent __attribute__((swift_name("successRatePercent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeaderboardHighestSuccessRate.Companion")))
@interface FUSDKLeaderboardHighestSuccessRateCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKLeaderboardHighestSuccessRateCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeaderboardModel.Companion")))
@interface FUSDKLeaderboardModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKLeaderboardModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeaderboardTemplate")))
@interface FUSDKLeaderboardTemplate : FUSDKBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name type:(FUSDKTemplateType *)type fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate markets:(NSArray<FUSDKMarket *> * _Nullable)markets teamIds:(NSArray<NSString *> * _Nullable)teamIds matchIds:(NSArray<NSString *> * _Nullable)matchIds gameIds:(NSArray<NSString *> * _Nullable)gameIds gameTypes:(NSArray<FUSDKPredictionType *> * _Nullable)gameTypes competitionIds:(NSArray<NSString *> * _Nullable)competitionIds rules:(NSString * _Nullable)rules flags:(NSArray<NSString *> * _Nullable)flags description:(NSString * _Nullable)description createdAt:(FUSDKKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)updatedAt images:(FUSDKImages * _Nullable)images status:(FUSDKGameStatus *)status automaticallyChangeStatus:(FUSDKBoolean * _Nullable)automaticallyChangeStatus __attribute__((swift_name("init(id:name:type:fromDate:toDate:markets:teamIds:matchIds:gameIds:gameTypes:competitionIds:rules:flags:description:createdAt:updatedAt:images:status:automaticallyChangeStatus:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKLeaderboardTemplateCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKLeaderboardTemplate *)doCopyId:(NSString *)id name:(NSString *)name type:(FUSDKTemplateType *)type fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate markets:(NSArray<FUSDKMarket *> * _Nullable)markets teamIds:(NSArray<NSString *> * _Nullable)teamIds matchIds:(NSArray<NSString *> * _Nullable)matchIds gameIds:(NSArray<NSString *> * _Nullable)gameIds gameTypes:(NSArray<FUSDKPredictionType *> * _Nullable)gameTypes competitionIds:(NSArray<NSString *> * _Nullable)competitionIds rules:(NSString * _Nullable)rules flags:(NSArray<NSString *> * _Nullable)flags description:(NSString * _Nullable)description createdAt:(FUSDKKotlinx_datetimeInstant * _Nullable)createdAt updatedAt:(FUSDKKotlinx_datetimeInstant * _Nullable)updatedAt images:(FUSDKImages * _Nullable)images status:(FUSDKGameStatus *)status automaticallyChangeStatus:(FUSDKBoolean * _Nullable)automaticallyChangeStatus __attribute__((swift_name("doCopy(id:name:type:fromDate:toDate:markets:teamIds:matchIds:gameIds:gameTypes:competitionIds:rules:flags:description:createdAt:updatedAt:images:status:automaticallyChangeStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKBoolean * _Nullable automaticallyChangeStatus __attribute__((swift_name("automaticallyChangeStatus")));
@property NSArray<NSString *> * _Nullable competitionIds __attribute__((swift_name("competitionIds")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSArray<NSString *> * _Nullable flags __attribute__((swift_name("flags")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/fansunitedmedia/sdk/network/serialization/InstantSerializer))
*/
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable fromDate __attribute__((swift_name("fromDate")));
@property (readonly) NSArray<NSString *> * _Nullable gameIds __attribute__((swift_name("gameIds")));
@property (readonly) NSArray<FUSDKPredictionType *> * _Nullable gameTypes __attribute__((swift_name("gameTypes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) FUSDKImages * _Nullable images __attribute__((swift_name("images")));
@property (readonly) NSArray<FUSDKMarket *> * _Nullable markets __attribute__((swift_name("markets")));
@property NSArray<NSString *> * _Nullable matchIds __attribute__((swift_name("matchIds")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable rules __attribute__((swift_name("rules")));
@property (readonly) FUSDKGameStatus *status __attribute__((swift_name("status")));
@property NSArray<NSString *> * _Nullable teamIds __attribute__((swift_name("teamIds")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/fansunitedmedia/sdk/network/serialization/InstantSerializer))
*/
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable toDate __attribute__((swift_name("toDate")));
@property (readonly) FUSDKTemplateType *type __attribute__((swift_name("type")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeaderboardTemplate.Companion")))
@interface FUSDKLeaderboardTemplateCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKLeaderboardTemplateCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeagueLeaderboardFilters")))
@interface FUSDKLeagueLeaderboardFilters : FUSDKBase
- (instancetype)initWithTemplateId:(NSString *)templateId limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page __attribute__((swift_name("init(templateId:limit:page:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKLeagueLeaderboardFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKLeagueLeaderboardFilters *)doCopyTemplateId:(NSString *)templateId limit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page __attribute__((swift_name("doCopy(templateId:limit:page:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) FUSDKInt * _Nullable page __attribute__((swift_name("page")));
@property (readonly) NSString *templateId __attribute__((swift_name("templateId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeagueLeaderboardFilters.Companion")))
@interface FUSDKLeagueLeaderboardFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKLeagueLeaderboardFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltyConfig")))
@interface FUSDKLoyaltyConfig : FUSDKBase
- (instancetype)initWithEnabled:(BOOL)enabled conditions:(FUSDKCondition * _Nullable)conditions actions:(FUSDKActionValue * _Nullable)actions rewards:(FUSDKRewardsV2 * _Nullable)rewards __attribute__((swift_name("init(enabled:conditions:actions:rewards:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKLoyaltyConfigCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKLoyaltyConfig *)doCopyEnabled:(BOOL)enabled conditions:(FUSDKCondition * _Nullable)conditions actions:(FUSDKActionValue * _Nullable)actions rewards:(FUSDKRewardsV2 * _Nullable)rewards __attribute__((swift_name("doCopy(enabled:conditions:actions:rewards:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKActionValue * _Nullable actions __attribute__((swift_name("actions")));
@property (readonly) FUSDKCondition * _Nullable conditions __attribute__((swift_name("conditions")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) FUSDKRewardsV2 * _Nullable rewards __attribute__((swift_name("rewards")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltyConfig.Companion")))
@interface FUSDKLoyaltyConfigCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKLoyaltyConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltyConfigAction")))
@interface FUSDKLoyaltyConfigAction : FUSDKKotlinEnum<FUSDKLoyaltyConfigAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKLoyaltyConfigActionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKLoyaltyConfigAction *like __attribute__((swift_name("like")));
@property (class, readonly) FUSDKLoyaltyConfigAction *dislike __attribute__((swift_name("dislike")));
@property (class, readonly) FUSDKLoyaltyConfigAction *clickAd __attribute__((swift_name("clickAd")));
@property (class, readonly) FUSDKLoyaltyConfigAction *comment __attribute__((swift_name("comment")));
@property (class, readonly) FUSDKLoyaltyConfigAction *contentConsumed __attribute__((swift_name("contentConsumed")));
@property (class, readonly) FUSDKLoyaltyConfigAction *convert __attribute__((swift_name("convert")));
@property (class, readonly) FUSDKLoyaltyConfigAction *pageView __attribute__((swift_name("pageView")));
@property (class, readonly) FUSDKLoyaltyConfigAction *share __attribute__((swift_name("share")));
@property (class, readonly) FUSDKLoyaltyConfigAction *profileUpdate __attribute__((swift_name("profileUpdate")));
@property (class, readonly) FUSDKLoyaltyConfigAction *manageInterests __attribute__((swift_name("manageInterests")));
@property (class, readonly) FUSDKLoyaltyConfigAction *predictionMade __attribute__((swift_name("predictionMade")));
@property (class, readonly) FUSDKLoyaltyConfigAction *gameParticipation __attribute__((swift_name("gameParticipation")));
@property (class, readonly) FUSDKLoyaltyConfigAction *articleConsumed __attribute__((swift_name("articleConsumed")));
@property (class, readonly) FUSDKLoyaltyConfigAction *videoConsumed __attribute__((swift_name("videoConsumed")));
@property (class, readonly) FUSDKLoyaltyConfigAction *shortVideoConsumed __attribute__((swift_name("shortVideoConsumed")));
@property (class, readonly) FUSDKLoyaltyConfigAction *longVideoConsumed __attribute__((swift_name("longVideoConsumed")));
@property (class, readonly) FUSDKLoyaltyConfigAction *audioConsumed __attribute__((swift_name("audioConsumed")));
@property (class, readonly) FUSDKLoyaltyConfigAction *galleryConsumed __attribute__((swift_name("galleryConsumed")));
@property (class, readonly) FUSDKLoyaltyConfigAction *imageConsumed __attribute__((swift_name("imageConsumed")));
@property (class, readonly) FUSDKLoyaltyConfigAction *pollVote __attribute__((swift_name("pollVote")));
@property (class, readonly) FUSDKLoyaltyConfigAction *addPost __attribute__((swift_name("addPost")));
@property (class, readonly) FUSDKLoyaltyConfigAction *addReaction __attribute__((swift_name("addReaction")));
@property (class, readonly) FUSDKLoyaltyConfigAction *deletePost __attribute__((swift_name("deletePost")));
@property (class, readonly) FUSDKLoyaltyConfigAction *privateLeagueCreate __attribute__((swift_name("privateLeagueCreate")));
@property (class, readonly) FUSDKLoyaltyConfigAction *privateLeagueJoin __attribute__((swift_name("privateLeagueJoin")));
@property (class, readonly) FUSDKLoyaltyConfigAction *privateLeagueLeave __attribute__((swift_name("privateLeagueLeave")));
@property (class, readonly) FUSDKLoyaltyConfigAction *classicQuizParticipation __attribute__((swift_name("classicQuizParticipation")));
@property (class, readonly) FUSDKLoyaltyConfigAction *eitherOrParticipation __attribute__((swift_name("eitherOrParticipation")));
@property (class, readonly) FUSDKLoyaltyConfigAction *potmVote __attribute__((swift_name("potmVote")));
+ (FUSDKKotlinArray<FUSDKLoyaltyConfigAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKLoyaltyConfigAction *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoyaltyConfigAction.Companion")))
@interface FUSDKLoyaltyConfigActionCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKLoyaltyConfigActionCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiniGamesBadgeRequirements")))
@interface FUSDKMiniGamesBadgeRequirements : FUSDKBase
- (instancetype)initWithParticipationCount:(int32_t)participationCount fromDate:(NSString *)fromDate toDate:(NSString *)toDate __attribute__((swift_name("init(participationCount:fromDate:toDate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMiniGamesBadgeRequirementsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMiniGamesBadgeRequirements *)doCopyParticipationCount:(int32_t)participationCount fromDate:(NSString *)fromDate toDate:(NSString *)toDate __attribute__((swift_name("doCopy(participationCount:fromDate:toDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *fromDate __attribute__((swift_name("fromDate")));
@property (readonly) int32_t participationCount __attribute__((swift_name("participationCount")));
@property (readonly) NSString *toDate __attribute__((swift_name("toDate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiniGamesBadgeRequirements.Companion")))
@interface FUSDKMiniGamesBadgeRequirementsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMiniGamesBadgeRequirementsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiniGamesBadgesValue")))
@interface FUSDKMiniGamesBadgesValue : FUSDKBadgesValue
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id label:(NSString * _Nullable)label description:(NSString * _Nullable)description flags:(NSArray<NSString *> * _Nullable)flags assets:(FUSDKBadgeAsset * _Nullable)assets enabled:(BOOL)enabled serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:label:description:flags:assets:enabled:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKMiniGamesBadgesValueCompanion *companion __attribute__((swift_name("companion")));
@property FUSDKMiniGamesBadgeRequirements * _Nullable requirements __attribute__((swift_name("requirements")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MiniGamesBadgesValue.Companion")))
@interface FUSDKMiniGamesBadgesValueCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMiniGamesBadgesValueCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Points")))
@interface FUSDKPoints : FUSDKBase
- (instancetype)initWithGeneral:(NSArray<FUSDKPointsGeneral *> * _Nullable)general predictor:(NSArray<FUSDKPointsPredictor *> * _Nullable)predictor activity:(NSArray<FUSDKPointsActivity *> * _Nullable)activity topX:(NSArray<FUSDKPointsPredictor *> * _Nullable)topX matchQuiz:(NSArray<FUSDKPointsPredictor *> * _Nullable)matchQuiz __attribute__((swift_name("init(general:predictor:activity:topX:matchQuiz:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPointsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPoints *)doCopyGeneral:(NSArray<FUSDKPointsGeneral *> * _Nullable)general predictor:(NSArray<FUSDKPointsPredictor *> * _Nullable)predictor activity:(NSArray<FUSDKPointsActivity *> * _Nullable)activity topX:(NSArray<FUSDKPointsPredictor *> * _Nullable)topX matchQuiz:(NSArray<FUSDKPointsPredictor *> * _Nullable)matchQuiz __attribute__((swift_name("doCopy(general:predictor:activity:topX:matchQuiz:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKPointsActivity *> * _Nullable activity __attribute__((swift_name("activity")));
@property (readonly) NSArray<FUSDKPointsGeneral *> * _Nullable general __attribute__((swift_name("general")));
@property (readonly) NSArray<FUSDKPointsPredictor *> * _Nullable matchQuiz __attribute__((swift_name("matchQuiz")));
@property (readonly) NSArray<FUSDKPointsPredictor *> * _Nullable predictor __attribute__((swift_name("predictor")));
@property (readonly) NSArray<FUSDKPointsPredictor *> * _Nullable topX __attribute__((swift_name("topX")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Points.Companion")))
@interface FUSDKPointsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPointsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointsActivity")))
@interface FUSDKPointsActivity : FUSDKBase
- (instancetype)initWithId:(FUSDKActivityAction *)id points:(int32_t)points multiplier:(int32_t)multiplier alternative:(NSDictionary<NSString *, FUSDKInt *> *)alternative __attribute__((swift_name("init(id:points:multiplier:alternative:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPointsActivityCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPointsActivity *)doCopyId:(FUSDKActivityAction *)id points:(int32_t)points multiplier:(int32_t)multiplier alternative:(NSDictionary<NSString *, FUSDKInt *> *)alternative __attribute__((swift_name("doCopy(id:points:multiplier:alternative:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, FUSDKInt *> *alternative __attribute__((swift_name("alternative")));
@property (readonly) FUSDKActivityAction *id __attribute__((swift_name("id")));
@property (readonly) int32_t multiplier __attribute__((swift_name("multiplier")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointsActivity.Companion")))
@interface FUSDKPointsActivityCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPointsActivityCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointsAlternative")))
@interface FUSDKPointsAlternative : FUSDKBase
- (instancetype)initWithCorrectGoalDifference:(int32_t)correctGoalDifference correctAwayGoals:(int32_t)correctAwayGoals correctHomeGoals:(int32_t)correctHomeGoals correctOutcome1X2:(int32_t)correctOutcome1X2 __attribute__((swift_name("init(correctGoalDifference:correctAwayGoals:correctHomeGoals:correctOutcome1X2:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPointsAlternativeCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPointsAlternative *)doCopyCorrectGoalDifference:(int32_t)correctGoalDifference correctAwayGoals:(int32_t)correctAwayGoals correctHomeGoals:(int32_t)correctHomeGoals correctOutcome1X2:(int32_t)correctOutcome1X2 __attribute__((swift_name("doCopy(correctGoalDifference:correctAwayGoals:correctHomeGoals:correctOutcome1X2:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="CORRECT_AWAY_GOALS")
*/
@property (readonly) int32_t correctAwayGoals __attribute__((swift_name("correctAwayGoals")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="CORRECT_GOAL_DIFFERENCE")
*/
@property (readonly) int32_t correctGoalDifference __attribute__((swift_name("correctGoalDifference")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="CORRECT_HOME_GOALS")
*/
@property (readonly) int32_t correctHomeGoals __attribute__((swift_name("correctHomeGoals")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="CORRECT_OUTCOME_1X2")
*/
@property (readonly) int32_t correctOutcome1X2 __attribute__((swift_name("correctOutcome1X2")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointsAlternative.Companion")))
@interface FUSDKPointsAlternativeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPointsAlternativeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointsGeneral")))
@interface FUSDKPointsGeneral : FUSDKBase
- (instancetype)initWithId:(NSString *)id points:(int32_t)points __attribute__((swift_name("init(id:points:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPointsGeneralCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPointsGeneral *)doCopyId:(NSString *)id points:(int32_t)points __attribute__((swift_name("doCopy(id:points:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointsGeneral.Companion")))
@interface FUSDKPointsGeneralCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPointsGeneralCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointsPredictor")))
@interface FUSDKPointsPredictor : FUSDKBase
- (instancetype)initWithId:(FUSDKMarket *)id points:(int32_t)points multiplier:(int32_t)multiplier alternative:(NSDictionary<NSString *, FUSDKInt *> *)alternative __attribute__((swift_name("init(id:points:multiplier:alternative:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPointsPredictorCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPointsPredictor *)doCopyId:(FUSDKMarket *)id points:(int32_t)points multiplier:(int32_t)multiplier alternative:(NSDictionary<NSString *, FUSDKInt *> *)alternative __attribute__((swift_name("doCopy(id:points:multiplier:alternative:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, FUSDKInt *> *alternative __attribute__((swift_name("alternative")));
@property (readonly) FUSDKMarket *id __attribute__((swift_name("id")));
@property (readonly) int32_t multiplier __attribute__((swift_name("multiplier")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PointsPredictor.Companion")))
@interface FUSDKPointsPredictorCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPointsPredictorCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("PotmBadgesValue")))
@interface FUSDKPotmBadgesValue : FUSDKBadgesValue
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id label:(NSString * _Nullable)label description:(NSString * _Nullable)description flags:(NSArray<NSString *> * _Nullable)flags assets:(FUSDKBadgeAsset * _Nullable)assets enabled:(BOOL)enabled requirements:(FUSDKVotingBadgeRequirements * _Nullable)requirements serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:label:description:flags:assets:enabled:requirements:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id label:(NSString * _Nullable)label description:(NSString * _Nullable)description flags:(NSArray<NSString *> * _Nullable)flags assets:(FUSDKBadgeAsset * _Nullable)assets enabled:(BOOL)enabled serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:label:description:flags:assets:enabled:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKPotmBadgesValueCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) FUSDKVotingBadgeRequirements * _Nullable requirements __attribute__((swift_name("requirements")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PollBadgesValue")))
@interface FUSDKPollBadgesValue : FUSDKPotmBadgesValue
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id label:(NSString * _Nullable)label description:(NSString * _Nullable)description flags:(NSArray<NSString *> * _Nullable)flags assets:(FUSDKBadgeAsset * _Nullable)assets enabled:(BOOL)enabled requirements:(FUSDKVotingBadgeRequirements * _Nullable)requirements serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:label:description:flags:assets:enabled:requirements:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKPollBadgesValueCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PollBadgesValue.Companion")))
@interface FUSDKPollBadgesValueCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPollBadgesValueCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PotmBadgesValue.Companion")))
@interface FUSDKPotmBadgesValueCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPotmBadgesValueCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionsStats")))
@interface FUSDKPredictionsStats : FUSDKBase
- (instancetype)initWithSingle:(FUSDKSinglePredictionsStats *)single topX:(FUSDKGamePredictionsStats *)topX matchQuiz:(FUSDKGamePredictionsStats *)matchQuiz __attribute__((swift_name("init(single:topX:matchQuiz:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPredictionsStatsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPredictionsStats *)doCopySingle:(FUSDKSinglePredictionsStats *)single topX:(FUSDKGamePredictionsStats *)topX matchQuiz:(FUSDKGamePredictionsStats *)matchQuiz __attribute__((swift_name("doCopy(single:topX:matchQuiz:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKGamePredictionsStats *matchQuiz __attribute__((swift_name("matchQuiz")));
@property (readonly) FUSDKSinglePredictionsStats *single __attribute__((swift_name("single")));
@property (readonly) FUSDKGamePredictionsStats *topX __attribute__((swift_name("topX")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionsStats.Companion")))
@interface FUSDKPredictionsStatsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPredictionsStatsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionsStatsResponse")))
@interface FUSDKPredictionsStatsResponse : FUSDKBase
- (instancetype)initWithSingle:(FUSDKSinglePredictionsStatsResponse *)single topX:(FUSDKGamePredictionsStats *)topX matchQuiz:(FUSDKGamePredictionsStats *)matchQuiz __attribute__((swift_name("init(single:topX:matchQuiz:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPredictionsStatsResponseCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPredictionsStatsResponse *)doCopySingle:(FUSDKSinglePredictionsStatsResponse *)single topX:(FUSDKGamePredictionsStats *)topX matchQuiz:(FUSDKGamePredictionsStats *)matchQuiz __attribute__((swift_name("doCopy(single:topX:matchQuiz:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKGamePredictionsStats *matchQuiz __attribute__((swift_name("matchQuiz")));
@property (readonly) FUSDKSinglePredictionsStatsResponse *single __attribute__((swift_name("single")));
@property (readonly) FUSDKGamePredictionsStats *topX __attribute__((swift_name("topX")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionsStatsResponse.Companion")))
@interface FUSDKPredictionsStatsResponseCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPredictionsStatsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictorBadgeRequirements")))
@interface FUSDKPredictorBadgeRequirements : FUSDKBase
- (instancetype)initWithPredictionsNumber:(int32_t)predictionsNumber correctPredictions:(int32_t)correctPredictions points:(int32_t)points fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate __attribute__((swift_name("init(predictionsNumber:correctPredictions:points:fromDate:toDate:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPredictorBadgeRequirementsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPredictorBadgeRequirements *)doCopyPredictionsNumber:(int32_t)predictionsNumber correctPredictions:(int32_t)correctPredictions points:(int32_t)points fromDate:(FUSDKKotlinx_datetimeInstant * _Nullable)fromDate toDate:(FUSDKKotlinx_datetimeInstant * _Nullable)toDate __attribute__((swift_name("doCopy(predictionsNumber:correctPredictions:points:fromDate:toDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t correctPredictions __attribute__((swift_name("correctPredictions")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable fromDate __attribute__((swift_name("fromDate")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) int32_t predictionsNumber __attribute__((swift_name("predictionsNumber")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable toDate __attribute__((swift_name("toDate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictorBadgeRequirements.Companion")))
@interface FUSDKPredictorBadgeRequirementsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPredictorBadgeRequirementsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictorBadgesValue")))
@interface FUSDKPredictorBadgesValue : FUSDKBadgesValue
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id label:(NSString * _Nullable)label description:(NSString * _Nullable)description flags:(NSArray<NSString *> * _Nullable)flags assets:(FUSDKBadgeAsset * _Nullable)assets enabled:(BOOL)enabled serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:label:description:flags:assets:enabled:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKPredictorBadgesValueCompanion *companion __attribute__((swift_name("companion")));
@property FUSDKPredictorBadgeRequirements * _Nullable requirements __attribute__((swift_name("requirements")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictorBadgesValue.Companion")))
@interface FUSDKPredictorBadgesValueCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPredictorBadgesValueCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileRank")))
@interface FUSDKProfileRank : FUSDKBase
- (instancetype)initWithId:(NSString *)id rankType:(FUSDKRankType *)rankType position:(int32_t)position points:(int32_t)points gameType:(FUSDKPredictionType * _Nullable)gameType __attribute__((swift_name("init(id:rankType:position:points:gameType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKProfileRankCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKProfileRank *)doCopyId:(NSString *)id rankType:(FUSDKRankType *)rankType position:(int32_t)position points:(int32_t)points gameType:(FUSDKPredictionType * _Nullable)gameType __attribute__((swift_name("doCopy(id:rankType:position:points:gameType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKPredictionType * _Nullable gameType __attribute__((swift_name("gameType")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) FUSDKRankType *rankType __attribute__((swift_name("rankType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileRank.Companion")))
@interface FUSDKProfileRankCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKProfileRankCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileStatsModel")))
@interface FUSDKProfileStatsModel : FUSDKBase
- (instancetype)initWithProfileId:(NSString *)profileId tier:(NSString * _Nullable)tier points:(int32_t)points predictionsMade:(int32_t)predictionsMade successRates:(FUSDKSuccessRates *)successRates predictions:(FUSDKPredictionsStats *)predictions tiers:(NSArray<FUSDKAchievementsStats *> *)tiers badges:(NSArray<FUSDKAchievementsStats *> *)badges discussions:(FUSDKDiscussionStats *)discussions classicQuizzes:(FUSDKClassicQuizzesStats *)classicQuizzes eitherOr:(FUSDKEitherOrStats *)eitherOr __attribute__((swift_name("init(profileId:tier:points:predictionsMade:successRates:predictions:tiers:badges:discussions:classicQuizzes:eitherOr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKProfileStatsModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKProfileStatsModel *)doCopyProfileId:(NSString *)profileId tier:(NSString * _Nullable)tier points:(int32_t)points predictionsMade:(int32_t)predictionsMade successRates:(FUSDKSuccessRates *)successRates predictions:(FUSDKPredictionsStats *)predictions tiers:(NSArray<FUSDKAchievementsStats *> *)tiers badges:(NSArray<FUSDKAchievementsStats *> *)badges discussions:(FUSDKDiscussionStats *)discussions classicQuizzes:(FUSDKClassicQuizzesStats *)classicQuizzes eitherOr:(FUSDKEitherOrStats *)eitherOr __attribute__((swift_name("doCopy(profileId:tier:points:predictionsMade:successRates:predictions:tiers:badges:discussions:classicQuizzes:eitherOr:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKAchievementsStats *> *badges __attribute__((swift_name("badges")));
@property (readonly) FUSDKClassicQuizzesStats *classicQuizzes __attribute__((swift_name("classicQuizzes")));
@property (readonly) FUSDKDiscussionStats *discussions __attribute__((swift_name("discussions")));
@property (readonly) FUSDKEitherOrStats *eitherOr __attribute__((swift_name("eitherOr")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) FUSDKPredictionsStats *predictions __attribute__((swift_name("predictions")));
@property (readonly) int32_t predictionsMade __attribute__((swift_name("predictionsMade")));
@property (readonly) NSString *profileId __attribute__((swift_name("profileId")));
@property (readonly) FUSDKSuccessRates *successRates __attribute__((swift_name("successRates")));
@property (readonly) NSString * _Nullable tier __attribute__((swift_name("tier")));
@property (readonly) NSArray<FUSDKAchievementsStats *> *tiers __attribute__((swift_name("tiers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileStatsModel.Companion")))
@interface FUSDKProfileStatsModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKProfileStatsModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileStatsResponse")))
@interface FUSDKProfileStatsResponse : FUSDKBase
- (instancetype)initWithProfileId:(NSString *)profileId tier:(NSString * _Nullable)tier points:(int32_t)points predictionsMade:(int32_t)predictionsMade successRates:(FUSDKSuccessRates *)successRates predictions:(FUSDKPredictionsStatsResponse *)predictions tiers:(NSArray<FUSDKAchievementsStats *> *)tiers badges:(NSArray<FUSDKAchievementsStats *> *)badges discussions:(FUSDKDiscussionStats *)discussions classicQuizzes:(FUSDKClassicQuizzesStats *)classicQuizzes eitherOr:(FUSDKEitherOrStats *)eitherOr __attribute__((swift_name("init(profileId:tier:points:predictionsMade:successRates:predictions:tiers:badges:discussions:classicQuizzes:eitherOr:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKProfileStatsResponseCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKProfileStatsResponse *)doCopyProfileId:(NSString *)profileId tier:(NSString * _Nullable)tier points:(int32_t)points predictionsMade:(int32_t)predictionsMade successRates:(FUSDKSuccessRates *)successRates predictions:(FUSDKPredictionsStatsResponse *)predictions tiers:(NSArray<FUSDKAchievementsStats *> *)tiers badges:(NSArray<FUSDKAchievementsStats *> *)badges discussions:(FUSDKDiscussionStats *)discussions classicQuizzes:(FUSDKClassicQuizzesStats *)classicQuizzes eitherOr:(FUSDKEitherOrStats *)eitherOr __attribute__((swift_name("doCopy(profileId:tier:points:predictionsMade:successRates:predictions:tiers:badges:discussions:classicQuizzes:eitherOr:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKAchievementsStats *> *badges __attribute__((swift_name("badges")));
@property (readonly) FUSDKClassicQuizzesStats *classicQuizzes __attribute__((swift_name("classicQuizzes")));
@property (readonly) FUSDKDiscussionStats *discussions __attribute__((swift_name("discussions")));
@property (readonly) FUSDKEitherOrStats *eitherOr __attribute__((swift_name("eitherOr")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) FUSDKPredictionsStatsResponse *predictions __attribute__((swift_name("predictions")));
@property (readonly) int32_t predictionsMade __attribute__((swift_name("predictionsMade")));
@property (readonly) NSString *profileId __attribute__((swift_name("profileId")));
@property (readonly) FUSDKSuccessRates *successRates __attribute__((swift_name("successRates")));
@property (readonly) NSString * _Nullable tier __attribute__((swift_name("tier")));
@property (readonly) NSArray<FUSDKAchievementsStats *> *tiers __attribute__((swift_name("tiers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileStatsResponse.Companion")))
@interface FUSDKProfileStatsResponseCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKProfileStatsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RankType")))
@interface FUSDKRankType : FUSDKKotlinEnum<FUSDKRankType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKRankTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKRankType *game __attribute__((swift_name("game")));
@property (class, readonly) FUSDKRankType *template_ __attribute__((swift_name("template_")));
+ (FUSDKKotlinArray<FUSDKRankType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKRankType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RankType.Companion")))
@interface FUSDKRankTypeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKRankTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rewards")))
@interface FUSDKRewards : FUSDKBase
- (instancetype)initWithPoints:(FUSDKPoints *)points tiers:(NSArray<FUSDKTier *> * _Nullable)tiers badges:(FUSDKBadgeModel * _Nullable)badges __attribute__((swift_name("init(points:tiers:badges:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKRewardsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKRewards *)doCopyPoints:(FUSDKPoints *)points tiers:(NSArray<FUSDKTier *> * _Nullable)tiers badges:(FUSDKBadgeModel * _Nullable)badges __attribute__((swift_name("doCopy(points:tiers:badges:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKBadgeModel * _Nullable badges __attribute__((swift_name("badges")));
@property (readonly) FUSDKPoints *points __attribute__((swift_name("points")));
@property (readonly) NSArray<FUSDKTier *> * _Nullable tiers __attribute__((swift_name("tiers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rewards.Companion")))
@interface FUSDKRewardsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKRewardsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RewardsV2")))
@interface FUSDKRewardsV2 : FUSDKBase
- (instancetype)initWithPoints:(FUSDKPoints *)points tiers:(NSArray<FUSDKTier *> * _Nullable)tiers badges:(FUSDKBadgesModel * _Nullable)badges __attribute__((swift_name("init(points:tiers:badges:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKRewardsV2Companion *companion __attribute__((swift_name("companion")));
- (FUSDKRewardsV2 *)doCopyPoints:(FUSDKPoints *)points tiers:(NSArray<FUSDKTier *> * _Nullable)tiers badges:(FUSDKBadgesModel * _Nullable)badges __attribute__((swift_name("doCopy(points:tiers:badges:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKBadgesModel * _Nullable badges __attribute__((swift_name("badges")));
@property (readonly) FUSDKPoints *points __attribute__((swift_name("points")));
@property (readonly) NSArray<FUSDKTier *> * _Nullable tiers __attribute__((swift_name("tiers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RewardsV2.Companion")))
@interface FUSDKRewardsV2Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKRewardsV2Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("SinglePredictionsBreakdown")))
@interface FUSDKSinglePredictionsBreakdown : FUSDKBase
- (instancetype)initWithEntityId:(NSString *)entityId entityType:(NSString *)entityType entitySource:(NSString *)entitySource predictionsMade:(int32_t)predictionsMade correct:(int32_t)correct points:(int32_t)points __attribute__((swift_name("init(entityId:entityType:entitySource:predictionsMade:correct:points:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSeen0:(int32_t)seen0 entityId:(NSString * _Nullable)entityId entityType:(NSString * _Nullable)entityType entitySource:(NSString * _Nullable)entitySource predictionsMade:(int32_t)predictionsMade correct:(int32_t)correct points:(int32_t)points serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:entityId:entityType:entitySource:predictionsMade:correct:points:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKSinglePredictionsBreakdownCompanion *companion __attribute__((swift_name("companion")));
@property int32_t correct __attribute__((swift_name("correct")));
@property NSString *entityId __attribute__((swift_name("entityId")));
@property NSString *entitySource __attribute__((swift_name("entitySource")));
@property NSString *entityType __attribute__((swift_name("entityType")));
@property int32_t points __attribute__((swift_name("points")));
@property int32_t predictionsMade __attribute__((swift_name("predictionsMade")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SinglePredictionsBreakdown.Companion")))
@interface FUSDKSinglePredictionsBreakdownCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKSinglePredictionsBreakdownCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SinglePredictionsCompetitionBreakdown")))
@interface FUSDKSinglePredictionsCompetitionBreakdown : FUSDKSinglePredictionsBreakdown <FUSDKIRemappable>
- (instancetype)initWithModel:(FUSDKCompetitionBasicModel * _Nullable)model __attribute__((swift_name("init(model:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEntityId:(NSString *)entityId entityType:(NSString *)entityType entitySource:(NSString *)entitySource predictionsMade:(int32_t)predictionsMade correct:(int32_t)correct points:(int32_t)points __attribute__((swift_name("init(entityId:entityType:entitySource:predictionsMade:correct:points:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 entityId:(NSString * _Nullable)entityId entityType:(NSString * _Nullable)entityType entitySource:(NSString * _Nullable)entitySource predictionsMade:(int32_t)predictionsMade correct:(int32_t)correct points:(int32_t)points serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:entityId:entityType:entitySource:predictionsMade:correct:points:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKSinglePredictionsCompetitionBreakdownCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKSinglePredictionsCompetitionBreakdown *)doCopyModel:(FUSDKCompetitionBasicModel * _Nullable)model __attribute__((swift_name("doCopy(model:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (FUSDKResourceType *)getResourceType __attribute__((swift_name("getResourceType()")));
- (NSString *(^)(void))getTargetProp __attribute__((swift_name("getTargetProp()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property FUSDKCompetitionBasicModel * _Nullable model __attribute__((swift_name("model")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SinglePredictionsCompetitionBreakdown.Companion")))
@interface FUSDKSinglePredictionsCompetitionBreakdownCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKSinglePredictionsCompetitionBreakdownCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SinglePredictionsStats")))
@interface FUSDKSinglePredictionsStats : FUSDKBase
- (instancetype)initWithPredictionsMade:(int32_t)predictionsMade correct:(int32_t)correct points:(int32_t)points breakdown:(FUSDKSummarizedBreakdown * _Nullable)breakdown __attribute__((swift_name("init(predictionsMade:correct:points:breakdown:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKSinglePredictionsStatsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKSinglePredictionsStats *)doCopyPredictionsMade:(int32_t)predictionsMade correct:(int32_t)correct points:(int32_t)points breakdown:(FUSDKSummarizedBreakdown * _Nullable)breakdown __attribute__((swift_name("doCopy(predictionsMade:correct:points:breakdown:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKSummarizedBreakdown * _Nullable breakdown __attribute__((swift_name("breakdown")));
@property (readonly) int32_t correct __attribute__((swift_name("correct")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) int32_t predictionsMade __attribute__((swift_name("predictionsMade")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SinglePredictionsStats.Companion")))
@interface FUSDKSinglePredictionsStatsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKSinglePredictionsStatsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SinglePredictionsStatsResponse")))
@interface FUSDKSinglePredictionsStatsResponse : FUSDKBase
- (instancetype)initWithPredictionsMade:(int32_t)predictionsMade correct:(int32_t)correct points:(int32_t)points breakdown:(NSDictionary<NSString *, FUSDKSinglePredictionsBreakdown *> * _Nullable)breakdown __attribute__((swift_name("init(predictionsMade:correct:points:breakdown:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKSinglePredictionsStatsResponseCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKSinglePredictionsStatsResponse *)doCopyPredictionsMade:(int32_t)predictionsMade correct:(int32_t)correct points:(int32_t)points breakdown:(NSDictionary<NSString *, FUSDKSinglePredictionsBreakdown *> * _Nullable)breakdown __attribute__((swift_name("doCopy(predictionsMade:correct:points:breakdown:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, FUSDKSinglePredictionsBreakdown *> * _Nullable breakdown __attribute__((swift_name("breakdown")));
@property (readonly) int32_t correct __attribute__((swift_name("correct")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) int32_t predictionsMade __attribute__((swift_name("predictionsMade")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SinglePredictionsStatsResponse.Companion")))
@interface FUSDKSinglePredictionsStatsResponseCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKSinglePredictionsStatsResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SinglePredictionsTeamBreakdown")))
@interface FUSDKSinglePredictionsTeamBreakdown : FUSDKSinglePredictionsBreakdown <FUSDKIRemappable>
- (instancetype)initWithModel:(FUSDKTeamBasicModel * _Nullable)model __attribute__((swift_name("init(model:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEntityId:(NSString *)entityId entityType:(NSString *)entityType entitySource:(NSString *)entitySource predictionsMade:(int32_t)predictionsMade correct:(int32_t)correct points:(int32_t)points __attribute__((swift_name("init(entityId:entityType:entitySource:predictionsMade:correct:points:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithSeen0:(int32_t)seen0 entityId:(NSString * _Nullable)entityId entityType:(NSString * _Nullable)entityType entitySource:(NSString * _Nullable)entitySource predictionsMade:(int32_t)predictionsMade correct:(int32_t)correct points:(int32_t)points serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:entityId:entityType:entitySource:predictionsMade:correct:points:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKSinglePredictionsTeamBreakdownCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKResourceType *)getResourceType __attribute__((swift_name("getResourceType()")));
- (NSString *(^)(void))getTargetProp __attribute__((swift_name("getTargetProp()")));
@property FUSDKTeamBasicModel * _Nullable model __attribute__((swift_name("model")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SinglePredictionsTeamBreakdown.Companion")))
@interface FUSDKSinglePredictionsTeamBreakdownCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKSinglePredictionsTeamBreakdownCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessRatePercent.Companion")))
@interface FUSDKSuccessRatePercentCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKSuccessRatePercentCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessRates")))
@interface FUSDKSuccessRates : FUSDKBase
- (instancetype)initWithOverallPercent:(int32_t)overallPercent byCompetition:(NSDictionary<NSString *, FUSDKByModel<FUSDKCompetitionBasicModel *> *> * _Nullable)byCompetition byTeam:(NSDictionary<NSString *, FUSDKByModel<FUSDKTeamBasicModel *> *> * _Nullable)byTeam byMarket:(NSDictionary<FUSDKMarket *, FUSDKSuccessRatePercent *> *)byMarket __attribute__((swift_name("init(overallPercent:byCompetition:byTeam:byMarket:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKSuccessRatesCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKSuccessRates *)doCopyOverallPercent:(int32_t)overallPercent byCompetition:(NSDictionary<NSString *, FUSDKByModel<FUSDKCompetitionBasicModel *> *> * _Nullable)byCompetition byTeam:(NSDictionary<NSString *, FUSDKByModel<FUSDKTeamBasicModel *> *> * _Nullable)byTeam byMarket:(NSDictionary<FUSDKMarket *, FUSDKSuccessRatePercent *> *)byMarket __attribute__((swift_name("doCopy(overallPercent:byCompetition:byTeam:byMarket:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, FUSDKByModel<FUSDKCompetitionBasicModel *> *> * _Nullable byCompetition __attribute__((swift_name("byCompetition")));
@property (readonly) NSDictionary<FUSDKMarket *, FUSDKSuccessRatePercent *> *byMarket __attribute__((swift_name("byMarket")));
@property (readonly) NSDictionary<NSString *, FUSDKByModel<FUSDKTeamBasicModel *> *> * _Nullable byTeam __attribute__((swift_name("byTeam")));
@property (readonly) int32_t overallPercent __attribute__((swift_name("overallPercent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessRates.Companion")))
@interface FUSDKSuccessRatesCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKSuccessRatesCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SummarizedBreakdown")))
@interface FUSDKSummarizedBreakdown : FUSDKBase
- (instancetype)initWithFootballCompetitions:(NSArray<FUSDKSinglePredictionsCompetitionBreakdown *> *)footballCompetitions footballTeams:(NSArray<FUSDKSinglePredictionsTeamBreakdown *> *)footballTeams __attribute__((swift_name("init(footballCompetitions:footballTeams:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKSummarizedBreakdownCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKSummarizedBreakdown *)doCopyFootballCompetitions:(NSArray<FUSDKSinglePredictionsCompetitionBreakdown *> *)footballCompetitions footballTeams:(NSArray<FUSDKSinglePredictionsTeamBreakdown *> *)footballTeams __attribute__((swift_name("doCopy(footballCompetitions:footballTeams:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKSinglePredictionsCompetitionBreakdown *> *footballCompetitions __attribute__((swift_name("footballCompetitions")));
@property (readonly) NSArray<FUSDKSinglePredictionsTeamBreakdown *> *footballTeams __attribute__((swift_name("footballTeams")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SummarizedBreakdown.Companion")))
@interface FUSDKSummarizedBreakdownCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKSummarizedBreakdownCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TemplateFilters")))
@interface FUSDKTemplateFilters : FUSDKBase
- (instancetype)initWithFlags:(NSString * _Nullable)flags status:(FUSDKTemplateStatus * _Nullable)status type:(FUSDKTemplateType * _Nullable)type activeFrom:(NSString * _Nullable)activeFrom activeTo:(NSString * _Nullable)activeTo createdFrom:(NSString * _Nullable)createdFrom createdTo:(NSString * _Nullable)createdTo updatedFrom:(NSString * _Nullable)updatedFrom updatedTo:(NSString * _Nullable)updatedTo __attribute__((swift_name("init(flags:status:type:activeFrom:activeTo:createdFrom:createdTo:updatedFrom:updatedTo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTemplateFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTemplateFilters *)doCopyFlags:(NSString * _Nullable)flags status:(FUSDKTemplateStatus * _Nullable)status type:(FUSDKTemplateType * _Nullable)type activeFrom:(NSString * _Nullable)activeFrom activeTo:(NSString * _Nullable)activeTo createdFrom:(NSString * _Nullable)createdFrom createdTo:(NSString * _Nullable)createdTo updatedFrom:(NSString * _Nullable)updatedFrom updatedTo:(NSString * _Nullable)updatedTo __attribute__((swift_name("doCopy(flags:status:type:activeFrom:activeTo:createdFrom:createdTo:updatedFrom:updatedTo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable activeFrom __attribute__((swift_name("activeFrom")));
@property (readonly) NSString * _Nullable activeTo __attribute__((swift_name("activeTo")));
@property (readonly) NSString * _Nullable createdFrom __attribute__((swift_name("createdFrom")));
@property (readonly) NSString * _Nullable createdTo __attribute__((swift_name("createdTo")));
@property (readonly) NSString * _Nullable flags __attribute__((swift_name("flags")));
@property (readonly) FUSDKTemplateStatus * _Nullable status __attribute__((swift_name("status")));
@property (readonly) FUSDKTemplateType * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable updatedFrom __attribute__((swift_name("updatedFrom")));
@property (readonly) NSString * _Nullable updatedTo __attribute__((swift_name("updatedTo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TemplateFilters.Companion")))
@interface FUSDKTemplateFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTemplateFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TemplateStatus")))
@interface FUSDKTemplateStatus : FUSDKKotlinEnum<FUSDKTemplateStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKTemplateStatus *pending __attribute__((swift_name("pending")));
@property (class, readonly) FUSDKTemplateStatus *live __attribute__((swift_name("live")));
@property (class, readonly) FUSDKTemplateStatus *settled __attribute__((swift_name("settled")));
+ (FUSDKKotlinArray<FUSDKTemplateStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKTemplateStatus *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TemplateType")))
@interface FUSDKTemplateType : FUSDKKotlinEnum<FUSDKTemplateType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKTemplateTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKTemplateType *custom __attribute__((swift_name("custom")));
@property (class, readonly) FUSDKTemplateType *primary __attribute__((swift_name("primary")));
@property (class, readonly) FUSDKTemplateType *games __attribute__((swift_name("games")));
@property (class, readonly) FUSDKTemplateType *fantasy __attribute__((swift_name("fantasy")));
@property (class, readonly) FUSDKTemplateType *matches __attribute__((swift_name("matches")));
@property (class, readonly) FUSDKTemplateType *teams __attribute__((swift_name("teams")));
@property (class, readonly) FUSDKTemplateType *competition __attribute__((swift_name("competition")));
+ (FUSDKKotlinArray<FUSDKTemplateType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKTemplateType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TemplateType.Companion")))
@interface FUSDKTemplateTypeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTemplateTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tier")))
@interface FUSDKTier : FUSDKBase
- (instancetype)initWithEnabled:(BOOL)enabled id:(NSString *)id points:(int32_t)points label:(NSString *)label __attribute__((swift_name("init(enabled:id:points:label:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTierCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTier *)doCopyEnabled:(BOOL)enabled id:(NSString *)id points:(int32_t)points label:(NSString *)label __attribute__((swift_name("doCopy(enabled:id:points:label:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tier.Companion")))
@interface FUSDKTierCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTierCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRankingFilters")))
@interface FUSDKUserRankingFilters : FUSDKBase
- (instancetype)initWithLimit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page sortOrder:(FUSDKSortOrder * _Nullable)sortOrder gameType:(FUSDKGameType * _Nullable)gameType rankType:(FUSDKRankType * _Nullable)rankType leaderboardIds:(NSArray<NSString *> * _Nullable)leaderboardIds __attribute__((swift_name("init(limit:page:sortOrder:gameType:rankType:leaderboardIds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKUserRankingFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKUserRankingFilters *)doCopyLimit:(FUSDKInt * _Nullable)limit page:(FUSDKInt * _Nullable)page sortOrder:(FUSDKSortOrder * _Nullable)sortOrder gameType:(FUSDKGameType * _Nullable)gameType rankType:(FUSDKRankType * _Nullable)rankType leaderboardIds:(NSArray<NSString *> * _Nullable)leaderboardIds __attribute__((swift_name("doCopy(limit:page:sortOrder:gameType:rankType:leaderboardIds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKGameType * _Nullable gameType __attribute__((swift_name("gameType")));
@property (readonly) NSArray<NSString *> * _Nullable leaderboardIds __attribute__((swift_name("leaderboardIds")));
@property (readonly) FUSDKInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) FUSDKInt * _Nullable page __attribute__((swift_name("page")));
@property (readonly) FUSDKRankType * _Nullable rankType __attribute__((swift_name("rankType")));
@property (readonly) FUSDKSortOrder * _Nullable sortOrder __attribute__((swift_name("sortOrder")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRankingFilters.Companion")))
@interface FUSDKUserRankingFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKUserRankingFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VotingBadgeRequirements")))
@interface FUSDKVotingBadgeRequirements : FUSDKBase <FUSDKIRemappable>
- (instancetype)initWithPoints:(int32_t)points voteCount:(int32_t)voteCount entityId:(NSString *)entityId entityType:(FUSDKResourceType *)entityType __attribute__((swift_name("init(points:voteCount:entityId:entityType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKVotingBadgeRequirementsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKVotingBadgeRequirements *)doCopyPoints:(int32_t)points voteCount:(int32_t)voteCount entityId:(NSString *)entityId entityType:(FUSDKResourceType *)entityType __attribute__((swift_name("doCopy(points:voteCount:entityId:entityType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (FUSDKResourceType *)getResourceType __attribute__((swift_name("getResourceType()")));
- (NSString *(^)(void))getTargetProp __attribute__((swift_name("getTargetProp()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *entityId __attribute__((swift_name("entityId")));
@property (readonly) FUSDKResourceType *entityType __attribute__((swift_name("entityType")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) int32_t voteCount __attribute__((swift_name("voteCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VotingBadgeRequirements.Companion")))
@interface FUSDKVotingBadgeRequirementsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKVotingBadgeRequirementsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VotingBadgesValue")))
@interface FUSDKVotingBadgesValue : FUSDKBase
- (instancetype)initWithPotm:(NSArray<FUSDKPotmBadgesValue *> *)potm poll:(NSArray<FUSDKPollBadgesValue *> *)poll __attribute__((swift_name("init(potm:poll:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKVotingBadgesValueCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKVotingBadgesValue *)doCopyPotm:(NSArray<FUSDKPotmBadgesValue *> *)potm poll:(NSArray<FUSDKPollBadgesValue *> *)poll __attribute__((swift_name("doCopy(potm:poll:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKPollBadgesValue *> *poll __attribute__((swift_name("poll")));
@property (readonly) NSArray<FUSDKPotmBadgesValue *> *potm __attribute__((swift_name("potm")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VotingBadgesValue.Companion")))
@interface FUSDKVotingBadgesValueCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKVotingBadgesValueCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("IDMappingApiService")))
@interface FUSDKIDMappingApiService : FUSDKBase
- (instancetype)initWithApiClient:(FUSDKAPIClientService *)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMappedIdsCompetitions:(NSString * _Nullable)competitions countries:(NSString * _Nullable)countries inputProvider:(NSString * _Nullable)inputProvider matches:(NSString * _Nullable)matches players:(NSString * _Nullable)players teams:(NSString * _Nullable)teams completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMappedIds(competitions:countries:inputProvider:matches:players:teams:completionHandler:)")));
@end

__attribute__((swift_name("IRemapper")))
@protocol FUSDKIRemapper
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMappedIdsInputProvider:(FUSDKIDSchema *)inputProvider map:(NSDictionary<FUSDKResourceType *, id> *)map retrieveFullMap:(FUSDKBoolean * _Nullable)retrieveFullMap completionHandler:(void (^)(FUSDKSimpleResponse<NSArray<FUSDKIdsMap *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMappedIds(inputProvider:map:retrieveFullMap:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdsMap")))
@interface FUSDKIdsMap : FUSDKBase
- (instancetype)initWithId:(NSString *)id sportradarId:(NSString * _Nullable)sportradarId sportal365Id:(NSString * _Nullable)sportal365Id enetpulseId:(NSString * _Nullable)enetpulseId apiFootballId:(NSString * _Nullable)apiFootballId resource:(FUSDKResourceType *)resource __attribute__((swift_name("init(id:sportradarId:sportal365Id:enetpulseId:apiFootballId:resource:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKIdsMapCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKIdsMap *)doCopyId:(NSString *)id sportradarId:(NSString * _Nullable)sportradarId sportal365Id:(NSString * _Nullable)sportal365Id enetpulseId:(NSString * _Nullable)enetpulseId apiFootballId:(NSString * _Nullable)apiFootballId resource:(FUSDKResourceType *)resource __attribute__((swift_name("doCopy(id:sportradarId:sportal365Id:enetpulseId:apiFootballId:resource:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString * _Nullable)getMappedIdIdSchema:(FUSDKIDSchema *)idSchema __attribute__((swift_name("getMappedId(idSchema:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable apiFootballId __attribute__((swift_name("apiFootballId")));
@property NSString * _Nullable enetpulseId __attribute__((swift_name("enetpulseId")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) FUSDKResourceType *resource __attribute__((swift_name("resource")));
@property NSString * _Nullable sportal365Id __attribute__((swift_name("sportal365Id")));
@property NSString * _Nullable sportradarId __attribute__((swift_name("sportradarId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdsMap.Companion")))
@interface FUSDKIdsMapCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKIdsMapCompanion *shared __attribute__((swift_name("shared")));
- (FUSDKIdsMap *)createNativeId:(NSString *)nativeId idSchema:(FUSDKIDSchema *)idSchema mappedId:(NSString *)mappedId resource:(FUSDKResourceType *)resource __attribute__((swift_name("create(nativeId:idSchema:mappedId:resource:)")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceType")))
@interface FUSDKResourceType : FUSDKKotlinEnum<FUSDKResourceType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKResourceType *team __attribute__((swift_name("team")));
@property (class, readonly) FUSDKResourceType *player __attribute__((swift_name("player")));
@property (class, readonly) FUSDKResourceType *country __attribute__((swift_name("country")));
@property (class, readonly) FUSDKResourceType *match __attribute__((swift_name("match")));
@property (class, readonly) FUSDKResourceType *competition __attribute__((swift_name("competition")));
@property (class, readonly) FUSDKResourceType *sport __attribute__((swift_name("sport")));
+ (FUSDKKotlinArray<FUSDKResourceType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKResourceType *> *entries __attribute__((swift_name("entries")));
- (NSString *)lowercase __attribute__((swift_name("lowercase()")));
@end

__attribute__((swift_name("IPredictor")))
@protocol FUSDKIPredictor
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteFootballPredictionPredictionId:(NSString *)predictionId completionHandler:(void (^)(FUSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteFootballPrediction(predictionId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getConfigDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKPredictorConfig * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getConfig(disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMarketSummaryMatchId:(NSString *)matchId market:(FUSDKMarket *)market playerId:(NSString * _Nullable)playerId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKMarketSummary * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMarketSummary(matchId:market:playerId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMarketsResultsForGameGameId:(NSString *)gameId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<FUSDKGameMatchOutcome *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMarketsResultsForGame(gameId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMatchMarketsResultsMatchId:(NSString *)matchId completionHandler:(void (^)(FUSDKMatchMarketsResults * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMatchMarketsResults(matchId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMatchSummaryMatchId:(NSString *)matchId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKMatchSummaryModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMatchSummary(matchId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMyCurrentPredictionsFilters:(FUSDKPredictionsFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKPredictionResponseModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMyCurrentPredictions(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMyPastPredictionsFilters:(FUSDKPredictionsFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKPredictionResponseModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMyPastPredictions(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMyPredictionsFilters:(FUSDKPredictionsFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKPredictionResponseModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMyPredictions(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMyPredictionsForMatchesMatchIds:(NSArray<NSString *> *)matchIds filters:(FUSDKPredictionsFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKPredictionResponseModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getMyPredictionsForMatches(matchIds:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPredictionByIdPredictionId:(NSString *)predictionId completionHandler:(void (^)(FUSDKPredictionResponseModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getPredictionById(predictionId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPredictionsByIdsPredictionIds:(NSArray<NSString *> *)predictionIds completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKPredictionResponseModel *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPredictionsByIds(predictionIds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserCurrentPredictionsUserId:(NSString *)userId filters:(FUSDKPredictionsFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKPredictionResponseModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserCurrentPredictions(userId:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserPastPredictionsUserId:(NSString *)userId filters:(FUSDKPredictionsFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKPredictionResponseModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserPastPredictions(userId:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserPredictionsUserId:(NSString *)userId filters:(FUSDKPredictionsFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKPredictionResponseModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserPredictions(userId:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserPredictionsForMatchesUserId:(NSString *)userId matchIds:(NSArray<NSString *> *)matchIds filters:(FUSDKPredictionsFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKPredictionResponseModel *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserPredictionsForMatches(userId:matchIds:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)helpersWithCompletionHandler:(void (^)(id<FUSDKIPredictorHelpers> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("helpers(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)makeFootballPredictionMatchId:(NSString *)matchId market:(FUSDKMarket *)market value:(id)value playerId:(NSString * _Nullable)playerId completionHandler:(void (^)(FUSDKPredictionResponseModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("makeFootballPrediction(matchId:market:value:playerId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchMarketResultsFactory")))
@interface FUSDKMatchMarketResultsFactory : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)matchMarketResultsFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMatchMarketResultsFactory *shared __attribute__((swift_name("shared")));
- (FUSDKMatchMarketsResults *)createResultsMatch:(FUSDKMatchFullModel *)match playersMap:(NSDictionary<NSString *, FUSDKPlayerBasicModel *> *)playersMap __attribute__((swift_name("createResults(match:playersMap:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictorApiService")))
@interface FUSDKPredictorApiService : FUSDKBase
- (instancetype)initWithApiClient:(FUSDKAPIClientService *)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createPredictionInstanceBody:(FUSDKCreatePredictionRequest *)body completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createPredictionInstance(body:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deletePredictionInstancePredictionId:(NSString *)predictionId completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deletePredictionInstance(predictionId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getContestWinnersContestId:(NSString *)contestId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getContestWinners(contestId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getGameByIdGameId:(NSString *)gameId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getGameById(gameId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getGamePredictionsGameId:(NSString *)gameId filters:(FUSDKPredictionsFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getGamePredictions(gameId:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getGameResultsGameId:(NSString *)gameId filters:(FUSDKMainCursorFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getGameResults(gameId:filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getGamesFilters:(FUSDKGameFilters * _Nullable)filters disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getGames(filters:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMarketsResultsForGameGameId:(NSString *)gameId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMarketsResultsForGame(gameId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMatchSummaryMatchId:(NSString *)matchId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMatchSummary(matchId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getMyPredictionsMatchIds:(NSString * _Nullable)matchIds type:(FUSDKGameType * _Nullable)type limit:(FUSDKInt * _Nullable)limit startAfter:(NSString * _Nullable)startAfter status:(NSString * _Nullable)status gameIds:(NSArray<NSString *> * _Nullable)gameIds disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getMyPredictions(matchIds:type:limit:startAfter:status:gameIds:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPredictionByIdPredictionId:(NSString *)predictionId completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPredictionById(predictionId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPredictionsByIdsPredictionIds:(NSString *)predictionIds completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPredictionsByIds(predictionIds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserPredictionsUserId:(NSString *)userId matchIds:(NSString * _Nullable)matchIds type:(FUSDKGameType * _Nullable)type limit:(FUSDKInt * _Nullable)limit startAfter:(NSString * _Nullable)startAfter status:(NSString * _Nullable)status gameIds:(NSArray<NSString *> * _Nullable)gameIds disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserPredictions(userId:matchIds:type:limit:startAfter:status:gameIds:disableCache:completionHandler:)")));
@end

__attribute__((swift_name("IPredictorHelpers")))
@protocol FUSDKIPredictorHelpers
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)calculateOneXTwoFromScoresMatchSummary:(FUSDKMatchSummaryModel *)matchSummary completionHandler:(void (^)(FUSDKCalculatedOneXTwoFromScores * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("calculateOneXTwoFromScores(matchSummary:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTopCorrectScoresMatchSummary:(FUSDKMatchSummaryModel *)matchSummary completionHandler:(void (^)(NSArray<FUSDKTopCorrectScores *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTopCorrectScores(matchSummary:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthRequirementType")))
@interface FUSDKAuthRequirementType : FUSDKKotlinEnum<FUSDKAuthRequirementType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKAuthRequirementTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKAuthRequirementType *free __attribute__((swift_name("free")));
@property (class, readonly) FUSDKAuthRequirementType *lead __attribute__((swift_name("lead")));
@property (class, readonly) FUSDKAuthRequirementType *registered __attribute__((swift_name("registered")));
+ (FUSDKKotlinArray<FUSDKAuthRequirementType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKAuthRequirementType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthRequirementType.Companion")))
@interface FUSDKAuthRequirementTypeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKAuthRequirementTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((swift_name("BinaryPrediction")))
@protocol FUSDKBinaryPrediction
@required
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
 *   kotlinx.serialization.SerialName(value="PredictionFixture")
*/
__attribute__((swift_name("PredictionFixture")))
@interface FUSDKPredictionFixture : FUSDKBase
@property (class, readonly, getter=companion) FUSDKPredictionFixtureCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) FUSDKMarket *market __attribute__((swift_name("market")));
@property (readonly) NSString *matchType __attribute__((swift_name("matchType")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BothTeamsScore")))
@interface FUSDKBothTeamsScore : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKBothTeamsScoreCompanion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BothTeamsScore.Companion")))
@interface FUSDKBothTeamsScoreCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKBothTeamsScoreCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CalculatedOneXTwoFromScores")))
@interface FUSDKCalculatedOneXTwoFromScores : FUSDKBase
- (instancetype)initWithHome:(int32_t)home draw:(int32_t)draw away:(int32_t)away __attribute__((swift_name("init(home:draw:away:)"))) __attribute__((objc_designated_initializer));
- (FUSDKCalculatedOneXTwoFromScores *)doCopyHome:(int32_t)home draw:(int32_t)draw away:(int32_t)away __attribute__((swift_name("doCopy(home:draw:away:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t away __attribute__((swift_name("away")));
@property (readonly) int32_t draw __attribute__((swift_name("draw")));
@property (readonly) int32_t home __attribute__((swift_name("home")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("MarketPredictionValue")))
@protocol FUSDKMarketPredictionValue
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CornersMap")))
@interface FUSDKCornersMap : FUSDKBase <FUSDKMarketPredictionValue>
- (instancetype)initWithValues:(NSDictionary<FUSDKInt *, FUSDKInt *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKCornersMapCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKCornersMap *)doCopyValues:(NSDictionary<FUSDKInt *, FUSDKInt *> *)values __attribute__((swift_name("doCopy(values:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<FUSDKInt *, FUSDKInt *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CornersMap.Companion")))
@interface FUSDKCornersMapCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKCornersMapCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CornersMatch")))
@interface FUSDKCornersMatch : FUSDKPredictionFixture
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(int32_t)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKCornersMatchCompanion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) int32_t prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CornersMatch.Companion")))
@interface FUSDKCornersMatchCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKCornersMatchCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorrectScore")))
@interface FUSDKCorrectScore : FUSDKPredictionFixture
- (instancetype)initWithMatchId:(NSString *)matchId goalsHome:(int32_t)goalsHome goalsAway:(int32_t)goalsAway __attribute__((swift_name("init(matchId:goalsHome:goalsAway:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKCorrectScoreCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t goalsAway __attribute__((swift_name("goalsAway")));
@property (readonly) int32_t goalsHome __attribute__((swift_name("goalsHome")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorrectScore.Companion")))
@interface FUSDKCorrectScoreCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKCorrectScoreCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorrectScoreAdv")))
@interface FUSDKCorrectScoreAdv : FUSDKPredictionFixture
- (instancetype)initWithMatchId:(NSString *)matchId goalsHome:(int32_t)goalsHome goalsAway:(int32_t)goalsAway __attribute__((swift_name("init(matchId:goalsHome:goalsAway:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKCorrectScoreAdvCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t goalsAway __attribute__((swift_name("goalsAway")));
@property (readonly) int32_t goalsHome __attribute__((swift_name("goalsHome")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorrectScoreAdv.Companion")))
@interface FUSDKCorrectScoreAdvCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKCorrectScoreAdvCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorrectScoreHT")))
@interface FUSDKCorrectScoreHT : FUSDKPredictionFixture
- (instancetype)initWithMatchId:(NSString *)matchId goalsHome:(int32_t)goalsHome goalsAway:(int32_t)goalsAway __attribute__((swift_name("init(matchId:goalsHome:goalsAway:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKCorrectScoreHTCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t goalsAway __attribute__((swift_name("goalsAway")));
@property (readonly) int32_t goalsHome __attribute__((swift_name("goalsHome")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorrectScoreHT.Companion")))
@interface FUSDKCorrectScoreHTCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKCorrectScoreHTCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreatePredictionRequest")))
@interface FUSDKCreatePredictionRequest : FUSDKBase
- (instancetype)initWithGameInstanceId:(NSString * _Nullable)gameInstanceId tiebreaker:(FUSDKTiebreaker * _Nullable)tiebreaker fixtures:(NSArray<FUSDKPredictionFixture *> *)fixtures __attribute__((swift_name("init(gameInstanceId:tiebreaker:fixtures:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKCreatePredictionRequestCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKCreatePredictionRequest *)doCopyGameInstanceId:(NSString * _Nullable)gameInstanceId tiebreaker:(FUSDKTiebreaker * _Nullable)tiebreaker fixtures:(NSArray<FUSDKPredictionFixture *> *)fixtures __attribute__((swift_name("doCopy(gameInstanceId:tiebreaker:fixtures:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKPredictionFixture *> *fixtures __attribute__((swift_name("fixtures")));
@property (readonly) NSString * _Nullable gameInstanceId __attribute__((swift_name("gameInstanceId")));
@property (readonly) FUSDKTiebreaker * _Nullable tiebreaker __attribute__((swift_name("tiebreaker")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreatePredictionRequest.Companion")))
@interface FUSDKCreatePredictionRequestCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKCreatePredictionRequestCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoubleChance")))
@interface FUSDKDoubleChance : FUSDKPredictionFixture
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(FUSDKValueDoubleChance *)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKDoubleChanceCompanion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) FUSDKValueDoubleChance *prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoubleChance.Companion")))
@interface FUSDKDoubleChanceCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKDoubleChanceCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoubleChanceData")))
@interface FUSDKDoubleChanceData : FUSDKBase
- (instancetype)initWithOneX:(int32_t)oneX xTwo:(int32_t)xTwo oneTwo:(int32_t)oneTwo __attribute__((swift_name("init(oneX:xTwo:oneTwo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKDoubleChanceDataCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKDoubleChanceData *)doCopyOneX:(int32_t)oneX xTwo:(int32_t)xTwo oneTwo:(int32_t)oneTwo __attribute__((swift_name("doCopy(oneX:xTwo:oneTwo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="12")
*/
@property (readonly) int32_t oneTwo __attribute__((swift_name("oneTwo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="1x")
*/
@property (readonly) int32_t oneX __attribute__((swift_name("oneX")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="x2")
*/
@property (readonly) int32_t xTwo __attribute__((swift_name("xTwo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoubleChanceData.Companion")))
@interface FUSDKDoubleChanceDataCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKDoubleChanceDataCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoubleChanceMap")))
@interface FUSDKDoubleChanceMap : FUSDKBase <FUSDKMarketPredictionValue>
- (instancetype)initWithValues:(NSDictionary<FUSDKValueDoubleChance *, FUSDKInt *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKDoubleChanceMapCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKDoubleChanceMap *)doCopyValues:(NSDictionary<FUSDKValueDoubleChance *, FUSDKInt *> *)values __attribute__((swift_name("doCopy(values:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<FUSDKValueDoubleChance *, FUSDKInt *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoubleChanceMap.Companion")))
@interface FUSDKDoubleChanceMapCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKDoubleChanceMapCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterCase")))
@interface FUSDKFilterCase : FUSDKKotlinEnum<FUSDKFilterCase *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKFilterCaseCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKFilterCase *user __attribute__((swift_name("user")));
@property (class, readonly) FUSDKFilterCase *current __attribute__((swift_name("current")));
@property (class, readonly) FUSDKFilterCase *past __attribute__((swift_name("past")));
@property (class, readonly) FUSDKFilterCase *matches __attribute__((swift_name("matches")));
+ (FUSDKKotlinArray<FUSDKFilterCase *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKFilterCase *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FilterCase.Companion")))
@interface FUSDKFilterCaseCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFilterCaseCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fixture")))
@interface FUSDKFixture : FUSDKBase
- (instancetype)initWithInternalPredictionFixture:(FUSDKPredictionFixture * _Nullable)internalPredictionFixture matchId:(NSString *)matchId matchType:(FUSDKMatchType *)matchType result:(FUSDKPredictionResult *)result market:(FUSDKMarket *)market playerId:(NSString * _Nullable)playerId status:(FUSDKPredictionStatus * _Nullable)status goalsHome:(FUSDKInt * _Nullable)goalsHome goalsAway:(FUSDKInt * _Nullable)goalsAway _prediction:(FUSDKKotlinx_serialization_jsonJsonElement * _Nullable)_prediction __attribute__((swift_name("init(internalPredictionFixture:matchId:matchType:result:market:playerId:status:goalsHome:goalsAway:_prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKFixtureCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKFixture *)doCopyInternalPredictionFixture:(FUSDKPredictionFixture * _Nullable)internalPredictionFixture matchId:(NSString *)matchId matchType:(FUSDKMatchType *)matchType result:(FUSDKPredictionResult *)result market:(FUSDKMarket *)market playerId:(NSString * _Nullable)playerId status:(FUSDKPredictionStatus * _Nullable)status goalsHome:(FUSDKInt * _Nullable)goalsHome goalsAway:(FUSDKInt * _Nullable)goalsAway _prediction:(FUSDKKotlinx_serialization_jsonJsonElement * _Nullable)_prediction __attribute__((swift_name("doCopy(internalPredictionFixture:matchId:matchType:result:market:playerId:status:goalsHome:goalsAway:_prediction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="goals_away")
*/
@property (readonly) FUSDKInt * _Nullable goalsAway __attribute__((swift_name("goalsAway")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="goals_home")
*/
@property (readonly) FUSDKInt * _Nullable goalsHome __attribute__((swift_name("goalsHome")));
@property FUSDKPredictionFixture * _Nullable internalPredictionFixture __attribute__((swift_name("internalPredictionFixture")));
@property (readonly) FUSDKMarket *market __attribute__((swift_name("market")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="match_id")
*/
@property NSString *matchId __attribute__((swift_name("matchId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="match_type")
*/
@property (readonly) FUSDKMatchType *matchType __attribute__((swift_name("matchType")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="player_id")
*/
@property NSString * _Nullable playerId __attribute__((swift_name("playerId")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property (readonly) id _Nullable prediction __attribute__((swift_name("prediction")));
@property (readonly) FUSDKPredictionResult *result __attribute__((swift_name("result")));
@property (readonly) FUSDKPredictionStatus * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fixture.Companion")))
@interface FUSDKFixtureCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFixtureCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FullTime1X2")))
@interface FUSDKFullTime1X2 : FUSDKPredictionFixture
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(FUSDKValue1X2 *)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKFullTime1X2Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) FUSDKValue1X2 *prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FullTime1X2.Companion")))
@interface FUSDKFullTime1X2Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFullTime1X2Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HTFTMap")))
@interface FUSDKHTFTMap : FUSDKBase <FUSDKMarketPredictionValue>
- (instancetype)initWithValues:(NSDictionary<FUSDKValueHTFT *, FUSDKInt *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKHTFTMapCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKHTFTMap *)doCopyValues:(NSDictionary<FUSDKValueHTFT *, FUSDKInt *> *)values __attribute__((swift_name("doCopy(values:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<FUSDKValueHTFT *, FUSDKInt *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HTFTMap.Companion")))
@interface FUSDKHTFTMapCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKHTFTMapCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HalfTime1X2")))
@interface FUSDKHalfTime1X2 : FUSDKPredictionFixture
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(FUSDKValue1X2 *)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKHalfTime1X2Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) FUSDKValue1X2 *prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HalfTime1X2.Companion")))
@interface FUSDKHalfTime1X2Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKHalfTime1X2Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HalfTimeFullTime")))
@interface FUSDKHalfTimeFullTime : FUSDKPredictionFixture
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(FUSDKValueHTFT *)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKHalfTimeFullTimeCompanion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) FUSDKValueHTFT *prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HalfTimeFullTime.Companion")))
@interface FUSDKHalfTimeFullTimeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKHalfTimeFullTimeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HalfTimeFullTimeData")))
@interface FUSDKHalfTimeFullTimeData : FUSDKBase
- (instancetype)initWithOneOne:(int32_t)oneOne oneX:(int32_t)oneX oneTwo:(int32_t)oneTwo xOne:(int32_t)xOne xX:(int32_t)xX xTwo:(int32_t)xTwo twoOne:(int32_t)twoOne twoX:(int32_t)twoX twoTwo:(int32_t)twoTwo __attribute__((swift_name("init(oneOne:oneX:oneTwo:xOne:xX:xTwo:twoOne:twoX:twoTwo:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKHalfTimeFullTimeDataCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKHalfTimeFullTimeData *)doCopyOneOne:(int32_t)oneOne oneX:(int32_t)oneX oneTwo:(int32_t)oneTwo xOne:(int32_t)xOne xX:(int32_t)xX xTwo:(int32_t)xTwo twoOne:(int32_t)twoOne twoX:(int32_t)twoX twoTwo:(int32_t)twoTwo __attribute__((swift_name("doCopy(oneOne:oneX:oneTwo:xOne:xX:xTwo:twoOne:twoX:twoTwo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="1/1")
*/
@property (readonly) int32_t oneOne __attribute__((swift_name("oneOne")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="1/2")
*/
@property (readonly) int32_t oneTwo __attribute__((swift_name("oneTwo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="1/x")
*/
@property (readonly) int32_t oneX __attribute__((swift_name("oneX")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="2/1")
*/
@property (readonly) int32_t twoOne __attribute__((swift_name("twoOne")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="2/2")
*/
@property (readonly) int32_t twoTwo __attribute__((swift_name("twoTwo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="2/x")
*/
@property (readonly) int32_t twoX __attribute__((swift_name("twoX")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="x/1")
*/
@property (readonly) int32_t xOne __attribute__((swift_name("xOne")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="x/2")
*/
@property (readonly) int32_t xTwo __attribute__((swift_name("xTwo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="x/x")
*/
@property (readonly) int32_t xX __attribute__((swift_name("xX")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HalfTimeFullTimeData.Companion")))
@interface FUSDKHalfTimeFullTimeDataCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKHalfTimeFullTimeDataCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdEntities")))
@interface FUSDKIdEntities : FUSDKBase
- (instancetype)initWithCompetition:(NSArray<NSString *> * _Nullable)competition team:(NSArray<NSString *> * _Nullable)team player:(NSArray<NSString *> * _Nullable)player match:(NSArray<NSString *> * _Nullable)match __attribute__((swift_name("init(competition:team:player:match:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKIdEntitiesCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKIdEntities *)doCopyCompetition:(NSArray<NSString *> * _Nullable)competition team:(NSArray<NSString *> * _Nullable)team player:(NSArray<NSString *> * _Nullable)player match:(NSArray<NSString *> * _Nullable)match __attribute__((swift_name("doCopy(competition:team:player:match:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable competition __attribute__((swift_name("competition")));
@property (readonly) NSArray<NSString *> * _Nullable match __attribute__((swift_name("match")));
@property (readonly) NSArray<NSString *> * _Nullable player __attribute__((swift_name("player")));
@property (readonly) NSArray<NSString *> * _Nullable team __attribute__((swift_name("team")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdEntities.Companion")))
@interface FUSDKIdEntitiesCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKIdEntitiesCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Market")))
@interface FUSDKMarket : FUSDKKotlinEnum<FUSDKMarket *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKMarketCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKMarket *ft1x2 __attribute__((swift_name("ft1x2")));
@property (class, readonly) FUSDKMarket *ht1x2 __attribute__((swift_name("ht1x2")));
@property (class, readonly) FUSDKMarket *htFt __attribute__((swift_name("htFt")));
@property (class, readonly) FUSDKMarket *correctScore __attribute__((swift_name("correctScore")));
@property (class, readonly) FUSDKMarket *correctScoreHt __attribute__((swift_name("correctScoreHt")));
@property (class, readonly) FUSDKMarket *correctScoreAdvanced __attribute__((swift_name("correctScoreAdvanced")));
@property (class, readonly) FUSDKMarket *bothTeamsScore __attribute__((swift_name("bothTeamsScore")));
@property (class, readonly) FUSDKMarket *doubleChance __attribute__((swift_name("doubleChance")));
@property (class, readonly) FUSDKMarket *overGoals05 __attribute__((swift_name("overGoals05")));
@property (class, readonly) FUSDKMarket *overGoals15 __attribute__((swift_name("overGoals15")));
@property (class, readonly) FUSDKMarket *overGoals25 __attribute__((swift_name("overGoals25")));
@property (class, readonly) FUSDKMarket *overGoals35 __attribute__((swift_name("overGoals35")));
@property (class, readonly) FUSDKMarket *overGoals45 __attribute__((swift_name("overGoals45")));
@property (class, readonly) FUSDKMarket *overGoals55 __attribute__((swift_name("overGoals55")));
@property (class, readonly) FUSDKMarket *overGoals65 __attribute__((swift_name("overGoals65")));
@property (class, readonly) FUSDKMarket *overCorners65 __attribute__((swift_name("overCorners65")));
@property (class, readonly) FUSDKMarket *overCorners75 __attribute__((swift_name("overCorners75")));
@property (class, readonly) FUSDKMarket *overCorners85 __attribute__((swift_name("overCorners85")));
@property (class, readonly) FUSDKMarket *overCorners95 __attribute__((swift_name("overCorners95")));
@property (class, readonly) FUSDKMarket *overCorners105 __attribute__((swift_name("overCorners105")));
@property (class, readonly) FUSDKMarket *overCorners115 __attribute__((swift_name("overCorners115")));
@property (class, readonly) FUSDKMarket *overCorners125 __attribute__((swift_name("overCorners125")));
@property (class, readonly) FUSDKMarket *overCorners135 __attribute__((swift_name("overCorners135")));
@property (class, readonly) FUSDKMarket *penaltyMatch __attribute__((swift_name("penaltyMatch")));
@property (class, readonly) FUSDKMarket *playerYellowCard __attribute__((swift_name("playerYellowCard")));
@property (class, readonly) FUSDKMarket *playerRedCard __attribute__((swift_name("playerRedCard")));
@property (class, readonly) FUSDKMarket *playerScoreFirstGoal __attribute__((swift_name("playerScoreFirstGoal")));
@property (class, readonly) FUSDKMarket *playerScore __attribute__((swift_name("playerScore")));
@property (class, readonly) FUSDKMarket *playerScoreTwice __attribute__((swift_name("playerScoreTwice")));
@property (class, readonly) FUSDKMarket *playerScoreHattrick __attribute__((swift_name("playerScoreHattrick")));
@property (class, readonly) FUSDKMarket *redCardMatch __attribute__((swift_name("redCardMatch")));
@property (class, readonly) FUSDKMarket *cornersMatch __attribute__((swift_name("cornersMatch")));
@property (class, readonly) FUSDKMarket *playerPerformance __attribute__((swift_name("playerPerformance")));
+ (FUSDKKotlinArray<FUSDKMarket *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKMarket *> *entries __attribute__((swift_name("entries")));
- (BOOL)isPlayerMarket __attribute__((swift_name("isPlayerMarket()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Market.Companion")))
@interface FUSDKMarketCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMarketCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketPredictionValueCompanion")))
@interface FUSDKMarketPredictionValueCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMarketPredictionValueCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketPredictions")))
@interface FUSDKMarketPredictions : FUSDKBase
- (instancetype)initWithFullTimeOneXTwo:(NSDictionary<FUSDKValue1X2 *, FUSDKInt *> * _Nullable)fullTimeOneXTwo halfTimeOneXTwo:(NSDictionary<FUSDKValue1X2 *, FUSDKInt *> * _Nullable)halfTimeOneXTwo bothTeamsScore:(FUSDKNoYesModel * _Nullable)bothTeamsScore doubleChance:(NSDictionary<FUSDKValueDoubleChance *, FUSDKInt *> * _Nullable)doubleChance halfTimeFullTime:(NSDictionary<FUSDKValueHTFT *, FUSDKInt *> * _Nullable)halfTimeFullTime playerScore:(NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable)playerScore playerYellowCard:(NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable)playerYellowCard playerRedCard:(NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable)playerRedCard redCardMatch:(FUSDKNoYesModel * _Nullable)redCardMatch penaltyMatch:(FUSDKNoYesModel * _Nullable)penaltyMatch playerScoreFirstGoal:(NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable)playerScoreFirstGoal cornersMatch:(NSDictionary<FUSDKInt *, FUSDKInt *> * _Nullable)cornersMatch correctScore:(NSDictionary<NSString *, FUSDKInt *> * _Nullable)correctScore correctScoreHalfTime:(NSDictionary<NSString *, FUSDKInt *> * _Nullable)correctScoreHalfTime correctScoreAdvanced:(NSDictionary<NSString *, FUSDKInt *> * _Nullable)correctScoreAdvanced playerScoreHattrick:(NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable)playerScoreHattrick playerScoreTwice:(NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable)playerScoreTwice overZeroPointFiveGoals:(FUSDKNoYesModel * _Nullable)overZeroPointFiveGoals overOnePointFiveGoals:(FUSDKNoYesModel * _Nullable)overOnePointFiveGoals overTwoPointFiveGoals:(FUSDKNoYesModel * _Nullable)overTwoPointFiveGoals overThreePointFiveGoals:(FUSDKNoYesModel * _Nullable)overThreePointFiveGoals overFourPointFiveGoals:(FUSDKNoYesModel * _Nullable)overFourPointFiveGoals overFivePointFiveGoals:(FUSDKNoYesModel * _Nullable)overFivePointFiveGoals overSixPointFiveGoals:(FUSDKNoYesModel * _Nullable)overSixPointFiveGoals overSixPointFiveCorners:(FUSDKNoYesModel * _Nullable)overSixPointFiveCorners overSevenPointFiveCorners:(FUSDKNoYesModel * _Nullable)overSevenPointFiveCorners overEightPointFiveCorners:(FUSDKNoYesModel * _Nullable)overEightPointFiveCorners overNinePointFiveCorners:(FUSDKNoYesModel * _Nullable)overNinePointFiveCorners overTenPointFiveCorners:(FUSDKNoYesModel * _Nullable)overTenPointFiveCorners overElevenPointFiveCorners:(FUSDKNoYesModel * _Nullable)overElevenPointFiveCorners overTwelvePointFiveCorners:(FUSDKNoYesModel * _Nullable)overTwelvePointFiveCorners overThirteenPointFiveCorners:(FUSDKNoYesModel * _Nullable)overThirteenPointFiveCorners __attribute__((swift_name("init(fullTimeOneXTwo:halfTimeOneXTwo:bothTeamsScore:doubleChance:halfTimeFullTime:playerScore:playerYellowCard:playerRedCard:redCardMatch:penaltyMatch:playerScoreFirstGoal:cornersMatch:correctScore:correctScoreHalfTime:correctScoreAdvanced:playerScoreHattrick:playerScoreTwice:overZeroPointFiveGoals:overOnePointFiveGoals:overTwoPointFiveGoals:overThreePointFiveGoals:overFourPointFiveGoals:overFivePointFiveGoals:overSixPointFiveGoals:overSixPointFiveCorners:overSevenPointFiveCorners:overEightPointFiveCorners:overNinePointFiveCorners:overTenPointFiveCorners:overElevenPointFiveCorners:overTwelvePointFiveCorners:overThirteenPointFiveCorners:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMarketPredictionsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMarketPredictions *)doCopyFullTimeOneXTwo:(NSDictionary<FUSDKValue1X2 *, FUSDKInt *> * _Nullable)fullTimeOneXTwo halfTimeOneXTwo:(NSDictionary<FUSDKValue1X2 *, FUSDKInt *> * _Nullable)halfTimeOneXTwo bothTeamsScore:(FUSDKNoYesModel * _Nullable)bothTeamsScore doubleChance:(NSDictionary<FUSDKValueDoubleChance *, FUSDKInt *> * _Nullable)doubleChance halfTimeFullTime:(NSDictionary<FUSDKValueHTFT *, FUSDKInt *> * _Nullable)halfTimeFullTime playerScore:(NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable)playerScore playerYellowCard:(NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable)playerYellowCard playerRedCard:(NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable)playerRedCard redCardMatch:(FUSDKNoYesModel * _Nullable)redCardMatch penaltyMatch:(FUSDKNoYesModel * _Nullable)penaltyMatch playerScoreFirstGoal:(NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable)playerScoreFirstGoal cornersMatch:(NSDictionary<FUSDKInt *, FUSDKInt *> * _Nullable)cornersMatch correctScore:(NSDictionary<NSString *, FUSDKInt *> * _Nullable)correctScore correctScoreHalfTime:(NSDictionary<NSString *, FUSDKInt *> * _Nullable)correctScoreHalfTime correctScoreAdvanced:(NSDictionary<NSString *, FUSDKInt *> * _Nullable)correctScoreAdvanced playerScoreHattrick:(NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable)playerScoreHattrick playerScoreTwice:(NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable)playerScoreTwice overZeroPointFiveGoals:(FUSDKNoYesModel * _Nullable)overZeroPointFiveGoals overOnePointFiveGoals:(FUSDKNoYesModel * _Nullable)overOnePointFiveGoals overTwoPointFiveGoals:(FUSDKNoYesModel * _Nullable)overTwoPointFiveGoals overThreePointFiveGoals:(FUSDKNoYesModel * _Nullable)overThreePointFiveGoals overFourPointFiveGoals:(FUSDKNoYesModel * _Nullable)overFourPointFiveGoals overFivePointFiveGoals:(FUSDKNoYesModel * _Nullable)overFivePointFiveGoals overSixPointFiveGoals:(FUSDKNoYesModel * _Nullable)overSixPointFiveGoals overSixPointFiveCorners:(FUSDKNoYesModel * _Nullable)overSixPointFiveCorners overSevenPointFiveCorners:(FUSDKNoYesModel * _Nullable)overSevenPointFiveCorners overEightPointFiveCorners:(FUSDKNoYesModel * _Nullable)overEightPointFiveCorners overNinePointFiveCorners:(FUSDKNoYesModel * _Nullable)overNinePointFiveCorners overTenPointFiveCorners:(FUSDKNoYesModel * _Nullable)overTenPointFiveCorners overElevenPointFiveCorners:(FUSDKNoYesModel * _Nullable)overElevenPointFiveCorners overTwelvePointFiveCorners:(FUSDKNoYesModel * _Nullable)overTwelvePointFiveCorners overThirteenPointFiveCorners:(FUSDKNoYesModel * _Nullable)overThirteenPointFiveCorners __attribute__((swift_name("doCopy(fullTimeOneXTwo:halfTimeOneXTwo:bothTeamsScore:doubleChance:halfTimeFullTime:playerScore:playerYellowCard:playerRedCard:redCardMatch:penaltyMatch:playerScoreFirstGoal:cornersMatch:correctScore:correctScoreHalfTime:correctScoreAdvanced:playerScoreHattrick:playerScoreTwice:overZeroPointFiveGoals:overOnePointFiveGoals:overTwoPointFiveGoals:overThreePointFiveGoals:overFourPointFiveGoals:overFivePointFiveGoals:overSixPointFiveGoals:overSixPointFiveCorners:overSevenPointFiveCorners:overEightPointFiveCorners:overNinePointFiveCorners:overTenPointFiveCorners:overElevenPointFiveCorners:overTwelvePointFiveCorners:overThirteenPointFiveCorners:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="BOTH_TEAMS_SCORE")
*/
@property FUSDKNoYesModel * _Nullable bothTeamsScore __attribute__((swift_name("bothTeamsScore")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="CORNERS_MATCH")
*/
@property NSDictionary<FUSDKInt *, FUSDKInt *> * _Nullable cornersMatch __attribute__((swift_name("cornersMatch")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="CORRECT_SCORE")
*/
@property NSDictionary<NSString *, FUSDKInt *> * _Nullable correctScore __attribute__((swift_name("correctScore")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="CORRECT_SCORE_ADVANCED")
*/
@property NSDictionary<NSString *, FUSDKInt *> * _Nullable correctScoreAdvanced __attribute__((swift_name("correctScoreAdvanced")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="CORRECT_SCORE_HT")
*/
@property NSDictionary<NSString *, FUSDKInt *> * _Nullable correctScoreHalfTime __attribute__((swift_name("correctScoreHalfTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="DOUBLE_CHANCE")
*/
@property NSDictionary<FUSDKValueDoubleChance *, FUSDKInt *> * _Nullable doubleChance __attribute__((swift_name("doubleChance")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="FT_1X2")
*/
@property NSDictionary<FUSDKValue1X2 *, FUSDKInt *> * _Nullable fullTimeOneXTwo __attribute__((swift_name("fullTimeOneXTwo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="HT_FT")
*/
@property NSDictionary<FUSDKValueHTFT *, FUSDKInt *> * _Nullable halfTimeFullTime __attribute__((swift_name("halfTimeFullTime")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="HT_1X2")
*/
@property NSDictionary<FUSDKValue1X2 *, FUSDKInt *> * _Nullable halfTimeOneXTwo __attribute__((swift_name("halfTimeOneXTwo")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="OVER_CORNERS_8_5")
*/
@property FUSDKNoYesModel * _Nullable overEightPointFiveCorners __attribute__((swift_name("overEightPointFiveCorners")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="OVER_CORNERS_11_5")
*/
@property FUSDKNoYesModel * _Nullable overElevenPointFiveCorners __attribute__((swift_name("overElevenPointFiveCorners")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="OVER_GOALS_5_5")
*/
@property FUSDKNoYesModel * _Nullable overFivePointFiveGoals __attribute__((swift_name("overFivePointFiveGoals")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="OVER_GOALS_4_5")
*/
@property FUSDKNoYesModel * _Nullable overFourPointFiveGoals __attribute__((swift_name("overFourPointFiveGoals")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="OVER_CORNERS_9_5")
*/
@property FUSDKNoYesModel * _Nullable overNinePointFiveCorners __attribute__((swift_name("overNinePointFiveCorners")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="OVER_GOALS_1_5")
*/
@property FUSDKNoYesModel * _Nullable overOnePointFiveGoals __attribute__((swift_name("overOnePointFiveGoals")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="OVER_CORNERS_7_5")
*/
@property FUSDKNoYesModel * _Nullable overSevenPointFiveCorners __attribute__((swift_name("overSevenPointFiveCorners")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="OVER_CORNERS_6_5")
*/
@property FUSDKNoYesModel * _Nullable overSixPointFiveCorners __attribute__((swift_name("overSixPointFiveCorners")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="OVER_GOALS_6_5")
*/
@property FUSDKNoYesModel * _Nullable overSixPointFiveGoals __attribute__((swift_name("overSixPointFiveGoals")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="OVER_CORNERS_10_5")
*/
@property FUSDKNoYesModel * _Nullable overTenPointFiveCorners __attribute__((swift_name("overTenPointFiveCorners")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="OVER_CORNERS_13_5")
*/
@property FUSDKNoYesModel * _Nullable overThirteenPointFiveCorners __attribute__((swift_name("overThirteenPointFiveCorners")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="OVER_GOALS_3_5")
*/
@property FUSDKNoYesModel * _Nullable overThreePointFiveGoals __attribute__((swift_name("overThreePointFiveGoals")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="OVER_CORNERS_12_5")
*/
@property FUSDKNoYesModel * _Nullable overTwelvePointFiveCorners __attribute__((swift_name("overTwelvePointFiveCorners")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="OVER_GOALS_2_5")
*/
@property FUSDKNoYesModel * _Nullable overTwoPointFiveGoals __attribute__((swift_name("overTwoPointFiveGoals")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="OVER_GOALS_0_5")
*/
@property FUSDKNoYesModel * _Nullable overZeroPointFiveGoals __attribute__((swift_name("overZeroPointFiveGoals")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="PENALTY_MATCH")
*/
@property FUSDKNoYesModel * _Nullable penaltyMatch __attribute__((swift_name("penaltyMatch")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="PLAYER_RED_CARD")
*/
@property NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable playerRedCard __attribute__((swift_name("playerRedCard")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="PLAYER_SCORE")
*/
@property NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable playerScore __attribute__((swift_name("playerScore")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="PLAYER_SCORE_FIRST_GOAL")
*/
@property NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable playerScoreFirstGoal __attribute__((swift_name("playerScoreFirstGoal")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="PLAYER_SCORE_HATTRICK")
*/
@property NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable playerScoreHattrick __attribute__((swift_name("playerScoreHattrick")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="PLAYER_SCORE_TWICE")
*/
@property NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable playerScoreTwice __attribute__((swift_name("playerScoreTwice")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="PLAYER_YELLOW_CARD")
*/
@property NSDictionary<NSString *, FUSDKPlayerMarketSummary *> * _Nullable playerYellowCard __attribute__((swift_name("playerYellowCard")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="RED_CARD_MATCH")
*/
@property FUSDKNoYesModel * _Nullable redCardMatch __attribute__((swift_name("redCardMatch")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketPredictions.Companion")))
@interface FUSDKMarketPredictionsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMarketPredictionsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketSummary")))
@interface FUSDKMarketSummary : FUSDKBase
- (instancetype)initWithMatchId:(NSString *)matchId matchType:(FUSDKMatchType *)matchType prediction:(id<FUSDKMarketPredictionValue>)prediction __attribute__((swift_name("init(matchId:matchType:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMarketSummaryCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMarketSummary *)doCopyMatchId:(NSString *)matchId matchType:(FUSDKMatchType *)matchType prediction:(id<FUSDKMarketPredictionValue>)prediction __attribute__((swift_name("doCopy(matchId:matchType:prediction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) FUSDKMatchType *matchType __attribute__((swift_name("matchType")));
@property (readonly) id<FUSDKMarketPredictionValue> prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MarketSummary.Companion")))
@interface FUSDKMarketSummaryCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMarketSummaryCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Markets")))
@interface FUSDKMarkets : FUSDKBase
- (instancetype)initWithMain:(NSArray<FUSDKMarket *> * _Nullable)main all:(NSArray<FUSDKMarket *> * _Nullable)all __attribute__((swift_name("init(main:all:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMarketsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMarkets *)doCopyMain:(NSArray<FUSDKMarket *> * _Nullable)main all:(NSArray<FUSDKMarket *> * _Nullable)all __attribute__((swift_name("doCopy(main:all:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<FUSDKMarket *> * _Nullable all __attribute__((swift_name("all")));
@property (readonly) NSArray<FUSDKMarket *> * _Nullable main __attribute__((swift_name("main")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Markets.Companion")))
@interface FUSDKMarketsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMarketsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchCorrectScoreMarketResult")))
@interface FUSDKMatchCorrectScoreMarketResult : FUSDKBase
- (instancetype)initWithHomeGoals:(FUSDKInt * _Nullable)homeGoals awayGoals:(FUSDKInt * _Nullable)awayGoals __attribute__((swift_name("init(homeGoals:awayGoals:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMatchCorrectScoreMarketResultCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMatchCorrectScoreMarketResult *)doCopyHomeGoals:(FUSDKInt * _Nullable)homeGoals awayGoals:(FUSDKInt * _Nullable)awayGoals __attribute__((swift_name("doCopy(homeGoals:awayGoals:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property FUSDKInt * _Nullable awayGoals __attribute__((swift_name("awayGoals")));
@property FUSDKInt * _Nullable homeGoals __attribute__((swift_name("homeGoals")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchCorrectScoreMarketResult.Companion")))
@interface FUSDKMatchCorrectScoreMarketResultCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMatchCorrectScoreMarketResultCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchMarketsResults")))
@interface FUSDKMatchMarketsResults : FUSDKBase
- (instancetype)initWithFT_1X2:(NSString * _Nullable)FT_1X2 HT_1X2:(NSString * _Nullable)HT_1X2 BOTH_TEAMS_SCORE:(FUSDKBoolean * _Nullable)BOTH_TEAMS_SCORE DOUBLE_CHANCE:(NSArray<NSString *> * _Nullable)DOUBLE_CHANCE HT_FT:(NSString * _Nullable)HT_FT RED_CARD_MATCH:(FUSDKBoolean * _Nullable)RED_CARD_MATCH PENALTY_MATCH:(FUSDKBoolean * _Nullable)PENALTY_MATCH CORNERS_MATCH:(FUSDKInt * _Nullable)CORNERS_MATCH PLAYER_YELLOW_CARD:(NSArray<FUSDKMatchPlayerMarketResult *> *)PLAYER_YELLOW_CARD PLAYER_RED_CARD:(NSArray<FUSDKMatchPlayerMarketResult *> *)PLAYER_RED_CARD PLAYER_SCORE_FIRST_GOAL:(FUSDKMatchPlayerMarketResult *)PLAYER_SCORE_FIRST_GOAL PLAYER_SCORE:(NSArray<FUSDKMatchPlayerMarketResult *> *)PLAYER_SCORE PLAYER_SCORE_TWICE:(NSArray<FUSDKMatchPlayerMarketResult *> *)PLAYER_SCORE_TWICE PLAYER_SCORE_HATTRICK:(NSArray<FUSDKMatchPlayerMarketResult *> *)PLAYER_SCORE_HATTRICK CORRECT_SCORE:(FUSDKMatchCorrectScoreMarketResult *)CORRECT_SCORE CORRECT_SCORE_ADVANCED:(FUSDKMatchCorrectScoreMarketResult *)CORRECT_SCORE_ADVANCED CORRECT_SCORE_HT:(FUSDKMatchCorrectScoreMarketResult *)CORRECT_SCORE_HT OVER_GOALS_0_5:(FUSDKBoolean * _Nullable)OVER_GOALS_0_5 OVER_GOALS_1_5:(FUSDKBoolean * _Nullable)OVER_GOALS_1_5 OVER_GOALS_2_5:(FUSDKBoolean * _Nullable)OVER_GOALS_2_5 OVER_GOALS_3_5:(FUSDKBoolean * _Nullable)OVER_GOALS_3_5 OVER_GOALS_4_5:(FUSDKBoolean * _Nullable)OVER_GOALS_4_5 OVER_GOALS_5_5:(FUSDKBoolean * _Nullable)OVER_GOALS_5_5 OVER_GOALS_6_5:(FUSDKBoolean * _Nullable)OVER_GOALS_6_5 OVER_CORNERS_6_5:(FUSDKBoolean * _Nullable)OVER_CORNERS_6_5 OVER_CORNERS_7_5:(FUSDKBoolean * _Nullable)OVER_CORNERS_7_5 OVER_CORNERS_8_5:(FUSDKBoolean * _Nullable)OVER_CORNERS_8_5 OVER_CORNERS_9_5:(FUSDKBoolean * _Nullable)OVER_CORNERS_9_5 OVER_CORNERS_10_5:(FUSDKBoolean * _Nullable)OVER_CORNERS_10_5 OVER_CORNERS_11_5:(FUSDKBoolean * _Nullable)OVER_CORNERS_11_5 OVER_CORNERS_12_5:(FUSDKBoolean * _Nullable)OVER_CORNERS_12_5 OVER_CORNERS_13_5:(FUSDKBoolean * _Nullable)OVER_CORNERS_13_5 __attribute__((swift_name("init(FT_1X2:HT_1X2:BOTH_TEAMS_SCORE:DOUBLE_CHANCE:HT_FT:RED_CARD_MATCH:PENALTY_MATCH:CORNERS_MATCH:PLAYER_YELLOW_CARD:PLAYER_RED_CARD:PLAYER_SCORE_FIRST_GOAL:PLAYER_SCORE:PLAYER_SCORE_TWICE:PLAYER_SCORE_HATTRICK:CORRECT_SCORE:CORRECT_SCORE_ADVANCED:CORRECT_SCORE_HT:OVER_GOALS_0_5:OVER_GOALS_1_5:OVER_GOALS_2_5:OVER_GOALS_3_5:OVER_GOALS_4_5:OVER_GOALS_5_5:OVER_GOALS_6_5:OVER_CORNERS_6_5:OVER_CORNERS_7_5:OVER_CORNERS_8_5:OVER_CORNERS_9_5:OVER_CORNERS_10_5:OVER_CORNERS_11_5:OVER_CORNERS_12_5:OVER_CORNERS_13_5:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMatchMarketsResultsCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMatchMarketsResults *)doCopyFT_1X2:(NSString * _Nullable)FT_1X2 HT_1X2:(NSString * _Nullable)HT_1X2 BOTH_TEAMS_SCORE:(FUSDKBoolean * _Nullable)BOTH_TEAMS_SCORE DOUBLE_CHANCE:(NSArray<NSString *> * _Nullable)DOUBLE_CHANCE HT_FT:(NSString * _Nullable)HT_FT RED_CARD_MATCH:(FUSDKBoolean * _Nullable)RED_CARD_MATCH PENALTY_MATCH:(FUSDKBoolean * _Nullable)PENALTY_MATCH CORNERS_MATCH:(FUSDKInt * _Nullable)CORNERS_MATCH PLAYER_YELLOW_CARD:(NSArray<FUSDKMatchPlayerMarketResult *> *)PLAYER_YELLOW_CARD PLAYER_RED_CARD:(NSArray<FUSDKMatchPlayerMarketResult *> *)PLAYER_RED_CARD PLAYER_SCORE_FIRST_GOAL:(FUSDKMatchPlayerMarketResult *)PLAYER_SCORE_FIRST_GOAL PLAYER_SCORE:(NSArray<FUSDKMatchPlayerMarketResult *> *)PLAYER_SCORE PLAYER_SCORE_TWICE:(NSArray<FUSDKMatchPlayerMarketResult *> *)PLAYER_SCORE_TWICE PLAYER_SCORE_HATTRICK:(NSArray<FUSDKMatchPlayerMarketResult *> *)PLAYER_SCORE_HATTRICK CORRECT_SCORE:(FUSDKMatchCorrectScoreMarketResult *)CORRECT_SCORE CORRECT_SCORE_ADVANCED:(FUSDKMatchCorrectScoreMarketResult *)CORRECT_SCORE_ADVANCED CORRECT_SCORE_HT:(FUSDKMatchCorrectScoreMarketResult *)CORRECT_SCORE_HT OVER_GOALS_0_5:(FUSDKBoolean * _Nullable)OVER_GOALS_0_5 OVER_GOALS_1_5:(FUSDKBoolean * _Nullable)OVER_GOALS_1_5 OVER_GOALS_2_5:(FUSDKBoolean * _Nullable)OVER_GOALS_2_5 OVER_GOALS_3_5:(FUSDKBoolean * _Nullable)OVER_GOALS_3_5 OVER_GOALS_4_5:(FUSDKBoolean * _Nullable)OVER_GOALS_4_5 OVER_GOALS_5_5:(FUSDKBoolean * _Nullable)OVER_GOALS_5_5 OVER_GOALS_6_5:(FUSDKBoolean * _Nullable)OVER_GOALS_6_5 OVER_CORNERS_6_5:(FUSDKBoolean * _Nullable)OVER_CORNERS_6_5 OVER_CORNERS_7_5:(FUSDKBoolean * _Nullable)OVER_CORNERS_7_5 OVER_CORNERS_8_5:(FUSDKBoolean * _Nullable)OVER_CORNERS_8_5 OVER_CORNERS_9_5:(FUSDKBoolean * _Nullable)OVER_CORNERS_9_5 OVER_CORNERS_10_5:(FUSDKBoolean * _Nullable)OVER_CORNERS_10_5 OVER_CORNERS_11_5:(FUSDKBoolean * _Nullable)OVER_CORNERS_11_5 OVER_CORNERS_12_5:(FUSDKBoolean * _Nullable)OVER_CORNERS_12_5 OVER_CORNERS_13_5:(FUSDKBoolean * _Nullable)OVER_CORNERS_13_5 __attribute__((swift_name("doCopy(FT_1X2:HT_1X2:BOTH_TEAMS_SCORE:DOUBLE_CHANCE:HT_FT:RED_CARD_MATCH:PENALTY_MATCH:CORNERS_MATCH:PLAYER_YELLOW_CARD:PLAYER_RED_CARD:PLAYER_SCORE_FIRST_GOAL:PLAYER_SCORE:PLAYER_SCORE_TWICE:PLAYER_SCORE_HATTRICK:CORRECT_SCORE:CORRECT_SCORE_ADVANCED:CORRECT_SCORE_HT:OVER_GOALS_0_5:OVER_GOALS_1_5:OVER_GOALS_2_5:OVER_GOALS_3_5:OVER_GOALS_4_5:OVER_GOALS_5_5:OVER_GOALS_6_5:OVER_CORNERS_6_5:OVER_CORNERS_7_5:OVER_CORNERS_8_5:OVER_CORNERS_9_5:OVER_CORNERS_10_5:OVER_CORNERS_11_5:OVER_CORNERS_12_5:OVER_CORNERS_13_5:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property FUSDKBoolean * _Nullable BOTH_TEAMS_SCORE __attribute__((swift_name("BOTH_TEAMS_SCORE")));
@property FUSDKInt * _Nullable CORNERS_MATCH __attribute__((swift_name("CORNERS_MATCH")));
@property FUSDKMatchCorrectScoreMarketResult *CORRECT_SCORE __attribute__((swift_name("CORRECT_SCORE")));
@property FUSDKMatchCorrectScoreMarketResult *CORRECT_SCORE_ADVANCED __attribute__((swift_name("CORRECT_SCORE_ADVANCED")));
@property FUSDKMatchCorrectScoreMarketResult *CORRECT_SCORE_HT __attribute__((swift_name("CORRECT_SCORE_HT")));
@property NSArray<NSString *> * _Nullable DOUBLE_CHANCE __attribute__((swift_name("DOUBLE_CHANCE")));
@property NSString * _Nullable FT_1X2 __attribute__((swift_name("FT_1X2")));
@property NSString * _Nullable HT_1X2 __attribute__((swift_name("HT_1X2")));
@property NSString * _Nullable HT_FT __attribute__((swift_name("HT_FT")));
@property FUSDKBoolean * _Nullable OVER_CORNERS_10_5 __attribute__((swift_name("OVER_CORNERS_10_5")));
@property FUSDKBoolean * _Nullable OVER_CORNERS_11_5 __attribute__((swift_name("OVER_CORNERS_11_5")));
@property FUSDKBoolean * _Nullable OVER_CORNERS_12_5 __attribute__((swift_name("OVER_CORNERS_12_5")));
@property FUSDKBoolean * _Nullable OVER_CORNERS_13_5 __attribute__((swift_name("OVER_CORNERS_13_5")));
@property FUSDKBoolean * _Nullable OVER_CORNERS_6_5 __attribute__((swift_name("OVER_CORNERS_6_5")));
@property FUSDKBoolean * _Nullable OVER_CORNERS_7_5 __attribute__((swift_name("OVER_CORNERS_7_5")));
@property FUSDKBoolean * _Nullable OVER_CORNERS_8_5 __attribute__((swift_name("OVER_CORNERS_8_5")));
@property FUSDKBoolean * _Nullable OVER_CORNERS_9_5 __attribute__((swift_name("OVER_CORNERS_9_5")));
@property FUSDKBoolean * _Nullable OVER_GOALS_0_5 __attribute__((swift_name("OVER_GOALS_0_5")));
@property FUSDKBoolean * _Nullable OVER_GOALS_1_5 __attribute__((swift_name("OVER_GOALS_1_5")));
@property FUSDKBoolean * _Nullable OVER_GOALS_2_5 __attribute__((swift_name("OVER_GOALS_2_5")));
@property FUSDKBoolean * _Nullable OVER_GOALS_3_5 __attribute__((swift_name("OVER_GOALS_3_5")));
@property FUSDKBoolean * _Nullable OVER_GOALS_4_5 __attribute__((swift_name("OVER_GOALS_4_5")));
@property FUSDKBoolean * _Nullable OVER_GOALS_5_5 __attribute__((swift_name("OVER_GOALS_5_5")));
@property FUSDKBoolean * _Nullable OVER_GOALS_6_5 __attribute__((swift_name("OVER_GOALS_6_5")));
@property FUSDKBoolean * _Nullable PENALTY_MATCH __attribute__((swift_name("PENALTY_MATCH")));
@property NSArray<FUSDKMatchPlayerMarketResult *> *PLAYER_RED_CARD __attribute__((swift_name("PLAYER_RED_CARD")));
@property NSArray<FUSDKMatchPlayerMarketResult *> *PLAYER_SCORE __attribute__((swift_name("PLAYER_SCORE")));
@property FUSDKMatchPlayerMarketResult *PLAYER_SCORE_FIRST_GOAL __attribute__((swift_name("PLAYER_SCORE_FIRST_GOAL")));
@property NSArray<FUSDKMatchPlayerMarketResult *> *PLAYER_SCORE_HATTRICK __attribute__((swift_name("PLAYER_SCORE_HATTRICK")));
@property NSArray<FUSDKMatchPlayerMarketResult *> *PLAYER_SCORE_TWICE __attribute__((swift_name("PLAYER_SCORE_TWICE")));
@property NSArray<FUSDKMatchPlayerMarketResult *> *PLAYER_YELLOW_CARD __attribute__((swift_name("PLAYER_YELLOW_CARD")));
@property FUSDKBoolean * _Nullable RED_CARD_MATCH __attribute__((swift_name("RED_CARD_MATCH")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchMarketsResults.Companion")))
@interface FUSDKMatchMarketsResultsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMatchMarketsResultsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchPlayerMarketResult")))
@interface FUSDKMatchPlayerMarketResult : FUSDKBase
- (instancetype)initWithPlayerId:(NSString * _Nullable)playerId playerModel:(FUSDKPlayerBasicModel * _Nullable)playerModel __attribute__((swift_name("init(playerId:playerModel:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMatchPlayerMarketResultCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMatchPlayerMarketResult *)doCopyPlayerId:(NSString * _Nullable)playerId playerModel:(FUSDKPlayerBasicModel * _Nullable)playerModel __attribute__((swift_name("doCopy(playerId:playerModel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable playerId __attribute__((swift_name("playerId")));
@property FUSDKPlayerBasicModel * _Nullable playerModel __attribute__((swift_name("playerModel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchPlayerMarketResult.Companion")))
@interface FUSDKMatchPlayerMarketResultCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMatchPlayerMarketResultCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchSummaryModel")))
@interface FUSDKMatchSummaryModel : FUSDKBase
- (instancetype)initWithMatchId:(NSString *)matchId matchType:(FUSDKMatchType *)matchType predictions:(FUSDKMarketPredictions *)predictions __attribute__((swift_name("init(matchId:matchType:predictions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKMatchSummaryModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMatchSummaryModel *)doCopyMatchId:(NSString *)matchId matchType:(FUSDKMatchType *)matchType predictions:(FUSDKMarketPredictions *)predictions __attribute__((swift_name("doCopy(matchId:matchType:predictions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) FUSDKMatchType *matchType __attribute__((swift_name("matchType")));
@property (readonly) FUSDKMarketPredictions *predictions __attribute__((swift_name("predictions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchSummaryModel.Companion")))
@interface FUSDKMatchSummaryModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMatchSummaryModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchType")))
@interface FUSDKMatchType : FUSDKKotlinEnum<FUSDKMatchType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKMatchTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKMatchType *football __attribute__((swift_name("football")));
+ (FUSDKKotlinArray<FUSDKMatchType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKMatchType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MatchType.Companion")))
@interface FUSDKMatchTypeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMatchTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoYesModel")))
@interface FUSDKNoYesModel : FUSDKBase
- (instancetype)initWithNo:(int32_t)no yes:(int32_t)yes __attribute__((swift_name("init(no:yes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKNoYesModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKNoYesModel *)doCopyNo:(int32_t)no yes:(int32_t)yes __attribute__((swift_name("doCopy(no:yes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t no __attribute__((swift_name("no")));
@property (readonly) int32_t yes __attribute__((swift_name("yes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoYesModel.Companion")))
@interface FUSDKNoYesModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKNoYesModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoYesModelValue")))
@interface FUSDKNoYesModelValue : FUSDKBase <FUSDKMarketPredictionValue>
- (instancetype)initWithNo:(int32_t)no yes:(int32_t)yes __attribute__((swift_name("init(no:yes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKNoYesModelValueCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKNoYesModelValue *)doCopyNo:(int32_t)no yes:(int32_t)yes __attribute__((swift_name("doCopy(no:yes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t no __attribute__((swift_name("no")));
@property (readonly) int32_t yes __attribute__((swift_name("yes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NoYesModelValue.Companion")))
@interface FUSDKNoYesModelValueCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKNoYesModelValueCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OneXTwoData")))
@interface FUSDKOneXTwoData : FUSDKBase
- (instancetype)initWithOne:(int32_t)one x:(int32_t)x two:(int32_t)two __attribute__((swift_name("init(one:x:two:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOneXTwoDataCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKOneXTwoData *)doCopyOne:(int32_t)one x:(int32_t)x two:(int32_t)two __attribute__((swift_name("doCopy(one:x:two:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="1")
*/
@property (readonly) int32_t one __attribute__((swift_name("one")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="2")
*/
@property (readonly) int32_t two __attribute__((swift_name("two")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="x")
*/
@property (readonly) int32_t x __attribute__((swift_name("x")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OneXTwoData.Companion")))
@interface FUSDKOneXTwoDataCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOneXTwoDataCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OneXTwoMap")))
@interface FUSDKOneXTwoMap : FUSDKBase <FUSDKMarketPredictionValue>
- (instancetype)initWithValues:(NSDictionary<FUSDKValue1X2 *, FUSDKInt *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOneXTwoMapCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKOneXTwoMap *)doCopyValues:(NSDictionary<FUSDKValue1X2 *, FUSDKInt *> *)values __attribute__((swift_name("doCopy(values:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<FUSDKValue1X2 *, FUSDKInt *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OneXTwoMap.Companion")))
@interface FUSDKOneXTwoMapCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOneXTwoMapCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Outcome")))
@interface FUSDKOutcome : FUSDKKotlinEnum<FUSDKOutcome *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKOutcomeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKOutcome *correct __attribute__((swift_name("correct")));
@property (class, readonly) FUSDKOutcome *incorrect __attribute__((swift_name("incorrect")));
@property (class, readonly) FUSDKOutcome *notVerified __attribute__((swift_name("notVerified")));
@property (class, readonly) FUSDKOutcome *partiallyCorrect __attribute__((swift_name("partiallyCorrect")));
@property (class, readonly) FUSDKOutcome *void_ __attribute__((swift_name("void_")));
+ (FUSDKKotlinArray<FUSDKOutcome *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKOutcome *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Outcome.Companion")))
@interface FUSDKOutcomeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOutcomeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverCorners_10_5")))
@interface FUSDKOverCorners_10_5 : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOverCorners_10_5Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverCorners_10_5.Companion")))
@interface FUSDKOverCorners_10_5Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOverCorners_10_5Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverCorners_11_5")))
@interface FUSDKOverCorners_11_5 : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOverCorners_11_5Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverCorners_11_5.Companion")))
@interface FUSDKOverCorners_11_5Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOverCorners_11_5Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverCorners_12_5")))
@interface FUSDKOverCorners_12_5 : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOverCorners_12_5Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverCorners_12_5.Companion")))
@interface FUSDKOverCorners_12_5Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOverCorners_12_5Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverCorners_13_5")))
@interface FUSDKOverCorners_13_5 : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOverCorners_13_5Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverCorners_13_5.Companion")))
@interface FUSDKOverCorners_13_5Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOverCorners_13_5Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverCorners_6_5")))
@interface FUSDKOverCorners_6_5 : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOverCorners_6_5Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverCorners_6_5.Companion")))
@interface FUSDKOverCorners_6_5Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOverCorners_6_5Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverCorners_7_5")))
@interface FUSDKOverCorners_7_5 : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOverCorners_7_5Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverCorners_7_5.Companion")))
@interface FUSDKOverCorners_7_5Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOverCorners_7_5Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverCorners_8_5")))
@interface FUSDKOverCorners_8_5 : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOverCorners_8_5Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverCorners_8_5.Companion")))
@interface FUSDKOverCorners_8_5Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOverCorners_8_5Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverCorners_9_5")))
@interface FUSDKOverCorners_9_5 : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOverCorners_9_5Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverCorners_9_5.Companion")))
@interface FUSDKOverCorners_9_5Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOverCorners_9_5Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverGoals_0_5")))
@interface FUSDKOverGoals_0_5 : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOverGoals_0_5Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverGoals_0_5.Companion")))
@interface FUSDKOverGoals_0_5Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOverGoals_0_5Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverGoals_1_5")))
@interface FUSDKOverGoals_1_5 : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOverGoals_1_5Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverGoals_1_5.Companion")))
@interface FUSDKOverGoals_1_5Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOverGoals_1_5Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverGoals_2_5")))
@interface FUSDKOverGoals_2_5 : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOverGoals_2_5Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverGoals_2_5.Companion")))
@interface FUSDKOverGoals_2_5Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOverGoals_2_5Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverGoals_3_5")))
@interface FUSDKOverGoals_3_5 : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOverGoals_3_5Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverGoals_3_5.Companion")))
@interface FUSDKOverGoals_3_5Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOverGoals_3_5Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverGoals_4_5")))
@interface FUSDKOverGoals_4_5 : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOverGoals_4_5Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverGoals_4_5.Companion")))
@interface FUSDKOverGoals_4_5Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOverGoals_4_5Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverGoals_5_5")))
@interface FUSDKOverGoals_5_5 : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOverGoals_5_5Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverGoals_5_5.Companion")))
@interface FUSDKOverGoals_5_5Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOverGoals_5_5Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverGoals_6_5")))
@interface FUSDKOverGoals_6_5 : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKOverGoals_6_5Companion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OverGoals_6_5.Companion")))
@interface FUSDKOverGoals_6_5Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKOverGoals_6_5Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PLAYER_MARKETS")))
@interface FUSDKPLAYER_MARKETS : FUSDKKotlinEnum<FUSDKPLAYER_MARKETS *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKPLAYER_MARKETS *playerYellowCard __attribute__((swift_name("playerYellowCard")));
@property (class, readonly) FUSDKPLAYER_MARKETS *playerRedCard __attribute__((swift_name("playerRedCard")));
@property (class, readonly) FUSDKPLAYER_MARKETS *playerScoreFirstGoal __attribute__((swift_name("playerScoreFirstGoal")));
@property (class, readonly) FUSDKPLAYER_MARKETS *playerScore __attribute__((swift_name("playerScore")));
@property (class, readonly) FUSDKPLAYER_MARKETS *playerScoreTwice __attribute__((swift_name("playerScoreTwice")));
@property (class, readonly) FUSDKPLAYER_MARKETS *playerScoreHattrick __attribute__((swift_name("playerScoreHattrick")));
+ (FUSDKKotlinArray<FUSDKPLAYER_MARKETS *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKPLAYER_MARKETS *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PenaltyMatch")))
@interface FUSDKPenaltyMatch : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPenaltyMatchCompanion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PenaltyMatch.Companion")))
@interface FUSDKPenaltyMatchCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPenaltyMatchCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerMap")))
@interface FUSDKPlayerMap : FUSDKBase <FUSDKMarketPredictionValue>
- (instancetype)initWithValues:(NSDictionary<NSString *, id> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPlayerMapCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPlayerMap *)doCopyValues:(NSDictionary<NSString *, id> *)values __attribute__((swift_name("doCopy(values:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerMap.Companion")))
@interface FUSDKPlayerMapCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPlayerMapCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerMarketSummary")))
@interface FUSDKPlayerMarketSummary : FUSDKBase <FUSDKMarketPredictionValue>
- (instancetype)initWithYes:(int32_t)yes no:(int32_t)no model:(FUSDKPlayerBasicModel * _Nullable)model __attribute__((swift_name("init(yes:no:model:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPlayerMarketSummaryCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPlayerMarketSummary *)doCopyYes:(int32_t)yes no:(int32_t)no model:(FUSDKPlayerBasicModel * _Nullable)model __attribute__((swift_name("doCopy(yes:no:model:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKPlayerBasicModel * _Nullable model __attribute__((swift_name("model")));
@property (readonly) int32_t no __attribute__((swift_name("no")));
@property (readonly) int32_t yes __attribute__((swift_name("yes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerMarketSummary.Companion")))
@interface FUSDKPlayerMarketSummaryCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPlayerMarketSummaryCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("PlayerPrediction")))
@protocol FUSDKPlayerPrediction
@required
@property (readonly) NSString * _Nullable playerId __attribute__((swift_name("playerId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerPerformance")))
@interface FUSDKPlayerPerformance : FUSDKPredictionFixture <FUSDKPlayerPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId playerId:(NSString *)playerId __attribute__((swift_name("init(matchId:playerId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPlayerPerformanceCompanion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property NSString *playerId __attribute__((swift_name("playerId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerPerformance.Companion")))
@interface FUSDKPlayerPerformanceCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPlayerPerformanceCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerRedCard")))
@interface FUSDKPlayerRedCard : FUSDKPredictionFixture <FUSDKBinaryPrediction, FUSDKPlayerPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction playerId:(NSString *)playerId __attribute__((swift_name("init(matchId:prediction:playerId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPlayerRedCardCompanion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property NSString *playerId __attribute__((swift_name("playerId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerRedCard.Companion")))
@interface FUSDKPlayerRedCardCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPlayerRedCardCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerScore")))
@interface FUSDKPlayerScore : FUSDKPredictionFixture <FUSDKBinaryPrediction, FUSDKPlayerPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction playerId:(NSString *)playerId __attribute__((swift_name("init(matchId:prediction:playerId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPlayerScoreCompanion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property NSString *playerId __attribute__((swift_name("playerId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerScore.Companion")))
@interface FUSDKPlayerScoreCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPlayerScoreCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerScoreFirstGoal")))
@interface FUSDKPlayerScoreFirstGoal : FUSDKPredictionFixture <FUSDKBinaryPrediction, FUSDKPlayerPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction playerId:(NSString * _Nullable)playerId __attribute__((swift_name("init(matchId:prediction:playerId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPlayerScoreFirstGoalCompanion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property NSString * _Nullable playerId __attribute__((swift_name("playerId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerScoreFirstGoal.Companion")))
@interface FUSDKPlayerScoreFirstGoalCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPlayerScoreFirstGoalCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerScoreFirstGoalCreate")))
@interface FUSDKPlayerScoreFirstGoalCreate : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction playerId:(NSString *)playerId __attribute__((swift_name("init(matchId:prediction:playerId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPlayerScoreFirstGoalCreateCompanion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property NSString *playerId __attribute__((swift_name("playerId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerScoreFirstGoalCreate.Companion")))
@interface FUSDKPlayerScoreFirstGoalCreateCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPlayerScoreFirstGoalCreateCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerScoreHattrick")))
@interface FUSDKPlayerScoreHattrick : FUSDKPredictionFixture <FUSDKBinaryPrediction, FUSDKPlayerPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction playerId:(NSString *)playerId __attribute__((swift_name("init(matchId:prediction:playerId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPlayerScoreHattrickCompanion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property NSString *playerId __attribute__((swift_name("playerId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerScoreHattrick.Companion")))
@interface FUSDKPlayerScoreHattrickCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPlayerScoreHattrickCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerScoreTwice")))
@interface FUSDKPlayerScoreTwice : FUSDKPredictionFixture <FUSDKBinaryPrediction, FUSDKPlayerPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction playerId:(NSString *)playerId __attribute__((swift_name("init(matchId:prediction:playerId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPlayerScoreTwiceCompanion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property NSString *playerId __attribute__((swift_name("playerId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerScoreTwice.Companion")))
@interface FUSDKPlayerScoreTwiceCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPlayerScoreTwiceCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerYellowCard")))
@interface FUSDKPlayerYellowCard : FUSDKPredictionFixture <FUSDKBinaryPrediction, FUSDKPlayerPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction playerId:(NSString *)playerId __attribute__((swift_name("init(matchId:prediction:playerId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPlayerYellowCardCompanion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property NSString *playerId __attribute__((swift_name("playerId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlayerYellowCard.Companion")))
@interface FUSDKPlayerYellowCardCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPlayerYellowCardCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionFixture.Companion")))
@interface FUSDKPredictionFixtureCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPredictionFixtureCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("PredictionPartial")))
@interface FUSDKPredictionPartial : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 gameInstanceId:(NSString * _Nullable)gameInstanceId tiebreaker:(FUSDKTiebreaker * _Nullable)tiebreaker fixtures:(NSArray<FUSDKFixture *> * _Nullable)fixtures serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:gameInstanceId:tiebreaker:fixtures:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPredictionPartialCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/fansunitedmedia/sdk/network/serialization/FixtureListSerializer))
*/
@property (readonly) NSArray<FUSDKFixture *> * _Nullable fixtures __attribute__((swift_name("fixtures")));
@property (readonly) NSString * _Nullable gameInstanceId __attribute__((swift_name("gameInstanceId")));
@property (readonly) FUSDKTiebreaker * _Nullable tiebreaker __attribute__((swift_name("tiebreaker")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionPartial.Companion")))
@interface FUSDKPredictionPartialCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPredictionPartialCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionResponseModel")))
@interface FUSDKPredictionResponseModel : FUSDKPredictionPartial
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 gameInstanceId:(NSString * _Nullable)gameInstanceId tiebreaker:(FUSDKTiebreaker * _Nullable)tiebreaker fixtures:(NSArray<FUSDKFixture *> * _Nullable)fixtures serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:gameInstanceId:tiebreaker:fixtures:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKPredictionResponseModelCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) FUSDKPredictionType * _Nullable gameType __attribute__((swift_name("gameType")));
@property (readonly) NSString * _Nullable groupId __attribute__((swift_name("groupId")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable profileLastUpdatedAt __attribute__((swift_name("profileLastUpdatedAt")));
@property (readonly) int32_t settledFixtures __attribute__((swift_name("settledFixtures")));
@property (readonly) FUSDKPredictionStatus * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable templateId __attribute__((swift_name("templateId")));
@property (readonly) int32_t totalFixtures __attribute__((swift_name("totalFixtures")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable updatedAt __attribute__((swift_name("updatedAt")));
@property (readonly) NSString * _Nullable userId __attribute__((swift_name("userId")));
@property (readonly) FUSDKInt * _Nullable wager __attribute__((swift_name("wager")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionResponseModel.Companion")))
@interface FUSDKPredictionResponseModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPredictionResponseModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionResult")))
@interface FUSDKPredictionResult : FUSDKBase
- (instancetype)initWithSettledAt:(FUSDKKotlinx_datetimeInstant * _Nullable)settledAt resettledAt:(FUSDKKotlinx_datetimeInstant * _Nullable)resettledAt status:(FUSDKResultStatus *)status outcome:(FUSDKOutcome *)outcome points:(int32_t)points __attribute__((swift_name("init(settledAt:resettledAt:status:outcome:points:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPredictionResultCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPredictionResult *)doCopySettledAt:(FUSDKKotlinx_datetimeInstant * _Nullable)settledAt resettledAt:(FUSDKKotlinx_datetimeInstant * _Nullable)resettledAt status:(FUSDKResultStatus *)status outcome:(FUSDKOutcome *)outcome points:(int32_t)points __attribute__((swift_name("doCopy(settledAt:resettledAt:status:outcome:points:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKOutcome *outcome __attribute__((swift_name("outcome")));
@property (readonly) int32_t points __attribute__((swift_name("points")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable resettledAt __attribute__((swift_name("resettledAt")));
@property (readonly) FUSDKKotlinx_datetimeInstant * _Nullable settledAt __attribute__((swift_name("settledAt")));
@property (readonly) FUSDKResultStatus *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionResult.Companion")))
@interface FUSDKPredictionResultCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPredictionResultCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionStatus")))
@interface FUSDKPredictionStatus : FUSDKKotlinEnum<FUSDKPredictionStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKPredictionStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKPredictionStatus *active __attribute__((swift_name("active")));
@property (class, readonly) FUSDKPredictionStatus *won __attribute__((swift_name("won")));
@property (class, readonly) FUSDKPredictionStatus *lost __attribute__((swift_name("lost")));
@property (class, readonly) FUSDKPredictionStatus *partiallyWon __attribute__((swift_name("partiallyWon")));
@property (class, readonly) FUSDKPredictionStatus *canceled __attribute__((swift_name("canceled")));
+ (FUSDKKotlinArray<FUSDKPredictionStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKPredictionStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionStatus.Companion")))
@interface FUSDKPredictionStatusCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPredictionStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionType")))
@interface FUSDKPredictionType : FUSDKKotlinEnum<FUSDKPredictionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKPredictionTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKPredictionType *topX __attribute__((swift_name("topX")));
@property (class, readonly) FUSDKPredictionType *matchQuiz __attribute__((swift_name("matchQuiz")));
@property (class, readonly) FUSDKPredictionType *single __attribute__((swift_name("single")));
@property (class, readonly) FUSDKPredictionType *fantasy __attribute__((swift_name("fantasy")));
+ (FUSDKKotlinArray<FUSDKPredictionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKPredictionType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionType.Companion")))
@interface FUSDKPredictionTypeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPredictionTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionsFilters")))
@interface FUSDKPredictionsFilters : FUSDKBase
- (instancetype)initWithLimit:(FUSDKInt * _Nullable)limit startAfter:(NSString * _Nullable)startAfter status:(NSArray<FUSDKPredictionStatus *> * _Nullable)status type:(FUSDKGameType * _Nullable)type matchIds:(NSArray<NSString *> * _Nullable)matchIds gameIds:(NSArray<NSString *> * _Nullable)gameIds __attribute__((swift_name("init(limit:startAfter:status:type:matchIds:gameIds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPredictionsFiltersCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPredictionsFilters *)doCopyLimit:(FUSDKInt * _Nullable)limit startAfter:(NSString * _Nullable)startAfter status:(NSArray<FUSDKPredictionStatus *> * _Nullable)status type:(FUSDKGameType * _Nullable)type matchIds:(NSArray<NSString *> * _Nullable)matchIds gameIds:(NSArray<NSString *> * _Nullable)gameIds __attribute__((swift_name("doCopy(limit:startAfter:status:type:matchIds:gameIds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable gameIds __attribute__((swift_name("gameIds")));
@property (readonly) FUSDKInt * _Nullable limit __attribute__((swift_name("limit")));
@property (readonly) NSArray<NSString *> * _Nullable matchIds __attribute__((swift_name("matchIds")));
@property (readonly) NSString * _Nullable startAfter __attribute__((swift_name("startAfter")));
@property (readonly) NSArray<FUSDKPredictionStatus *> * _Nullable status __attribute__((swift_name("status")));
@property (readonly) FUSDKGameType * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictionsFilters.Companion")))
@interface FUSDKPredictionsFiltersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPredictionsFiltersCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictorConfig")))
@interface FUSDKPredictorConfig : FUSDKBase
- (instancetype)initWithEnabled:(BOOL)enabled clientId:(NSString *)clientId markets:(FUSDKMarkets *)markets fullCoverageCompetitions:(NSArray<NSString *> * _Nullable)fullCoverageCompetitions successRateScopes:(FUSDKSuccessRateScope *)successRateScopes userDataConfig:(FUSDKUserDataConfig * _Nullable)userDataConfig __attribute__((swift_name("init(enabled:clientId:markets:fullCoverageCompetitions:successRateScopes:userDataConfig:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPredictorConfigCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPredictorConfig *)doCopyEnabled:(BOOL)enabled clientId:(NSString *)clientId markets:(FUSDKMarkets *)markets fullCoverageCompetitions:(NSArray<NSString *> * _Nullable)fullCoverageCompetitions successRateScopes:(FUSDKSuccessRateScope *)successRateScopes userDataConfig:(FUSDKUserDataConfig * _Nullable)userDataConfig __attribute__((swift_name("doCopy(enabled:clientId:markets:fullCoverageCompetitions:successRateScopes:userDataConfig:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *clientId __attribute__((swift_name("clientId")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) NSArray<NSString *> * _Nullable fullCoverageCompetitions __attribute__((swift_name("fullCoverageCompetitions")));
@property (readonly) FUSDKMarkets *markets __attribute__((swift_name("markets")));
@property (readonly) FUSDKSuccessRateScope *successRateScopes __attribute__((swift_name("successRateScopes")));
@property (readonly) FUSDKUserDataConfig * _Nullable userDataConfig __attribute__((swift_name("userDataConfig")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PredictorConfig.Companion")))
@interface FUSDKPredictorConfigCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPredictorConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RedCardMatch")))
@interface FUSDKRedCardMatch : FUSDKPredictionFixture <FUSDKBinaryPrediction>
- (instancetype)initWithMatchId:(NSString *)matchId prediction:(BOOL)prediction __attribute__((swift_name("init(matchId:prediction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKRedCardMatchCompanion *companion __attribute__((swift_name("companion")));
@property NSString *matchId __attribute__((swift_name("matchId")));
@property (readonly) BOOL prediction __attribute__((swift_name("prediction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RedCardMatch.Companion")))
@interface FUSDKRedCardMatchCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKRedCardMatchCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedEntityRelationship")))
@interface FUSDKRelatedEntityRelationship : FUSDKBase
- (instancetype)initWithEntityId:(NSString *)entityId entityType:(FUSDKRelatedEntityType *)entityType entityRelationship:(FUSDKRelatedEntityRelationshipType * _Nullable)entityRelationship __attribute__((swift_name("init(entityId:entityType:entityRelationship:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKRelatedEntityRelationshipCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKRelatedEntityRelationship *)doCopyEntityId:(NSString *)entityId entityType:(FUSDKRelatedEntityType *)entityType entityRelationship:(FUSDKRelatedEntityRelationshipType * _Nullable)entityRelationship __attribute__((swift_name("doCopy(entityId:entityType:entityRelationship:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="entity_id")
*/
@property (readonly) NSString *entityId __attribute__((swift_name("entityId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="entity_relationship")
*/
@property (readonly) FUSDKRelatedEntityRelationshipType * _Nullable entityRelationship __attribute__((swift_name("entityRelationship")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="entity_type")
*/
@property (readonly) FUSDKRelatedEntityType *entityType __attribute__((swift_name("entityType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedEntityRelationship.Companion")))
@interface FUSDKRelatedEntityRelationshipCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKRelatedEntityRelationshipCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedEntityRelationshipType")))
@interface FUSDKRelatedEntityRelationshipType : FUSDKKotlinEnum<FUSDKRelatedEntityRelationshipType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKRelatedEntityRelationshipTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKRelatedEntityRelationshipType *translatedTo __attribute__((swift_name("translatedTo")));
@property (class, readonly) FUSDKRelatedEntityRelationshipType *translatedFrom __attribute__((swift_name("translatedFrom")));
@property (class, readonly) FUSDKRelatedEntityRelationshipType *relatedTo __attribute__((swift_name("relatedTo")));
@property (class, readonly) FUSDKRelatedEntityRelationshipType *blocks __attribute__((swift_name("blocks")));
@property (class, readonly) FUSDKRelatedEntityRelationshipType *blockedBy __attribute__((swift_name("blockedBy")));
@property (class, readonly) FUSDKRelatedEntityRelationshipType *nextInSeries __attribute__((swift_name("nextInSeries")));
@property (class, readonly) FUSDKRelatedEntityRelationshipType *previousInSeries __attribute__((swift_name("previousInSeries")));
@property (class, readonly) FUSDKRelatedEntityRelationshipType *bonusPointsGame __attribute__((swift_name("bonusPointsGame")));
+ (FUSDKKotlinArray<FUSDKRelatedEntityRelationshipType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKRelatedEntityRelationshipType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedEntityRelationshipType.Companion")))
@interface FUSDKRelatedEntityRelationshipTypeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKRelatedEntityRelationshipTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/fansunitedmedia/sdk/network/serialization/RelatedEntityTypeDeserializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedEntityType")))
@interface FUSDKRelatedEntityType : FUSDKKotlinEnum<FUSDKRelatedEntityType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKRelatedEntityTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKRelatedEntityType *game __attribute__((swift_name("game")));
@property (class, readonly) FUSDKRelatedEntityType *template_ __attribute__((swift_name("template_")));
@property (class, readonly) FUSDKRelatedEntityType *classicQuiz __attribute__((swift_name("classicQuiz")));
@property (class, readonly) FUSDKRelatedEntityType *eitherOr __attribute__((swift_name("eitherOr")));
@property (class, readonly) FUSDKRelatedEntityType *matchQuiz __attribute__((swift_name("matchQuiz")));
@property (class, readonly) FUSDKRelatedEntityType *topX __attribute__((swift_name("topX")));
@property (class, readonly) FUSDKRelatedEntityType *bracket __attribute__((swift_name("bracket")));
@property (class, readonly) FUSDKRelatedEntityType *standing __attribute__((swift_name("standing")));
@property (class, readonly) FUSDKRelatedEntityType *poll __attribute__((swift_name("poll")));
+ (FUSDKKotlinArray<FUSDKRelatedEntityType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKRelatedEntityType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedEntityType.Companion")))
@interface FUSDKRelatedEntityTypeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKRelatedEntityTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultStatus")))
@interface FUSDKResultStatus : FUSDKKotlinEnum<FUSDKResultStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKResultStatusCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKResultStatus *notSettled __attribute__((swift_name("notSettled")));
@property (class, readonly) FUSDKResultStatus *settled __attribute__((swift_name("settled")));
@property (class, readonly) FUSDKResultStatus *resettled __attribute__((swift_name("resettled")));
@property (class, readonly) FUSDKResultStatus *void_ __attribute__((swift_name("void_")));
+ (FUSDKKotlinArray<FUSDKResultStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKResultStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResultStatus.Companion")))
@interface FUSDKResultStatusCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKResultStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScoreMap")))
@interface FUSDKScoreMap : FUSDKBase <FUSDKMarketPredictionValue>
- (instancetype)initWithValues:(NSDictionary<NSString *, FUSDKInt *> *)values __attribute__((swift_name("init(values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKScoreMapCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKScoreMap *)doCopyValues:(NSDictionary<NSString *, FUSDKInt *> *)values __attribute__((swift_name("doCopy(values:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, FUSDKInt *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScoreMap.Companion")))
@interface FUSDKScoreMapCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKScoreMapCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessRateScope")))
@interface FUSDKSuccessRateScope : FUSDKBase
- (instancetype)initWithCompetitions:(NSArray<NSString *> *)competitions teams:(NSArray<NSString *> *)teams markets:(NSArray<FUSDKMarket *> *)markets __attribute__((swift_name("init(competitions:teams:markets:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKSuccessRateScopeCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKSuccessRateScope *)doCopyCompetitions:(NSArray<NSString *> *)competitions teams:(NSArray<NSString *> *)teams markets:(NSArray<FUSDKMarket *> *)markets __attribute__((swift_name("doCopy(competitions:teams:markets:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSArray<NSString *> *competitions __attribute__((swift_name("competitions")));
@property (readonly) NSArray<FUSDKMarket *> *markets __attribute__((swift_name("markets")));
@property NSArray<NSString *> *teams __attribute__((swift_name("teams")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessRateScope.Companion")))
@interface FUSDKSuccessRateScopeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKSuccessRateScopeCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tiebreaker")))
@interface FUSDKTiebreaker : FUSDKBase
- (instancetype)initWithGoldenGoal:(int32_t)goldenGoal __attribute__((swift_name("init(goldenGoal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTiebreakerCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTiebreaker *)doCopyGoldenGoal:(int32_t)goldenGoal __attribute__((swift_name("doCopy(goldenGoal:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t goldenGoal __attribute__((swift_name("goldenGoal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tiebreaker.Companion")))
@interface FUSDKTiebreakerCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTiebreakerCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TopCorrectScores")))
@interface FUSDKTopCorrectScores : FUSDKBase
- (instancetype)initWithScore:(NSString *)score percentage:(int32_t)percentage __attribute__((swift_name("init(score:percentage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKTopCorrectScoresCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKTopCorrectScores *)doCopyScore:(NSString *)score percentage:(int32_t)percentage __attribute__((swift_name("doCopy(score:percentage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t percentage __attribute__((swift_name("percentage")));
@property (readonly) NSString *score __attribute__((swift_name("score")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TopCorrectScores.Companion")))
@interface FUSDKTopCorrectScoresCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKTopCorrectScoresCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDataConfig")))
@interface FUSDKUserDataConfig : FUSDKBase
- (instancetype)initWithStoreIp:(BOOL)storeIp storeDeviceId:(BOOL)storeDeviceId storeAgent:(BOOL)storeAgent __attribute__((swift_name("init(storeIp:storeDeviceId:storeAgent:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKUserDataConfigCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKUserDataConfig *)doCopyStoreIp:(BOOL)storeIp storeDeviceId:(BOOL)storeDeviceId storeAgent:(BOOL)storeAgent __attribute__((swift_name("doCopy(storeIp:storeDeviceId:storeAgent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL storeAgent __attribute__((swift_name("storeAgent")));
@property (readonly) BOOL storeDeviceId __attribute__((swift_name("storeDeviceId")));
@property (readonly) BOOL storeIp __attribute__((swift_name("storeIp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDataConfig.Companion")))
@interface FUSDKUserDataConfigCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKUserDataConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Value1X2")))
@interface FUSDKValue1X2 : FUSDKKotlinEnum<FUSDKValue1X2 *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKValue1X2Companion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKValue1X2 *one __attribute__((swift_name("one")));
@property (class, readonly) FUSDKValue1X2 *x __attribute__((swift_name("x")));
@property (class, readonly) FUSDKValue1X2 *two __attribute__((swift_name("two")));
+ (FUSDKKotlinArray<FUSDKValue1X2 *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKValue1X2 *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Value1X2.Companion")))
@interface FUSDKValue1X2Companion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKValue1X2Companion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValueDoubleChance")))
@interface FUSDKValueDoubleChance : FUSDKKotlinEnum<FUSDKValueDoubleChance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKValueDoubleChanceCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKValueDoubleChance *oneX __attribute__((swift_name("oneX")));
@property (class, readonly) FUSDKValueDoubleChance *oneTwo __attribute__((swift_name("oneTwo")));
@property (class, readonly) FUSDKValueDoubleChance *x2 __attribute__((swift_name("x2")));
+ (FUSDKKotlinArray<FUSDKValueDoubleChance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKValueDoubleChance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValueDoubleChance.Companion")))
@interface FUSDKValueDoubleChanceCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKValueDoubleChanceCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValueHTFT")))
@interface FUSDKValueHTFT : FUSDKKotlinEnum<FUSDKValueHTFT *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKValueHTFTCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKValueHTFT *oneOne __attribute__((swift_name("oneOne")));
@property (class, readonly) FUSDKValueHTFT *oneX __attribute__((swift_name("oneX")));
@property (class, readonly) FUSDKValueHTFT *oneTwo __attribute__((swift_name("oneTwo")));
@property (class, readonly) FUSDKValueHTFT *xOne __attribute__((swift_name("xOne")));
@property (class, readonly) FUSDKValueHTFT *xX __attribute__((swift_name("xX")));
@property (class, readonly) FUSDKValueHTFT *xTwo __attribute__((swift_name("xTwo")));
@property (class, readonly) FUSDKValueHTFT *twoOne __attribute__((swift_name("twoOne")));
@property (class, readonly) FUSDKValueHTFT *twoX __attribute__((swift_name("twoX")));
@property (class, readonly) FUSDKValueHTFT *twoTwo __attribute__((swift_name("twoTwo")));
+ (FUSDKKotlinArray<FUSDKValueHTFT *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKValueHTFT *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValueHTFT.Companion")))
@interface FUSDKValueHTFTCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKValueHTFTCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValueOverCorner")))
@interface FUSDKValueOverCorner : FUSDKKotlinEnum<FUSDKValueOverCorner *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKValueOverCornerCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKValueOverCorner *oc65 __attribute__((swift_name("oc65")));
@property (class, readonly) FUSDKValueOverCorner *oc75 __attribute__((swift_name("oc75")));
@property (class, readonly) FUSDKValueOverCorner *oc85 __attribute__((swift_name("oc85")));
@property (class, readonly) FUSDKValueOverCorner *oc95 __attribute__((swift_name("oc95")));
@property (class, readonly) FUSDKValueOverCorner *oc105 __attribute__((swift_name("oc105")));
@property (class, readonly) FUSDKValueOverCorner *oc115 __attribute__((swift_name("oc115")));
@property (class, readonly) FUSDKValueOverCorner *oc125 __attribute__((swift_name("oc125")));
@property (class, readonly) FUSDKValueOverCorner *oc135 __attribute__((swift_name("oc135")));
+ (FUSDKKotlinArray<FUSDKValueOverCorner *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKValueOverCorner *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValueOverCorner.Companion")))
@interface FUSDKValueOverCornerCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKValueOverCornerCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValueOverGoals")))
@interface FUSDKValueOverGoals : FUSDKKotlinEnum<FUSDKValueOverGoals *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKValueOverGoalsCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKValueOverGoals *og05 __attribute__((swift_name("og05")));
@property (class, readonly) FUSDKValueOverGoals *og15 __attribute__((swift_name("og15")));
@property (class, readonly) FUSDKValueOverGoals *og25 __attribute__((swift_name("og25")));
@property (class, readonly) FUSDKValueOverGoals *og35 __attribute__((swift_name("og35")));
@property (class, readonly) FUSDKValueOverGoals *og45 __attribute__((swift_name("og45")));
@property (class, readonly) FUSDKValueOverGoals *og55 __attribute__((swift_name("og55")));
@property (class, readonly) FUSDKValueOverGoals *og65 __attribute__((swift_name("og65")));
+ (FUSDKKotlinArray<FUSDKValueOverGoals *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKValueOverGoals *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValueOverGoals.Companion")))
@interface FUSDKValueOverGoalsCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKValueOverGoalsCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("YesNoData")))
@interface FUSDKYesNoData : FUSDKBase
- (instancetype)initWithYes:(int32_t)yes no:(int32_t)no __attribute__((swift_name("init(yes:no:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKYesNoDataCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKYesNoData *)doCopyYes:(int32_t)yes no:(int32_t)no __attribute__((swift_name("doCopy(yes:no:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="no")
*/
@property (readonly) int32_t no __attribute__((swift_name("no")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="yes")
*/
@property (readonly) int32_t yes __attribute__((swift_name("yes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("YesNoData.Companion")))
@interface FUSDKYesNoDataCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKYesNoDataCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("IProfile")))
@protocol FUSDKIProfile
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkFollowStatusProfileIds:(NSArray<NSString *> *)profileIds completionHandler:(void (^)(FUSDKPagedResponse<FUSDKFollowStatus *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("checkFollowStatus(profileIds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectLeadRequestBody:(FUSDKLeadRequestBody *)requestBody completionHandler:(void (^)(FUSDKSimpleResponse<FUSDKLeadModel *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collectLead(requestBody:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBadgesUserId:(NSString *)userId completionHandler:(void (^)(FUSDKPagedResponse<NSArray<NSString *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBadges(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getByIdUserId:(NSString *)userId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKReadOnlyProfile * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getById(userId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getByIdsUserIds:(NSArray<NSString *> * _Nullable)userIds search:(NSString * _Nullable)search disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKSimpleResponse<NSArray<FUSDKProfileModel *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getByIds(userIds:search:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCountriesDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKPagedResponse<NSArray<FUSDKProfileCountry *> *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getCountries(disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOwnWithCompletionHandler:(void (^)(FUSDKMutableProfile * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOwn(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOwnBadgesWithCompletionHandler:(void (^)(FUSDKPagedResponse<NSArray<NSString *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOwnBadges(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOwnStatsWithCompletionHandler:(void (^)(FUSDKProfileStatsModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getOwnStats(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStatsUserId:(NSString *)userId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKProfileStatsModel * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getStats(userId:disableCache:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileApiService")))
@interface FUSDKProfileApiService : FUSDKBase
- (instancetype)initWithApiClient:(FUSDKAPIClientService *)apiClient __attribute__((swift_name("init(apiClient:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkFollowStatusProfileIds:(NSString *)profileIds completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkFollowStatus(profileIds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectLeadRequestBody:(FUSDKLeadRequestBody *)requestBody completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collectLead(requestBody:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteOwnProfileWithCompletionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteOwnProfile(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteUserDataWithCompletionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteUserData(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)followUserRequestFollow:(FUSDKRequestFollow *)requestFollow completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("followUser(requestFollow:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBadgesUserId:(NSString *)userId completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBadges(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getByIdUserId:(NSString *)userId disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getById(userId:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getByIdsProfileIds:(NSString *)profileIds disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getByIds(profileIds:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCountriesLanguage:(NSString * _Nullable)language disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCountries(language:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFollowerUserId:(NSString *)userId limit:(FUSDKInt * _Nullable)limit startAfter:(NSString * _Nullable)startAfter completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFollower(userId:limit:startAfter:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFollowingUserId:(NSString *)userId limit:(FUSDKInt * _Nullable)limit startAfter:(NSString * _Nullable)startAfter completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFollowing(userId:limit:startAfter:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOwnBadgesWithCompletionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOwnBadges(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOwnFollowersLimit:(FUSDKInt * _Nullable)limit startAfter:(NSString * _Nullable)startAfter completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOwnFollowers(limit:startAfter:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOwnFollowingsLimit:(FUSDKInt * _Nullable)limit startAfter:(NSString * _Nullable)startAfter completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOwnFollowings(limit:startAfter:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getProfileWithCompletionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getProfile(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchProfilesSearch:(NSString *)search disableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchProfiles(search:disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unfollowUserRequest:(FUSDKRequestFollow *)request completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unfollowUser(request:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateProfileToken:(NSString * _Nullable)token updatedProfile:(FUSDKUpdateProfile *)updatedProfile completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateProfile(token:updatedProfile:completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Breakdown")))
@interface FUSDKBreakdown : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) FUSDKBreakdownCompanion *companion __attribute__((swift_name("companion")));
@property FUSDKBreakdownResult *addedAvatar __attribute__((swift_name("addedAvatar")));
@property FUSDKBreakdownResult *addedBirthdate __attribute__((swift_name("addedBirthdate")));
@property FUSDKBreakdownResult *addedCountry __attribute__((swift_name("addedCountry")));
@property FUSDKBreakdownResult *addedGender __attribute__((swift_name("addedGender")));
@property FUSDKBreakdownResult *competitionFavourite __attribute__((swift_name("competitionFavourite")));
@property FUSDKBreakdownResult *competitionFollowed __attribute__((swift_name("competitionFollowed")));
@property FUSDKBreakdownResult *playerFavourite __attribute__((swift_name("playerFavourite")));
@property FUSDKBreakdownResult *playerFollowed __attribute__((swift_name("playerFollowed")));
@property FUSDKBreakdownResult *teamFavourite __attribute__((swift_name("teamFavourite")));
@property FUSDKBreakdownResult *teamFollowed __attribute__((swift_name("teamFollowed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Breakdown.Companion")))
@interface FUSDKBreakdownCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKBreakdownCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BreakdownResult")))
@interface FUSDKBreakdownResult : FUSDKBase
- (instancetype)initWithCompleted:(BOOL)completed percentage:(int32_t)percentage __attribute__((swift_name("init(completed:percentage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKBreakdownResultCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKBreakdownResult *)doCopyCompleted:(BOOL)completed percentage:(int32_t)percentage __attribute__((swift_name("doCopy(completed:percentage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property BOOL completed __attribute__((swift_name("completed")));
@property (readonly) int32_t percentage __attribute__((swift_name("percentage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BreakdownResult.Companion")))
@interface FUSDKBreakdownResultCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKBreakdownResultCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("ProfileModel")))
@interface FUSDKProfileModel : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id name:(NSString * _Nullable)name nickname:(NSString * _Nullable)nickname avatar:(NSString * _Nullable)avatar gender:(FUSDKGender * _Nullable)gender country:(FUSDKProfileCountry * _Nullable)country birthDate:(FUSDKKotlinx_datetimeInstant * _Nullable)birthDate verified:(BOOL)verified staffMember:(BOOL)staffMember anonymous:(BOOL)anonymous disabled:(BOOL)disabled interests:(NSArray<FUSDKInterest *> * _Nullable)interests followingCount:(FUSDKInt * _Nullable)followingCount followersCount:(FUSDKInt * _Nullable)followersCount serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:name:nickname:avatar:gender:country:birthDate:verified:staffMember:anonymous:disabled:interests:followingCount:followersCount:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKProfileModelCompanion *companion __attribute__((swift_name("companion")));
@property BOOL anonymous __attribute__((swift_name("anonymous")));
@property NSString * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=com/fansunitedmedia/sdk/network/serialization/InstantSerializer))
*/
@property FUSDKKotlinx_datetimeInstant * _Nullable birthDate __attribute__((swift_name("birthDate")));
@property FUSDKProfileCountry * _Nullable country __attribute__((swift_name("country")));
@property BOOL disabled __attribute__((swift_name("disabled")));
@property FUSDKInt * _Nullable followersCount __attribute__((swift_name("followersCount")));
@property FUSDKInt * _Nullable followingCount __attribute__((swift_name("followingCount")));
@property FUSDKGender * _Nullable gender __attribute__((swift_name("gender")));
@property NSString *id __attribute__((swift_name("id")));
@property NSArray<FUSDKInterest *> * _Nullable interests __attribute__((swift_name("interests")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable nickname __attribute__((swift_name("nickname")));
@property BOOL staffMember __attribute__((swift_name("staffMember")));
@property BOOL verified __attribute__((swift_name("verified")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("DetailedProfileModel")))
@interface FUSDKDetailedProfileModel : FUSDKProfileModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id name:(NSString * _Nullable)name nickname:(NSString * _Nullable)nickname avatar:(NSString * _Nullable)avatar gender:(FUSDKGender * _Nullable)gender country:(FUSDKProfileCountry * _Nullable)country birthDate:(FUSDKKotlinx_datetimeInstant * _Nullable)birthDate verified:(BOOL)verified staffMember:(BOOL)staffMember anonymous:(BOOL)anonymous disabled:(BOOL)disabled interests:(NSArray<FUSDKInterest *> * _Nullable)interests followingCount:(FUSDKInt * _Nullable)followingCount followersCount:(FUSDKInt * _Nullable)followersCount email:(NSString * _Nullable)email phoneNumber:(NSString * _Nullable)phoneNumber phoneCountryCode:(NSString * _Nullable)phoneCountryCode serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:name:nickname:avatar:gender:country:birthDate:verified:staffMember:anonymous:disabled:interests:followingCount:followersCount:email:phoneNumber:phoneCountryCode:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id name:(NSString * _Nullable)name nickname:(NSString * _Nullable)nickname avatar:(NSString * _Nullable)avatar gender:(FUSDKGender * _Nullable)gender country:(FUSDKProfileCountry * _Nullable)country birthDate:(FUSDKKotlinx_datetimeInstant * _Nullable)birthDate verified:(BOOL)verified staffMember:(BOOL)staffMember anonymous:(BOOL)anonymous disabled:(BOOL)disabled interests:(NSArray<FUSDKInterest *> * _Nullable)interests followingCount:(FUSDKInt * _Nullable)followingCount followersCount:(FUSDKInt * _Nullable)followersCount serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:name:nickname:avatar:gender:country:birthDate:verified:staffMember:anonymous:disabled:interests:followingCount:followersCount:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKDetailedProfileModelCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable email __attribute__((swift_name("email")));
@property NSString * _Nullable phoneCountryCode __attribute__((swift_name("phoneCountryCode")));
@property NSString * _Nullable phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetailedProfileModel.Companion")))
@interface FUSDKDetailedProfileModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKDetailedProfileModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FollowStatus")))
@interface FUSDKFollowStatus : FUSDKBase
- (instancetype)initWithFollowsMe:(NSArray<NSString *> *)followsMe iFollow:(NSArray<NSString *> *)iFollow followsMeBack:(NSArray<NSString *> *)followsMeBack __attribute__((swift_name("init(followsMe:iFollow:followsMeBack:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKFollowStatusCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKFollowStatus *)doCopyFollowsMe:(NSArray<NSString *> *)followsMe iFollow:(NSArray<NSString *> *)iFollow followsMeBack:(NSArray<NSString *> *)followsMeBack __attribute__((swift_name("doCopy(followsMe:iFollow:followsMeBack:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *followsMe __attribute__((swift_name("followsMe")));
@property (readonly) NSArray<NSString *> *followsMeBack __attribute__((swift_name("followsMeBack")));
@property (readonly) NSArray<NSString *> *iFollow __attribute__((swift_name("iFollow")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FollowStatus.Companion")))
@interface FUSDKFollowStatusCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFollowStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FollowersModel")))
@interface FUSDKFollowersModel : FUSDKBase
- (instancetype)initWithAvatar:(NSString * _Nullable)avatar followerId:(NSString * _Nullable)followerId name:(NSString * _Nullable)name nickname:(NSString * _Nullable)nickname profileId:(NSString * _Nullable)profileId __attribute__((swift_name("init(avatar:followerId:name:nickname:profileId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKFollowersModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKFollowersModel *)doCopyAvatar:(NSString * _Nullable)avatar followerId:(NSString * _Nullable)followerId name:(NSString * _Nullable)name nickname:(NSString * _Nullable)nickname profileId:(NSString * _Nullable)profileId __attribute__((swift_name("doCopy(avatar:followerId:name:nickname:profileId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="follower_id")
*/
@property (readonly) NSString * _Nullable followerId __attribute__((swift_name("followerId")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable nickname __attribute__((swift_name("nickname")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="profile_id")
*/
@property (readonly) NSString * _Nullable profileId __attribute__((swift_name("profileId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FollowersModel.Companion")))
@interface FUSDKFollowersModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFollowersModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FollowingModel")))
@interface FUSDKFollowingModel : FUSDKBase
- (instancetype)initWithAvatar:(NSString * _Nullable)avatar followingId:(NSString * _Nullable)followingId name:(NSString * _Nullable)name nickname:(NSString * _Nullable)nickname profileId:(NSString * _Nullable)profileId __attribute__((swift_name("init(avatar:followingId:name:nickname:profileId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKFollowingModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKFollowingModel *)doCopyAvatar:(NSString * _Nullable)avatar followingId:(NSString * _Nullable)followingId name:(NSString * _Nullable)name nickname:(NSString * _Nullable)nickname profileId:(NSString * _Nullable)profileId __attribute__((swift_name("doCopy(avatar:followingId:name:nickname:profileId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property (readonly) NSString * _Nullable followingId __attribute__((swift_name("followingId")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable nickname __attribute__((swift_name("nickname")));
@property (readonly) NSString * _Nullable profileId __attribute__((swift_name("profileId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FollowingModel.Companion")))
@interface FUSDKFollowingModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFollowingModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("Interest")))
@interface FUSDKInterest : FUSDKBase <FUSDKIRemappable>
- (instancetype)initWithId:(NSString *)id type:(FUSDKType *)type source:(FUSDKInterestSource *)source favourite:(BOOL)favourite __attribute__((swift_name("init(id:type:source:favourite:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id type:(FUSDKType * _Nullable)type source:(FUSDKInterestSource * _Nullable)source favourite:(BOOL)favourite serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:type:source:favourite:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKInterestCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKResourceType *)getResourceType __attribute__((swift_name("getResourceType()")));
- (NSString *(^)(void))getTargetProp __attribute__((swift_name("getTargetProp()")));
@property (readonly) BOOL favourite __attribute__((swift_name("favourite")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) FUSDKInterestSource *source __attribute__((swift_name("source")));
@property FUSDKType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FullInterest")))
@interface FUSDKFullInterest : FUSDKInterest
- (instancetype)initWithId:(NSString *)id type:(FUSDKType *)type source:(FUSDKInterestSource *)source favourite:(BOOL)favourite __attribute__((swift_name("init(id:type:source:favourite:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id type:(FUSDKType * _Nullable)type source:(FUSDKInterestSource * _Nullable)source favourite:(BOOL)favourite serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:type:source:favourite:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKFullInterestCompanion *companion __attribute__((swift_name("companion")));
@property id _Nullable model __attribute__((swift_name("model")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FullInterest.Companion")))
@interface FUSDKFullInterestCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFullInterestCompanion *shared __attribute__((swift_name("shared")));
- (FUSDKFullInterest *)fromInterestInterest:(FUSDKInterest *)interest __attribute__((swift_name("fromInterest(interest:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FullnessProfile")))
@interface FUSDKFullnessProfile : FUSDKBase
- (instancetype)initWithBreakdown:(FUSDKBreakdown *)breakdown totalPercentage:(int32_t)totalPercentage __attribute__((swift_name("init(breakdown:totalPercentage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKFullnessProfileCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKFullnessProfile *)doCopyBreakdown:(FUSDKBreakdown *)breakdown totalPercentage:(int32_t)totalPercentage __attribute__((swift_name("doCopy(breakdown:totalPercentage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKBreakdown *breakdown __attribute__((swift_name("breakdown")));
@property (readonly) int32_t totalPercentage __attribute__((swift_name("totalPercentage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FullnessProfile.Companion")))
@interface FUSDKFullnessProfileCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFullnessProfileCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Interest.Companion")))
@interface FUSDKInterestCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKInterestCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterestSource")))
@interface FUSDKInterestSource : FUSDKKotlinEnum<FUSDKInterestSource *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKInterestSourceCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKInterestSource *football __attribute__((swift_name("football")));
@property (class, readonly) FUSDKInterestSource *sport __attribute__((swift_name("sport")));
@property (class, readonly) FUSDKInterestSource *cricket __attribute__((swift_name("cricket")));
@property (class, readonly) FUSDKInterestSource *fieldHockey __attribute__((swift_name("fieldHockey")));
@property (class, readonly) FUSDKInterestSource *tennis __attribute__((swift_name("tennis")));
@property (class, readonly) FUSDKInterestSource *volleyball __attribute__((swift_name("volleyball")));
@property (class, readonly) FUSDKInterestSource *tableTennis __attribute__((swift_name("tableTennis")));
@property (class, readonly) FUSDKInterestSource *basketball __attribute__((swift_name("basketball")));
@property (class, readonly) FUSDKInterestSource *baseball __attribute__((swift_name("baseball")));
@property (class, readonly) FUSDKInterestSource *rugby __attribute__((swift_name("rugby")));
@property (class, readonly) FUSDKInterestSource *golf __attribute__((swift_name("golf")));
@property (class, readonly) FUSDKInterestSource *athletics __attribute__((swift_name("athletics")));
@property (class, readonly) FUSDKInterestSource *formula1 __attribute__((swift_name("formula1")));
@property (class, readonly) FUSDKInterestSource *boxing __attribute__((swift_name("boxing")));
@property (class, readonly) FUSDKInterestSource *iceHockey __attribute__((swift_name("iceHockey")));
@property (class, readonly) FUSDKInterestSource *americanFootball __attribute__((swift_name("americanFootball")));
@property (class, readonly) FUSDKInterestSource *mma __attribute__((swift_name("mma")));
@property (class, readonly) FUSDKInterestSource *motogp __attribute__((swift_name("motogp")));
@property (class, readonly) FUSDKInterestSource *badminton __attribute__((swift_name("badminton")));
@property (class, readonly) FUSDKInterestSource *cycling __attribute__((swift_name("cycling")));
@property (class, readonly) FUSDKInterestSource *snooker __attribute__((swift_name("snooker")));
@property (class, readonly) FUSDKInterestSource *gymnastics __attribute__((swift_name("gymnastics")));
@property (class, readonly) FUSDKInterestSource *handball __attribute__((swift_name("handball")));
@property (class, readonly) FUSDKInterestSource *wrestling __attribute__((swift_name("wrestling")));
@property (class, readonly) FUSDKInterestSource *horseRacing __attribute__((swift_name("horseRacing")));
@property (class, readonly) FUSDKInterestSource *weightLifting __attribute__((swift_name("weightLifting")));
@property (class, readonly) FUSDKInterestSource *chess __attribute__((swift_name("chess")));
@property (class, readonly) FUSDKInterestSource *squash __attribute__((swift_name("squash")));
@property (class, readonly) FUSDKInterestSource *biathlon __attribute__((swift_name("biathlon")));
@property (class, readonly) FUSDKInterestSource *winterSports __attribute__((swift_name("winterSports")));
@property (class, readonly) FUSDKInterestSource *martialArts __attribute__((swift_name("martialArts")));
@property (class, readonly) FUSDKInterestSource *waterSports __attribute__((swift_name("waterSports")));
@property (class, readonly) FUSDKInterestSource *shooting __attribute__((swift_name("shooting")));
@property (class, readonly) FUSDKInterestSource *rally __attribute__((swift_name("rally")));
@property (class, readonly) FUSDKInterestSource *rhythmicGymnastics __attribute__((swift_name("rhythmicGymnastics")));
+ (FUSDKKotlinArray<FUSDKInterestSource *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKInterestSource *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InterestSource.Companion")))
@interface FUSDKInterestSourceCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKInterestSourceCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(FUSDKKotlinArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeadModel")))
@interface FUSDKLeadModel : FUSDKBase
- (instancetype)initWithLeadId:(NSString *)leadId profileId:(NSString *)profileId firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName fullName:(NSString * _Nullable)fullName email:(NSString * _Nullable)email gender:(NSString * _Nullable)gender country:(NSString * _Nullable)country phoneCountryCode:(NSString * _Nullable)phoneCountryCode phoneNumber:(NSString * _Nullable)phoneNumber campaignId:(NSString * _Nullable)campaignId campaignName:(NSString * _Nullable)campaignName contentType:(NSString * _Nullable)contentType contentId:(NSString * _Nullable)contentId contentName:(NSString * _Nullable)contentName customFields:(NSDictionary<NSString *, NSString *> * _Nullable)customFields __attribute__((swift_name("init(leadId:profileId:firstName:lastName:fullName:email:gender:country:phoneCountryCode:phoneNumber:campaignId:campaignName:contentType:contentId:contentName:customFields:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKLeadModelCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKLeadModel *)doCopyLeadId:(NSString *)leadId profileId:(NSString *)profileId firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName fullName:(NSString * _Nullable)fullName email:(NSString * _Nullable)email gender:(NSString * _Nullable)gender country:(NSString * _Nullable)country phoneCountryCode:(NSString * _Nullable)phoneCountryCode phoneNumber:(NSString * _Nullable)phoneNumber campaignId:(NSString * _Nullable)campaignId campaignName:(NSString * _Nullable)campaignName contentType:(NSString * _Nullable)contentType contentId:(NSString * _Nullable)contentId contentName:(NSString * _Nullable)contentName customFields:(NSDictionary<NSString *, NSString *> * _Nullable)customFields __attribute__((swift_name("doCopy(leadId:profileId:firstName:lastName:fullName:email:gender:country:phoneCountryCode:phoneNumber:campaignId:campaignName:contentType:contentId:contentName:customFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable campaignId __attribute__((swift_name("campaignId")));
@property (readonly) NSString * _Nullable campaignName __attribute__((swift_name("campaignName")));
@property (readonly) NSString * _Nullable contentId __attribute__((swift_name("contentId")));
@property (readonly) NSString * _Nullable contentName __attribute__((swift_name("contentName")));
@property (readonly) NSString * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable customFields __attribute__((swift_name("customFields")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));
@property (readonly) NSString * _Nullable gender __attribute__((swift_name("gender")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString *leadId __attribute__((swift_name("leadId")));
@property (readonly) NSString * _Nullable phoneCountryCode __attribute__((swift_name("phoneCountryCode")));
@property (readonly) NSString * _Nullable phoneNumber __attribute__((swift_name("phoneNumber")));
@property (readonly) NSString *profileId __attribute__((swift_name("profileId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeadModel.Companion")))
@interface FUSDKLeadModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKLeadModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeadRequestBody")))
@interface FUSDKLeadRequestBody : FUSDKBase
- (instancetype)initWithFirstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName fullName:(NSString * _Nullable)fullName email:(NSString * _Nullable)email gender:(NSString * _Nullable)gender country:(NSString * _Nullable)country phoneCountryCode:(NSString * _Nullable)phoneCountryCode phoneNumber:(NSString * _Nullable)phoneNumber campaignId:(NSString * _Nullable)campaignId campaignName:(NSString * _Nullable)campaignName contentType:(NSString * _Nullable)contentType contentId:(NSString * _Nullable)contentId contentName:(NSString * _Nullable)contentName customFields:(NSDictionary<NSString *, NSString *> * _Nullable)customFields __attribute__((swift_name("init(firstName:lastName:fullName:email:gender:country:phoneCountryCode:phoneNumber:campaignId:campaignName:contentType:contentId:contentName:customFields:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKLeadRequestBodyCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKLeadRequestBody *)doCopyFirstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName fullName:(NSString * _Nullable)fullName email:(NSString * _Nullable)email gender:(NSString * _Nullable)gender country:(NSString * _Nullable)country phoneCountryCode:(NSString * _Nullable)phoneCountryCode phoneNumber:(NSString * _Nullable)phoneNumber campaignId:(NSString * _Nullable)campaignId campaignName:(NSString * _Nullable)campaignName contentType:(NSString * _Nullable)contentType contentId:(NSString * _Nullable)contentId contentName:(NSString * _Nullable)contentName customFields:(NSDictionary<NSString *, NSString *> * _Nullable)customFields __attribute__((swift_name("doCopy(firstName:lastName:fullName:email:gender:country:phoneCountryCode:phoneNumber:campaignId:campaignName:contentType:contentId:contentName:customFields:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable campaignId __attribute__((swift_name("campaignId")));
@property (readonly) NSString * _Nullable campaignName __attribute__((swift_name("campaignName")));
@property (readonly) NSString * _Nullable contentId __attribute__((swift_name("contentId")));
@property (readonly) NSString * _Nullable contentName __attribute__((swift_name("contentName")));
@property (readonly) NSString * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable customFields __attribute__((swift_name("customFields")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString * _Nullable fullName __attribute__((swift_name("fullName")));
@property (readonly) NSString * _Nullable gender __attribute__((swift_name("gender")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable phoneCountryCode __attribute__((swift_name("phoneCountryCode")));
@property (readonly) NSString * _Nullable phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LeadRequestBody.Companion")))
@interface FUSDKLeadRequestBodyCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKLeadRequestBodyCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MutableProfile")))
@interface FUSDKMutableProfile : FUSDKDetailedProfileModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id name:(NSString * _Nullable)name nickname:(NSString * _Nullable)nickname avatar:(NSString * _Nullable)avatar gender:(FUSDKGender * _Nullable)gender country:(FUSDKProfileCountry * _Nullable)country birthDate:(FUSDKKotlinx_datetimeInstant * _Nullable)birthDate verified:(BOOL)verified staffMember:(BOOL)staffMember anonymous:(BOOL)anonymous disabled:(BOOL)disabled interests:(NSArray<FUSDKInterest *> * _Nullable)interests followingCount:(FUSDKInt * _Nullable)followingCount followersCount:(FUSDKInt * _Nullable)followersCount email:(NSString * _Nullable)email phoneNumber:(NSString * _Nullable)phoneNumber phoneCountryCode:(NSString * _Nullable)phoneCountryCode serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:name:nickname:avatar:gender:country:birthDate:verified:staffMember:anonymous:disabled:interests:followingCount:followersCount:email:phoneNumber:phoneCountryCode:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKMutableProfileCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKMutableProfile *)addInterestInterest:(FUSDKInterest *)interest __attribute__((swift_name("addInterest(interest:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteWithCompletionHandler:(void (^)(FUSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteDataWithCompletionHandler:(void (^)(FUSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteData(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)followProfileIds:(NSArray<NSString *> *)profileIds completionHandler:(void (^)(FUSDKPagedResponse<NSArray<FUSDKFollowingModel *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("follow(profileIds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBadgesWithCompletionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBadges(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFollowersFilters:(FUSDKMainCursorFilters * _Nullable)filters completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKFollowersModel *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFollowers(filters:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFollowingFilters:(FUSDKMainCursorFilters * _Nullable)filters completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKFollowingModel *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFollowing(filters:completionHandler:)")));
- (FUSDKDetailedProfileModel *)getInfo __attribute__((swift_name("getInfo()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStatsWithCompletionHandler:(void (^)(FUSDKProfileStatsModel * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStats(completionHandler:)")));
- (FUSDKMutableProfile *)removeInterestInterestId:(NSString *)interestId __attribute__((swift_name("removeInterest(interestId:)")));
- (FUSDKMutableProfile *)setBirthDateBirthDate:(FUSDKKotlinx_datetimeInstant *)birthDate __attribute__((swift_name("setBirthDate(birthDate:)")));
- (FUSDKMutableProfile *)setCountryCountryId:(NSString *)countryId __attribute__((swift_name("setCountry(countryId:)")));
- (FUSDKMutableProfile *)setEmailEmail:(NSString *)email __attribute__((swift_name("setEmail(email:)")));
- (FUSDKMutableProfile *)setGenderGender:(FUSDKGender *)gender __attribute__((swift_name("setGender(gender:)")));
- (FUSDKMutableProfile *)setNameName:(NSString *)name __attribute__((swift_name("setName(name:)")));
- (FUSDKMutableProfile *)setNicknameNickname:(NSString *)nickname __attribute__((swift_name("setNickname(nickname:)")));
- (FUSDKMutableProfile *)setPhoneCountryCodePhoneCountryCode:(NSString *)phoneCountryCode __attribute__((swift_name("setPhoneCountryCode(phoneCountryCode:)")));
- (FUSDKMutableProfile *)setPhoneNumberPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("setPhoneNumber(phoneNumber:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)showFullInterestsWithCompletionHandler:(void (^)(NSArray<FUSDKFullInterest *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("showFullInterests(completionHandler:)")));
- (FUSDKFullnessProfile *)showFullnessProfile __attribute__((swift_name("showFullnessProfile()")));
- (NSArray<FUSDKInterest *> * _Nullable)showInterests __attribute__((swift_name("showInterests()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unfollowProfiles:(NSArray<NSString *> *)profiles completionHandler:(void (^)(FUSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unfollow(profiles:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateWithCompletionHandler:(void (^)(FUSDKMutableProfile * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MutableProfile.Companion")))
@interface FUSDKMutableProfileCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMutableProfileCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PartialProfile")))
@interface FUSDKPartialProfile : FUSDKBase
- (instancetype)initWithName:(NSString * _Nullable)name avatar:(NSString * _Nullable)avatar followingId:(NSString * _Nullable)followingId profileId:(NSString * _Nullable)profileId __attribute__((swift_name("init(name:avatar:followingId:profileId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKPartialProfileCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKPartialProfile *)doCopyName:(NSString * _Nullable)name avatar:(NSString * _Nullable)avatar followingId:(NSString * _Nullable)followingId profileId:(NSString * _Nullable)profileId __attribute__((swift_name("doCopy(name:avatar:followingId:profileId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property (readonly) NSString * _Nullable followingId __attribute__((swift_name("followingId")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable profileId __attribute__((swift_name("profileId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PartialProfile.Companion")))
@interface FUSDKPartialProfileCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKPartialProfileCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileCountry")))
@interface FUSDKProfileCountry : FUSDKBase
- (instancetype)initWithId:(NSString *)id assets:(FUSDKAssetsFlag *)assets name:(NSString *)name __attribute__((swift_name("init(id:assets:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKProfileCountryCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKProfileCountry *)doCopyId:(NSString *)id assets:(FUSDKAssetsFlag *)assets name:(NSString *)name __attribute__((swift_name("doCopy(id:assets:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKAssetsFlag *assets __attribute__((swift_name("assets")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileCountry.Companion")))
@interface FUSDKProfileCountryCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKProfileCountryCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProfileModel.Companion")))
@interface FUSDKProfileModelCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKProfileModelCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadOnlyProfile")))
@interface FUSDKReadOnlyProfile : FUSDKProfileModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithSeen0:(int32_t)seen0 id:(NSString * _Nullable)id name:(NSString * _Nullable)name nickname:(NSString * _Nullable)nickname avatar:(NSString * _Nullable)avatar gender:(FUSDKGender * _Nullable)gender country:(FUSDKProfileCountry * _Nullable)country birthDate:(FUSDKKotlinx_datetimeInstant * _Nullable)birthDate verified:(BOOL)verified staffMember:(BOOL)staffMember anonymous:(BOOL)anonymous disabled:(BOOL)disabled interests:(NSArray<FUSDKInterest *> * _Nullable)interests followingCount:(FUSDKInt * _Nullable)followingCount followersCount:(FUSDKInt * _Nullable)followersCount serializationConstructorMarker:(id _Nullable)serializationConstructorMarker __attribute__((swift_name("init(seen0:id:name:nickname:avatar:gender:country:birthDate:verified:staffMember:anonymous:disabled:interests:followingCount:followersCount:serializationConstructorMarker:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKReadOnlyProfileCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBadgesWithCompletionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBadges(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBadgesUserId:(NSString *)userId completionHandler:(void (^)(FUSDKPagedResponse<NSArray<NSString *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBadges(userId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFollowersFilters:(FUSDKMainCursorFilters * _Nullable)filters completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKFollowersModel *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFollowers(filters:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFollowingFilters:(FUSDKMainCursorFilters * _Nullable)filters completionHandler:(void (^)(FUSDKCursorResponse<NSArray<FUSDKFollowingModel *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFollowing(filters:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getInfoWithCompletionHandler:(void (^)(FUSDKProfileModel * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getInfo(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStatsDisableCache:(FUSDKBoolean * _Nullable)disableCache completionHandler:(void (^)(FUSDKProfileStatsModel * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getStats(disableCache:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)showFullInterestsWithCompletionHandler:(void (^)(NSArray<FUSDKFullInterest *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("showFullInterests(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)showFullnessProfileWithCompletionHandler:(void (^)(FUSDKFullnessProfile * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("showFullnessProfile(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)showInterestsWithCompletionHandler:(void (^)(NSArray<FUSDKInterest *> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("showInterests(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReadOnlyProfile.Companion")))
@interface FUSDKReadOnlyProfileCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKReadOnlyProfileCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestFollow")))
@interface FUSDKRequestFollow : FUSDKBase
- (instancetype)initWithProfileIds:(NSArray<NSString *> *)profileIds __attribute__((swift_name("init(profileIds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKRequestFollowCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKRequestFollow *)doCopyProfileIds:(NSArray<NSString *> *)profileIds __attribute__((swift_name("doCopy(profileIds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *profileIds __attribute__((swift_name("profileIds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestFollow.Companion")))
@interface FUSDKRequestFollowCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKRequestFollowCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Type")))
@interface FUSDKType : FUSDKKotlinEnum<FUSDKType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKType *competition __attribute__((swift_name("competition")));
@property (class, readonly) FUSDKType *player __attribute__((swift_name("player")));
@property (class, readonly) FUSDKType *team __attribute__((swift_name("team")));
@property (class, readonly) FUSDKType *sport __attribute__((swift_name("sport")));
+ (FUSDKKotlinArray<FUSDKType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateProfile")))
@interface FUSDKUpdateProfile : FUSDKBase <FUSDKPatchDto>
- (instancetype)initWithCountryId:(NSString * _Nullable)countryId gender:(FUSDKGender * _Nullable)gender birthDate:(FUSDKKotlinx_datetimeInstant * _Nullable)birthDate name:(NSString * _Nullable)name nickname:(NSString * _Nullable)nickname interests:(NSMutableArray<FUSDKInterest *> * _Nullable)interests email:(NSString * _Nullable)email phoneNumber:(NSString * _Nullable)phoneNumber phoneCountryCode:(NSString * _Nullable)phoneCountryCode __attribute__((swift_name("init(countryId:gender:birthDate:name:nickname:interests:email:phoneNumber:phoneCountryCode:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKUpdateProfileCompanion *companion __attribute__((swift_name("companion")));
- (void)addInterestInterest:(FUSDKInterest *)interest __attribute__((swift_name("addInterest(interest:)")));
- (FUSDKUpdateProfile *)doCopyCountryId:(NSString * _Nullable)countryId gender:(FUSDKGender * _Nullable)gender birthDate:(FUSDKKotlinx_datetimeInstant * _Nullable)birthDate name:(NSString * _Nullable)name nickname:(NSString * _Nullable)nickname interests:(NSMutableArray<FUSDKInterest *> * _Nullable)interests email:(NSString * _Nullable)email phoneNumber:(NSString * _Nullable)phoneNumber phoneCountryCode:(NSString * _Nullable)phoneCountryCode __attribute__((swift_name("doCopy(countryId:gender:birthDate:name:nickname:interests:email:phoneNumber:phoneCountryCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSArray<FUSDKInterest *> *)getInterestsForRemapping __attribute__((swift_name("getInterestsForRemapping()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)removeInterestInterestId:(NSString *)interestId __attribute__((swift_name("removeInterest(interestId:)")));
- (void)resetInitialInterests:(NSArray<FUSDKInterest *> * _Nullable)initialInterests __attribute__((swift_name("reset(initialInterests:)")));
- (NSDictionary<NSString *, FUSDKKotlinx_serialization_jsonJsonElement *> *)toPatchJsonObject __attribute__((swift_name("toPatchJsonObject()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property FUSDKKotlinx_datetimeInstant * _Nullable birthDate __attribute__((swift_name("birthDate")));
@property NSString * _Nullable countryId __attribute__((swift_name("countryId")));
@property NSString * _Nullable email __attribute__((swift_name("email")));
@property FUSDKGender * _Nullable gender __attribute__((swift_name("gender")));
@property NSMutableArray<FUSDKInterest *> * _Nullable interests __attribute__((swift_name("interests")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable nickname __attribute__((swift_name("nickname")));
@property NSString * _Nullable phoneCountryCode __attribute__((swift_name("phoneCountryCode")));
@property NSString * _Nullable phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateProfile.Companion")))
@interface FUSDKUpdateProfileCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKUpdateProfileCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("AbstractBiMap")))
@interface FUSDKAbstractBiMap : NSObject
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("BiMap")))
@protocol FUSDKBiMap
@required
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("HashBiMap")))
@interface FUSDKHashBiMap : NSObject
@end

__attribute__((swift_name("KotlinThrowable")))
@interface FUSDKKotlinThrowable : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FUSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FUSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (FUSDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface FUSDKKotlinException : FUSDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FUSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FUSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InvalidParameterException")))
@interface FUSDKInvalidParameterException : FUSDKKotlinException
- (instancetype)initWithMessage:(NSString *)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(FUSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FUSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((unavailable("can't be imported")))
__attribute__((swift_name("MutableBiMap")))
@protocol FUSDKMutableBiMap
@required
@end

__attribute__((swift_name("APIClientService")))
@interface FUSDKAPIClientService : FUSDKBase
@property (class, readonly, getter=companion) FUSDKAPIClientServiceCompanion *companion __attribute__((swift_name("companion")));
- (id)createServiceClass:(id<FUSDKKotlinKClass>)serviceClass __attribute__((swift_name("create(serviceClass:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deletePath:(NSString *)path body:(id _Nullable)body completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(path:body:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPath:(NSString *)path params:(NSDictionary<NSString *, id> * _Nullable)params apiV2:(FUSDKBoolean * _Nullable)apiV2 completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(path:params:apiV2:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAuthorizedPath:(NSString *)path params:(NSDictionary<NSString *, id> * _Nullable)params completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getAuthorized(path:params:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)patchPath:(NSString *)path body:(id<FUSDKPatchDto> _Nullable)body completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("patch(path:body:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postPath:(NSString *)path body:(id _Nullable)body completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post(path:body:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putPath:(NSString *)path body:(id _Nullable)body completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("put(path:body:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("APIClientService.Companion")))
@interface FUSDKAPIClientServiceCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKAPIClientServiceCompanion *shared __attribute__((swift_name("shared")));
- (FUSDKAPIClientService *)createKtorClientBaseUrl:(NSString *)baseUrl tokenHolder:(FUSDKTokenHolder *)tokenHolder sdkConfig:(FUSDKFUSDKConfig *)sdkConfig __attribute__((swift_name("createKtorClient(baseUrl:tokenHolder:sdkConfig:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenHolder")))
@interface FUSDKTokenHolder : FUSDKBase
- (instancetype)initWithTokenProvider:(id<FUSDKIFUSDKTokenProvider>)tokenProvider __attribute__((swift_name("init(tokenProvider:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)getToken __attribute__((swift_name("getToken()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshTokenWithCompletionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("refreshToken(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorCodes")))
@interface FUSDKErrorCodes : FUSDKKotlinEnum<FUSDKErrorCodes *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKErrorCodes *badMethodCall __attribute__((swift_name("badMethodCall")));
@property (class, readonly) FUSDKErrorCodes *unauthorized __attribute__((swift_name("unauthorized")));
@property (class, readonly) FUSDKErrorCodes *notFound __attribute__((swift_name("notFound")));
+ (FUSDKKotlinArray<FUSDKErrorCodes *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKErrorCodes *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorMessages")))
@interface FUSDKErrorMessages : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)errorMessages __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKErrorMessages *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ENTITIES_FOLLOWS_FILTERS_EXCEEDED __attribute__((swift_name("ENTITIES_FOLLOWS_FILTERS_EXCEEDED")));
@property (readonly) NSString *ENTITIES_NEEDED __attribute__((swift_name("ENTITIES_NEEDED")));
@property (readonly) NSString *ENTITY_IDS_NOT_FOUND __attribute__((swift_name("ENTITY_IDS_NOT_FOUND")));
@property (readonly) NSString *EXCEEDED_DISCUSSION_IDS __attribute__((swift_name("EXCEEDED_DISCUSSION_IDS")));
@property (readonly) NSString *EXCEEDED_EXTENDED_DISCUSSION_IDS __attribute__((swift_name("EXCEEDED_EXTENDED_DISCUSSION_IDS")));
@property (readonly) NSString *EXPIRED_TOKEN __attribute__((swift_name("EXPIRED_TOKEN")));
@property (readonly) NSString *FILTER_COMBINATION_ERROR __attribute__((swift_name("FILTER_COMBINATION_ERROR")));
@property (readonly) NSString *ID_MAPPING_NOT_FOUND __attribute__((swift_name("ID_MAPPING_NOT_FOUND")));
@property (readonly) NSString *INVALID_AVATAR __attribute__((swift_name("INVALID_AVATAR")));
@property (readonly) NSString *INVALID_COLLECT_LEAD_METHOD_CALL __attribute__((swift_name("INVALID_COLLECT_LEAD_METHOD_CALL")));
@property (readonly) NSString *INVALID_COMPETITION_ID __attribute__((swift_name("INVALID_COMPETITION_ID")));
@property (readonly) NSString *INVALID_DISCUSSION_IDS __attribute__((swift_name("INVALID_DISCUSSION_IDS")));
@property (readonly) NSString *INVALID_ENTITY_TYPE __attribute__((swift_name("INVALID_ENTITY_TYPE")));
@property (readonly) NSString *INVALID_FIXTURES_FIELD __attribute__((swift_name("INVALID_FIXTURES_FIELD")));
@property (readonly) NSString *INVALID_GET_PROFILES_METHOD_CALL __attribute__((swift_name("INVALID_GET_PROFILES_METHOD_CALL")));
@property (readonly) NSString *INVALID_LIMIT __attribute__((swift_name("INVALID_LIMIT")));
@property (readonly) NSString *INVALID_LIMIT_TYPE __attribute__((swift_name("INVALID_LIMIT_TYPE")));
@property (readonly) NSString *INVALID_MAP_PLAYERS_ROLES_KEYS __attribute__((swift_name("INVALID_MAP_PLAYERS_ROLES_KEYS")));
@property (readonly) NSString *INVALID_MAP_PLAYERS_ROLES_VALUES __attribute__((swift_name("INVALID_MAP_PLAYERS_ROLES_VALUES")));
@property (readonly) NSString *INVALID_MATCH_ID __attribute__((swift_name("INVALID_MATCH_ID")));
@property (readonly) NSString *INVALID_MATCH_SUMMARY_PREDICTIONS_KEYS __attribute__((swift_name("INVALID_MATCH_SUMMARY_PREDICTIONS_KEYS")));
@property (readonly) NSString *INVALID_OR_EMPTY_IDS __attribute__((swift_name("INVALID_OR_EMPTY_IDS")));
@property (readonly) NSString *INVALID_OUTPUT_PROVIDER __attribute__((swift_name("INVALID_OUTPUT_PROVIDER")));
@property (readonly) NSString *INVALID_PAGE_NUMBER __attribute__((swift_name("INVALID_PAGE_NUMBER")));
@property (readonly) NSString *INVALID_PARAM __attribute__((swift_name("INVALID_PARAM")));
@property (readonly) NSString *INVALID_PLAYER_ID __attribute__((swift_name("INVALID_PLAYER_ID")));
@property (readonly) NSString *INVALID_PROVIDER __attribute__((swift_name("INVALID_PROVIDER")));
@property (readonly) NSString *INVALID_STANDING_PREDICTION_ARGUMENT __attribute__((swift_name("INVALID_STANDING_PREDICTION_ARGUMENT")));
@property (readonly) NSString *INVALID_TAG __attribute__((swift_name("INVALID_TAG")));
@property (readonly) NSString *INVALID_TEAM_ID __attribute__((swift_name("INVALID_TEAM_ID")));
@property (readonly) NSString *INVALID_TEMPLATE_GROUP_FILTERS __attribute__((swift_name("INVALID_TEMPLATE_GROUP_FILTERS")));
@property (readonly) NSString *INVALID_TEMPLATE_GROUP_ID __attribute__((swift_name("INVALID_TEMPLATE_GROUP_ID")));
@property (readonly) NSString *INVALID_TIEBREAKER_FIELD __attribute__((swift_name("INVALID_TIEBREAKER_FIELD")));
@property (readonly) NSString *INVALID_TOKEN __attribute__((swift_name("INVALID_TOKEN")));
@property (readonly) NSString *INVALID_TYPE __attribute__((swift_name("INVALID_TYPE")));
@property (readonly) NSString *INVALID_VALUE __attribute__((swift_name("INVALID_VALUE")));
@property (readonly) NSString *MATCH_IDS_NOT_FOUND __attribute__((swift_name("MATCH_IDS_NOT_FOUND")));
@property (readonly) NSString *MATCH_SUMMARY_PREDICTIONS_REQUIRED __attribute__((swift_name("MATCH_SUMMARY_PREDICTIONS_REQUIRED")));
@property (readonly) NSString *MATCH_SUMMARY_REQUIRED __attribute__((swift_name("MATCH_SUMMARY_REQUIRED")));
@property (readonly) NSString *QUERY_PARAM_FILTERS_LIMIT_EXCEEDED __attribute__((swift_name("QUERY_PARAM_FILTERS_LIMIT_EXCEEDED")));
@property (readonly) NSString *QUERY_PARAM_MATCH_IDS_EXCEEDED __attribute__((swift_name("QUERY_PARAM_MATCH_IDS_EXCEEDED")));
@property (readonly) NSString *REQUIRED_FIXTURES_FIELD __attribute__((swift_name("REQUIRED_FIXTURES_FIELD")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorStatuses")))
@interface FUSDKErrorStatuses : FUSDKKotlinEnum<FUSDKErrorStatuses *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKErrorStatuses *invalidTemplate __attribute__((swift_name("invalidTemplate")));
@property (class, readonly) FUSDKErrorStatuses *invalidPrediction __attribute__((swift_name("invalidPrediction")));
@property (class, readonly) FUSDKErrorStatuses *invalidMarket __attribute__((swift_name("invalidMarket")));
@property (class, readonly) FUSDKErrorStatuses *invalidField __attribute__((swift_name("invalidField")));
@property (class, readonly) FUSDKErrorStatuses *invalidType __attribute__((swift_name("invalidType")));
@property (class, readonly) FUSDKErrorStatuses *exceededLength __attribute__((swift_name("exceededLength")));
@property (class, readonly) FUSDKErrorStatuses *invalidToken __attribute__((swift_name("invalidToken")));
@property (class, readonly) FUSDKErrorStatuses *unauthorized __attribute__((swift_name("unauthorized")));
@property (class, readonly) FUSDKErrorStatuses *invalidFilters __attribute__((swift_name("invalidFilters")));
@property (class, readonly) FUSDKErrorStatuses *invalidAvatar __attribute__((swift_name("invalidAvatar")));
@property (class, readonly) FUSDKErrorStatuses *invalidMethodCall __attribute__((swift_name("invalidMethodCall")));
@property (class, readonly) FUSDKErrorStatuses *invalidLimit __attribute__((swift_name("invalidLimit")));
@property (class, readonly) FUSDKErrorStatuses *invalidTemplateGroupId __attribute__((swift_name("invalidTemplateGroupId")));
@property (class, readonly) FUSDKErrorStatuses *invalidTemplateGroupFilters __attribute__((swift_name("invalidTemplateGroupFilters")));
@property (class, readonly) FUSDKErrorStatuses *invalidPageNumber __attribute__((swift_name("invalidPageNumber")));
@property (class, readonly) FUSDKErrorStatuses *invalidDiscussionIds __attribute__((swift_name("invalidDiscussionIds")));
@property (class, readonly) FUSDKErrorStatuses *idMappingNotFound __attribute__((swift_name("idMappingNotFound")));
@property (class, readonly) FUSDKErrorStatuses *invalidCompetitionId __attribute__((swift_name("invalidCompetitionId")));
@property (class, readonly) FUSDKErrorStatuses *invalidTeamId __attribute__((swift_name("invalidTeamId")));
@property (class, readonly) FUSDKErrorStatuses *invalidIds __attribute__((swift_name("invalidIds")));
@property (class, readonly) FUSDKErrorStatuses *invalidInputProvider __attribute__((swift_name("invalidInputProvider")));
@property (class, readonly) FUSDKErrorStatuses *invalidOutputProvider __attribute__((swift_name("invalidOutputProvider")));
@property (class, readonly) FUSDKErrorStatuses *invalidMatchSummary __attribute__((swift_name("invalidMatchSummary")));
@property (class, readonly) FUSDKErrorStatuses *invalidMatchSummaryPredictions __attribute__((swift_name("invalidMatchSummaryPredictions")));
@property (class, readonly) FUSDKErrorStatuses *invalidMatchSummaryPredictionsKeys __attribute__((swift_name("invalidMatchSummaryPredictionsKeys")));
@property (class, readonly) FUSDKErrorStatuses *entityIdsNotFound __attribute__((swift_name("entityIdsNotFound")));
@property (class, readonly) FUSDKErrorStatuses *invalidEntityType __attribute__((swift_name("invalidEntityType")));
@property (class, readonly) FUSDKErrorStatuses *matchIdsNotFound __attribute__((swift_name("matchIdsNotFound")));
@property (class, readonly) FUSDKErrorStatuses *invalidTag __attribute__((swift_name("invalidTag")));
+ (FUSDKKotlinArray<FUSDKErrorStatuses *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKErrorStatuses *> *entries __attribute__((swift_name("entries")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FansUnitedError")))
@interface FUSDKFansUnitedError : FUSDKBase
- (instancetype)initWithCode:(int32_t)code status:(NSString *)status message:(NSString *)message __attribute__((swift_name("init(code:status:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKFansUnitedErrorCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKFansUnitedError *)doCopyCode:(int32_t)code status:(NSString *)status message:(NSString *)message __attribute__((swift_name("doCopy(code:status:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FansUnitedError.Companion")))
@interface FUSDKFansUnitedErrorCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFansUnitedErrorCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FansUnitedErrorResponse")))
@interface FUSDKFansUnitedErrorResponse : FUSDKBase
- (instancetype)initWithError:(FUSDKFansUnitedError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKFansUnitedErrorResponseCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKFansUnitedErrorResponse *)doCopyError:(FUSDKFansUnitedError *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKFansUnitedError *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FansUnitedErrorResponse.Companion")))
@interface FUSDKFansUnitedErrorResponseCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFansUnitedErrorResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FansUnitedException")))
@interface FUSDKFansUnitedException : FUSDKKotlinException
- (instancetype)initWithCode:(int32_t)code status:(NSString *)status message:(NSString *)message __attribute__((swift_name("init(code:status:message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(FUSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FUSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKFansUnitedExceptionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FansUnitedException.Companion")))
@interface FUSDKFansUnitedExceptionCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFansUnitedExceptionCompanion *shared __attribute__((swift_name("shared")));
- (FUSDKFansUnitedException *)fromFansUnitedErrorErrorResponse:(FUSDKFansUnitedErrorResponse *)errorResponse __attribute__((swift_name("fromFansUnitedError(errorResponse:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fromHttpResponseResponse:(FUSDKKtor_client_coreHttpResponse *)response completionHandler:(void (^)(FUSDKFansUnitedException * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fromHttpResponse(response:completionHandler:)")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthPlugin")))
@interface FUSDKAuthPlugin : FUSDKBase
@property (class, readonly, getter=companion) FUSDKAuthPluginPlugin *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthPlugin.Configuration")))
@interface FUSDKAuthPluginConfiguration : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property int32_t maxRetries __attribute__((swift_name("maxRetries")));
@property FUSDKTokenHolder *tokenHolder __attribute__((swift_name("tokenHolder")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol FUSDKKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(FUSDKKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) FUSDKKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthPlugin.Plugin")))
@interface FUSDKAuthPluginPlugin : FUSDKBase <FUSDKKtor_client_coreHttpClientPlugin>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)plugin __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKAuthPluginPlugin *shared __attribute__((swift_name("shared")));
- (void)installPlugin:(FUSDKAuthPlugin *)plugin scope:(FUSDKKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (FUSDKAuthPlugin *)prepareBlock:(void (^)(FUSDKAuthPluginConfiguration *))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) FUSDKKtor_utilsAttributeKey<FUSDKAuthPlugin *> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisableCachePlugin")))
@interface FUSDKDisableCachePlugin : FUSDKBase
- (instancetype)initWithConfig:(FUSDKDisableCachePluginConfig *)config __attribute__((swift_name("init(config:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKDisableCachePluginPlugin *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisableCachePlugin.Config")))
@interface FUSDKDisableCachePluginConfig : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisableCachePlugin.Plugin")))
@interface FUSDKDisableCachePluginPlugin : FUSDKBase <FUSDKKtor_client_coreHttpClientPlugin>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)plugin __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKDisableCachePluginPlugin *shared __attribute__((swift_name("shared")));
- (void)installPlugin:(FUSDKDisableCachePlugin *)plugin scope:(FUSDKKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (FUSDKDisableCachePlugin *)prepareBlock:(void (^)(FUSDKDisableCachePluginConfig *))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) FUSDKKtor_utilsAttributeKey<FUSDKDisableCachePlugin *> *key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol FUSDKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<FUSDKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<FUSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol FUSDKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<FUSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<FUSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol FUSDKKotlinx_serialization_coreKSerializer <FUSDKKotlinx_serialization_coreSerializationStrategy, FUSDKKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ActivityActionTypeDeserializer")))
@interface FUSDKActivityActionTypeDeserializer : FUSDKBase <FUSDKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)activityActionTypeDeserializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKActivityActionTypeDeserializer *shared __attribute__((swift_name("shared")));
- (FUSDKActionsEnum *)deserializeDecoder:(id<FUSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<FUSDKKotlinx_serialization_coreEncoder>)encoder value:(FUSDKActionsEnum *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<FUSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FansUnitedJsonConfig")))
@interface FUSDKFansUnitedJsonConfig : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fansUnitedJsonConfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFansUnitedJsonConfig *shared __attribute__((swift_name("shared")));
@property (readonly) FUSDKKotlinx_serialization_jsonJson *json __attribute__((swift_name("json")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FixtureListSerializer")))
@interface FUSDKFixtureListSerializer : FUSDKBase <FUSDKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fixtureListSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKFixtureListSerializer *shared __attribute__((swift_name("shared")));
- (NSArray<FUSDKFixture *> *)deserializeDecoder:(id<FUSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<FUSDKKotlinx_serialization_coreEncoder>)encoder value:(NSArray<FUSDKFixture *> *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<FUSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GoogleJsonConfig")))
@interface FUSDKGoogleJsonConfig : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)googleJsonConfig __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKGoogleJsonConfig *shared __attribute__((swift_name("shared")));
@property (readonly) FUSDKKotlinx_serialization_jsonJson *json __attribute__((swift_name("json")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstantSerializer")))
@interface FUSDKInstantSerializer : FUSDKBase <FUSDKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)instantSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKInstantSerializer *shared __attribute__((swift_name("shared")));
- (FUSDKKotlinx_datetimeInstant *)deserializeDecoder:(id<FUSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<FUSDKKotlinx_serialization_coreEncoder>)encoder value:(FUSDKKotlinx_datetimeInstant *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<FUSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapAnySerializer")))
@interface FUSDKMapAnySerializer : FUSDKBase <FUSDKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mapAnySerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKMapAnySerializer *shared __attribute__((swift_name("shared")));
- (NSDictionary<NSString *, id> *)deserializeDecoder:(id<FUSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<FUSDKKotlinx_serialization_coreEncoder>)encoder value:(NSDictionary<NSString *, id> *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<FUSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RelatedEntityTypeDeserializer")))
@interface FUSDKRelatedEntityTypeDeserializer : FUSDKBase <FUSDKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)relatedEntityTypeDeserializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKRelatedEntityTypeDeserializer *shared __attribute__((swift_name("shared")));
- (FUSDKRelatedEntityType *)deserializeDecoder:(id<FUSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<FUSDKKotlinx_serialization_coreEncoder>)encoder value:(FUSDKRelatedEntityType *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<FUSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol FUSDKKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SnakeCaseNamingStrategy")))
@interface FUSDKSnakeCaseNamingStrategy : FUSDKBase <FUSDKKotlinx_serialization_jsonJsonNamingStrategy>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)snakeCaseNamingStrategy __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKSnakeCaseNamingStrategy *shared __attribute__((swift_name("shared")));
- (NSString *)serialNameForJsonDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemapResult")))
@interface FUSDKRemapResult : FUSDKBase
- (instancetype)initWithTeamIds:(NSArray<NSString *> *)teamIds playerIds:(NSArray<NSString *> *)playerIds countryIds:(NSArray<NSString *> *)countryIds matchIds:(NSArray<NSString *> *)matchIds competitionIds:(NSArray<NSString *> *)competitionIds __attribute__((swift_name("init(teamIds:playerIds:countryIds:matchIds:competitionIds:)"))) __attribute__((objc_designated_initializer));
- (FUSDKRemapResult *)doCopyTeamIds:(NSArray<NSString *> *)teamIds playerIds:(NSArray<NSString *> *)playerIds countryIds:(NSArray<NSString *> *)countryIds matchIds:(NSArray<NSString *> *)matchIds competitionIds:(NSArray<NSString *> *)competitionIds __attribute__((swift_name("doCopy(teamIds:playerIds:countryIds:matchIds:competitionIds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *competitionIds __attribute__((swift_name("competitionIds")));
@property (readonly) NSArray<NSString *> *countryIds __attribute__((swift_name("countryIds")));
@property (readonly) NSArray<NSString *> *matchIds __attribute__((swift_name("matchIds")));
@property (readonly) NSArray<NSString *> *playerIds __attribute__((swift_name("playerIds")));
@property (readonly) NSArray<NSString *> *teamIds __attribute__((swift_name("teamIds")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface FUSDKKotlinArray<T> : FUSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(FUSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<FUSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface FUSDKKotlinArray (Extensions)
- (NSArray<FUSDKKotlinx_serialization_jsonJsonElement *> *)toJsonElement __attribute__((swift_name("toJsonElement()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface FUSDKKotlinx_serialization_jsonJsonElement : FUSDKBase
@property (class, readonly, getter=companion) FUSDKKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

@interface FUSDKKotlinx_serialization_jsonJsonElement (Extensions)
- (id _Nullable)toPrimitive __attribute__((swift_name("toPrimitive()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuildType_iosKt")))
@interface FUSDKBuildType_iosKt : FUSDKBase
+ (FUSDKBuildType *)getBuildType __attribute__((swift_name("getBuildType()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConstantsKt")))
@interface FUSDKConstantsKt : FUSDKBase
@property (class, readonly) NSString *HEADER_API_V2 __attribute__((swift_name("HEADER_API_V2")));
@property (class, readonly) NSString *NO_GOAL __attribute__((swift_name("NO_GOAL")));
@property (class, readonly) NSString *OWN_GOAL __attribute__((swift_name("OWN_GOAL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtensionsKt")))
@interface FUSDKExtensionsKt : FUSDKBase
+ (NSString *)TAG:(id)receiver __attribute__((swift_name("TAG(_:)")));
+ (FUSDKResourceType * _Nullable)toResourceType:(NSString *)receiver __attribute__((swift_name("toResourceType(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtensionsGeneratedKt")))
@interface FUSDKExtensionsGeneratedKt : FUSDKBase
+ (id)fuMemberProperties:(id<FUSDKKotlinKClass>)receiver __attribute__((swift_name("fuMemberProperties(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClient_iosKt")))
@interface FUSDKHttpClient_iosKt : FUSDKBase
@property (class, readonly) id<FUSDKKtor_client_coreHttpClientEngineFactory> engineHttpClient __attribute__((swift_name("engineHttpClient")));
@property (class, readonly) FUSDKKtor_client_coreHttpClient *identityEngineHttpClient __attribute__((swift_name("identityEngineHttpClient")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IoDispatcher_iosKt")))
@interface FUSDKIoDispatcher_iosKt : FUSDKBase
@property (class, readonly) FUSDKKotlinx_coroutines_coreCoroutineDispatcher *IoDispatcher __attribute__((swift_name("IoDispatcher")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MapAnySerializerKt")))
@interface FUSDKMapAnySerializerKt : FUSDKBase
+ (FUSDKKotlinx_serialization_jsonJsonElement *)toJsonElement:(id _Nullable)receiver __attribute__((swift_name("toJsonElement(_:)")));
+ (NSArray<FUSDKKotlinx_serialization_jsonJsonElement *> *)toJsonElement_:(id)receiver __attribute__((swift_name("toJsonElement(__:)")));
+ (NSDictionary<NSString *, FUSDKKotlinx_serialization_jsonJsonElement *> *)toJsonElement__:(NSDictionary<id, id> *)receiver __attribute__((swift_name("toJsonElement(___:)")));
+ (NSArray<id> *)toPrimitiveList:(NSArray<FUSDKKotlinx_serialization_jsonJsonElement *> *)receiver __attribute__((swift_name("toPrimitiveList(_:)")));
+ (NSDictionary<NSString *, id> *)toPrimitiveMap:(NSDictionary<NSString *, FUSDKKotlinx_serialization_jsonJsonElement *> *)receiver __attribute__((swift_name("toPrimitiveMap(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RemapperServiceKt")))
@interface FUSDKRemapperServiceKt : FUSDKBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)remapAsCompetitionIdCompetitionId:(NSString *)competitionId completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remapAsCompetitionId(competitionId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)remapAsCountryCountryId:(NSString *)countryId completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remapAsCountry(countryId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)remapAsMatchMatchId:(NSString *)matchId completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remapAsMatch(matchId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)remapAsMatchMatchIds:(NSArray<NSString *> * _Nullable)matchIds completionHandler:(void (^)(NSArray<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remapAsMatch(matchIds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)remapAsPlayerPlayerId:(NSString *)playerId completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remapAsPlayer(playerId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)remapAsTeamTeamId:(NSString *)teamId completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remapAsTeam(teamId:completionHandler:)")));
@property (class, readonly) NSArray<NSString *> *EXCLUSIONS __attribute__((swift_name("EXCLUSIONS")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface FUSDKKotlinEnumCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface FUSDKKotlinRuntimeException : FUSDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FUSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FUSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface FUSDKKotlinIllegalStateException : FUSDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FUSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FUSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface FUSDKKotlinCancellationException : FUSDKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(FUSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(FUSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol FUSDKKtor_httpHttpMessage
@required
@property (readonly) id<FUSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol FUSDKKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<FUSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface FUSDKKtor_client_coreHttpResponse : FUSDKBase <FUSDKKtor_httpHttpMessage, FUSDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<FUSDKKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));
@property (readonly) FUSDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) FUSDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) FUSDKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol FUSDKKotlinKAnnotatedElement
@required
@end

__attribute__((swift_name("KotlinKCallable")))
@protocol FUSDKKotlinKCallable <FUSDKKotlinKAnnotatedElement>
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id<FUSDKKotlinKType> returnType __attribute__((swift_name("returnType")));
@end

__attribute__((swift_name("KotlinKProperty")))
@protocol FUSDKKotlinKProperty <FUSDKKotlinKCallable>
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/InstantIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface FUSDKKotlinx_datetimeInstant : FUSDKBase <FUSDKKotlinComparable>
@property (class, readonly, getter=companion) FUSDKKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(FUSDKKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (FUSDKKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(FUSDKKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (FUSDKKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface FUSDKKotlinUnit : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol FUSDKKotlinKDeclarationContainer
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol FUSDKKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol FUSDKKotlinKClass <FUSDKKotlinKDeclarationContainer, FUSDKKotlinKAnnotatedElement, FUSDKKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol FUSDKKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol FUSDKKtor_ioCloseable <FUSDKKotlinAutoCloseable>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface FUSDKKtor_client_coreHttpClient : FUSDKBase <FUSDKKotlinx_coroutines_coreCoroutineScope, FUSDKKtor_ioCloseable>
- (instancetype)initWithEngine:(id<FUSDKKtor_client_coreHttpClientEngine>)engine userConfig:(FUSDKKtor_client_coreHttpClientConfig<FUSDKKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (FUSDKKtor_client_coreHttpClient *)configBlock:(void (^)(FUSDKKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<FUSDKKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<FUSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<FUSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<FUSDKKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) FUSDKKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) FUSDKKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) FUSDKKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) FUSDKKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) FUSDKKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) FUSDKKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface FUSDKKtor_utilsAttributeKey<T> : FUSDKBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(FUSDKKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (FUSDKKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(FUSDKKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol FUSDKKotlinx_serialization_coreEncoder
@required
- (id<FUSDKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<FUSDKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<FUSDKKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<FUSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<FUSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) FUSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol FUSDKKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<FUSDKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<FUSDKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<FUSDKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) FUSDKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol FUSDKKotlinx_serialization_coreDecoder
@required
- (id<FUSDKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<FUSDKKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (FUSDKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<FUSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<FUSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) FUSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol FUSDKKotlinx_serialization_coreSerialFormat
@required
@property (readonly) FUSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol FUSDKKotlinx_serialization_coreStringFormat <FUSDKKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<FUSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<FUSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface FUSDKKotlinx_serialization_jsonJson : FUSDKBase <FUSDKKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) FUSDKKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<FUSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(FUSDKKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<FUSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (FUSDKKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<FUSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringValue:(id _Nullable)value __attribute__((swift_name("encodeToString(value:)")));
- (NSString *)encodeToStringSerializer:(id<FUSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (FUSDKKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) FUSDKKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) FUSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol FUSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface FUSDKKotlinx_serialization_jsonJsonElementCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineFactory")))
@protocol FUSDKKtor_client_coreHttpClientEngineFactory
@required
- (id<FUSDKKtor_client_coreHttpClientEngine>)createBlock:(void (^)(FUSDKKtor_client_coreHttpClientEngineConfig *))block __attribute__((swift_name("create(block:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol FUSDKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<FUSDKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<FUSDKKotlinCoroutineContextElement> _Nullable)getKey:(id<FUSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<FUSDKKotlinCoroutineContext>)minusKeyKey:(id<FUSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<FUSDKKotlinCoroutineContext>)plusContext:(id<FUSDKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol FUSDKKotlinCoroutineContextElement <FUSDKKotlinCoroutineContext>
@required
@property (readonly) id<FUSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface FUSDKKotlinAbstractCoroutineContextElement : FUSDKBase <FUSDKKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<FUSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<FUSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol FUSDKKotlinContinuationInterceptor <FUSDKKotlinCoroutineContextElement>
@required
- (id<FUSDKKotlinContinuation>)interceptContinuationContinuation:(id<FUSDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<FUSDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface FUSDKKotlinx_coroutines_coreCoroutineDispatcher : FUSDKKotlinAbstractCoroutineContextElement <FUSDKKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<FUSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<FUSDKKotlinCoroutineContext>)context block:(id<FUSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<FUSDKKotlinCoroutineContext>)context block:(id<FUSDKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<FUSDKKotlinContinuation>)interceptContinuationContinuation:(id<FUSDKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<FUSDKKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (FUSDKKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (FUSDKKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(FUSDKKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<FUSDKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol FUSDKKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<FUSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol FUSDKKtor_httpHeaders <FUSDKKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface FUSDKKtor_client_coreHttpClientCall : FUSDKBase <FUSDKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(FUSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(FUSDKKtor_client_coreHttpClient *)client requestData:(FUSDKKtor_client_coreHttpRequestData *)requestData responseData:(FUSDKKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(FUSDKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(FUSDKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<FUSDKKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<FUSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) FUSDKKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<FUSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<FUSDKKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property FUSDKKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol FUSDKKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(FUSDKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause:(FUSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
@property (readonly) FUSDKKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<FUSDKKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface FUSDKKtor_utilsGMTDate : FUSDKBase <FUSDKKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(FUSDKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(FUSDKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(FUSDKKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (FUSDKKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (FUSDKKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(FUSDKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(FUSDKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) FUSDKKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) FUSDKKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface FUSDKKtor_httpHttpStatusCode : FUSDKBase <FUSDKKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(FUSDKKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (FUSDKKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (FUSDKKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface FUSDKKtor_httpHttpProtocolVersion : FUSDKBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol FUSDKKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<FUSDKKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<FUSDKKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface FUSDKKotlinx_datetimeInstantCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (FUSDKKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (FUSDKKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (FUSDKKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (FUSDKKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (FUSDKKotlinx_datetimeInstant *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) FUSDKKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) FUSDKKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol FUSDKKtor_client_coreHttpClientEngine <FUSDKKotlinx_coroutines_coreCoroutineScope, FUSDKKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(FUSDKKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(FUSDKKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(FUSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) FUSDKKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) FUSDKKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<FUSDKKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface FUSDKKtor_client_coreHttpClientEngineConfig : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property FUSDKKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property FUSDKKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface FUSDKKtor_client_coreHttpClientConfig<T> : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FUSDKKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(FUSDKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<FUSDKKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(FUSDKKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(FUSDKKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol FUSDKKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol FUSDKKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(FUSDKKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(FUSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(FUSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(FUSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(FUSDKKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(FUSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(FUSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(FUSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<FUSDKKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface FUSDKKtor_eventsEvents : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(FUSDKKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<FUSDKKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(FUSDKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(FUSDKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface FUSDKKtor_utilsPipeline<TSubject, TContext> : FUSDKBase
- (instancetype)initWithPhases:(FUSDKKotlinArray<FUSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(FUSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<FUSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(FUSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(FUSDKKtor_utilsPipelinePhase *)reference phase:(FUSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(FUSDKKtor_utilsPipelinePhase *)reference phase:(FUSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(FUSDKKtor_utilsPipelinePhase *)phase block:(id<FUSDKKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<FUSDKKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(FUSDKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(FUSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(FUSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(FUSDKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<FUSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<FUSDKKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface FUSDKKtor_client_coreHttpReceivePipeline : FUSDKKtor_utilsPipeline<FUSDKKtor_client_coreHttpResponse *, FUSDKKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(FUSDKKotlinArray<FUSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(FUSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<FUSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface FUSDKKtor_client_coreHttpRequestPipeline : FUSDKKtor_utilsPipeline<id, FUSDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(FUSDKKotlinArray<FUSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(FUSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<FUSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface FUSDKKtor_client_coreHttpResponsePipeline : FUSDKKtor_utilsPipeline<FUSDKKtor_client_coreHttpResponseContainer *, FUSDKKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(FUSDKKotlinArray<FUSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(FUSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<FUSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface FUSDKKtor_client_coreHttpSendPipeline : FUSDKKtor_utilsPipeline<id, FUSDKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(FUSDKKotlinArray<FUSDKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(FUSDKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<FUSDKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface FUSDKKtor_utilsTypeInfo : FUSDKBase
- (instancetype)initWithType:(id<FUSDKKotlinKClass>)type kotlinType:(id<FUSDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<FUSDKKotlinKClass>)type reifiedType:(id<FUSDKKotlinKType>)reifiedType kotlinType:(id<FUSDKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<FUSDKKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<FUSDKKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol FUSDKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<FUSDKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<FUSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<FUSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) FUSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface FUSDKKotlinx_serialization_coreSerializersModule : FUSDKBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<FUSDKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FUSDKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<FUSDKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FUSDKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<FUSDKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<FUSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<FUSDKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol FUSDKKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface FUSDKKotlinx_serialization_coreSerialKind : FUSDKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol FUSDKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<FUSDKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<FUSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<FUSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<FUSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) FUSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface FUSDKKotlinNothing : FUSDKBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface FUSDKKotlinx_serialization_jsonJsonDefault : FUSDKKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface FUSDKKotlinx_serialization_jsonJsonConfiguration : FUSDKBase
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowComments __attribute__((swift_name("allowComments")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property FUSDKKotlinx_serialization_jsonClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<FUSDKKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol FUSDKKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol FUSDKKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<FUSDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface FUSDKKotlinAbstractCoroutineContextKey<B, E> : FUSDKBase <FUSDKKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<FUSDKKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<FUSDKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface FUSDKKotlinx_coroutines_coreCoroutineDispatcherKey : FUSDKKotlinAbstractCoroutineContextKey<id<FUSDKKotlinContinuationInterceptor>, FUSDKKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<FUSDKKotlinCoroutineContextKey>)baseKey safeCast:(id<FUSDKKotlinCoroutineContextElement> _Nullable (^)(id<FUSDKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol FUSDKKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol FUSDKKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface FUSDKKtor_client_coreHttpRequestData : FUSDKBase
- (instancetype)initWithUrl:(FUSDKKtor_httpUrl *)url method:(FUSDKKtor_httpHttpMethod *)method headers:(id<FUSDKKtor_httpHeaders>)headers body:(FUSDKKtor_httpOutgoingContent *)body executionContext:(id<FUSDKKotlinx_coroutines_coreJob>)executionContext attributes:(id<FUSDKKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<FUSDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<FUSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) FUSDKKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<FUSDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<FUSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) FUSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) FUSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface FUSDKKtor_client_coreHttpResponseData : FUSDKBase
- (instancetype)initWithStatusCode:(FUSDKKtor_httpHttpStatusCode *)statusCode requestTime:(FUSDKKtor_utilsGMTDate *)requestTime headers:(id<FUSDKKtor_httpHeaders>)headers version:(FUSDKKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<FUSDKKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<FUSDKKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<FUSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) FUSDKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) FUSDKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) FUSDKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface FUSDKKtor_client_coreHttpClientCallCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol FUSDKKtor_client_coreHttpRequest <FUSDKKtor_httpHttpMessage, FUSDKKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<FUSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) FUSDKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) FUSDKKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) FUSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) FUSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol FUSDKKotlinx_io_coreRawSource <FUSDKKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(FUSDKKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol FUSDKKotlinx_io_coreSource <FUSDKKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<FUSDKKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(FUSDKKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<FUSDKKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<FUSDKKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) FUSDKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface FUSDKKtor_utilsWeekDay : FUSDKKotlinEnum<FUSDKKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) FUSDKKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) FUSDKKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) FUSDKKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) FUSDKKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) FUSDKKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) FUSDKKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (FUSDKKotlinArray<FUSDKKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface FUSDKKtor_utilsMonth : FUSDKKotlinEnum<FUSDKKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) FUSDKKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) FUSDKKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) FUSDKKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) FUSDKKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) FUSDKKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) FUSDKKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) FUSDKKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) FUSDKKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) FUSDKKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) FUSDKKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) FUSDKKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) FUSDKKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (FUSDKKotlinArray<FUSDKKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface FUSDKKtor_utilsGMTDateCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) FUSDKKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface FUSDKKtor_httpHttpStatusCodeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (FUSDKKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) FUSDKKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<FUSDKKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface FUSDKKtor_httpHttpProtocolVersionCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (FUSDKKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (FUSDKKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) FUSDKKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) FUSDKKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) FUSDKKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) FUSDKKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) FUSDKKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface FUSDKKotlinKTypeProjection : FUSDKBase
- (instancetype)initWithVariance:(FUSDKKotlinKVariance * _Nullable)variance type:(id<FUSDKKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKKotlinKTypeProjection *)doCopyVariance:(FUSDKKotlinKVariance * _Nullable)variance type:(id<FUSDKKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<FUSDKKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) FUSDKKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface FUSDKKtor_client_coreProxyConfig : FUSDKBase
- (instancetype)initWithUrl:(FUSDKKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface FUSDKKtor_eventsEventDefinition<T> : FUSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol FUSDKKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface FUSDKKtor_utilsPipelinePhase : FUSDKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol FUSDKKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol FUSDKKotlinSuspendFunction2 <FUSDKKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface FUSDKKtor_client_coreHttpReceivePipelinePhases : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface FUSDKKtor_client_coreHttpRequestPipelinePhases : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol FUSDKKtor_httpHttpMessageBuilder
@required
@property (readonly) FUSDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface FUSDKKtor_client_coreHttpRequestBuilder : FUSDKBase <FUSDKKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) FUSDKKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<FUSDKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<FUSDKKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<FUSDKKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (FUSDKKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(FUSDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (FUSDKKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(FUSDKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(FUSDKKtor_httpURLBuilder *, FUSDKKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<FUSDKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property FUSDKKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<FUSDKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) FUSDKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property FUSDKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) FUSDKKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface FUSDKKtor_client_coreHttpResponsePipelinePhases : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface FUSDKKtor_client_coreHttpResponseContainer : FUSDKBase
- (instancetype)initWithExpectedType:(FUSDKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (FUSDKKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(FUSDKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) FUSDKKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface FUSDKKtor_client_coreHttpSendPipelinePhases : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) FUSDKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol FUSDKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<FUSDKKotlinKClass>)kClass provider:(id<FUSDKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<FUSDKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<FUSDKKotlinKClass>)kClass serializer:(id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<FUSDKKotlinKClass>)baseClass actualClass:(id<FUSDKKotlinKClass>)actualClass actualSerializer:(id<FUSDKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<FUSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<FUSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<FUSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<FUSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<FUSDKKotlinKClass>)baseClass defaultSerializerProvider:(id<FUSDKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonClassDiscriminatorMode")))
@interface FUSDKKotlinx_serialization_jsonClassDiscriminatorMode : FUSDKKotlinEnum<FUSDKKotlinx_serialization_jsonClassDiscriminatorMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKKotlinx_serialization_jsonClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) FUSDKKotlinx_serialization_jsonClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) FUSDKKotlinx_serialization_jsonClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
+ (FUSDKKotlinArray<FUSDKKotlinx_serialization_jsonClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKKotlinx_serialization_jsonClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol FUSDKKtor_ioJvmSerializable
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface FUSDKKtor_httpUrl : FUSDKBase <FUSDKKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) FUSDKKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<FUSDKKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) FUSDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) FUSDKKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface FUSDKKtor_httpHttpMethod : FUSDKBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface FUSDKKtor_httpOutgoingContent : FUSDKBase
- (id _Nullable)getPropertyKey:(FUSDKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(FUSDKKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<FUSDKKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) FUSDKLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) FUSDKKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<FUSDKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) FUSDKKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol FUSDKKotlinx_coroutines_coreJob <FUSDKKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<FUSDKKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<FUSDKKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause_:(FUSDKKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (FUSDKKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<FUSDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(FUSDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<FUSDKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(FUSDKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<FUSDKKotlinx_coroutines_coreJob>)plusOther_:(id<FUSDKKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<FUSDKKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<FUSDKKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<FUSDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface FUSDKKotlinByteArray : FUSDKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(FUSDKByte *(^)(FUSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (FUSDKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol FUSDKKotlinx_io_coreRawSink <FUSDKKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(FUSDKKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol FUSDKKotlinx_io_coreSink <FUSDKKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<FUSDKKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<FUSDKKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(FUSDKKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) FUSDKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface FUSDKKotlinx_io_coreBuffer : FUSDKBase <FUSDKKotlinx_io_coreSource, FUSDKKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (FUSDKKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(FUSDKKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<FUSDKKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(FUSDKKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(FUSDKKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<FUSDKKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<FUSDKKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<FUSDKKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(FUSDKKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<FUSDKKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(FUSDKKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) FUSDKKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface FUSDKKtor_utilsWeekDayCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (FUSDKKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (FUSDKKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface FUSDKKtor_utilsMonthCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (FUSDKKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (FUSDKKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface FUSDKKotlinKVariance : FUSDKKotlinEnum<FUSDKKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) FUSDKKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) FUSDKKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) FUSDKKotlinKVariance *out __attribute__((swift_name("out")));
+ (FUSDKKotlinArray<FUSDKKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<FUSDKKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface FUSDKKotlinKTypeProjectionCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (FUSDKKotlinKTypeProjection *)contravariantType:(id<FUSDKKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (FUSDKKotlinKTypeProjection *)covariantType:(id<FUSDKKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (FUSDKKotlinKTypeProjection *)invariantType:(id<FUSDKKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) FUSDKKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol FUSDKKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<FUSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<FUSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<FUSDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<FUSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface FUSDKKtor_utilsStringValuesBuilderImpl : FUSDKBase <FUSDKKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<FUSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<FUSDKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<FUSDKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<FUSDKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) FUSDKMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface FUSDKKtor_httpHeadersBuilder : FUSDKKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<FUSDKKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface FUSDKKtor_client_coreHttpRequestBuilderCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface FUSDKKtor_httpURLBuilder : FUSDKBase
- (instancetype)initWithProtocol:(FUSDKKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<FUSDKKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<FUSDKKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<FUSDKKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property FUSDKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property FUSDKKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface FUSDKKtor_httpUrlCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<FUSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol FUSDKKtor_httpParameters <FUSDKKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface FUSDKKtor_httpURLProtocol : FUSDKBase <FUSDKKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (FUSDKKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface FUSDKKtor_httpHttpMethodCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (FUSDKKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<FUSDKKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) FUSDKKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) FUSDKKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) FUSDKKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) FUSDKKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) FUSDKKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) FUSDKKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) FUSDKKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface FUSDKKtor_httpHeaderValueWithParameters : FUSDKBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<FUSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) FUSDKKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<FUSDKKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface FUSDKKtor_httpContentType : FUSDKKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<FUSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<FUSDKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) FUSDKKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(FUSDKKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (FUSDKKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (FUSDKKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol FUSDKKotlinx_coroutines_coreChildHandle <FUSDKKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(FUSDKKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<FUSDKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol FUSDKKotlinx_coroutines_coreChildJob <FUSDKKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<FUSDKKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol FUSDKKotlinSequence
@required
- (id<FUSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol FUSDKKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) FUSDKKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<FUSDKKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(FUSDKKotlinThrowable *, id _Nullable, id<FUSDKKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<FUSDKKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol FUSDKKotlinx_coroutines_coreSelectClause0 <FUSDKKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface FUSDKKotlinByteIterator : FUSDKBase <FUSDKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (FUSDKByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface FUSDKKtor_httpURLBuilderCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol FUSDKKtor_httpParametersBuilder <FUSDKKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface FUSDKKtor_httpURLProtocolCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (FUSDKKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) FUSDKKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) FUSDKKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) FUSDKKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) FUSDKKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) FUSDKKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, FUSDKKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface FUSDKKtor_httpHeaderValueParam : FUSDKBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (FUSDKKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface FUSDKKtor_httpHeaderValueWithParametersCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<FUSDKKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface FUSDKKtor_httpContentTypeCompanion : FUSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) FUSDKKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (FUSDKKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) FUSDKKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol FUSDKKotlinx_coroutines_coreParentJob <FUSDKKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (FUSDKKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol FUSDKKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<FUSDKKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<FUSDKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
