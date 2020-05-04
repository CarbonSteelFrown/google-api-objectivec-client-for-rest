// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Rules API (firebaserules/v1)
// Description:
//   Creates and manages rules that determine when a Firebase Rules-enabled
//   service should permit a request.
// Documentation:
//   https://firebase.google.com/docs/storage/security

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRFirebaseRules_Arg;
@class GTLRFirebaseRules_Empty;
@class GTLRFirebaseRules_ExpressionReport;
@class GTLRFirebaseRules_File;
@class GTLRFirebaseRules_FunctionCall;
@class GTLRFirebaseRules_FunctionMock;
@class GTLRFirebaseRules_Issue;
@class GTLRFirebaseRules_Metadata;
@class GTLRFirebaseRules_Release;
@class GTLRFirebaseRules_Result;
@class GTLRFirebaseRules_Ruleset;
@class GTLRFirebaseRules_Source;
@class GTLRFirebaseRules_SourcePosition;
@class GTLRFirebaseRules_TestCase;
@class GTLRFirebaseRules_TestResult;
@class GTLRFirebaseRules_TestSuite;
@class GTLRFirebaseRules_ValueCount;
@class GTLRFirebaseRules_VisitedExpression;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRFirebaseRules_GetReleaseExecutableResponse.executableVersion

/**
 *  Firebase Rules syntax 'rules2' executable versions:
 *  Custom AST for use with Java clients.
 *
 *  Value: "FIREBASE_RULES_EXECUTABLE_V1"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_GetReleaseExecutableResponse_ExecutableVersion_FirebaseRulesExecutableV1;
/**
 *  CEL-based executable for use with C++ clients.
 *
 *  Value: "FIREBASE_RULES_EXECUTABLE_V2"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_GetReleaseExecutableResponse_ExecutableVersion_FirebaseRulesExecutableV2;
/**
 *  Executable format unspecified.
 *  Defaults to FIREBASE_RULES_EXECUTABLE_V1
 *
 *  Value: "RELEASE_EXECUTABLE_VERSION_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_GetReleaseExecutableResponse_ExecutableVersion_ReleaseExecutableVersionUnspecified;

// ----------------------------------------------------------------------------
// GTLRFirebaseRules_GetReleaseExecutableResponse.language

/**
 *  Event Flow triggers.
 *
 *  Value: "EVENT_FLOW_TRIGGERS"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_GetReleaseExecutableResponse_Language_EventFlowTriggers;
/**
 *  Firebase Rules language.
 *
 *  Value: "FIREBASE_RULES"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_GetReleaseExecutableResponse_Language_FirebaseRules;
/**
 *  Language unspecified. Defaults to FIREBASE_RULES.
 *
 *  Value: "LANGUAGE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_GetReleaseExecutableResponse_Language_LanguageUnspecified;

// ----------------------------------------------------------------------------
// GTLRFirebaseRules_Issue.severity

/**
 *  Deprecation issue for statements and method that may no longer be
 *  supported or maintained.
 *
 *  Value: "DEPRECATION"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_Issue_Severity_Deprecation;
/**
 *  Errors such as: unmatched curly braces or variable redefinition.
 *
 *  Value: "ERROR"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_Issue_Severity_Error;
/**
 *  An unspecified severity.
 *
 *  Value: "SEVERITY_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_Issue_Severity_SeverityUnspecified;
/**
 *  Warnings such as: unused variables.
 *
 *  Value: "WARNING"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_Issue_Severity_Warning;

// ----------------------------------------------------------------------------
// GTLRFirebaseRules_TestCase.expectation

/**
 *  Expect an allowed result.
 *
 *  Value: "ALLOW"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_TestCase_Expectation_Allow;
/**
 *  Expect a denied result.
 *
 *  Value: "DENY"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_TestCase_Expectation_Deny;
/**
 *  Unspecified expectation.
 *
 *  Value: "EXPECTATION_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_TestCase_Expectation_ExpectationUnspecified;

// ----------------------------------------------------------------------------
// GTLRFirebaseRules_TestCase.expressionReportLevel

/**
 *  Include detailed reporting on expressions evaluated.
 *
 *  Value: "FULL"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_TestCase_ExpressionReportLevel_Full;
/**
 *  No level has been specified. Defaults to "NONE" behavior.
 *
 *  Value: "LEVEL_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_TestCase_ExpressionReportLevel_LevelUnspecified;
/**
 *  Do not include any additional information.
 *
 *  Value: "NONE"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_TestCase_ExpressionReportLevel_None;
/**
 *  Only include the expressions that were visited during evaluation.
 *
 *  Value: "VISITED"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_TestCase_ExpressionReportLevel_Visited;

// ----------------------------------------------------------------------------
// GTLRFirebaseRules_TestCase.pathEncoding

/**
 *  No encoding has been specified. Defaults to "URL_ENCODED" behavior.
 *
 *  Value: "ENCODING_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_TestCase_PathEncoding_EncodingUnspecified;
/**
 *  Treats total path as non-URL encoded e.g. raw.
 *
 *  Value: "PLAIN"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_TestCase_PathEncoding_Plain;
/**
 *  Treats path segments as URL encoded but with non-encoded separators
 *  ("/"). This is the default behavior.
 *
 *  Value: "URL_ENCODED"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_TestCase_PathEncoding_UrlEncoded;

// ----------------------------------------------------------------------------
// GTLRFirebaseRules_TestResult.state

/**
 *  Test is a failure.
 *
 *  Value: "FAILURE"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_TestResult_State_Failure;
/**
 *  Test state is not set.
 *
 *  Value: "STATE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_TestResult_State_StateUnspecified;
/**
 *  Test is a success.
 *
 *  Value: "SUCCESS"
 */
