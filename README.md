# Fans United SDK for iOS Swift Documentation

## Overview

The FansUnitedSDK is a Kotlin Multiplatform Mobile SDK that provides comprehensive access to the Fans United platform APIs. This documentation covers Swift/iOS integration patterns, initialization, and usage examples.

## Table of Contents

1. [Installation](#installation)
2. [SDK Configuration](#sdk-configuration)
3. [Authentication](#authentication)
4. [Core Modules](#core-modules)
5. [Football Operations](#football-operations)
6. [Profile Operations](#profile-operations)
7. [Predictor Operations](#predictor-operations)
8. [Match Quiz Operations](#match-quiz-operations)
9. [Top X Operations](#top-x-operations)
10. [Loyalty Operations](#loyalty-operations)
11. [Activity Operations](#activity-operations)
12. [Discussions Operations](#discussions-operations)
13. [Best Practices](#best-practices)


## Features

- **Profile Operations** - User profile management
- **Football Operations** - Football-related data and functionality
- **Predictor Operations** - Match prediction features
- **Top X Operations** - Top X games prediction featurees
- **Match Quiz Operations** - Match Quiz games prediction features
- **Loyalty Operations** - Loyalty and leaderboards featurees
- **Activity Operations** - User activity tracking and management
- **Discussion Operations** - Community discussion features

## Installation

### Requirements

- iOS 12.0+
- Xcode 12.0+
- Swift 5.3+

### CocoaPods

Add the following line to your `Podfile`:

```ruby
pod 'FansUnitedSDK'
```

or for specific version:

```ruby
pod 'FansUnitedSDK', '~> 1.1.0'
```

Then run:

```bash
pod install
```


## SDK Configuration

### Required Configuration Parameters

The SDK requires the following configuration parameters:

```swift
import FansUnitedSDK

let config = FUSDKConfig(
    apiKey: String,           // Your API key
    clientId: String,         // Your client identifier
    lang: String,            // Language code (e.g., "en")
    idSchema: IDSchema,      // ID schema for data mapping
    environment: String,     // "production" or "staging"
    authProvider: IFUSDKTokenProvider // Authentication provider
)
```

### Available ID Schemas

```swift
IDSchema.native         // Fans United Default
IDSchema.enetpulse     // Enetpulse data provider
IDSchema.sportradar    // Sportradar data provider
IDSchema.sportal365    // Sportal365 data provider
IDSchema.apifootball   // API Football data provider
```

## Authentication

### Token Provider Implementation

Implement the `IFUSDKTokenProvider` protocol:

```swift
class AuthProvider: IFUSDKTokenProvider {
    private let authToken: String

    func getToken() async throws -> String? {
        // Return your authentication token
        return authToken
    }

    func logout() async throws {
        // Handle logout logic
    }
}
```

### SDK Initialization

```swift
// Create token provider
let authProvider = AuthProvider(token: "your-auth-token")

// Configure SDK
let config = FUSDKConfig(
    apiKey: "your-api-key",
    clientId: "your-client-id",
    lang: "en",
    idSchema: IDSchema.apifootball,
    environment: "production",
    authProvider: authProvider
)

// Initialize SDK
let sdk = FansUnitedSDK.Companion.shared.doInit(config: config)
```

## Core Modules

The SDK provides access to several modules through async methods:

### Available Modules

```swift
// Football operations
let footballManager = try await sdk.football()

// User profile operations
let profileManager = try await sdk.profile()

// Prediction operations
let predictorManager = try await sdk.predictor()

// Match quiz operations
let matchQuizManager = try await sdk.matchQuiz()

// Top X leaderboards
let topXManager = try await sdk.topX()

// Loyalty program
let loyaltyManager = try await sdk.loyalty()

// Activity tracking
let activityManager = try await sdk.activity()

// Discussions
let discussionsManager = try await sdk.discussions()
```

## Football Operations

### Core Data Models

#### Match Model (`MatchBasicModel`)

```swift
// Key properties
match.id: String                           // Unique match identifier
match.homeTeam: TeamBasicModel             // Home team information
match.awayTeam: TeamBasicModel             // Away team information
match.competition: CompetitionBasicModel?  // Competition/league info
match.kickoffAt: Kotlinx_datetimeInstant?  // Match kickoff time
match.status: MatchStatus?                 // Match status
match.scores: MatchScores?                 // Match scores
```

#### Team Model (`TeamBasicModel`)

```swift
team.id: String                    // Unique team identifier
team.name: String                  // Team name
team.fullName: String?             // Full team name
team.shortName: String?            // Short team name
team.country: FootballCountryModel? // Team country
team.assets: AssetsModel?          // Team logos/images
```

#### Competition Model (`CompetitionBasicModel`)

```swift
competition.id: String                     // Competition identifier
competition.name: String                   // Competition name
competition.country: FootballCountryModel? // Competition country
competition.type: CompetitionType?         // Competition type
```

### Football Operations

#### Get Matches

```swift
do {
    // Create filters (optional)
    let filters = MatchFilters(
        countryIds: nil,
        competitionIds: nil,
        matchIds: nil,
        status: nil,
        teamIds: nil,
        fromDate: todayInstant,
        toDate: nil,
        limit: 50,
        page: nil,
        sortField: nil,
        sortOrder: nil
    )

    // Fetch matches
    let matches = try await sdk.football().getMatches(filters: filters, disableCache: false)?.data

    if let matchArray = matches as? [MatchBasicModel] {
        print("Loaded \(matchArray.count) matches")
        // Handle matches
    }

} catch {
    print("Error fetching matches: \(error.localizedDescription)")
}
```

#### Get Teams

```swift
do {
    let teams = try await sdk.football().getTeams(filters: nil, disableCache: false)?.data
    if let teamArray = teams as? [TeamBasicModel] {
        // Handle teams
    }
} catch {
    print("Error fetching teams: \(error)")
}
```

#### Get Competitions

```swift
do {
    let competitions = try await sdk.football().getCompetitions(filters: nil, disableCache: false)
    // Handle competitions array
} catch {
    print("Error fetching competitions: \(error)")
}
```

#### Get Players

```swift
do {
    let players = try await sdk.football().getPlayers(filters: nil, disableCache: false)?.data
    if let playerArray = players as? [PlayerBasicModel] {
        // Handle players
    }
} catch {
    print("Error fetching players: \(error)")
}
```

#### Get Countries

```swift
do {
    let countries = try await sdk.football().getCountries(disableCache: false)
    for country in countries {
        print("Country: \(country.name)")
    }
} catch {
    print("Error fetching countries: \(error)")
}
```

#### Get Match by ID

```swift
do {
    let match = try await sdk.football().getMatchById(id: "fb:m:123", disableCache: false)
    print("Match: \(match.homeTeam.name) vs \(match.awayTeam.name)")
} catch {
    print("Error fetching match: \(error)")
}
```

#### Get Team by ID

```swift
do {
    let team = try await sdk.football().getTeamById(id: "fb:t:123", disableCache: false)
    print("Team: \(team.name)")
    print("Country: \(team.country?.name ?? "Unknown")")
} catch {
    print("Error fetching team: \(error)")
}
```

#### Get Player by ID

```swift
do {
    let player = try await sdk.football().getPlayerById(id: "fb:p:123", disableCache: false)
    print("Player: \(player.name)")
    print("Position: \(player.position?.name ?? "Unknown")")
} catch {
    print("Error fetching player: \(error)")
}
```

#### Get Competition by ID

```swift
do {
    let competition = try await sdk.football().getCompetitionById(id: "competition123", disableCache: false)
    print("Competition: \(competition.name)")
    print("Country: \(competition.country?.name ?? "Unknown")")
} catch {
    print("Error fetching competition: \(error)")
}
```

#### Get Next Match for Player

```swift
do {
    let nextMatch = try await sdk.football().getNextMatchForPlayer(id: "fb:p:123", disableCache: false)
    if let match = nextMatch {
        print("Next match: \(match.homeTeam.name) vs \(match.awayTeam.name)")
    }
} catch {
    print("Error fetching next match: \(error)")
}
```

#### Get Next Match for Team

```swift
do {
    let nextMatch = try await sdk.football().getNextMatchForTeam(id: "fb:t:123", disableCache: false)
    if let match = nextMatch {
        print("Next match: \(match.homeTeam.name) vs \(match.awayTeam.name)")
    }
} catch {
    print("Error fetching next match: \(error)")
}
```

#### Get Previous Match for Player

```swift
do {
    let prevMatch = try await sdk.football().getPrevMatchForPlayer(id: "fb:p:123", disableCache: false)
    if let match = prevMatch {
        print("Previous match: \(match.homeTeam.name) vs \(match.awayTeam.name)")
    }
} catch {
    print("Error fetching previous match: \(error)")
}
```

#### Get Previous Match for Team

```swift
do {
    let prevMatch = try await sdk.football().getPrevMatchForTeam(id: "fb:t:123", disableCache: false)
    if let match = prevMatch {
        print("Previous match: \(match.homeTeam.name) vs \(match.awayTeam.name)")
    }
} catch {
    print("Error fetching previous match: \(error)")
}
```

#### Get Team Form

```swift
do {
    let filters = TeamFormFilters(
        limit: 10,
        direction: TeamFormDirection.home
    )

    let teamForm = try await sdk.football().getTeamForm(
        teamId: "fb:t:123",
        filters: filters,
        disableCache: false
    )

    print("Team form: \(teamForm.matches?.count ?? 0) matches")
} catch {
    print("Error fetching team form: \(error)")
}
```

#### Get Top Teams

```swift
do {
    let topTeams = try await sdk.football().getTopTeams(disableCache: false)
    for team in topTeams {
        print("Top team: \(team.name)")
    }
} catch {
    print("Error fetching top teams: \(error)")
}
```

#### Get Top Players

```swift
do {
    let topPlayers = try await sdk.football().getTopPlayers(disableCache: false)
    for player in topPlayers {
        print("Top player: \(player.name)")
    }
} catch {
    print("Error fetching top players: \(error)")
}
```

#### Get Top Competitions

```swift
do {
    let topCompetitions = try await sdk.football().getTopCompetitions(disableCache: false)
    for competition in topCompetitions {
        print("Top competition: \(competition.name)")
    }
} catch {
    print("Error fetching top competitions: \(error)")
}
```

## Profile Operations

### Core Data Models

#### Profile Model (`ProfileModel`)

```swift
profile.id: String                         // Unique profile identifier
profile.name: String?                      // User's display name
profile.nickname: String?                  // User's nickname
profile.email: String?                     // User's email address
profile.gender: Gender?                    // User's gender
profile.birthDate: Kotlinx_datetimeInstant? // User's birth date
profile.country: ProfileCountry?           // User's country
profile.interests: [Interest]?             // User's interests
profile.phoneNumber: String?               // User's phone number
profile.phoneCountryCode: String?          // Phone country code
```

### Profile Operations

#### Get Current User Profile

```swift
do {
    let profile = try await sdk.profile().getProfile()
    print("User: \(profile.name ?? "Unknown")")
} catch {
    print("Error fetching profile: \(error)")
}
```

#### Update Own Profile

```swift
do {
    // Get the current user's mutable profile
    let profile = try await sdk.profile().getOwn()

    // Create a date for birth date (January 1, 1990)
    let birthDate = Calendar.current.date(from: DateComponents(year: 1990, month: 1, day: 1))!
    let birthInstant = Kotlinx_datetimeInstant.companion.fromEpochMilliseconds(epochMilliseconds: Int64(birthDate.timeIntervalSince1970 * 1000))

    // Create Interest objects
    let teamInterest = Interest(
        id: "fb:t:123",
        source: InterestSource.football,
        favourite: false,
        type: Type.team
    )

    let playerInterest = Interest(
        id: "player456",
        source: InterestSource.football,
        favourite: false,
        type: Type.player
    )

    // Update profile using method chaining
    let updatedProfile = try await profile
        .setBirthDate(birthDate: birthInstant)
        .setGender(gender: Gender.male)
        .setName(name: "John Doe")
        .setNickname(nickname: "johndoe")
        .setEmail(email: "john@example.com")
        .setCountry(countryId: "US")
        .setPhoneCountryCode(phoneCountryCode: "+1")
        .addInterest(interest: teamInterest)
        .addInterest(interest: playerInterest)
        .update()

    print("Profile updated successfully")
} catch {
    print("Error updating profile: \(error)")
}
```

#### Get User Badges

```swift
do {
    let badges = try await sdk.profile().getBadges(userId: "user123")
    print("User has \(badges.data?.count ?? 0) badges")
} catch {
    print("Error fetching badges: \(error)")
}
```

#### Follow/Unfollow Users

```swift
do {
    // Follow a user
    let followRequest = RequestFollow(profileId: "user123")
    try await sdk.profile().followUser(requestFollow: followRequest)

    // Check follow status
    let followStatus = try await sdk.profile().checkFollowStatus(profileIds: ["user123"])
    print("Follow status: \(followStatus)")
} catch {
    print("Error with follow operations: \(error)")
}
```

#### Get Profile by ID

```swift
do {
    let profile = try await sdk.profile().getById(userId: "user123", disableCache: false)
    print("User: \(profile.name ?? "Unknown")")
} catch {
    print("Error fetching profile: \(error)")
}
```

#### Get Profiles by IDs

```swift
do {
    let userIds = ["user1", "user2", "user3"]
    let profiles = try await sdk.profile().getByIds(userIds: userIds, search: nil, disableCache: false)

    if let profileArray = profiles.data {
        print("Found \(profileArray.count) profiles")
    }
} catch {
    print("Error fetching profiles: \(error)")
}
```

#### Get Own Profile

```swift
do {
    let profile = try await sdk.profile().getOwn()
    print("My profile: \(profile.getInfo().name ?? "Unknown")")
} catch {
    print("Error fetching own profile: \(error)")
}
```

#### Get Own Badges

```swift
do {
    let badges = try await sdk.profile().getOwnBadges()
    print("My badges: \(badges.data?.count ?? 0)")
} catch {
    print("Error fetching own badges: \(error)")
}
```

#### Get Own Stats

```swift
do {
    let stats = try await sdk.profile().getOwnStats()
    print("My stats: \(stats.totalPredictions) predictions")
} catch {
    print("Error fetching own stats: \(error)")
}
```

#### Get User Stats

```swift
do {
    let stats = try await sdk.profile().getStats(userId: "user123", disableCache: false)
    print("User stats: \(stats.totalPredictions) predictions")
} catch {
    print("Error fetching user stats: \(error)")
}
```

#### Get Profile Countries

```swift
do {
    let countries = try await sdk.profile().getCountries(disableCache: false)
    print("Available countries: \(countries.data?.count ?? 0)")
} catch {
    print("Error fetching countries: \(error)")
}
```

#### Get Followers

```swift
do {
    let filters = MainCursorFilters(limit: 20, startAfter: nil)
    let followers = try await sdk.profile().getFollowers(filters: filters)

    if let followerArray = followers.data {
        print("Followers: \(followerArray.count)")
    }
} catch {
    print("Error fetching followers: \(error)")
}
```

#### Get Following

```swift
do {
    let filters = MainCursorFilters(limit: 20, startAfter: nil)
    let following = try await sdk.profile().getFollowing(filters: filters)

    if let followingArray = following.data {
        print("Following: \(followingArray.count)")
    }
} catch {
    print("Error fetching following: \(error)")
}
```

## Predictor Operations

### Core Data Models

#### Prediction Model (`PredictionResponseModel`)

```swift
prediction.id: String                      // Unique prediction identifier
prediction.matchId: String                 // Associated match ID
prediction.market: Market                  // Prediction market
prediction.value: Any                      // Prediction value
prediction.status: PredictionStatus?       // Prediction status
prediction.points: Int32?                  // Points earned
prediction.createdAt: Kotlinx_datetimeInstant? // Creation timestamp
```

#### Market Model (`Market`)

```swift
market.id: String                          // Market identifier
market.name: String                        // Market name
market.type: String                        // Market type
```

### Predictor Operations

#### Make Football Prediction

```swift
do {
    let prediction = try await sdk.predictor().makeFootballPrediction(
        matchId: "fb:m:123",
        market: Market(id: "1x2", name: "Match Result", type: "1x2"),
        value: "1", // Home win
        playerId: nil
    )
    print("Prediction made: \(prediction.id)")
} catch {
    print("Error making prediction: \(error)")
}
```

#### Get My Predictions

```swift
do {
    let filters = PredictionsFilters(
        limit: 20,
        startAfter: nil,
        status: nil,
        type: nil,
        matchIds: nil,
        gameIds: nil
    )

    let predictions = try await sdk.predictor().getMyPredictions(filters: filters, disableCache: false)
    if let predictionArray = predictions.data {
        print("Found \(predictionArray.count) predictions")
    }
} catch {
    print("Error fetching predictions: \(error)")
}
```

#### Get Predictions for Specific Matches

```swift
do {
    let matchIds = ["match1", "match2", "match3"]
    let predictions = try await sdk.predictor().getMyPredictionsForMatches(
        matchIds: matchIds,
        filters: nil,
        disableCache: false
    )
    print("Predictions for matches: \(predictions.data?.count ?? 0)")
} catch {
    print("Error fetching match predictions: \(error)")
}
```

#### Delete Prediction

```swift
do {
    let success = try await sdk.predictor().deleteFootballPrediction(predictionId: "prediction123")
    print("Prediction deleted: \(success)")
} catch {
    print("Error deleting prediction: \(error)")
}
```

#### Get Predictor Configuration

```swift
do {
    let config = try await sdk.predictor().getConfig(disableCache: false)
    print("Predictor config loaded")
} catch {
    print("Error fetching predictor config: \(error)")
}
```

#### Get My Current Predictions

```swift
do {
    let filters = PredictionsFilters(
        limit: 20,
        startAfter: nil,
        status: [PredictionStatus.pending],
        type: nil,
        matchIds: nil,
        gameIds: nil
    )

    let predictions = try await sdk.predictor().getMyCurrentPredictions(filters: filters, disableCache: false)
    print("Current predictions: \(predictions.data?.count ?? 0)")
} catch {
    print("Error fetching current predictions: \(error)")
}
```

#### Get My Past Predictions

```swift
do {
    let filters = PredictionsFilters(
        limit: 20,
        startAfter: nil,
        status: [PredictionStatus.settled],
        type: nil,
        matchIds: nil,
        gameIds: nil
    )

    let predictions = try await sdk.predictor().getMyPastPredictions(filters: filters, disableCache: false)
    print("Past predictions: \(predictions.data?.count ?? 0)")
} catch {
    print("Error fetching past predictions: \(error)")
}
```

#### Get Prediction by ID

```swift
do {
    let prediction = try await sdk.predictor().getPredictionById(predictionId: "prediction123")
    print("Prediction: \(prediction.market.name) - \(prediction.value)")
} catch {
    print("Error fetching prediction: \(error)")
}
```

#### Get Predictions by IDs

```swift
do {
    let predictionIds = ["pred1", "pred2", "pred3"]
    let predictions = try await sdk.predictor().getPredictionsByIds(predictionIds: predictionIds)

    if let predictionArray = predictions?.data {
        print("Found \(predictionArray.count) predictions")
    }
} catch {
    print("Error fetching predictions: \(error)")
}
```

#### Get User Predictions

```swift
do {
    let filters = PredictionsFilters(
        limit: 20,
        startAfter: nil,
        status: nil,
        type: nil,
        matchIds: nil,
        gameIds: nil
    )

    let predictions = try await sdk.predictor().getUserPredictions(
        userId: "user123",
        filters: filters,
        disableCache: false
    )
    print("User predictions: \(predictions.data?.count ?? 0)")
} catch {
    print("Error fetching user predictions: \(error)")
}
```

#### Get User Current Predictions

```swift
do {
    let predictions = try await sdk.predictor().getUserCurrentPredictions(
        userId: "user123",
        filters: nil,
        disableCache: false
    )
    print("User current predictions: \(predictions.data?.count ?? 0)")
} catch {
    print("Error fetching user current predictions: \(error)")
}
```

#### Get User Past Predictions

```swift
do {
    let predictions = try await sdk.predictor().getUserPastPredictions(
        userId: "user123",
        filters: nil,
        disableCache: false
    )
    print("User past predictions: \(predictions.data?.count ?? 0)")
} catch {
    print("Error fetching user past predictions: \(error)")
}
```

#### Get User Predictions for Matches

```swift
do {
    let matchIds = ["match1", "match2", "match3"]
    let predictions = try await sdk.predictor().getUserPredictionsForMatches(
        userId: "user123",
        matchIds: matchIds,
        filters: nil,
        disableCache: false
    )
    print("User match predictions: \(predictions.data?.count ?? 0)")
} catch {
    print("Error fetching user match predictions: \(error)")
}
```

#### Get Match Summary

```swift
do {
    let summary = try await sdk.predictor().getMatchSummary(matchId: "fb:m:123", disableCache: false)
    print("Match summary: \(summary.totalPredictions) total predictions")
} catch {
    print("Error fetching match summary: \(error)")
}
```

#### Get Market Summary

```swift
do {
    let market = Market(id: "1x2", name: "Match Result", type: "1x2")
    let summary = try await sdk.predictor().getMarketSummary(
        matchId: "fb:m:123",
        market: market,
        playerId: nil,
        disableCache: false
    )
    print("Market summary loaded")
} catch {
    print("Error fetching market summary: \(error)")
}
```

#### Get Match Markets Results

```swift
do {
    let results = try await sdk.predictor().getMatchMarketsResults(matchId: "fb:m:123")
    print("Match markets results loaded")
} catch {
    print("Error fetching match markets results: \(error)")
}
```

## Match Quiz Operations

### Core Data Models

#### Match Quiz Game Model (`GameMatchQuizListModel`)

```swift
game.id: String                            // Game identifier
game.name: String                          // Game name
game.status: GameStatus?                   // Game status
game.startDate: Kotlinx_datetimeInstant?   // Game start date
game.endDate: Kotlinx_datetimeInstant?     // Game end date
game.fixtures: [FixturesMatchQuizModel]?   // Game fixtures
```

#### Match Quiz Request Model (`MatchQuizRequestModel`)

```swift
request.gameId: String                     // Game identifier
request.predictions: [Any]                 // Quiz predictions
```

### Match Quiz Operations

#### Get My Game Editions

```swift
do {
    let filters = MainCursorFilters(
        limit: 20,
        startAfter: nil
    )

    let games = try await sdk.matchQuiz().getMyGameEditions(filters: filters, disableCache: false)
    if let gameArray = games.data {
        print("Found \(gameArray.count) match quiz games")
    }
} catch {
    print("Error fetching match quiz games: \(error)")
}
```

#### Get User Game Editions

```swift
do {
    let games = try await sdk.matchQuiz().getUserGameEditions(
        userId: "user123",
        filters: nil,
        disableCache: false
    )
    print("User's match quiz games: \(games.data?.count ?? 0)")
} catch {
    print("Error fetching user's match quiz games: \(error)")
}
```

#### Play Match Quiz

```swift
do {
    let request = MatchQuizRequestModel(
        gameId: "game123",
        predictions: [/* quiz answers */]
    )

    let response = try await sdk.matchQuiz().play(request: request)
    print("Match quiz played: \(response.id)")
} catch {
    print("Error playing match quiz: \(error)")
}
```

## Top X Operations

### Core Data Models

#### Top X Game Model (`GameTopXListModel`)

```swift
game.id: String                            // Game identifier
game.name: String                          // Game name
game.status: GameStatus?                   // Game status
game.startDate: Kotlinx_datetimeInstant?   // Game start date
game.endDate: Kotlinx_datetimeInstant?     // Game end date
game.fixtures: [FixturesTopXModel]?        // Game fixtures
```

#### Top X Prediction Request Model (`TopXPredictionRequestModel`)

```swift
request.gameId: String                     // Game identifier
request.predictions: [Any]                 // Top X predictions
```

### Top X Operations

#### Get My Game Editions

```swift
do {
    let filters = MainCursorFilters(
        limit: 20,
        startAfter: nil
    )

    let games = try await sdk.topX().getMyGameEditions(filters: filters, disableCache: false)
    if let gameArray = games.data {
        print("Found \(gameArray.count) Top X games")
    }
} catch {
    print("Error fetching Top X games: \(error)")
}
```

#### Get User Game Editions

```swift
do {
    let games = try await sdk.topX().getUserGameEditions(
        userId: "user123",
        filters: nil,
        disableCache: false
    )
    print("User's Top X games: \(games.data?.count ?? 0)")
} catch {
    print("Error fetching user's Top X games: \(error)")
}
```

#### Play Top X Game

```swift
do {
    let request = TopXPredictionRequestModel(
        gameId: "game123",
        predictions: [/* top X selections */]
    )

    let response = try await sdk.topX().play(request: request)
    print("Top X game played: \(response.id)")
} catch {
    print("Error playing Top X game: \(error)")
}
```

## Loyalty Operations

### Core Data Models

#### Badges Model (`BadgesModel`)

```swift
badges.badges: [BadgeModel]?               // Available badges
badges.userBadges: [String]?               // User's earned badges
```

#### Badge Model (`BadgeModel`)

```swift
badge.id: String                           // Badge identifier
badge.name: String                         // Badge name
badge.description: String?                 // Badge description
badge.asset: BadgeAsset?                   // Badge visual assets
badge.requirements: [BadgeConfigRequirement]? // Badge requirements
```

#### Loyalty Configuration (`LoyaltyConfig`)

```swift
config.actions: [LoyaltyConfigAction]?     // Available loyalty actions
config.points: Points?                     // Points configuration
config.tiers: [Tier]?                      // Loyalty tiers
```

### Loyalty Operations

#### Get Client Badges

```swift
do {
    let badges = try await sdk.loyalty().getClientBadges(disableCache: false)
    print("Available badges: \(badges.badges?.count ?? 0)")
    print("User badges: \(badges.userBadges?.count ?? 0)")
} catch {
    print("Error fetching badges: \(error)")
}
```

#### Get Loyalty Configuration

```swift
do {
    let config = try await sdk.loyalty().getConfig(disableCache: false)
    print("Loyalty config loaded with \(config.actions?.count ?? 0) actions")
} catch {
    print("Error fetching loyalty config: \(error)")
}
```

#### Get Leaderboard

```swift
do {
    let filters = LeaderboardFilters(
        limit: 50,
        page: 1
    )

    let leaderboard = try await sdk.loyalty().getLeaderboard(
        templateId: "template123",
        filters: filters,
        disableCache: false
    )

    if let leaders = leaderboard.data {
        print("Leaderboard has \(leaders.count) entries")
    }
} catch {
    print("Error fetching leaderboard: \(error)")
}
```

#### Get Leaderboard for Game

```swift
do {
    let leaderboard = try await sdk.loyalty().getLeaderboardForGame(
        gameId: "game123",
        limit: 20,
        page: 1,
        disableCache: false
    )
    print("Game leaderboard: \(leaderboard.data?.count ?? 0) entries")
} catch {
    print("Error fetching game leaderboard: \(error)")
}
```

#### Get Leaderboard for League

```swift
do {
    let filters = LeagueLeaderboardFilters(
        limit: 30,
        page: 1
    )

    let leaderboard = try await sdk.loyalty().getLeaderboardForLeague(
        leagueId: "league123",
        filters: filters
    )
    print("League leaderboard: \(leaderboard.data?.count ?? 0) entries")
} catch {
    print("Error fetching league leaderboard: \(error)")
}
```

#### Get Entities Follows

```swift
do {
    let filters = EntitiesFollowsFilters(
        competitions: ["fb:c:1", "fb:c:2"],
        teams: ["fb:t:1", "fb:t:2"],
        players: ["fb:p:123", "fb:p:456"]
    )

    let follows = try await sdk.loyalty().getEntitiesFollows(filters: filters, disableCache: false)
    print("Entities follows loaded")
} catch {
    print("Error fetching entities follows: \(error)")
}
```

#### Get Highest Success Rate

```swift
do {
    let filters = HighestSuccessRateFilters(
        fromDate: nil,
        toDate: nil,
        usersCount: 10,
        minimumPredictions: 5,
        market: nil
    )

    let successRates = try await sdk.loyalty().getHighestSuccessRate(filters: filters, disableCache: false)

    if let rates = successRates.data {
        print("Top success rates: \(rates.count) users")
    }
} catch {
    print("Error fetching highest success rate: \(error)")
}
```

#### Get Own Rankings

```swift
do {
    let filters = UserRankingFilters(
        rankType: RankType.points,
        gameType: GameType.predictor,
        typeIds: nil,
        limit: 20,
        page: 1,
        sortOrder: SortOrder.desc
    )

    let rankings = try await sdk.loyalty().getOwnRankings(filters: filters, disableCache: false)
    print("Own rankings: \(rankings.data?.count ?? 0)")
} catch {
    print("Error fetching own rankings: \(error)")
}
```

#### Get User Rankings

```swift
do {
    let filters = UserRankingFilters(
        rankType: RankType.points,
        gameType: GameType.predictor,
        typeIds: nil,
        limit: 20,
        page: 1,
        sortOrder: SortOrder.desc
    )

    let rankings = try await sdk.loyalty().getUserRankings(
        userId: "user123",
        filters: filters,
        disableCache: false
    )
    print("User rankings: \(rankings.data?.count ?? 0)")
} catch {
    print("Error fetching user rankings: \(error)")
}
```

#### Get Template by ID

```swift
do {
    let template = try await sdk.loyalty().getTemplateById(templateId: "template123", disableCache: false)

    if let templateData = template.data {
        print("Template: \(templateData.name)")
    }
} catch {
    print("Error fetching template: \(error)")
}
```

#### Get Templates

```swift
do {
    let filters = TemplateFilters(
        flags: nil,
        status: TemplateStatus.active,
        type: TemplateType.leaderboard
    )

    let templates = try await sdk.loyalty().getTemplates(filters: filters, disableCache: false)

    if let templateArray = templates.data {
        print("Templates: \(templateArray.count)")
    }
} catch {
    print("Error fetching templates: \(error)")
}
```

#### Get Template Matches

```swift
do {
    let matches = try await sdk.loyalty().getTemplateMatches(
        templateId: "template123",
        groupId: nil,
        disableCache: false
    )

    if let matchArray = matches.data {
        print("Template matches: \(matchArray.count)")
    }
} catch {
    print("Error fetching template matches: \(error)")
}
```

#### Get Template Winners

```swift
do {
    let winners = try await sdk.loyalty().getTemplateWinners(templateId: "template123", disableCache: false)

    if let winnersData = winners.data {
        print("Template winners: \(winnersData.winners?.count ?? 0)")
    }
} catch {
    print("Error fetching template winners: \(error)")
}
```

## Activity Operations

### Core Data Models

#### Activity Action (`ActivityAction`)

```swift
action.id: String                          // Action identifier
action.type: ActionsEnum                   // Action type
action.timestamp: Kotlinx_datetimeInstant  // Action timestamp
action.context: ActivityContext?           // Action context
action.content: Content?                   // Action content
```

#### Activity Response (`ActivityResponseBody`)

```swift
response.id: String                        // Activity identifier
response.points: Int32?                    // Points earned
response.status: String?                   // Activity status
```

### Activity Operations

#### Add Activity

```swift
do {
    let tags = [Tag(id: "tag1", name: "Football")]
    let content = Content(/* content data */)
    let campaign = Campaign(/* campaign data */)

    let response = try await sdk.activity().add(
        action: ActionsEnum.view,
        tags: tags,
        content: content,
        campaign: campaign
    )
    print("Activity added: \(response.id)")
} catch {
    print("Error adding activity: \(error)")
}
```

#### Add Click Ad Activity

```swift
do {
    let tags = [Tag(id: "ad1", name: "Advertisement")]

    let response = try await sdk.activity().addClickAd(
        tags: tags,
        content: nil,
        campaign: nil
    )
    print("Click ad activity added: \(response.id)")
} catch {
    print("Error adding click ad activity: \(error)")
}
```

#### Get Activities for User

```swift
do {
    let filters = UserActivityFilters(
        action: ActionsEnum.view,
        limit: 20,
        page: 1
    )

    let activities = try await sdk.activity().getActivitiesForUser(
        userId: "user123",
        filters: filters,
        disableCache: false
    )
    print("User activities fetched")
} catch {
    print("Error fetching user activities: \(error)")
}
```

#### Get Own Activities

```swift
do {
    let activities = try await sdk.activity().getOwnActivities(
        action: ActionsEnum.prediction,
        limit: 50,
        page: 1,
        disableCache: false
    )
    print("Own activities fetched")
} catch {
    print("Error fetching own activities: \(error)")
}
```

## Discussions API

### Core Data Models

#### Discussion Model (`Discussion`)

```swift
discussion.id: String                      // Discussion identifier
discussion.title: String                   // Discussion title
discussion.description: String?            // Discussion description
discussion.type: DiscussionType?           // Discussion type
discussion.status: DiscussionStatus?       // Discussion status
discussion.context: DiscussionContext?     // Discussion context
discussion.stats: DiscussionStats?         // Discussion statistics
discussion.createdAt: Kotlinx_datetimeInstant? // Creation timestamp
```

#### Discussion Comment (`DiscussionComment`)

```swift
comment.id: String                         // Comment identifier
comment.content: String                    // Comment content
comment.authorId: String                   // Author identifier
comment.discussionId: String               // Discussion identifier
comment.createdAt: Kotlinx_datetimeInstant? // Creation timestamp
comment.reactions: [Reaction]?             // Comment reactions
```

#### Create Post Model (`CreatePost`)

```swift
post.content: String                       // Post content
post.parentId: String?                     // Parent post ID (for replies)
post.mentions: [String]?                   // Mentioned user IDs
```

### Discussions Operations

#### Create Post

```swift
do {
    let createPost = CreatePost(
        content: "This is my comment on the match!",
        parentId: nil, // nil for top-level post, set for replies
        mentions: nil
    )

    let response = try await sdk.discussions().createPost(
        discussionId: "discussion123",
        createPost: createPost
    )

    if let comment = response.data {
        print("Post created: \(comment.id)")
    }
} catch {
    print("Error creating post: \(error)")
}
```

#### Get Discussion Posts

```swift
do {
    let filters = PostsFilters(
        startAfter: nil,
        limit: 20,
        sort: PostsSortTypes.latest,
        skipDeleted: true,
        skipModerated: true
    )

    let posts = try await sdk.discussions().getPosts(
        discussionId: "discussion123",
        filters: filters,
        disableCache: false
    )

    if let postArray = posts.data {
        print("Found \(postArray.count) posts")
    }
} catch {
    print("Error fetching posts: \(error)")
}
```

#### Update Post

```swift
do {
    let updatePost = UpdatePost(
        content: "Updated comment content"
    )

    try await sdk.discussions().updatePost(
        postId: "post123",
        updatePost: updatePost
    )
    print("Post updated successfully")
} catch {
    print("Error updating post: \(error)")
}
```

#### Delete Post

```swift
do {
    try await sdk.discussions().deletePost(postId: "post123")
    print("Post deleted successfully")
} catch {
    print("Error deleting post: \(error)")
}
```

#### React to Post

```swift
do {
    let reaction = ReactToPost(
        reactionType: ReactionType.like
    )

    try await sdk.discussions().reactToPost(
        postId: "post123",
        reactToPost: reaction
    )
    print("Reaction added to post")
} catch {
    print("Error reacting to post: \(error)")
}
```

#### Report Post

```swift
do {
    let report = ReportPost(
        reason: ReportReasonType.spam,
        description: "This post contains spam content"
    )

    try await sdk.discussions().reportPost(
        postId: "post123",
        reportPost: report
    )
    print("Post reported successfully")
} catch {
    print("Error reporting post: \(error)")
}
```

#### Get Discussions

```swift
do {
    let filters = DiscussionsFilters(
        type: DiscussionType.match,
        status: DiscussionStatus.active,
        limit: 10,
        cursor: nil
    )

    let discussions = try await sdk.discussions().getDiscussions(
        filters: filters,
        disableCache: false
    )

    if let discussionArray = discussions.data {
        print("Found \(discussionArray.count) discussions")
    }
} catch {
    print("Error fetching discussions: \(error)")
}
```

#### Get Top Discussions

```swift
do {
    let filters = TopDiscussionsFilters(
        entityType: TopDiscussionEntityType.match,
        limit: 5
    )

    let topDiscussions = try await sdk.discussions().getTopDiscussions(
        filters: filters,
        disableCache: false
    )
    print("Top discussions fetched")
} catch {
    print("Error fetching top discussions: \(error)")
}
```

#### Get Discussion by ID

```swift
do {
    let discussion = try await sdk.discussions().getById(discussionId: "discussion123")

    if let discussionData = discussion.data {
        print("Discussion: \(discussionData.title)")
    }
} catch {
    print("Error fetching discussion: \(error)")
}
```

#### Get Own Posts

```swift
do {
    let filters = PostsFilters(
        startAfter: nil,
        limit: 20,
        sort: PostsSortTypes.latest,
        skipDeleted: true,
        skipModerated: true
    )

    let posts = try await sdk.discussions().getOwnPosts(filters: filters)

    if let postArray = posts.data {
        print("Own posts: \(postArray.count)")
    }
} catch {
    print("Error fetching own posts: \(error)")
}
```

#### Get Post by ID

```swift
do {
    let post = try await sdk.discussions().getPostById(postId: "post123")

    if let postData = post.data {
        print("Post: \(postData.content)")
    }
} catch {
    print("Error fetching post: \(error)")
}
```

#### Get Post Replies

```swift
do {
    let filters = PostsFilters(
        startAfter: nil,
        limit: 10,
        sort: PostsSortTypes.oldest,
        skipDeleted: true,
        skipModerated: true
    )

    let replies = try await sdk.discussions().getPostReplies(
        postId: "post123",
        filters: filters,
        disableCache: false
    )

    if let replyArray = replies.data {
        print("Post replies: \(replyArray.count)")
    }
} catch {
    print("Error fetching post replies: \(error)")
}
```

#### Get Posts Count

```swift
do {
    let discussionIds = ["discussion1", "discussion2", "discussion3"]
    let counts = try await sdk.discussions().getPostsCount(
        discussionIds: discussionIds,
        disableCache: false
    )

    if let countArray = counts.data {
        print("Posts count for \(countArray.count) discussions")
    }
} catch {
    print("Error fetching posts count: \(error)")
}
```

#### Get Posts Count Extended

```swift
do {
    let discussionIds = ["discussion1", "discussion2", "discussion3"]
    let counts = try await sdk.discussions().getPostsCountExtended(discussionIds: discussionIds)

    if let countArray = counts.data {
        print("Extended posts count for \(countArray.count) discussions")
    }
} catch {
    print("Error fetching extended posts count: \(error)")
}
```

#### Get User Posts

```swift
do {
    let filters = PostsFilters(
        startAfter: nil,
        limit: 20,
        sort: PostsSortTypes.latest,
        skipDeleted: true,
        skipModerated: true
    )

    let posts = try await sdk.discussions().getUserPosts(
        userId: "user123",
        filters: filters,
        disableCache: false
    )

    if let postArray = posts.data {
        print("User posts: \(postArray.count)")
    }
} catch {
    print("Error fetching user posts: \(error)")
}
```

#### Get Discussion Config

```swift
do {
    let config = try await sdk.discussions().getConfig()
    print("Discussion config loaded")
} catch {
    print("Error fetching discussion config: \(error)")
}
```

## Best Practices

### 1. SDK Initialization

- Initialize the SDK once in your app's lifecycle (AppDelegate or App struct)
- Store the SDK instance for reuse throughout the app
- Handle initialization errors gracefully

### 2. Memory Management

- Use `[weak self]` in completion handlers to avoid retain cycles
- Properly manage SDK instances and avoid creating multiple instances

### 3. Threading

- Always update UI on the main thread
- SDK callbacks may come on background threads
- Use `DispatchQueue.main.async` for UI updates

### 4. Caching

- Use the `disableCache` parameter appropriately
- Enable caching for frequently accessed data
- Disable caching for real-time data

### 5. Error Handling

- Always handle errors in completion handlers
- Provide user-friendly error messages
- Implement retry mechanisms for network failures

### 6. Performance

- Use filters to limit data requests
- Implement pagination for large datasets
- Cache responses when appropriate

### Key Implementation Patterns

#### Authentication Provider
```swift
class AuthProvider: IFUSDKTokenProvider {
    func getToken() async throws -> String? {
        // Implement your authentication logic
        // Return JWT token or similar
    }

    func logout() async throws {
        // Handle logout cleanup
    }
}
```

#### SDK Configuration
```swift
let config = FUSDKConfig(
    apiKey: "your-api-key",
    clientId: "your-client-id",
    lang: "en",
    idSchema: IDSchema.sportal365,
    environment: "prod",
    authProvider: AuthProvider()
)

let sdk = FansUnitedSDK.Companion.shared.doInit(config: config)
```

#### Data Fetching Pattern
```swift
// Create filters
let filters = MatchFilters(
    countryIds: nil,
    competitionIds: nil,
    matchIds: nil,
    status: nil,
    teamIds: nil,
    fromDate: todayInstant,
    toDate: nil,
    limit: 50,
    page: nil,
    sortField: nil,
    sortOrder: nil
)

// Fetch data directly from SDK
let matches = try await sdk.football().getMatches(filters: filters, disableCache: false)?.data
```

## Support

- **Documentation**: [https://docs.fansunitedmedia.com/](https://docs.fansunitedmedia.com/)
- **Email**: support@fansunitedmedia.com
