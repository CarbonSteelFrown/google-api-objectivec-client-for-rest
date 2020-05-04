// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   YouTube Analytics API (youtubeAnalytics/v2)
// Description:
//   Retrieves your YouTube Analytics data.
// Documentation:
//   https://developers.google.com/youtube/analytics

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRYouTubeAnalytics_ErrorProto;
@class GTLRYouTubeAnalytics_Errors;
@class GTLRYouTubeAnalytics_Group;
@class GTLRYouTubeAnalytics_GroupContentDetails;
@class GTLRYouTubeAnalytics_GroupItem;
@class GTLRYouTubeAnalytics_GroupItemResource;
@class GTLRYouTubeAnalytics_GroupSnippet;
@class GTLRYouTubeAnalytics_ResultTableColumnHeader;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRYouTubeAnalytics_ErrorProto.locationType

/**
 *  other location type which can safely be shared
 *  externally.
 *
 *  Value: "OTHER"
 */
FOUNDATION_EXTERN NSString * const kGTLRYouTubeAnalytics_ErrorProto_LocationType_Other;
/**
 *  Location is request paramater. This maps to the {\@link PARAMETERS} in
 *  {\@link MessageLocation}.
 *
 *  Value: "PARAMETER"
 */
FOUNDATION_EXTERN NSString * const kGTLRYouTubeAnalytics_ErrorProto_LocationType_Parameter;
/**
 *  location is an xpath-like path pointing
 *  to the request field that caused the error.
 *
 *  Value: "PATH"
 */
FOUNDATION_EXTERN NSString * const kGTLRYouTubeAnalytics_ErrorProto_LocationType_Path;

// ----------------------------------------------------------------------------
// GTLRYouTubeAnalytics_Errors.code

/** Value: "BAD_REQUEST" */
FOUNDATION_EXTERN NSString * const kGTLRYouTubeAnalytics_Errors_Code_BadRequest;
/** Value: "CONFLICT" */
FOUNDATION_EXTERN NSString * const kGTLRYouTubeAnalytics_Errors_Code_Conflict;
/** Value: "FORBIDDEN" */
FOUNDATION_EXTERN NSString * const kGTLRYouTubeAnalytics_Errors_Code_Forbidden;
/** Value: "GONE" */
FOUNDATION_EXTERN NSString * const kGTLRYouTubeAnalytics_Errors_Code_Gone;
/** Value: "INTERNAL_ERROR" */
FOUNDATION_EXTERN NSString * const kGTLRYouTubeAnalytics_Errors_Code_InternalError;
/** Value: "NOT_FOUND" */
FOUNDATION_EXTERN NSString * const kGTLRYouTubeAnalytics_Errors_Code_NotFound;
/** Value: "PRECONDITION_FAILED" */
FOUNDATION_EXTERN NSString * const kGTLRYouTubeAnalytics_Errors_Code_PreconditionFailed;
/** Value: "SERVICE_UNAVAILABLE" */
FOUNDATION_EXTERN NSString * const kGTLRYouTubeAnalytics_Errors_Code_ServiceUnavailable;

/**
 *  Empty response.
 */
@interface GTLRYouTubeAnalytics_EmptyResponse : GTLRObject

/** Apiary error details */
@property(nonatomic, strong, nullable) GTLRYouTubeAnalytics_Errors *errors;

@end


/**
 *  Describes one specific error.
 */
@interface GTLRYouTubeAnalytics_ErrorProto : GTLRObject

/**
 *  Error arguments, to be used when building user-friendly error messages
 *  given the error domain and code. Different error codes require different
 *  arguments.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *argument;

/**
 *  Error code in the error domain. This should correspond to
 *  a value of the enum type whose name is in domain. See
 *  the core error domain in error_domain.proto.
 */
@property(nonatomic, copy, nullable) NSString *code;

/**
 *  Debugging information, which should not be
 *  shared externally.
 */
@property(nonatomic, copy, nullable) NSString *debugInfo;

/**
 *  Error domain. RoSy services can define their own
 *  domain and error codes. This should normally be
 *  the name of an enum type, such as: gdata.CoreErrorDomain
 */
@property(nonatomic, copy, nullable) NSString *domain;

/**
 *  A short explanation for the error, which can be shared outside Google.
 *  Please set domain, code and arguments whenever possible instead of this
 *  error message so that external APIs can build safe error messages
 *  themselves.
 *  External messages built in a RoSy interface will most likely refer to
 *  information and concepts that are not available externally and should not
 *  be exposed. It is safer if external APIs can understand the errors and
 *  decide what the error message should look like.
 */
@property(nonatomic, copy, nullable) NSString *externalErrorMessage;

