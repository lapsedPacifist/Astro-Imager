// Generated by Apple Swift version 5.1.3 (swiftlang-1100.0.282.1 clang-1100.0.33.15)
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

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

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
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AppKit;
@import CoreData;
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Astro_Imager",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif


SWIFT_CLASS("_TtC12Astro_Imager11AppDelegate")
@interface AppDelegate : NSObject <NSApplicationDelegate>
- (void)applicationDidFinishLaunching:(NSNotification * _Nonnull)aNotification;
- (void)applicationWillTerminate:(NSNotification * _Nonnull)aNotification;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSEntityDescription;
@class NSManagedObjectContext;

SWIFT_CLASS("_TtC12Astro_Imager13AstroImageDAO")
@interface AstroImageDAO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end

@class PropertyDAO;
@class NSSet;

@interface AstroImageDAO (SWIFT_EXTENSION(Astro_Imager))
- (void)addPropertiesObject:(PropertyDAO * _Nonnull)value;
- (void)removePropertiesObject:(PropertyDAO * _Nonnull)value;
- (void)addProperties:(NSSet * _Nonnull)values;
- (void)removeProperties:(NSSet * _Nonnull)values;
@end

@class StackedImageDAO;
@class ImageSetDAO;
@class ImageTransformDAO;

@interface AstroImageDAO (SWIFT_EXTENSION(Astro_Imager))
@property (nonatomic, copy) NSString * _Nullable channelString;
@property (nonatomic, copy) NSDate * _Nullable date;
@property (nonatomic) int64_t height;
@property (nonatomic) double integrationTime;
@property (nonatomic) BOOL isBiasFrame;
@property (nonatomic) BOOL isDarkFrame;
@property (nonatomic) BOOL isFlatFrame;
@property (nonatomic) BOOL isLightFrame;
@property (nonatomic) BOOL isRGB;
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic) int64_t sequenceNumber;
@property (nonatomic, copy) NSData * _Nullable thumbnail;
@property (nonatomic, copy) NSURL * _Nullable uri;
@property (nonatomic) int64_t width;
@property (nonatomic, strong) StackedImageDAO * _Nullable inStackedImage;
@property (nonatomic, strong) NSSet * _Nullable properties;
@property (nonatomic, strong) ImageSetDAO * _Nullable set;
@property (nonatomic, strong) ImageTransformDAO * _Nullable transformation;
@end


SWIFT_CLASS("_TtC12Astro_Imager11PropertyDAO")
@interface PropertyDAO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12Astro_Imager18BooleanPropertyDAO")
@interface BooleanPropertyDAO : PropertyDAO
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface BooleanPropertyDAO (SWIFT_EXTENSION(Astro_Imager))
@property (nonatomic) BOOL booleanValue;
@end


SWIFT_CLASS("_TtC12Astro_Imager20CelestialPositionDAO")
@interface CelestialPositionDAO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface CelestialPositionDAO (SWIFT_EXTENSION(Astro_Imager))
@property (nonatomic) double centerDeclination;
@property (nonatomic) double centerRightAscension;
@property (nonatomic) double positionAngle;
@property (nonatomic) double resolution;
@property (nonatomic, strong) ImageSetDAO * _Nullable set;
@end


SWIFT_CLASS("_TtC12Astro_Imager15DataPropertyDAO")
@interface DataPropertyDAO : PropertyDAO
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface DataPropertyDAO (SWIFT_EXTENSION(Astro_Imager))
@property (nonatomic, copy) NSData * _Nullable dataValue;
@end


SWIFT_CLASS("_TtC12Astro_Imager15DatePropertyDAO")
@interface DatePropertyDAO : PropertyDAO
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface DatePropertyDAO (SWIFT_EXTENSION(Astro_Imager))
@property (nonatomic, copy) NSDate * _Nullable dateValue;
@end


SWIFT_CLASS("_TtC12Astro_Imager17DoublePropertyDAO")
@interface DoublePropertyDAO : PropertyDAO
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface DoublePropertyDAO (SWIFT_EXTENSION(Astro_Imager))
@property (nonatomic) double doubleValue;
@end


