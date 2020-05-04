// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Binary Authorization API (binaryauthorization/v1)
// Description:
//   The management interface for Binary Authorization, a system providing
//   policy control for images deployed to Kubernetes Engine clusters.
// Documentation:
//   https://cloud.google.com/binary-authorization/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRBinaryAuthorization_AdmissionRule;
@class GTLRBinaryAuthorization_AdmissionWhitelistPattern;
@class GTLRBinaryAuthorization_Attestor;
@class GTLRBinaryAuthorization_AttestorPublicKey;
@class GTLRBinaryAuthorization_Binding;
@class GTLRBinaryAuthorization_Expr;
@class GTLRBinaryAuthorization_IamPolicy;
@class GTLRBinaryAuthorization_PkixPublicKey;
@class GTLRBinaryAuthorization_Policy_ClusterAdmissionRules;
@class GTLRBinaryAuthorization_UserOwnedGrafeasNote;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRBinaryAuthorization_AdmissionRule.enforcementMode

/**
 *  Dryrun mode: Audit logging only. This will allow the pod creation as if
 *  the admission request had specified break-glass.
 *
 *  Value: "DRYRUN_AUDIT_LOG_ONLY"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_AdmissionRule_EnforcementMode_DryrunAuditLogOnly;
/**
 *  Enforce the admission rule by blocking the pod creation.
 *
 *  Value: "ENFORCED_BLOCK_AND_AUDIT_LOG"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_AdmissionRule_EnforcementMode_EnforcedBlockAndAuditLog;
/**
 *  Do not use.
 *
 *  Value: "ENFORCEMENT_MODE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_AdmissionRule_EnforcementMode_EnforcementModeUnspecified;

// ----------------------------------------------------------------------------
// GTLRBinaryAuthorization_AdmissionRule.evaluationMode

/**
 *  This rule allows all all pod creations.
 *
 *  Value: "ALWAYS_ALLOW"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_AdmissionRule_EvaluationMode_AlwaysAllow;
/**
 *  This rule denies all pod creations.
 *
 *  Value: "ALWAYS_DENY"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_AdmissionRule_EvaluationMode_AlwaysDeny;
/**
 *  Do not use.
 *
 *  Value: "EVALUATION_MODE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_AdmissionRule_EvaluationMode_EvaluationModeUnspecified;
/**
 *  This rule allows a pod creation if all the attestors listed in
 *  'require_attestations_by' have valid attestations for all of the
 *  images in the pod spec.
 *
 *  Value: "REQUIRE_ATTESTATION"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_AdmissionRule_EvaluationMode_RequireAttestation;

// ----------------------------------------------------------------------------
// GTLRBinaryAuthorization_PkixPublicKey.signatureAlgorithm

/**
 *  ECDSA on the NIST P-256 curve with a SHA256 digest.
 *
 *  Value: "ECDSA_P256_SHA256"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_EcdsaP256Sha256;
/**
 *  ECDSA on the NIST P-384 curve with a SHA384 digest.
 *
 *  Value: "ECDSA_P384_SHA384"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_EcdsaP384Sha384;
/**
 *  ECDSA on the NIST P-521 curve with a SHA512 digest.
 *
 *  Value: "ECDSA_P521_SHA512"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_EcdsaP521Sha512;
/**
 *  RSASSA-PSS 2048 bit key with a SHA256 digest.
 *
 *  Value: "RSA_PSS_2048_SHA256"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_RsaPss2048Sha256;
/**
 *  RSASSA-PSS 3072 bit key with a SHA256 digest.
 *
 *  Value: "RSA_PSS_3072_SHA256"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_RsaPss3072Sha256;
/**
 *  RSASSA-PSS 4096 bit key with a SHA256 digest.
 *
 *  Value: "RSA_PSS_4096_SHA256"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_RsaPss4096Sha256;
/**
 *  RSASSA-PSS 4096 bit key with a SHA512 digest.
 *
 *  Value: "RSA_PSS_4096_SHA512"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_RsaPss4096Sha512;
/**
 *  RSASSA-PKCS1-v1_5 with a 2048 bit key and a SHA256 digest.
 *
 *  Value: "RSA_SIGN_PKCS1_2048_SHA256"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_RsaSignPkcs12048Sha256;
/**
 *  RSASSA-PKCS1-v1_5 with a 3072 bit key and a SHA256 digest.
 *
 *  Value: "RSA_SIGN_PKCS1_3072_SHA256"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_RsaSignPkcs13072Sha256;
/**
 *  RSASSA-PKCS1-v1_5 with a 4096 bit key and a SHA256 digest.
 *
 *  Value: "RSA_SIGN_PKCS1_4096_SHA256"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_RsaSignPkcs14096Sha256;
/**
 *  RSASSA-PKCS1-v1_5 with a 4096 bit key and a SHA512 digest.
 *
 *  Value: "RSA_SIGN_PKCS1_4096_SHA512"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_RsaSignPkcs14096Sha512;
/**
 *  Not specified.
 *
 *  Value: "SIGNATURE_ALGORITHM_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_SignatureAlgorithmUnspecified;

// ----------------------------------------------------------------------------
// GTLRBinaryAuthorization_Policy.globalPolicyEvaluationMode

/**
 *  Disables global policy evaluation.
 *
 *  Value: "DISABLE"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_Policy_GlobalPolicyEvaluationMode_Disable;
/**
 *  Enables global policy evaluation.
 *
 *  Value: "ENABLE"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_Policy_GlobalPolicyEvaluationMode_Enable;
/**
 *  Not specified: DISABLE is assumed.
 *
 *  Value: "GLOBAL_POLICY_EVALUATION_MODE_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRBinaryAuthorization_Policy_GlobalPolicyEvaluationMode_GlobalPolicyEvaluationModeUnspecified;

/**
 *  An admission rule specifies either that all container images
 *  used in a pod creation request must be attested to by one or more
 *  attestors, that all pod creations will be allowed, or that all
 *  pod creations will be denied.
 *  Images matching an admission whitelist pattern
 *  are exempted from admission rules and will never block a pod creation.
 */
