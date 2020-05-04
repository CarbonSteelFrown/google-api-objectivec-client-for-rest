// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   PageSpeed Insights API (pagespeedonline/v5)
// Description:
//   The PageSpeed Insights API lets you analyze the performance of your website
//   with a simple API. It offers tailored suggestions for how you can optimize
//   your site, and lets you easily integrate PageSpeed Insights analysis into
//   your development tools and workflow.
// Documentation:
//   https://developers.google.com/speed/docs/insights/v5/about

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRQuery.h"
#else
  #import "GTLRQuery.h"
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
// Constants - For some of the query classes' properties below.

// ----------------------------------------------------------------------------
// category

/** Value: "ACCESSIBILITY" */
FOUNDATION_EXTERN NSString * const kGTLRPagespeedInsightsCategoryAccessibility;
/** Value: "BEST_PRACTICES" */
FOUNDATION_EXTERN NSString * const kGTLRPagespeedInsightsCategoryBestPractices;
/** Value: "CATEGORY_UNSPECIFIED" */
FOUNDATION_EXTERN NSString * const kGTLRPagespeedInsightsCategoryCategoryUnspecified;
/** Value: "PERFORMANCE" */
FOUNDATION_EXTERN NSString * const kGTLRPagespeedInsightsCategoryPerformance;
/** Value: "PWA" */
FOUNDATION_EXTERN NSString * const kGTLRPagespeedInsightsCategoryPwa;
/** Value: "SEO" */
FOUNDATION_EXTERN NSString * const kGTLRPagespeedInsightsCategorySeo;

// ----------------------------------------------------------------------------
// strategy

/** Value: "DESKTOP" */
FOUNDATION_EXTERN NSString * const kGTLRPagespeedInsightsStrategyDesktop;
/** Value: "MOBILE" */
FOUNDATION_EXTERN NSString * const kGTLRPagespeedInsightsStrategyMobile;
/** Value: "STRATEGY_UNSPECIFIED" */
FOUNDATION_EXTERN NSString * const kGTLRPagespeedInsightsStrategyStrategyUnspecified;

// ----------------------------------------------------------------------------
// Query Classes
//

/**
 *  Parent class for other Pagespeed Insights query classes.
 */
@interface GTLRPagespeedInsightsQuery : GTLRQuery

/** Selector specifying which fields to include in a partial response. */
@property(nonatomic, copy, nullable) NSString *fields;

@end

/**
 *  Runs PageSpeed analysis on the page at the specified URL, and returns
 *  PageSpeed scores, a list of suggestions to make that page faster, and other
 *  information.
 *
 *  Method: pagespeedonline.pagespeedapi.runpagespeed
 *
 *  Authorization scope(s):
 *    @c kGTLRAuthScopePagespeedInsightsOpenid
 */
@interface GTLRPagespeedInsightsQuery_PagespeedapiRunpagespeed : GTLRPagespeedInsightsQuery
// Previous library name was
//   +[GTLQueryPagespeedInsights queryForPagespeedapiRunpagespeed]

/** The captcha token passed when filling out a captcha. */
@property(nonatomic, copy, nullable) NSString *captchaToken;

/**
 *  A Lighthouse category to run; if none are given, only Performance category
 *  will be run
 *
 *  Likely values:
 *    @arg @c kGTLRPagespeedInsightsCategoryCategoryUnspecified Value
 *        "CATEGORY_UNSPECIFIED"
 *    @arg @c kGTLRPagespeedInsightsCategoryAccessibility Value "ACCESSIBILITY"
 *    @arg @c kGTLRPagespeedInsightsCategoryBestPractices Value "BEST_PRACTICES"
 *    @arg @c kGTLRPagespeedInsightsCategoryPerformance Value "PERFORMANCE"
 *    @arg @c kGTLRPagespeedInsightsCategoryPwa Value "PWA"
 *    @arg @c kGTLRPagespeedInsightsCategorySeo Value "SEO"
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *category;

/** The locale used to localize formatted results */
@property(nonatomic, copy, nullable) NSString *locale;

/**
 *  The analysis strategy (desktop or mobile) to use, and desktop is the
 *  default
 *
 *  Likely values:
 *    @arg @c kGTLRPagespeedInsightsStrategyStrategyUnspecified Value
 *        "STRATEGY_UNSPECIFIED"
 *    @arg @c kGTLRPagespeedInsightsStrategyDesktop Value "DESKTOP"
 *    @arg @c kGTLRPagespeedInsightsStrategyMobile Value "MOBILE"
 */
@property(nonatomic, copy, nullable) NSString *strategy;

/** The URL to fetch and analyze */
@property(nonatomic, copy, nullable) NSString *url;

/** Campaign name for analytics. */
@property(nonatomic, copy, nullable) NSString *utmCampaign;

/** Campaign source for analytics. */
@property(nonatomic, copy, nullable) NSString *utmSource;

/**
 *  Fetches a @c GTLRPagespeedInsights_PagespeedApiPagespeedResponseV5.
 *
 *  Runs PageSpeed analysis on the page at the specified URL, and returns
 *  PageSpeed scores, a list of suggestions to make that page faster, and other
 *  information.
 *
 *  @return GTLRPagespeedInsightsQuery_PagespeedapiRunpagespeed
 */
+ (instancetype)query;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
