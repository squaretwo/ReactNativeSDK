#if __has_include(<React/RCTBridgeModule.h>)
#import <React/RCTBridgeModule.h>
#else
#import "RCTBridgeModule.h"
#endif

#if __has_include(<React/RCTEventEmitter.h>)
#import <React/RCTEventEmitter.h>
#else
#import "RCTEventEmitter"
#endif

#import <TheoremReachSDK/TheoremReach.h>

@interface RNTheoremReach : RCTEventEmitter <RCTBridgeModule, TheoremReachRewardDelegate, TheoremReachSurveyDelegate, TheoremReachSurveyAvailableDelegate>

@end
