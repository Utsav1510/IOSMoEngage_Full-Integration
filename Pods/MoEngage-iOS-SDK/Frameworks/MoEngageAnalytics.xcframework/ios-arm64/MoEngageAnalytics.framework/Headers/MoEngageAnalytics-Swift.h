#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.7.2 (swiftlang-5.7.2.135.5 clang-1400.0.29.51)
#ifndef MOENGAGEANALYTICS_SWIFT_H
#define MOENGAGEANALYTICS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wduplicate-method-match"
#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT noexcept
#endif
#else
#if !defined(SWIFT_NOEXCEPT)
# define SWIFT_NOEXCEPT 
#endif
#endif
#if defined(__cplusplus)
#if !defined(SWIFT_CXX_INT_DEFINED)
#define SWIFT_CXX_INT_DEFINED
namespace swift {
using Int = ptrdiff_t;
using UInt = size_t;
}
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MoEngageAnalytics",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSCoder;

/// Do not use this class.Instead use  MoEngageAnalyticsBatchData
SWIFT_CLASS("_TtC17MoEngageAnalytics21MoEngageAnalyticsData")
@interface MoEngageAnalyticsData : NSObject <NSCoding>
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, MoEngageAppStatus, open) {
  MoEngageAppStatusInstall = 0,
  MoEngageAppStatusUpdate = 1,
};


SWIFT_CLASS("_TtC17MoEngageAnalytics19MoEngageGeoLocation")
@interface MoEngageGeoLocation : NSObject
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
- (nonnull instancetype)initWithLatitude:(double)lat andLongitude:(double)lng OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSString;
@class NSDate;

SWIFT_CLASS("_TtC17MoEngageAnalytics18MoEngageProperties")
@interface MoEngageProperties : NSObject
- (nonnull instancetype)initWithAttributes:(NSDictionary<NSString *, id> * _Nullable)attributesDict OBJC_DESIGNATED_INITIALIZER;
- (void)updateAttributesWithPluginPayload:(NSDictionary<NSString *, id> * _Nullable)payloadDict;
- (void)addAttribute:(id _Nullable)attrVal withName:(NSString * _Nonnull)attrName;
- (void)addLocationAttribute:(MoEngageGeoLocation * _Nonnull)attrVal withName:(NSString * _Nonnull)attrName;
- (void)addDateAttribute:(NSDate * _Nonnull)attrVal withName:(NSString * _Nonnull)attrName;
- (void)addDateISOStringAttribute:(NSString * _Nonnull)dateString withName:(NSString * _Nonnull)attrName;
- (void)addDateEpochAttribute:(double)epoch withName:(NSString * _Nonnull)attrName;
- (void)setNonInteractive;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSURL;
enum MoEngageUserGender : NSInteger;