@interface GTLRBinaryAuthorization_AdmissionRule : GTLRObject

/**
 *  Required. The action when a pod creation is denied by the admission rule.
 *
 *  Likely values:
 *    @arg @c kGTLRBinaryAuthorization_AdmissionRule_EnforcementMode_DryrunAuditLogOnly
 *        Dryrun mode: Audit logging only. This will allow the pod creation as
 *        if
 *        the admission request had specified break-glass. (Value:
 *        "DRYRUN_AUDIT_LOG_ONLY")
 *    @arg @c kGTLRBinaryAuthorization_AdmissionRule_EnforcementMode_EnforcedBlockAndAuditLog
 *        Enforce the admission rule by blocking the pod creation. (Value:
 *        "ENFORCED_BLOCK_AND_AUDIT_LOG")
 *    @arg @c kGTLRBinaryAuthorization_AdmissionRule_EnforcementMode_EnforcementModeUnspecified
 *        Do not use. (Value: "ENFORCEMENT_MODE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *enforcementMode;

/**
 *  Required. How this admission rule will be evaluated.
 *
 *  Likely values:
 *    @arg @c kGTLRBinaryAuthorization_AdmissionRule_EvaluationMode_AlwaysAllow
 *        This rule allows all all pod creations. (Value: "ALWAYS_ALLOW")
 *    @arg @c kGTLRBinaryAuthorization_AdmissionRule_EvaluationMode_AlwaysDeny
 *        This rule denies all pod creations. (Value: "ALWAYS_DENY")
 *    @arg @c kGTLRBinaryAuthorization_AdmissionRule_EvaluationMode_EvaluationModeUnspecified
 *        Do not use. (Value: "EVALUATION_MODE_UNSPECIFIED")
 *    @arg @c kGTLRBinaryAuthorization_AdmissionRule_EvaluationMode_RequireAttestation
 *        This rule allows a pod creation if all the attestors listed in
 *        'require_attestations_by' have valid attestations for all of the
 *        images in the pod spec. (Value: "REQUIRE_ATTESTATION")
 */
@property(nonatomic, copy, nullable) NSString *evaluationMode;

/**
 *  Optional. The resource names of the attestors that must attest to
 *  a container image, in the format `projects/ * /attestors/ *`. Each
 *  attestor must exist before a policy can reference it. To add an attestor
 *  to a policy the principal issuing the policy change request must be able
 *  to read the attestor resource.
 *  Note: this field must be non-empty when the evaluation_mode field specifies
 *  REQUIRE_ATTESTATION, otherwise it must be empty.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *requireAttestationsBy;

@end


/**
 *  An admission whitelist pattern exempts images
 *  from checks by admission rules.
 */
