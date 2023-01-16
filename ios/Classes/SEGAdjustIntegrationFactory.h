//
// This file is just copied in since we a fixed version of a sub-dependency
// Delete me when bring back Segment-Adjust as a dependency
//

#import <Foundation/Foundation.h>

#if defined(__has_include) && __has_include(<Analytics/SEGAnalytics.h>)
#import <Analytics/SEGIntegrationFactory.h>
#else
#import <Segment/SEGIntegrationFactory.h>
#endif

@interface SEGAdjustIntegrationFactory : NSObject <SEGIntegrationFactory>

+ (instancetype)instance;

@end
