// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   BigQuery Data Transfer API (bigquerydatatransfer/v1)
// Description:
//   Schedule queries or transfer external data from SaaS applications to Google
//   BigQuery on a regular basis.
// Documentation:
//   https://cloud.google.com/bigquery/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRService.h"
#else
  #import "GTLRService.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Authorization scopes

/**
 *  Authorization scope: View and manage your data in Google BigQuery
 *
 *  Value "https://www.googleapis.com/auth/bigquery"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigQueryDataTransferBigquery;
/**
 *  Authorization scope: View your data in Google BigQuery
 *
 *  Value "https://www.googleapis.com/auth/bigquery.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigQueryDataTransferBigqueryReadonly;
/**
 *  Authorization scope: View and manage your data across Google Cloud Platform
 *  services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigQueryDataTransferCloudPlatform;
/**
 *  Authorization scope: View your data across Google Cloud Platform services
 *
 *  Value "https://www.googleapis.com/auth/cloud-platform.read-only"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeBigQueryDataTransferCloudPlatformReadOnly;

// ----------------------------------------------------------------------------
//   GTLRBigQueryDataTransferService
//

/**
 *  Service for executing BigQuery Data Transfer API queries.
 *
 *  Schedule queries or transfer external data from SaaS applications to Google
 *  BigQuery on a regular basis.
 */
@interface GTLRBigQueryDataTransferService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRBigQueryDataTransferQuery.h. The query can the be sent with GTLRService's
// execute methods,
//
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                     completionHandler:(void (^)(GTLRServiceTicket *ticket,
//                                                 id object, NSError *error))handler;
// or
//   - (GTLRServiceTicket *)executeQuery:(GTLRQuery *)query
//                              delegate:(id)delegate
//                     didFinishSelector:(SEL)finishedSelector;
//
// where finishedSelector has a signature of:
//
//   - (void)serviceTicket:(GTLRServiceTicket *)ticket
//      finishedWithObject:(id)object
//                   error:(NSError *)error;
//
// The object passed to the completion handler or delegate method
// is a subclass of GTLRObject, determined by the query method executed.

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
