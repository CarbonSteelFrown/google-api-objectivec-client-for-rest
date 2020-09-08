// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Pub/Sub Lite API (pubsublite/v1)
// Documentation:
//   https://cloud.google.com/pubsub/lite/docs

#import "GTLRPubsubLite.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopePubsubLiteCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRPubsubLiteService
//

@implementation GTLRPubsubLiteService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://pubsublite.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end