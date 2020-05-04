// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Tasks API (tasks/v1)
// Description:
//   Manages your tasks and task lists.
// Documentation:
//   https://developers.google.com/google-apps/tasks/firstapp

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
 *  Authorization scope: Create, edit, organize, and delete all your tasks
 *
 *  Value "https://www.googleapis.com/auth/tasks"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeTasks;
/**
 *  Authorization scope: View your tasks
 *
 *  Value "https://www.googleapis.com/auth/tasks.readonly"
 */
FOUNDATION_EXTERN NSString * const kGTLRAuthScopeTasksReadonly;

// ----------------------------------------------------------------------------
//   GTLRTasksService
//

/**
 *  Service for executing Tasks API queries.
 *
 *  Manages your tasks and task lists.
 */
@interface GTLRTasksService : GTLRService

// No new methods

// Clients should create a standard query with any of the class methods in
// GTLRTasksQuery.h. The query can the be sent with GTLRService's execute
// methods,
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