@interface GTLRBinaryAuthorization_AdmissionWhitelistPattern : GTLRObject

/**
 *  An image name pattern to whitelist, in the form `registry/path/to/image`.
 *  This supports a trailing `*` as a wildcard, but this is allowed only in
 *  text after the `registry/` part.
 */
@property(nonatomic, copy, nullable) NSString *namePattern;

@end


/**
 *  An attestor that attests to container image
 *  artifacts. An existing attestor cannot be modified except where
 *  indicated.
 */
@interface GTLRBinaryAuthorization_Attestor : GTLRObject

/**
 *  Optional. A descriptive comment. This field may be updated.
 *  The field may be displayed in chooser dialogs.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  Required. The resource name, in the format:
 *  `projects/ * /attestors/ *`. This field may not be updated.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Output only. Time when the attestor was last updated. */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

/**
 *  This specifies how an attestation will be read, and how it will be used
 *  during policy enforcement.
 */
@property(nonatomic, strong, nullable) GTLRBinaryAuthorization_UserOwnedGrafeasNote *userOwnedGrafeasNote;

@end


/**
 *  An attestor public key that will be used to verify
 *  attestations signed by this attestor.
 */
@interface GTLRBinaryAuthorization_AttestorPublicKey : GTLRObject

/**
 *  ASCII-armored representation of a PGP public key, as the entire output by
 *  the command `gpg --export --armor foo\@example.com` (either LF or CRLF
 *  line endings).
 *  When using this field, `id` should be left blank. The BinAuthz API
 *  handlers will calculate the ID and fill it in automatically. BinAuthz
 *  computes this ID as the OpenPGP RFC4880 V4 fingerprint, represented as
 *  upper-case hex. If `id` is provided by the caller, it will be
 *  overwritten by the API-calculated ID.
 */
@property(nonatomic, copy, nullable) NSString *asciiArmoredPgpPublicKey;

/** Optional. A descriptive comment. This field may be updated. */
@property(nonatomic, copy, nullable) NSString *comment;

/**
 *  The ID of this public key.
 *  Signatures verified by BinAuthz must include the ID of the public key that
 *  can be used to verify them, and that ID must match the contents of this
 *  field exactly.
 *  Additional restrictions on this field can be imposed based on which public
 *  key type is encapsulated. See the documentation on `public_key` cases below
 *  for details.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  A raw PKIX SubjectPublicKeyInfo format public key.
 *  NOTE: `id` may be explicitly provided by the caller when using this
 *  type of public key, but it MUST be a valid RFC3986 URI. If `id` is left
 *  blank, a default one will be computed based on the digest of the DER
 *  encoding of the public key.
 */
@property(nonatomic, strong, nullable) GTLRBinaryAuthorization_PkixPublicKey *pkixPublicKey;

@end


/**
 *  Associates `members` with a `role`.
 */
@interface GTLRBinaryAuthorization_Binding : GTLRObject

/**
 *  The condition that is associated with this binding.
 *  NOTE: An unsatisfied condition will not allow user access via current
 *  binding. Different bindings, including their conditions, are examined
 *  independently.
 */
@property(nonatomic, strong, nullable) GTLRBinaryAuthorization_Expr *condition;

/**
 *  Specifies the identities requesting access for a Cloud Platform resource.
 *  `members` can have the following values:
 *  * `allUsers`: A special identifier that represents anyone who is
 *  on the internet; with or without a Google account.
 *  * `allAuthenticatedUsers`: A special identifier that represents anyone
 *  who is authenticated with a Google account or a service account.
 *  * `user:{emailid}`: An email address that represents a specific Google
 *  account. For example, `alice\@example.com` .
 *  * `serviceAccount:{emailid}`: An email address that represents a service
 *  account. For example, `my-other-app\@appspot.gserviceaccount.com`.
 *  * `group:{emailid}`: An email address that represents a Google group.
 *  For example, `admins\@example.com`.
 *  * `deleted:user:{emailid}?uid={uniqueid}`: An email address (plus unique
 *  identifier) representing a user that has been recently deleted. For
 *  example, `alice\@example.com?uid=123456789012345678901`. If the user is
 *  recovered, this value reverts to `user:{emailid}` and the recovered user
 *  retains the role in the binding.
 *  * `deleted:serviceAccount:{emailid}?uid={uniqueid}`: An email address (plus
 *  unique identifier) representing a service account that has been recently
 *  deleted. For example,
 *  `my-other-app\@appspot.gserviceaccount.com?uid=123456789012345678901`.
 *  If the service account is undeleted, this value reverts to
 *  `serviceAccount:{emailid}` and the undeleted service account retains the
 *  role in the binding.
 *  * `deleted:group:{emailid}?uid={uniqueid}`: An email address (plus unique
 *  identifier) representing a Google group that has been recently
 *  deleted. For example, `admins\@example.com?uid=123456789012345678901`. If
 *  the group is recovered, this value reverts to `group:{emailid}` and the
 *  recovered group retains the role in the binding.
 *  * `domain:{domain}`: The G Suite domain (primary) that represents all the
 *  users of that domain. For example, `google.com` or `example.com`.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *members;

/**
 *  Role that is assigned to `members`.
 *  For example, `roles/viewer`, `roles/editor`, or `roles/owner`.
 */