FOUNDATION_EXTERN NSString * const kGTLRFirebaseRules_TestResult_State_Success;

/**
 *  Arg matchers for the mock function.
 */
@interface GTLRFirebaseRules_Arg : GTLRObject

/** Argument matches any value provided. */
@property(nonatomic, strong, nullable) GTLRFirebaseRules_Empty *anyValue;

/**
 *  Argument exactly matches value provided.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) id exactValue;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRFirebaseRules_Empty : GTLRObject
@end


/**
 *  Describes where in a file an expression is found and what it was
 *  evaluated to over the course of its use.
 */
@interface GTLRFirebaseRules_ExpressionReport : GTLRObject

/** Subexpressions */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_ExpressionReport *> *children;

/** Position of expression in original rules source. */
@property(nonatomic, strong, nullable) GTLRFirebaseRules_SourcePosition *sourcePosition;

/** Values that this expression evaluated to when encountered. */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_ValueCount *> *values;

@end


/**
 *  `File` containing source content.
 */
@interface GTLRFirebaseRules_File : GTLRObject

/** Textual Content. */
@property(nonatomic, copy, nullable) NSString *content;

/**
 *  Fingerprint (e.g. github sha) associated with the `File`.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *fingerprint;

/** File name. */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Represents a service-defined function call that was invoked during test
 *  execution.
 */
@interface GTLRFirebaseRules_FunctionCall : GTLRObject

/**
 *  The arguments that were provided to the function.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) NSArray *args;

/** Name of the function invoked. */
@property(nonatomic, copy, nullable) NSString *function;

@end


/**
 *  Mock function definition.
 *  Mocks must refer to a function declared by the target service. The type of
 *  the function args and result will be inferred at test time. If either the
 *  arg or result values are not compatible with function type declaration, the
 *  request will be considered invalid.
 *  More than one `FunctionMock` may be provided for a given function name so
 *  long as the `Arg` matchers are distinct. There may be only one function
 *  for a given overload where all `Arg` values are `Arg.any_value`.
 */
@interface GTLRFirebaseRules_FunctionMock : GTLRObject

/**
 *  The list of `Arg` values to match. The order in which the arguments are
 *  provided is the order in which they must appear in the function
 *  invocation.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_Arg *> *args;

/**
 *  The name of the function.
 *  The function name must match one provided by a service declaration.
 */
@property(nonatomic, copy, nullable) NSString *function;

/** The mock result of the function call. */
@property(nonatomic, strong, nullable) GTLRFirebaseRules_Result *result;