SWIFT_CLASS_NAMED("ProcessorDAO")
@interface ProcessorDAO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12Astro_Imager12GeneratorDAO")
@interface GeneratorDAO : ProcessorDAO
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC12Astro_Imager11ImageSetDAO")
@interface ImageSetDAO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface ImageSetDAO (SWIFT_EXTENSION(Astro_Imager))
- (void)addSubSetsObject:(ImageSetDAO * _Nonnull)value;
- (void)removeSubSetsObject:(ImageSetDAO * _Nonnull)value;
- (void)addSubSets:(NSSet * _Nonnull)values;
- (void)removeSubSets:(NSSet * _Nonnull)values;
@end


@interface ImageSetDAO (SWIFT_EXTENSION(Astro_Imager))
- (void)addImagesObject:(AstroImageDAO * _Nonnull)value;
- (void)removeImagesObject:(AstroImageDAO * _Nonnull)value;
- (void)addImages:(NSSet * _Nonnull)values;
- (void)removeImages:(NSSet * _Nonnull)values;
@end


@interface ImageSetDAO (SWIFT_EXTENSION(Astro_Imager))
- (void)addInputForProcessorsObject:(ProcessorDAO * _Nonnull)value;
- (void)removeInputForProcessorsObject:(ProcessorDAO * _Nonnull)value;
- (void)addInputForProcessors:(NSSet * _Nonnull)values;
- (void)removeInputForProcessors:(NSSet * _Nonnull)values;
@end


@interface ImageSetDAO (SWIFT_EXTENSION(Astro_Imager))
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, strong) CelestialPositionDAO * _Nullable celestialPosition;
@property (nonatomic, strong) NSSet * _Nullable images;
@property (nonatomic, strong) NSSet * _Nullable inputForProcessors;
@property (nonatomic, strong) ProcessorDAO * _Nullable outputForProcessor;
@property (nonatomic, strong) NSSet * _Nullable subSets;
@property (nonatomic, strong) ImageSetDAO * _Nullable superSet;
@end


SWIFT_CLASS("_TtC12Astro_Imager17ImageTransformDAO")
@interface ImageTransformDAO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface ImageTransformDAO (SWIFT_EXTENSION(Astro_Imager))
@property (nonatomic) double rotation;
@property (nonatomic) double translationInX;
@property (nonatomic) double translationInY;
@property (nonatomic, strong) AstroImageDAO * _Nullable image;
@end


SWIFT_CLASS("_TtC12Astro_Imager18IntegerPropertyDAO")
@interface IntegerPropertyDAO : PropertyDAO
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface IntegerPropertyDAO (SWIFT_EXTENSION(Astro_Imager))
@property (nonatomic) int64_t integerValue;
@end


SWIFT_CLASS("_TtC12Astro_Imager20NavigationController")
@interface NavigationController : NSObject <NSOutlineViewDataSource, NSOutlineViewDelegate>
- (void)awakeFromNib;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12Astro_Imager11PipelineDAO")
@interface PipelineDAO : NSManagedObject
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface PipelineDAO (SWIFT_EXTENSION(Astro_Imager))
- (void)addProcessorsObject:(ProcessorDAO * _Nonnull)value;
- (void)removeProcessorsObject:(ProcessorDAO * _Nonnull)value;
- (void)addProcessors:(NSSet * _Nonnull)values;
- (void)removeProcessors:(NSSet * _Nonnull)values;
@end


@interface PipelineDAO (SWIFT_EXTENSION(Astro_Imager))
@property (nonatomic, strong) NSSet * _Nullable processors;
@end



@interface ProcessorDAO (SWIFT_EXTENSION(Astro_Imager))
- (void)addOutputObject:(ProcessorDAO * _Nonnull)value;
- (void)removeOutputObject:(ProcessorDAO * _Nonnull)value;
- (void)addOutput:(NSSet * _Nonnull)values;
- (void)removeOutput:(NSSet * _Nonnull)values;
@end