@property(nonatomic, copy, nullable) NSString *role;

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
@interface GTLRBinaryAuthorization_Empty : GTLRObject
@end


/**
 *  Represents a textual expression in the Common Expression Language (CEL)
 *  syntax. CEL is a C-like expression language. The syntax and semantics of CEL
 *  are documented at https://github.com/google/cel-spec.
 *  Example (Comparison):
 *  title: "Summary size limit"
 *  description: "Determines if a summary is less than 100 chars"
 *  expression: "document.summary.size() < 100"
 *  Example (Equality):
 *  title: "Requestor is owner"
 *  description: "Determines if requestor is the document owner"
 *  expression: "document.owner == request.auth.claims.email"
 *  Example (Logic):
 *  title: "Public documents"
 *  description: "Determine whether the document should be publicly visible"
 *  expression: "document.type != 'private' && document.type != 'internal'"
 *  Example (Data Manipulation):
 *  title: "Notification string"
 *  description: "Create a notification string with a timestamp."
 *  expression: "'New message received at ' + string(document.create_time)"
 *  The exact variables and functions that may be referenced within an
 *  expression
 *  are determined by the service that evaluates it. See the service
 *  documentation for additional information.
 */
@interface GTLRBinaryAuthorization_Expr : GTLRObject

/**
 *  Optional. Description of the expression. This is a longer text which
 *  describes the expression, e.g. when hovered over it in a UI.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  Textual representation of an expression in Common Expression Language
 *  syntax.
 */
@property(nonatomic, copy, nullable) NSString *expression;

/**
 *  Optional. String indicating the location of the expression for error
 *  reporting, e.g. a file name and a position in the file.
 */
@property(nonatomic, copy, nullable) NSString *location;