@end


/**
 *  The response for FirebaseRulesService.GetReleaseExecutable
 */
@interface GTLRFirebaseRules_GetReleaseExecutableResponse : GTLRObject

/**
 *  Executable view of the `Ruleset` referenced by the `Release`.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *executable;

/**
 *  The Rules runtime version of the executable.
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseRules_GetReleaseExecutableResponse_ExecutableVersion_FirebaseRulesExecutableV1
 *        Firebase Rules syntax 'rules2' executable versions:
 *        Custom AST for use with Java clients. (Value:
 *        "FIREBASE_RULES_EXECUTABLE_V1")
 *    @arg @c kGTLRFirebaseRules_GetReleaseExecutableResponse_ExecutableVersion_FirebaseRulesExecutableV2
 *        CEL-based executable for use with C++ clients. (Value:
 *        "FIREBASE_RULES_EXECUTABLE_V2")
 *    @arg @c kGTLRFirebaseRules_GetReleaseExecutableResponse_ExecutableVersion_ReleaseExecutableVersionUnspecified
 *        Executable format unspecified.
 *        Defaults to FIREBASE_RULES_EXECUTABLE_V1 (Value:
 *        "RELEASE_EXECUTABLE_VERSION_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *executableVersion;

/**
 *  `Language` used to generate the executable bytes.
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseRules_GetReleaseExecutableResponse_Language_EventFlowTriggers
 *        Event Flow triggers. (Value: "EVENT_FLOW_TRIGGERS")
 *    @arg @c kGTLRFirebaseRules_GetReleaseExecutableResponse_Language_FirebaseRules
 *        Firebase Rules language. (Value: "FIREBASE_RULES")
 *    @arg @c kGTLRFirebaseRules_GetReleaseExecutableResponse_Language_LanguageUnspecified
 *        Language unspecified. Defaults to FIREBASE_RULES. (Value:
 *        "LANGUAGE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *language;

/** `Ruleset` name associated with the `Release` executable. */
@property(nonatomic, copy, nullable) NSString *rulesetName;

/**
 *  Optional, indicates the freshness of the result. The response is
 *  guaranteed to be the latest within an interval up to the
 *  sync_time (inclusive).
 */
@property(nonatomic, strong, nullable) GTLRDateTime *syncTime;

/** Timestamp for the most recent `Release.update_time`. */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

@end


/**
 *  Issues include warnings, errors, and deprecation notices.
 */
@interface GTLRFirebaseRules_Issue : GTLRObject

/**
 *  Short error description.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  The severity of the issue.
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseRules_Issue_Severity_Deprecation Deprecation issue
 *        for statements and method that may no longer be
 *        supported or maintained. (Value: "DEPRECATION")
 *    @arg @c kGTLRFirebaseRules_Issue_Severity_Error Errors such as: unmatched
 *        curly braces or variable redefinition. (Value: "ERROR")
 *    @arg @c kGTLRFirebaseRules_Issue_Severity_SeverityUnspecified An
 *        unspecified severity. (Value: "SEVERITY_UNSPECIFIED")
 *    @arg @c kGTLRFirebaseRules_Issue_Severity_Warning Warnings such as: unused
 *        variables. (Value: "WARNING")
 */
@property(nonatomic, copy, nullable) NSString *severity;

/** Position of the issue in the `Source`. */
@property(nonatomic, strong, nullable) GTLRFirebaseRules_SourcePosition *sourcePosition;

@end


/**
 *  The response for FirebaseRulesService.ListReleases.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "releases" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRFirebaseRules_ListReleasesResponse : GTLRCollectionObject

/**
 *  The pagination token to retrieve the next page of results. If the value is
 *  empty, no further results remain.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  List of `Release` instances.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_Release *> *releases;

@end


/**
 *  The response for FirebaseRulesService.ListRulesets.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "rulesets" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRFirebaseRules_ListRulesetsResponse : GTLRCollectionObject

/**
 *  The pagination token to retrieve the next page of results. If the value is
 *  empty, no further results remain.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  List of `Ruleset` instances.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_Ruleset *> *rulesets;

@end


/**
 *  Metadata for a Ruleset.
 */