@interface ProcessorDAO (SWIFT_EXTENSION(Astro_Imager))
- (void)addPropertiesObject:(PropertyDAO * _Nonnull)value;
- (void)removePropertiesObject:(PropertyDAO * _Nonnull)value;
- (void)addProperties:(NSSet * _Nonnull)values;
- (void)removeProperties:(NSSet * _Nonnull)values;
@end


@interface ProcessorDAO (SWIFT_EXTENSION(Astro_Imager))
@property (nonatomic, copy) NSString * _Nullable plugin;
@property (nonatomic, strong) ProcessorDAO * _Nullable input;
@property (nonatomic, strong) ImageSetDAO * _Nullable inputImageSet;
@property (nonatomic, strong) NSSet * _Nullable output;
@property (nonatomic, strong) ImageSetDAO * _Nullable outputImageSet;
@property (nonatomic, strong) PipelineDAO * _Nullable pipeline;
@property (nonatomic, strong) NSSet * _Nullable properties;
@end


SWIFT_CLASS("_TtC12Astro_Imager7Project")
@interface Project : NSPersistentDocument
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, strong) IBOutlet NavigationController * _Null_unspecified navigationController;
- (IBAction)runPipeline:(id _Nonnull)sender;
- (IBAction)insertProcessor:(id _Nonnull)sender;
- (IBAction)showPipelineNavigator:(id _Nonnull)sender;
- (IBAction)showDeviceNavigator:(id _Nonnull)sender;
- (IBAction)showImageNavigator:(id _Nonnull)sender;
- (IBAction)showObjectNavigator:(id _Nonnull)sender;
- (IBAction)showProcessNavigator:(id _Nonnull)sender;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) BOOL autosavesInPlace;)
+ (BOOL)autosavesInPlace SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, copy) NSNibName _Nullable windowNibName;
@end



@interface PropertyDAO (SWIFT_EXTENSION(Astro_Imager))
@property (nonatomic, copy) NSString * _Nullable name;
@property (nonatomic, strong) AstroImageDAO * _Nullable image;
@property (nonatomic, strong) ProcessorDAO * _Nullable processor;
@end


SWIFT_CLASS("_TtC12Astro_Imager13SerializerDAO")
@interface SerializerDAO : ProcessorDAO
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC12Astro_Imager15StackedImageDAO")
@interface StackedImageDAO : AstroImageDAO
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface StackedImageDAO (SWIFT_EXTENSION(Astro_Imager))
- (void)addStackedImagesObject:(AstroImageDAO * _Nonnull)value;
- (void)removeStackedImagesObject:(AstroImageDAO * _Nonnull)value;
- (void)addStackedImages:(NSSet * _Nonnull)values;
- (void)removeStackedImages:(NSSet * _Nonnull)values;
@end


@interface StackedImageDAO (SWIFT_EXTENSION(Astro_Imager))
@property (nonatomic, strong) NSSet * _Nullable stackedImages;
@end


SWIFT_CLASS("_TtC12Astro_Imager17StringPropertyDAO")
@interface StringPropertyDAO : PropertyDAO
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface StringPropertyDAO (SWIFT_EXTENSION(Astro_Imager))
@property (nonatomic, copy) NSString * _Nullable stringValue;
@end


SWIFT_CLASS("_TtC12Astro_Imager14TransformerDAO")
@interface TransformerDAO : ProcessorDAO
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end




SWIFT_CLASS("_TtC12Astro_Imager14URIPropertyDAO")
@interface URIPropertyDAO : PropertyDAO
- (nonnull instancetype)initWithEntity:(NSEntityDescription * _Nonnull)entity insertIntoManagedObjectContext:(NSManagedObjectContext * _Nullable)context OBJC_DESIGNATED_INITIALIZER;
@end


@interface URIPropertyDAO (SWIFT_EXTENSION(Astro_Imager))
@property (nonatomic, copy) NSURL * _Nullable uriValue;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