/**
 *  Optional. Title for the expression, i.e. a short string describing
 *  its purpose. This can be used e.g. in UIs which allow to enter the
 *  expression.
 */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  An Identity and Access Management (IAM) policy, which specifies access
 *  controls for Google Cloud resources.
 *  A `Policy` is a collection of `bindings`. A `binding` binds one or more
 *  `members` to a single `role`. Members can be user accounts, service
 *  accounts,
 *  Google groups, and domains (such as G Suite). A `role` is a named list of
 *  permissions; each `role` can be an IAM predefined role or a user-created
 *  custom role.
 *  Optionally, a `binding` can specify a `condition`, which is a logical
 *  expression that allows access to a resource only if the expression evaluates
 *  to `true`. A condition can add constraints based on attributes of the
 *  request, the resource, or both.
 *  **JSON example:**
 *  {
 *  "bindings": [
 *  {
 *  "role": "roles/resourcemanager.organizationAdmin",
 *  "members": [
 *  "user:mike\@example.com",
 *  "group:admins\@example.com",
 *  "domain:google.com",
 *  "serviceAccount:my-project-id\@appspot.gserviceaccount.com"
 *  ]
 *  },
 *  {
 *  "role": "roles/resourcemanager.organizationViewer",
 *  "members": ["user:eve\@example.com"],
 *  "condition": {
 *  "title": "expirable access",
 *  "description": "Does not grant access after Sep 2020",
 *  "expression": "request.time < timestamp('2020-10-01T00:00:00.000Z')",
 *  }
 *  }
 *  ],
 *  "etag": "BwWWja0YfJA=",
 *  "version": 3
 *  }
 *  **YAML example:**
 *  bindings:
 *  - members:
 *  - user:mike\@example.com
 *  - group:admins\@example.com
 *  - domain:google.com
 *  - serviceAccount:my-project-id\@appspot.gserviceaccount.com
 *  role: roles/resourcemanager.organizationAdmin
 *  - members:
 *  - user:eve\@example.com
 *  role: roles/resourcemanager.organizationViewer
 *  condition:
 *  title: expirable access
 *  description: Does not grant access after Sep 2020
 *  expression: request.time < timestamp('2020-10-01T00:00:00.000Z')
 *  - etag: BwWWja0YfJA=
 *  - version: 3
 *  For a description of IAM and its features, see the
 *  [IAM documentation](https://cloud.google.com/iam/docs/).
 */
@interface GTLRBinaryAuthorization_IamPolicy : GTLRObject

/**
 *  Associates a list of `members` to a `role`. Optionally, may specify a
 *  `condition` that determines how and when the `bindings` are applied. Each
 *  of the `bindings` must contain at least one member.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBinaryAuthorization_Binding *> *bindings;

/**
 *  `etag` is used for optimistic concurrency control as a way to help
 *  prevent simultaneous updates of a policy from overwriting each other.
 *  It is strongly suggested that systems make use of the `etag` in the
 *  read-modify-write cycle to perform policy updates in order to avoid race
 *  conditions: An `etag` is returned in the response to `getIamPolicy`, and
 *  systems are expected to put that etag in the request to `setIamPolicy` to
 *  ensure that their change will be applied to the same version of the policy.
 *  **Important:** If you use IAM Conditions, you must include the `etag` field
 *  whenever you call `setIamPolicy`. If you omit this field, then IAM allows
 *  you to overwrite a version `3` policy with a version `1` policy, and all of
 *  the conditions in the version `3` policy are lost.
 *
 *  Contains encoded binary data; GTLRBase64 can encode/decode (probably
 *  web-safe format).
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Specifies the format of the policy.
 *  Valid values are `0`, `1`, and `3`. Requests that specify an invalid value
 *  are rejected.
 *  Any operation that affects conditional role bindings must specify version
 *  `3`. This requirement applies to the following operations:
 *  * Getting a policy that includes a conditional role binding
 *  * Adding a conditional role binding to a policy
 *  * Changing a conditional role binding in a policy
 *  * Removing any role binding, with or without a condition, from a policy
 *  that includes conditions
 *  **Important:** If you use IAM Conditions, you must include the `etag` field
 *  whenever you call `setIamPolicy`. If you omit this field, then IAM allows
 *  you to overwrite a version `3` policy with a version `1` policy, and all of
 *  the conditions in the version `3` policy are lost.
 *  If a policy does not include any conditions, operations on that policy may
 *  specify any valid version or leave the field unset.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *version;

@end


/**
 *  Response message for BinauthzManagementService.ListAttestors.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "attestors" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRBinaryAuthorization_ListAttestorsResponse : GTLRCollectionObject

/**
 *  The list of attestors.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBinaryAuthorization_Attestor *> *attestors;

/**
 *  A token to retrieve the next page of results. Pass this value in the
 *  ListAttestorsRequest.page_token field in the subsequent call to the
 *  `ListAttestors` method to retrieve the next page of results.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  A public key in the PkixPublicKey format (see
 *  https://tools.ietf.org/html/rfc5280#section-4.1.2.7 for details).
 *  Public keys of this type are typically textually encoded using the PEM
 *  format.
 */
@interface GTLRBinaryAuthorization_PkixPublicKey : GTLRObject

/**
 *  A PEM-encoded public key, as described in
 *  https://tools.ietf.org/html/rfc7468#section-13
 */
@property(nonatomic, copy, nullable) NSString *publicKeyPem;

/**
 *  The signature algorithm used to verify a message against a signature using
 *  this key.
 *  These signature algorithm must match the structure and any object
 *  identifiers encoded in `public_key_pem` (i.e. this algorithm must match
 *  that of the public key).
 *
 *  Likely values:
 *    @arg @c kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_EcdsaP256Sha256
 *        ECDSA on the NIST P-256 curve with a SHA256 digest. (Value:
 *        "ECDSA_P256_SHA256")
 *    @arg @c kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_EcdsaP384Sha384
 *        ECDSA on the NIST P-384 curve with a SHA384 digest. (Value:
 *        "ECDSA_P384_SHA384")
 *    @arg @c kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_EcdsaP521Sha512
 *        ECDSA on the NIST P-521 curve with a SHA512 digest. (Value:
 *        "ECDSA_P521_SHA512")
 *    @arg @c kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_RsaPss2048Sha256
 *        RSASSA-PSS 2048 bit key with a SHA256 digest. (Value:
 *        "RSA_PSS_2048_SHA256")
 *    @arg @c kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_RsaPss3072Sha256
 *        RSASSA-PSS 3072 bit key with a SHA256 digest. (Value:
 *        "RSA_PSS_3072_SHA256")
 *    @arg @c kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_RsaPss4096Sha256
 *        RSASSA-PSS 4096 bit key with a SHA256 digest. (Value:
 *        "RSA_PSS_4096_SHA256")
 *    @arg @c kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_RsaPss4096Sha512
 *        RSASSA-PSS 4096 bit key with a SHA512 digest. (Value:
 *        "RSA_PSS_4096_SHA512")
 *    @arg @c kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_RsaSignPkcs12048Sha256
 *        RSASSA-PKCS1-v1_5 with a 2048 bit key and a SHA256 digest. (Value:
 *        "RSA_SIGN_PKCS1_2048_SHA256")
 *    @arg @c kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_RsaSignPkcs13072Sha256
 *        RSASSA-PKCS1-v1_5 with a 3072 bit key and a SHA256 digest. (Value:
 *        "RSA_SIGN_PKCS1_3072_SHA256")
 *    @arg @c kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_RsaSignPkcs14096Sha256
 *        RSASSA-PKCS1-v1_5 with a 4096 bit key and a SHA256 digest. (Value:
 *        "RSA_SIGN_PKCS1_4096_SHA256")
 *    @arg @c kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_RsaSignPkcs14096Sha512
 *        RSASSA-PKCS1-v1_5 with a 4096 bit key and a SHA512 digest. (Value:
 *        "RSA_SIGN_PKCS1_4096_SHA512")
 *    @arg @c kGTLRBinaryAuthorization_PkixPublicKey_SignatureAlgorithm_SignatureAlgorithmUnspecified
 *        Not specified. (Value: "SIGNATURE_ALGORITHM_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *signatureAlgorithm;

@end


/**
 *  A policy for container image binary authorization.
 */
@interface GTLRBinaryAuthorization_Policy : GTLRObject

/**
 *  Optional. Admission policy whitelisting. A matching admission request will
 *  always be permitted. This feature is typically used to exclude Google or
 *  third-party infrastructure images from Binary Authorization policies.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBinaryAuthorization_AdmissionWhitelistPattern *> *admissionWhitelistPatterns;

/**
 *  Optional. Per-cluster admission rules. Cluster spec format:
 *  `location.clusterId`. There can be at most one admission rule per cluster
 *  spec.
 *  A `location` is either a compute zone (e.g. us-central1-a) or a region
 *  (e.g. us-central1).
 *  For `clusterId` syntax restrictions see
 *  https://cloud.google.com/container-engine/reference/rest/v1/projects.zones.clusters.
 */
@property(nonatomic, strong, nullable) GTLRBinaryAuthorization_Policy_ClusterAdmissionRules *clusterAdmissionRules;

/**
 *  Required. Default admission rule for a cluster without a per-cluster, per-
 *  kubernetes-service-account, or per-istio-service-identity admission rule.
 */
@property(nonatomic, strong, nullable) GTLRBinaryAuthorization_AdmissionRule *defaultAdmissionRule;

/**
 *  Optional. A descriptive comment.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, copy, nullable) NSString *descriptionProperty;

/**
 *  Optional. Controls the evaluation of a Google-maintained global admission
 *  policy for common system-level images. Images not covered by the global
 *  policy will be subject to the project admission policy. This setting
 *  has no effect when specified inside a global admission policy.
 *
 *  Likely values:
 *    @arg @c kGTLRBinaryAuthorization_Policy_GlobalPolicyEvaluationMode_Disable
 *        Disables global policy evaluation. (Value: "DISABLE")
 *    @arg @c kGTLRBinaryAuthorization_Policy_GlobalPolicyEvaluationMode_Enable
 *        Enables global policy evaluation. (Value: "ENABLE")
 *    @arg @c kGTLRBinaryAuthorization_Policy_GlobalPolicyEvaluationMode_GlobalPolicyEvaluationModeUnspecified
 *        Not specified: DISABLE is assumed. (Value:
 *        "GLOBAL_POLICY_EVALUATION_MODE_UNSPECIFIED")
 */
@property(nonatomic, copy, nullable) NSString *globalPolicyEvaluationMode;

/**
 *  Output only. The resource name, in the format `projects/ * /policy`. There
 *  is
 *  at most one policy per project.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Output only. Time when the policy was last updated. */
@property(nonatomic, strong, nullable) GTLRDateTime *updateTime;

@end


/**
 *  Optional. Per-cluster admission rules. Cluster spec format:
 *  `location.clusterId`. There can be at most one admission rule per cluster
 *  spec.
 *  A `location` is either a compute zone (e.g. us-central1-a) or a region
 *  (e.g. us-central1).
 *  For `clusterId` syntax restrictions see
 *  https://cloud.google.com/container-engine/reference/rest/v1/projects.zones.clusters.
 *
 *  @note This class is documented as having more properties of
 *        GTLRBinaryAuthorization_AdmissionRule. Use @c -additionalJSONKeys and
 *        @c -additionalPropertyForName: to get the list of properties and then
 *        fetch them; or @c -additionalProperties to fetch them all at once.
 */
@interface GTLRBinaryAuthorization_Policy_ClusterAdmissionRules : GTLRObject
@end


/**
 *  Request message for `SetIamPolicy` method.
 */
@interface GTLRBinaryAuthorization_SetIamPolicyRequest : GTLRObject

/**
 *  REQUIRED: The complete policy to be applied to the `resource`. The size of
 *  the policy is limited to a few 10s of KB. An empty policy is a
 *  valid policy but certain Cloud Platform services (such as Projects)
 *  might reject them.
 */
@property(nonatomic, strong, nullable) GTLRBinaryAuthorization_IamPolicy *policy;

@end


/**
 *  Request message for `TestIamPermissions` method.
 */
@interface GTLRBinaryAuthorization_TestIamPermissionsRequest : GTLRObject

/**
 *  The set of permissions to check for the `resource`. Permissions with
 *  wildcards (such as '*' or 'storage.*') are not allowed. For more
 *  information see
 *  [IAM Overview](https://cloud.google.com/iam/docs/overview#permissions).
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permissions;

@end


/**
 *  Response message for `TestIamPermissions` method.
 */
@interface GTLRBinaryAuthorization_TestIamPermissionsResponse : GTLRObject

/**
 *  A subset of `TestPermissionsRequest.permissions` that the caller is
 *  allowed.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permissions;

@end


/**
 *  An user owned Grafeas note references a Grafeas
 *  Attestation.Authority Note created by the user.
 */
@interface GTLRBinaryAuthorization_UserOwnedGrafeasNote : GTLRObject

/**
 *  Output only. This field will contain the service account email address
 *  that this Attestor will use as the principal when querying Container
 *  Analysis. Attestor administrators must grant this service account the
 *  IAM role needed to read attestations from the note_reference in
 *  Container Analysis (`containeranalysis.notes.occurrences.viewer`).
 *  This email address is fixed for the lifetime of the Attestor, but callers
 *  should not make any other assumptions about the service account email;
 *  future versions may use an email based on a different naming pattern.
 */
@property(nonatomic, copy, nullable) NSString *delegationServiceAccountEmail;

/**
 *  Required. The Grafeas resource name of a Attestation.Authority Note,
 *  created by the user, in the format: `projects/ * /notes/ *`. This field may
 *  not be updated.
 *  An attestation by this attestor is stored as a Grafeas
 *  Attestation.Authority Occurrence that names a container image and that
 *  links to this Note. Grafeas is an external dependency.
 */
@property(nonatomic, copy, nullable) NSString *noteReference;

/**
 *  Optional. Public keys that verify attestations signed by this
 *  attestor. This field may be updated.
 *  If this field is non-empty, one of the specified public keys must
 *  verify that an attestation was signed by this attestor for the
 *  image specified in the admission request.
 *  If this field is empty, this attestor always returns that no
 *  valid attestations exist.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRBinaryAuthorization_AttestorPublicKey *> *publicKeys;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