@interface GTLRFirebaseRules_Metadata : GTLRObject

/**
 *  Services that this ruleset has declarations for (e.g.,
 *  "cloud.firestore"). There may be 0+ of these.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *services;

@end


/**
 *  `Release` is a named reference to a `Ruleset`. Once a `Release` refers to a
 *  `Ruleset`, rules-enabled services will be able to enforce the `Ruleset`.
 */
@interface GTLRFirebaseRules_Release : GTLRObject

/**
 *  Time the release was created.
 *  Output only.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  Resource name for the `Release`.
 *  `Release` names may be structured `app1/prod/v2` or flat `app1_prod_v2`
 *  which affords developers a great deal of flexibility in mapping the name
 *  to the style that best fits their existing development practices. For
 *  example, a name could refer to an environment, an app, a version, or some
 *  combination of three.
 *  In the table below, for the project name `projects/foo`, the following
 *  relative release paths show how flat and structured names might be chosen
 *  to match a desired development / deployment strategy.
 *  Use Case | Flat Name | Structured Name
 *  -------------|---------------------|----------------
 *  Environments | releases/qa | releases/qa
 *  Apps | releases/app1_qa | releases/app1/qa
 *  Versions | releases/app1_v2_qa | releases/app1/v2/qa
 *  The delimiter between the release name path elements can be almost anything
 *  and it should work equally well with the release name list filter, but in
 *  many ways the structured paths provide a clearer picture of the
 *  relationship between `Release` instances.
 *  Format: `projects/{project_id}/releases/{release_id}`
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Name of the `Ruleset` referred to by this `Release`. The `Ruleset` must
 *  exist the `Release` to be created.
 */
@property(nonatomic, copy, nullable) NSString *rulesetName;

/**
 *  Time the release was updated.
 *  Output only.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

@end


/**
 *  Possible result values from the function mock invocation.
 */
@interface GTLRFirebaseRules_Result : GTLRObject

/** The result is undefined, meaning the result could not be computed. */
@property(nonatomic, strong, nullable) GTLRFirebaseRules_Empty *undefined;

/**
 *  The result is an actual value. The type of the value must match that
 *  of the type declared by the service.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) id value;

@end


/**
 *  `Ruleset` is an immutable copy of `Source` with a globally unique identifier
 *  and a creation time.
 */
@interface GTLRFirebaseRules_Ruleset : GTLRObject

/**
 *  Time the `Ruleset` was created.
 *  Output only.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *createTime;

/**
 *  The metadata for this ruleset.
 *  Output only.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseRules_Metadata *metadata;

/**
 *  Name of the `Ruleset`. The ruleset_id is auto generated by the service.
 *  Format: `projects/{project_id}/rulesets/{ruleset_id}`
 *  Output only.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** `Source` for the `Ruleset`. */
@property(nonatomic, strong, nullable) GTLRFirebaseRules_Source *source;

@end


/**
 *  `Source` is one or more `File` messages comprising a logical set of rules.
 */
@interface GTLRFirebaseRules_Source : GTLRObject

/** `File` set constituting the `Source` bundle. */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_File *> *files;

@end


/**
 *  Position in the `Source` content including its line, column number, and an
 *  index of the `File` in the `Source` message. Used for debug purposes.
 */
@interface GTLRFirebaseRules_SourcePosition : GTLRObject

/**
 *  First column on the source line associated with the source fragment.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *column;

/**
 *  Start position relative to the beginning of the file.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *currentOffset;

/**
 *  End position relative to the beginning of the file.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *endOffset;

/** Name of the `File`. */
@property(nonatomic, copy, nullable) NSString *fileName;

/**
 *  Line number of the source fragment. 1-based.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *line;

@end


/**
 *  `TestCase` messages provide the request context and an expectation as to
 *  whether the given context will be allowed or denied. Test cases may specify
 *  the `request`, `resource`, and `function_mocks` to mock a function call to
 *  a service-provided function.
 *  The `request` object represents context present at request-time.
 *  The `resource` is the value of the target resource as it appears in
 *  persistent storage before the request is executed.
 */