/**
 *  Location of the error, as specified by the location type.
 *  If location_type is PATH, this should be a path to a field that's
 *  relative to the request, using FieldPath notation
 *  (net/proto2/util/public/field_path.h).
 *  Examples:
 *  authenticated_user.gaia_id
 *  resource.address[2].country
 */
@property(nonatomic, copy, nullable) NSString *location;

/**
 *  locationType
 *
 *  Likely values:
 *    @arg @c kGTLRYouTubeAnalytics_ErrorProto_LocationType_Other other location
 *        type which can safely be shared
 *        externally. (Value: "OTHER")
 *    @arg @c kGTLRYouTubeAnalytics_ErrorProto_LocationType_Parameter Location
 *        is request paramater. This maps to the {\@link PARAMETERS} in
 *        {\@link MessageLocation}. (Value: "PARAMETER")
 *    @arg @c kGTLRYouTubeAnalytics_ErrorProto_LocationType_Path location is an
 *        xpath-like path pointing
 *        to the request field that caused the error. (Value: "PATH")
 */
@property(nonatomic, copy, nullable) NSString *locationType;

@end


/**
 *  Request Error information.
 *  The presence of an error field signals that the operation
 *  has failed.
 */
@interface GTLRYouTubeAnalytics_Errors : GTLRObject

/**
 *  Global error code. Deprecated and ignored.
 *  Set custom error codes in ErrorProto.domain and ErrorProto.code
 *  instead.
 *
 *  Likely values:
 *    @arg @c kGTLRYouTubeAnalytics_Errors_Code_BadRequest Value "BAD_REQUEST"
 *    @arg @c kGTLRYouTubeAnalytics_Errors_Code_Conflict Value "CONFLICT"
 *    @arg @c kGTLRYouTubeAnalytics_Errors_Code_Forbidden Value "FORBIDDEN"
 *    @arg @c kGTLRYouTubeAnalytics_Errors_Code_Gone Value "GONE"
 *    @arg @c kGTLRYouTubeAnalytics_Errors_Code_InternalError Value
 *        "INTERNAL_ERROR"
 *    @arg @c kGTLRYouTubeAnalytics_Errors_Code_NotFound Value "NOT_FOUND"
 *    @arg @c kGTLRYouTubeAnalytics_Errors_Code_PreconditionFailed Value
 *        "PRECONDITION_FAILED"
 *    @arg @c kGTLRYouTubeAnalytics_Errors_Code_ServiceUnavailable Value
 *        "SERVICE_UNAVAILABLE"
 */
@property(nonatomic, copy, nullable) NSString *code;

/** Specific error description and codes */
@property(nonatomic, strong, nullable) NSArray<GTLRYouTubeAnalytics_ErrorProto *> *error;

/**
 *  Request identifier generated by the service, which can be
 *  used to identify the error in the logs
 */
@property(nonatomic, copy, nullable) NSString *requestId;

@end


/**
 *  A group.
 */
@interface GTLRYouTubeAnalytics_Group : GTLRObject

/**
 *  The `contentDetails` object contains additional information about the
 *  group, such as the number and type of items that it contains.
 */
@property(nonatomic, strong, nullable) GTLRYouTubeAnalytics_GroupContentDetails *contentDetails;

/** Apiary error details */
@property(nonatomic, strong, nullable) GTLRYouTubeAnalytics_Errors *errors;

/** The Etag of this resource. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The ID that YouTube uses to uniquely identify the group.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/** Identifies the API resource's type. The value will be `youtube#group`. */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The `snippet` object contains basic information about the group, including
 *  its creation date and name.
 */
@property(nonatomic, strong, nullable) GTLRYouTubeAnalytics_GroupSnippet *snippet;

@end


/**
 *  A group's content details.
 */
@interface GTLRYouTubeAnalytics_GroupContentDetails : GTLRObject

/**
 *  The number of items in the group.
 *
 *  Uses NSNumber of unsignedLongLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *itemCount;

/**
 *  The type of resources that the group contains.
 *  Valid values for this property are:
 *  * `youtube#channel`
 *  * `youtube#playlist`
 *  * `youtube#video`
 *  * `youtubePartner#asset`
 */
@property(nonatomic, copy, nullable) NSString *itemType;

@end


/**
 *  A group item.
 */
@interface GTLRYouTubeAnalytics_GroupItem : GTLRObject

/** Apiary error details */
@property(nonatomic, strong, nullable) GTLRYouTubeAnalytics_Errors *errors;

/** The Etag of this resource. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  The ID that YouTube uses to uniquely identify the group that contains the
 *  item.
 */
@property(nonatomic, copy, nullable) NSString *groupId;

