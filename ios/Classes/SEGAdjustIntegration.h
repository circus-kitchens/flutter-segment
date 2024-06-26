//
// This file is just copied in since we a fixed version of a sub-dependency
// Delete me when bring back Segment-Adjust as a dependency
//


#import <Foundation/Foundation.h>
#import <Adjust/Adjust.h>

#if defined(__has_include) && __has_include(<Analytics/SEGAnalytics.h>)
#import <Analytics/SEGAnalytics.h>
#else
#import <Segment/SEGAnalytics.h>
#endif


@interface SEGAdjustIntegration : NSObject <SEGIntegration, AdjustDelegate>

@property (nonatomic, strong) NSDictionary *settings;
@property (nonatomic, strong) SEGAnalytics *analytics;

- (instancetype)initWithSettings:(NSDictionary *)settings withAnalytics:(SEGAnalytics *)analytics;

@end
