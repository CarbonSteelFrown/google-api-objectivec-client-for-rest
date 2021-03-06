// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Security Token Service API (sts/v1)
// Description:
//   The Security Token Service exchanges Google or third-party credentials for
//   a short-lived access token to Google Cloud resources.
// Documentation:
//   http://cloud.google.com/iam/docs/workload-identity-federation

#if SWIFT_PACKAGE || GTLR_USE_MODULAR_IMPORT
  @import GoogleAPIClientForRESTCore;
#elif GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Request message for ExchangeToken.
 */
@interface GTLRCloudSecurityToken_GoogleIdentityStsV1ExchangeTokenRequest : GTLRObject

/**
 *  The full resource name of the identity provider; for example:
 *  `//iam.googleapis.com/projects//workloadIdentityPools//providers/`. Required
 *  when exchanging an external credential for a Google access token.
 */
@property(nonatomic, copy, nullable) NSString *audience;

/**
 *  Required. The grant type. Must be
 *  `urn:ietf:params:oauth:grant-type:token-exchange`, which indicates a token
 *  exchange.
 */
@property(nonatomic, copy, nullable) NSString *grantType;

/**
 *  A set of features that Security Token Service supports, in addition to the
 *  standard OAuth 2.0 token exchange, formatted as a serialized JSON object of
 *  Options.
 */
@property(nonatomic, copy, nullable) NSString *options;

/**
 *  Required. An identifier for the type of requested security token. Must be
 *  `urn:ietf:params:oauth:token-type:access_token`.
 */
@property(nonatomic, copy, nullable) NSString *requestedTokenType;

/**
 *  The OAuth 2.0 scopes to include on the resulting access token, formatted as
 *  a list of space-delimited, case-sensitive strings. Required when exchanging
 *  an external credential for a Google access token.
 */
@property(nonatomic, copy, nullable) NSString *scope;

/**
 *  Required. The input token. You can use a Google-issued OAuth 2.0 access
 *  token with this field to obtain an access token with new security attributes
 *  applied, such as a Credential Access Boundary. If an access token already
 *  contains security attributes, you cannot apply additional security
 *  attributes.
 */
@property(nonatomic, copy, nullable) NSString *subjectToken;

/**
 *  Required. An identifier that indicates the type of the security token in the
 *  `subject_token` parameter. Must be
 *  `urn:ietf:params:oauth:token-type:access_token`.
 */
@property(nonatomic, copy, nullable) NSString *subjectTokenType;

@end


/**
 *  Response message for ExchangeToken.
 */
@interface GTLRCloudSecurityToken_GoogleIdentityStsV1ExchangeTokenResponse : GTLRObject

/**
 *  An OAuth 2.0 security token, issued by Google, in response to the token
 *  exchange request.
 */
@property(nonatomic, copy, nullable) NSString *accessToken;

/**
 *  The amount of time, in seconds, between the time when the access token was
 *  issued and the time when the access token will expire. This field is absent
 *  when the `subject_token` in the request is a Google-issued, short-lived
 *  access token. In this case, the access token has the same expiration time as
 *  the `subject_token`.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *expiresIn;

/**
 *  The token type. Always matches the value of `requested_token_type` from the
 *  request.
 */
@property(nonatomic, copy, nullable) NSString *issuedTokenType;

/** The type of access token. Always has the value `Bearer`. */
@property(nonatomic, copy, nullable) NSString *tokenType;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