/**
 *  The ID that YouTube uses to uniquely identify the `channel`, `video`,
 *  `playlist`, or `asset` resource that is included in the group. Note that
 *  this ID refers specifically to the inclusion of that resource in a
 *  particular group and is different than the channel ID, video ID,
 *  playlist ID, or asset ID that uniquely identifies the resource itself.
 *  The `resource.id` property's value specifies the unique channel, video,
 *  playlist, or asset ID.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Identifies the API resource's type. The value will be `youtube#groupItem`.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The `resource` object contains information that identifies the item being
 *  added to the group.
 */
@property(nonatomic, strong, nullable) GTLRYouTubeAnalytics_GroupItemResource *resource;

@end


/**
 *  GTLRYouTubeAnalytics_GroupItemResource
 */
@interface GTLRYouTubeAnalytics_GroupItemResource : GTLRObject

/**
 *  The channel, video, playlist, or asset ID that YouTube uses to uniquely
 *  identify the item that is being added to the group.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Identifies the type of resource being added to the group.
 *  Valid values for this property are:
 *  * `youtube#channel`
 *  * `youtube#playlist`
 *  * `youtube#video`
 *  * `youtubePartner#asset`
 */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  A group snippet.
 */
@interface GTLRYouTubeAnalytics_GroupSnippet : GTLRObject

/**
 *  The date and time that the group was created. The value is specified in
 *  ISO 8601 (YYYY-MM-DDThh:mm:ss.sZ) format.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *publishedAt;

/** The group name. The value must be a non-empty string. */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  Response message for GroupsService.ListGroupItems.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property.
 */
@interface GTLRYouTubeAnalytics_ListGroupItemsResponse : GTLRCollectionObject

/** Apiary error details */
@property(nonatomic, strong, nullable) GTLRYouTubeAnalytics_Errors *errors;

/** The Etag of this resource. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  A list of groups that match the API request parameters. Each item in the
 *  list represents a `groupItem` resource.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRYouTubeAnalytics_GroupItem *> *items;

/**
 *  Identifies the API resource's type. The value will be
 *  `youtube#groupItemListResponse`.
 */
@property(nonatomic, copy, nullable) NSString *kind;

@end


/**
 *  Response message for GroupsService.ListGroups.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "items" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRYouTubeAnalytics_ListGroupsResponse : GTLRCollectionObject

/** Apiary error details */
@property(nonatomic, strong, nullable) GTLRYouTubeAnalytics_Errors *errors;

/** The Etag of this resource. */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  A list of groups that match the API request parameters. Each item in the
 *  list represents a `group` resource.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRYouTubeAnalytics_Group *> *items;

/**
 *  Identifies the API resource's type. The value will be
 *  `youtube#groupListResponse`.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The token that can be used as the value of the `pageToken` parameter to
 *  retrieve the next page in the result set.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  Response message for TargetedQueriesService.Query.
 */
@interface GTLRYouTubeAnalytics_QueryResponse : GTLRObject

/**
 *  This value specifies information about the data returned in the `rows`
 *  fields. Each item in the `columnHeaders` list identifies a field returned
 *  in the `rows` value, which contains a list of comma-delimited data. The
 *  `columnHeaders` list will begin with the dimensions specified in the API
 *  request, which will be followed by the metrics specified in the API
 *  request. The order of both dimensions and metrics will match the ordering
 *  in the API request. For example, if the API request contains the parameters
 *  `dimensions=ageGroup,gender&metrics=viewerPercentage`, the API response
 *  will return columns in this order: `ageGroup`, `gender`,
 *  `viewerPercentage`.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRYouTubeAnalytics_ResultTableColumnHeader *> *columnHeaders;

/** When set, indicates that the operation failed. */
@property(nonatomic, strong, nullable) GTLRYouTubeAnalytics_Errors *errors;

/**
 *  This value specifies the type of data included in the API response.
 *  For the query method, the kind property value will be
 *  `youtubeAnalytics#resultTable`.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The list contains all rows of the result table. Each item in the list is
 *  an array that contains comma-delimited data corresponding to a single row
 *  of data. The order of the comma-delimited data fields will match the
 *  order of the columns listed in the `columnHeaders` field.
 *  If no data is available for the given query, the `rows` element will be
 *  omitted from the response.
 *  The response for a query with the `day` dimension will not contain rows for
 *  the most recent days.
 *
 *  Can be any valid JSON type.
 */
@property(nonatomic, strong, nullable) NSArray<NSArray *> *rows;

@end


/**
 *  The description of a column of the result table.
 */
@interface GTLRYouTubeAnalytics_ResultTableColumnHeader : GTLRObject

/** The type of the column (`DIMENSION` or `METRIC`). */
@property(nonatomic, copy, nullable) NSString *columnType;

/**
 *  The type of the data in the column (`STRING`, `INTEGER`, `FLOAT`, etc.).
 */
@property(nonatomic, copy, nullable) NSString *dataType;

/** The name of the dimension or metric. */
@property(nonatomic, copy, nullable) NSString *name;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
