#define AVUTIL_ATTRIBUTES_H
#    define AV_GCC_VERSION_AT_LEAST(x,y) (__GNUC__ > (x) || __GNUC__ == (x) && __GNUC_MINOR__ >= (y))
#    define AV_GCC_VERSION_AT_MOST(x,y)  (__GNUC__ < (x) || __GNUC__ == (x) && __GNUC_MINOR__ <= (y))
#    define AV_GCC_VERSION_AT_LEAST(x,y) 0
#    define AV_GCC_VERSION_AT_MOST(x,y)  0
#if AV_GCC_VERSION_AT_LEAST(3,1)
#    define av_always_inline __attribute__((always_inline)) inline
#elif defined(_MSC_VER)
#    define av_always_inline __forceinline
#    define av_always_inline inline
#if defined(__ICL) && __ICL >= 1210 || defined(__GNUC_STDC_INLINE__)
#    define av_extern_inline extern inline
#    define av_extern_inline inline
#if AV_GCC_VERSION_AT_LEAST(3,4)
#    define av_warn_unused_result __attribute__((warn_unused_result))
#    define av_warn_unused_result
#if AV_GCC_VERSION_AT_LEAST(3,1)
#    define av_noinline __attribute__((noinline))
#elif defined(_MSC_VER)
#    define av_noinline __declspec(noinline)
#    define av_noinline
#if AV_GCC_VERSION_AT_LEAST(3,1)
#    define av_pure __attribute__((pure))
#    define av_pure
#if AV_GCC_VERSION_AT_LEAST(2,6)
#    define av_const __attribute__((const))
#    define av_const
#if AV_GCC_VERSION_AT_LEAST(4,3)
#    define av_cold __attribute__((cold))
#    define av_cold
#if AV_GCC_VERSION_AT_LEAST(4,1) && !defined(__llvm__)
#    define av_flatten __attribute__((flatten))
#    define av_flatten
#if AV_GCC_VERSION_AT_LEAST(3,1)
#    define attribute_deprecated __attribute__((deprecated))
#elif defined(_MSC_VER)
#    define attribute_deprecated __declspec(deprecated)
#    define attribute_deprecated
#if AV_GCC_VERSION_AT_LEAST(4,6)
#    define AV_NOWARN_DEPRECATED(code) \
_Pragma("GCC diagnostic push") \
_Pragma("GCC diagnostic ignored \"-Wdeprecated-declarations\"") \
code \
_Pragma("GCC diagnostic pop")
#elif defined(_MSC_VER)
#    define AV_NOWARN_DEPRECATED(code) \
__pragma(warning(push)) \
__pragma(warning(disable : 4996)) \
code; \
__pragma(warning(pop))
#    define AV_NOWARN_DEPRECATED(code) code
#if defined(__GNUC__)
#    define av_unused __attribute__((unused))
#    define av_unused
#if AV_GCC_VERSION_AT_LEAST(3,1)
#    define av_used __attribute__((used))
#    define av_used
#if AV_GCC_VERSION_AT_LEAST(3,3)
#   define av_alias __attribute__((may_alias))
#   define av_alias
#if defined(__GNUC__) && !defined(__INTEL_COMPILER) && !defined(__clang__)
#    define av_uninit(x) x=x
#    define av_uninit(x) x
#    define av_builtin_constant_p __builtin_constant_p
#    define av_printf_format(fmtpos, attrpos) __attribute__((__format__(__printf__, fmtpos, attrpos)))
#    define av_builtin_constant_p(x) 0
#    define av_printf_format(fmtpos, attrpos)
#if AV_GCC_VERSION_AT_LEAST(2,5)
#    define av_noreturn __attribute__((noreturn))
#    define av_noreturn
