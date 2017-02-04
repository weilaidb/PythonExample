#define AVUTIL_ATTRIBUTES_H
AV_GCC_VERSION_AT_LEAST (__GNUC__ > (x) || __GNUC__ == (x) && __GNUC_MINOR__ >= (y))
AV_GCC_VERSION_AT_MOST  (__GNUC__ < (x) || __GNUC__ == (x) && __GNUC_MINOR__ <= (y))
AV_GCC_VERSION_AT_LEAST 0
AV_GCC_VERSION_AT_MOST  0
AV_GCC_VERSION_AT_LEAST
__attribute__) inline
defined
#    define av_always_inline __forceinline
#    define av_always_inline inline
defined && __ICL >= 1210 || defined(__GNUC_STDC_INLINE__)
#    define av_extern_inline extern inline
#    define av_extern_inline inline
AV_GCC_VERSION_AT_LEAST
__attribute__)
#    define av_warn_unused_result
AV_GCC_VERSION_AT_LEAST
__attribute__)
defined
__declspec
#    define av_noinline
AV_GCC_VERSION_AT_LEAST
__attribute__)
#    define av_pure
AV_GCC_VERSION_AT_LEAST
__attribute__)
#    define av_const
AV_GCC_VERSION_AT_LEAST
__attribute__)
#    define av_cold
AV_GCC_VERSION_AT_LEAST && !defined(__llvm__)
__attribute__)
#    define av_flatten
AV_GCC_VERSION_AT_LEAST
__attribute__)
defined
__declspec
#    define attribute_deprecated
AV_GCC_VERSION_AT_LEAST
AV_NOWARN_DEPRECATED \
_Pragma() \
_Pragma() \
code \
_Pragma()
defined
AV_NOWARN_DEPRECATED \
__pragma(warning(push)) \
__pragma(warning(disable : 4996)) \
code; \
__pragma(warning(pop))
AV_NOWARN_DEPRECATED code
defined
__attribute__)
#    define av_unused
AV_GCC_VERSION_AT_LEAST
__attribute__)
#    define av_used
AV_GCC_VERSION_AT_LEAST
__attribute__)
#   define av_alias
defined && !defined(__INTEL_COMPILER) && !defined(__clang__)
av_uninit x=x
av_uninit x
#    define av_builtin_constant_p __builtin_constant_p
av_printf_format __attribute__((__format__(__printf__, fmtpos, attrpos)))
av_builtin_constant_p 0
av_printf_format
AV_GCC_VERSION_AT_LEAST
__attribute__)
#    define av_noreturn