@interface GTLRFirebaseRules_TestCase : GTLRObject

/**
 *  Test expectation.
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseRules_TestCase_Expectation_Allow Expect an allowed
 *        result. (Value: "ALLOW")
 *    @arg @c kGTLRFirebaseRules_TestCase_Expectation_Deny Expect a denied
 *        result. (Value: "DENY")
 *    @arg @c kGTLRFirebaseRules_TestCase_Expectation_ExpectationUnspecified
 *        Unspecified expectation. (Value: "EXPECTATION_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *expectation;

/**
 *  Specifies what should be included in the response.
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseRules_TestCase_ExpressionReportLevel_Full Include
 *        detailed reporting on expressions evaluated. (Value: "FULL")
 *    @arg @c kGTLRFirebaseRules_TestCase_ExpressionReportLevel_LevelUnspecified
 *        No level has been specified. Defaults to "NONE" behavior. (Value:
 *        "LEVEL_UNSPECIFIED")
 *    @arg @c kGTLRFirebaseRules_TestCase_ExpressionReportLevel_None Do not
 *        include any additional information. (Value: "NONE")
 *    @arg @c kGTLRFirebaseRules_TestCase_ExpressionReportLevel_Visited Only
 *        include the expressions that were visited during evaluation. (Value:
 *        "VISITED")
 */
@property(nonatomic, copy, nullable) NSString *expressionReportLevel;

/**
 *  Optional function mocks for service-defined functions. If not set, any
 *  service defined function is expected to return an error, which may or may
 *  not influence the test outcome.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_FunctionMock *> *functionMocks;

/**
 *  Specifies whether paths (such as request.path) are encoded and how.
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseRules_TestCase_PathEncoding_EncodingUnspecified No
 *        encoding has been specified. Defaults to "URL_ENCODED" behavior.
 *        (Value: "ENCODING_UNSPECIFIED")
 *    @arg @c kGTLRFirebaseRules_TestCase_PathEncoding_Plain Treats total path
 *        as non-URL encoded e.g. raw. (Value: "PLAIN")
 *    @arg @c kGTLRFirebaseRules_TestCase_PathEncoding_UrlEncoded Treats path
 *        segments as URL encoded but with non-encoded separators
 *        ("/"). This is the default behavior. (Value: "URL_ENCODED")
 */
@property(nonatomic, copy, nullable) NSString *pathEncoding;

/**
 *  Request context.
 *  The exact format of the request context is service-dependent. See the
 *  appropriate service documentation for information about the supported
 *  fields and types on the request. Minimally, all services support the
 *  following fields and types:
 *  Request field | Type
 *  ---------------|-----------------
 *  auth.uid | `string`
 *  auth.token | `map<string, string>`
 *  headers | `map<string, string>`
 *  method | `string`
 *  params | `map<string, string>`
 *  path | `string`
 *  time | `google.protobuf.Timestamp`
 *  If the request value is not well-formed for the service, the request will
 *  be rejected as an invalid argument.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) id request;

/**
 *  Optional resource value as it appears in persistent storage before the
 *  request is fulfilled.
 *  The resource type depends on the `request.path` value.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) id resource;

@end


/**
 *  Test result message containing the state of the test as well as a
 *  description and source position for test failures.
 */
@interface GTLRFirebaseRules_TestResult : GTLRObject

/**
 *  Debug messages related to test execution issues encountered during
 *  evaluation.
 *  Debug messages may be related to too many or too few invocations of
 *  function mocks or to runtime errors that occur during evaluation.
 *  For example: ```Unable to read variable [name: "resource"]```
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *debugMessages;

/**
 *  Position in the `Source` or `Ruleset` where the principle runtime error
 *  occurs.
 *  Evaluation of an expression may result in an error. Rules are deny by
 *  default, so a `DENY` expectation when an error is generated is valid.
 *  When there is a `DENY` with an error, the `SourcePosition` is returned.
 *  E.g. `error_position { line: 19 column: 37 }`
 */
@property(nonatomic, strong, nullable) GTLRFirebaseRules_SourcePosition *errorPosition;