SWIFT_CLASS("_TtC17MoEngageAnalytics20MoEngageSDKAnalytics")
@interface MoEngageSDKAnalytics : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MoEngageSDKAnalytics * _Nonnull sharedInstance;)
+ (MoEngageSDKAnalytics * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
/// Method to update SDK version
- (void)trackSDKVersion;
- (void)updateSessionSourceWithPushPayload:(NSDictionary * _Nonnull)payload fromMoEngage:(BOOL)isMoEngagePush;
- (void)updateSessionSourceWithURL:(NSURL * _Nonnull)url;
- (void)processURL:(NSURL * _Nullable)url;
- (void)pushTokenUpdatedWithAppId:(NSString * _Nonnull)appId;
/// Method to set app status
/// \param appStatus MoEngageAppStatus
///
/// \param appID optional account identifier.
///
- (void)appStatus:(enum MoEngageAppStatus)appStatus forAppID:(NSString * _Nullable)appID;
/// Method to track Event for account
/// \param name event name
///
/// \param properties MoEngageProperties
///
/// \param appID optional account identifier.
///
- (void)trackEvent:(NSString * _Nonnull)name withProperties:(MoEngageProperties * _Nullable)properties forAppID:(NSString * _Nullable)appID;
- (void)trackEvent:(NSString * _Nonnull)name withProperties:(MoEngageProperties * _Nullable)properties;
/// Method to flush events for account
/// \param appID optional account identifier.
///
/// \param completionBlock completion block to be called after events are flushed out
///
- (void)flushForAppID:(NSString * _Nullable)appID withCompletionBlock:(void (^ _Nullable)(BOOL))completionBlock;
- (void)flush;
- (void)flushForAppID:(NSString * _Nullable)appID;
- (void)flushWithCompletionBlock:(void (^ _Nullable)(BOOL))completionBlock;
/// Method to flush  richnotification events for account
/// note:
/// Dont call this method explicitly
/// \param appID optional account identifier.
///
/// \param completionBlock completion block to be called after events are flushed out
///
- (void)flushRichNotificationEventsForAppID:(NSString * _Nullable)appID withCompletionBlock:(void (^ _Nullable)(BOOL))completionBlock;
/// Method to set custom user attribute
/// \param value attribute value
///
/// \param attributeName attribute name
///
/// \param appID optional account identifier.
///
- (void)setUserAttribute:(id _Nullable)value withAttributeName:(NSString * _Nonnull)attributeName forAppID:(NSString * _Nullable)appID;
- (void)setUserAttribute:(id _Nullable)value withAttributeName:(NSString * _Nonnull)attributeName;
/// Method to set epoch time.
/// \param dateEpoch attribute value
///
/// \param attributeName attribute name
///
/// \param appID optional account identifier.
///
- (void)setUserAttributeEpochTime:(double)dateEpoch withAttributeName:(NSString * _Nonnull)attributeName forAppID:(NSString * _Nullable)appID;
- (void)setUserAttributeEpochTime:(double)dateEpoch withAttributeName:(NSString * _Nonnull)attributeName;
/// Method to set User attribute date
/// \param date attribute value as Date
///
/// \param attributeName attribute name
///
/// \param appID optional account identifier.
///
- (void)setUserAttributeDate:(NSDate * _Nonnull)date withAttributeName:(NSString * _Nonnull)attributeName forAppID:(NSString * _Nullable)appID;
- (void)setUserAttributeDate:(NSDate * _Nonnull)date withAttributeName:(NSString * _Nonnull)attributeName;
/// Method to set User attribute ISO date
/// \param dateStr attribute value
///
/// \param attributeName attribute name
///
/// \param appID optional account identifier.
///
- (void)setUserAttributeISODate:(NSString * _Nonnull)dateString withAttributeName:(NSString * _Nonnull)attributeName forAppID:(NSString * _Nullable)appID;
- (void)setUserAttributeISODate:(NSString * _Nonnull)dateString withAttributeName:(NSString * _Nonnull)attributeName;
/// Method to set custom user location
/// \param location MoEngageGeoLocation instance
///
/// \param attributeName attribute name
///
/// \param appID optional account identifier.
///
- (void)setLocation:(MoEngageGeoLocation * _Nonnull)location withAttributeName:(NSString * _Nonnull)attributeName forAppID:(NSString * _Nullable)appID;
- (void)setLocation:(MoEngageGeoLocation * _Nonnull)location withAttributeName:(NSString * _Nonnull)attributeName;
/// Method to set alias
/// \param alias alias value
///
/// \param appID optional account identifier.
///
- (void)setAlias:(NSString * _Nonnull)alias forAppID:(NSString * _Nullable)appID;
- (void)setAlias:(NSString * _Nonnull)alias;
/// Method to set unique ID
/// \param uniqueID Unique ID
///
/// \param appID optional account identifier.
///
- (void)setUniqueID:(NSString * _Nonnull)uniqueID forAppID:(NSString * _Nullable)appID;
- (void)setUniqueID:(NSString * _Nonnull)uniqueID;
/// Method to set Email ID
/// \param emailID emailID value.
///
/// \param appID optional account identifier.
///
- (void)setEmailID:(NSString * _Nonnull)emailID forAppID:(NSString * _Nullable)appID;
- (void)setEmailID:(NSString * _Nonnull)emailID;
/// Method to set user name
/// \param userName userName value
///
/// \param appID optional account identifier.
///
- (void)setName:(NSString * _Nonnull)userName forAppID:(NSString * _Nullable)appID;
- (void)setName:(NSString * _Nonnull)userName;
/// Method to set first name
/// \param firstName firstName value
///
/// \param appID optional account identifier.
///
- (void)setFirstName:(NSString * _Nonnull)firstName forAppID:(NSString * _Nullable)appID;
- (void)setFirstName:(NSString * _Nonnull)firstName;
/// Method to set last name
/// \param lastName lastName value
///
/// \param appID optional account identifier.
///
- (void)setLastName:(NSString * _Nonnull)lastName forAppID:(NSString * _Nullable)appID;
- (void)setLastName:(NSString * _Nonnull)lastName;
/// Method to set mobile name
/// \param mobileNum mobileNum value
///
/// \param appID optional account identifier.
///
- (void)setMobileNumber:(NSString * _Nonnull)mobileNum forAppID:(NSString * _Nullable)appID;
- (void)setMobileNumber:(NSString * _Nonnull)mobileNum;
/// Method to set gender
/// \param gender MoEngageUserGender value
///
/// \param appID optional account identifier.
///
- (void)setGender:(enum MoEngageUserGender)gender forAppID:(NSString * _Nullable)appID;
- (void)setGender:(enum MoEngageUserGender)gender;
/// Method to set user date of birth
/// \param dob Date
///
/// \param appID optional account identifier.
///
- (void)setDateOfBirth:(NSDate * _Nonnull)dob forAppID:(NSString * _Nullable)appID;
- (void)setDateOfBirth:(NSDate * _Nonnull)dob;
/// Method to set user date of birth ISO date
/// \param dateString attribute value in the format yyyy-MM-dd’T’HH:mm:ss.SSS’Z’ /  yyyy-MM-dd’T’HH:mm:ss’Z’
///
/// \param appID optional account identifier.
///
- (void)setDateOfBirthInISO:(NSString * _Nonnull)dateString forAppID:(NSString * _Nullable)appID;
/// Method to set user date of birth ISO date
/// \param dateString attribute value in the format yyyy-MM-dd’T’HH:mm:ss.SSS’Z’ /  yyyy-MM-dd’T’HH:mm:ss’Z’
///
- (void)setDateOfBirthInISO:(NSString * _Nonnull)dateString;
/// Method to set user location
/// \param location MoEngageGeoLocation instance
///
/// \param appID optional account identifier.
///
- (void)setLocation:(MoEngageGeoLocation * _Nonnull)location forAppID:(NSString * _Nullable)appID;
- (void)setLocation:(MoEngageGeoLocation * _Nonnull)location;
/// Method to track user attribute push preference
/// \param isPushEnabled Bool
///
/// \param appID optional account identifier.
///
- (void)trackUserPushPreference:(BOOL)isPushEnabled forAppID:(NSString * _Nullable)appID;
- (void)trackLocale;
- (void)trackLocaleForAppID:(NSString * _Nullable)appID;
/// Method to reset user
/// \param appID optional account identifier.
///
/// \param completionBlock completion handler to be returned after resetting
///
- (void)resetUserForAppID:(NSString * _Nullable)appID withCompletionBlock:(void (^ _Nullable)(BOOL))completionBlock;
- (void)resetUser;
- (void)resetUserWithCompletionBlock:(void (^ _Nullable)(BOOL))completionBlock;
- (void)resetUserForAppID:(NSString * _Nullable)appID;
/// Method to enable data tracking
/// \param appID optional account identifier.
///
- (void)enableDataTrackingForAppID:(NSString * _Nullable)appID;
- (void)enableDataTracking;
/// Method to disable data tracking
/// \param appID optional account identifier.
///
- (void)disableDataTrackingForAppID:(NSString * _Nullable)appID;
- (void)disableDataTracking;
/// Method to opt out data  IDFA tracking
/// \param appID optional account identifier.
///
- (void)enableIDFATrackingForAppID:(NSString * _Nullable)appID;
- (void)enableIDFATracking;
/// Method to opt out data  IDFA tracking
/// \param appID optional account identifier.
///
- (void)disableIDFATrackingForAppID:(NSString * _Nullable)appID;
- (void)disableIDFATracking;
/// Method to opt out data  IDFV tracking
/// \param appID optional account identifier.
///
- (void)enableIDFVTrackingForAppID:(NSString * _Nullable)appID;
- (void)enableIDFVTracking;
/// Method to opt out data  IDFV tracking
/// \param appID optional account identifier.
///
- (void)disableIDFVTrackingForAppID:(NSString * _Nullable)appID;
- (void)disableIDFVTracking;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Do not use this class.Instead use  MoEngageAnalyticsSession
SWIFT_CLASS("_TtC17MoEngageAnalytics15MoEngageSession")
@interface MoEngageSession : NSObject <NSCoding>
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Do not use this class.Instead use  MoEngageAnalyticsSessionInfo
SWIFT_CLASS("_TtC17MoEngageAnalytics19MoEngageSessionInfo")
@interface MoEngageSessionInfo : NSObject <NSCoding>
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Do not use this class.Instead use  MoEngageAnalyticsSource
SWIFT_CLASS("_TtC17MoEngageAnalytics14MoEngageSource")
@interface MoEngageSource : NSObject <NSCoding>
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Do not use this class, instead use MoEngageAnalyticsUserAttribute
SWIFT_CLASS("_TtC17MoEngageAnalytics21MoEngageUserAttribute")
@interface MoEngageUserAttribute : NSObject <NSCoding>
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)decoder OBJC_DESIGNATED_INITIALIZER;
- (void)encodeWithCoder:(NSCoder * _Nonnull)encoder;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC17MoEngageAnalytics27MoEngageUserAttributeEntity")
@interface MoEngageUserAttributeEntity : NSObject <NSCoding>
- (void)encodeWithCoder:(NSCoder * _Nonnull)coder;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Do not use this class, instead use MoEngageAnalyticsUserAttributeData
SWIFT_CLASS("_TtC17MoEngageAnalytics26MoEngageUserAttributesData")
@interface MoEngageUserAttributesData : NSObject <NSCoding>
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)decoder OBJC_DESIGNATED_INITIALIZER;
- (void)encodeWithCoder:(NSCoder * _Nonnull)encoder;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

typedef SWIFT_ENUM(NSInteger, MoEngageUserGender, open) {
  MoEngageUserGenderMale = 0,
  MoEngageUserGenderFemale = 1,
  MoEngageUserGenderOthers = 2,
};

#endif
#if defined(__cplusplus)
#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