/**
 *  The mapping from expression in the ruleset AST to the values they were
 *  evaluated to. Partially-nested to mirror AST structure. Note that this
 *  field is actually tracking expressions and not permission statements in
 *  contrast to the "visited_expressions" field above. Literal expressions
 *  are omitted.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_ExpressionReport *> *expressionReports;

/**
 *  The set of function calls made to service-defined methods.
 *  Function calls are included in the order in which they are encountered
 *  during evaluation, are provided for both mocked and unmocked functions,
 *  and included on the response regardless of the test `state`.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_FunctionCall *> *functionCalls;

/**
 *  State of the test.
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseRules_TestResult_State_Failure Test is a failure.
 *        (Value: "FAILURE")
 *    @arg @c kGTLRFirebaseRules_TestResult_State_StateUnspecified Test state is
 *        not set. (Value: "STATE_UNSPECIFIED")
 *    @arg @c kGTLRFirebaseRules_TestResult_State_Success Test is a success.
 *        (Value: "SUCCESS")
 */
@property(nonatomic, copy, nullable) NSString *state;

/**
 *  The set of visited permission expressions for a given test. This returns
 *  the positions and evaluation results of all visited permission
 *  expressions which were relevant to the test case, e.g.
 *  ```
 *  match /path {
 *  allow read if: <expr>
 *  }
 *  ```
 *  For a detailed report of the intermediate evaluation states, see the
 *  `expression_reports` field
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_VisitedExpression *> *visitedExpressions;

@end


/**
 *  The request for FirebaseRulesService.TestRuleset.
 */
@interface GTLRFirebaseRules_TestRulesetRequest : GTLRObject

/**
 *  Optional `Source` to be checked for correctness.
 *  This field must not be set when the resource name refers to a `Ruleset`.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseRules_Source *source;

/** Inline `TestSuite` to run. */
@property(nonatomic, strong, nullable) GTLRFirebaseRules_TestSuite *testSuite;

@end


/**
 *  The response for FirebaseRulesService.TestRuleset.
 */
@interface GTLRFirebaseRules_TestRulesetResponse : GTLRObject

/**
 *  Syntactic and semantic `Source` issues of varying severity. Issues of
 *  `ERROR` severity will prevent tests from executing.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_Issue *> *issues;

/**
 *  The set of test results given the test cases in the `TestSuite`.
 *  The results will appear in the same order as the test cases appear in the
 *  `TestSuite`.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_TestResult *> *testResults;

@end


/**
 *  `TestSuite` is a collection of `TestCase` instances that validate the
 *  logical
 *  correctness of a `Ruleset`. The `TestSuite` may be referenced in-line within
 *  a `TestRuleset` invocation or as part of a `Release` object as a pre-release
 *  check.
 */
@interface GTLRFirebaseRules_TestSuite : GTLRObject

/** Collection of test cases associated with the `TestSuite`. */
@property(nonatomic, strong, nullable) NSArray<GTLRFirebaseRules_TestCase *> *testCases;

@end


/**
 *  The request for FirebaseRulesService.UpdateReleasePatch.
 */
@interface GTLRFirebaseRules_UpdateReleaseRequest : GTLRObject

/**
 *  `Release` to update.
 *
 *  Remapped to 'releaseProperty' to avoid NSObject's 'release'.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseRules_Release *releaseProperty;

/**
 *  Specifies which fields to update.
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

@end


/**
 *  Tuple for how many times an Expression was evaluated to a particular
 *  ExpressionValue.
 */
@interface GTLRFirebaseRules_ValueCount : GTLRObject

/**
 *  The amount of times that expression returned.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *count;

/**
 *  The return value of the expression
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) id value;

@end


/**
 *  Store the position and access outcome for an expression visited in rules.
 */
@interface GTLRFirebaseRules_VisitedExpression : GTLRObject

/** Position in the `Source` or `Ruleset` where an expression was visited. */
@property(nonatomic, strong, nullable) GTLRFirebaseRules_SourcePosition *sourcePosition;

/**
 *  The evaluated value for the visited expression, e.g. true/false
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) id value;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
