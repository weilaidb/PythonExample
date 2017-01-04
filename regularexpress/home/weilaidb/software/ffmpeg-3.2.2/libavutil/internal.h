#define AVUTIL_INTERNAL_H
#if !defined(DEBUG) && !defined(NDEBUG)
#    define NDEBUG
#if ARCH_X86
#   include "x86/emms.h"
#   define emms_c() while(0)
#if ARCH_X86_32 && AV_GCC_VERSION_AT_LEAST(4,2)
#    define attribute_align_arg __attribute__((force_align_arg_pointer))
#    define attribute_align_arg
#if defined(_MSC_VER) && CONFIG_SHARED
#    define av_export __declspec(dllimport)
#    define av_export
#if HAVE_PRAGMA_DEPRECATED
#    if defined(__ICL) || defined (__INTEL_COMPILER)
#        define FF_DISABLE_DEPRECATION_WARNINGS __pragma(warning(push)) __pragma(warning(disable:1478))
#        define FF_ENABLE_DEPRECATION_WARNINGS  __pragma(warning(pop))
#    elif defined(_MSC_VER)
#        define FF_DISABLE_DEPRECATION_WARNINGS __pragma(warning(push)) __pragma(warning(disable:4996))
#        define FF_ENABLE_DEPRECATION_WARNINGS  __pragma(warning(pop))
#    else
#        define FF_DISABLE_DEPRECATION_WARNINGS _Pragma("GCC diagnostic ignored \"-Wdeprecated-declarations\"")
#        define FF_ENABLE_DEPRECATION_WARNINGS  _Pragma("GCC diagnostic warning \"-Wdeprecated-declarations\"")
#    endif
#    define FF_DISABLE_DEPRECATION_WARNINGS
#    define FF_ENABLE_DEPRECATION_WARNINGS
#define FF_MEMORY_POISON 0x2a
#define MAKE_ACCESSORS(str, name, type, field) \
type av_##name##_get_##field(const str *s)  \
void av_##name##_set_##field(str *s, type v)
#define E1(x) x
#define AV_CHECK_OFFSET(s, m, o) struct check_##o
#define LOCAL_ALIGNED_A(a, t, v, s, o, ...)             \
uint8_t la_##v[sizeof(t s o) + (a)];                \
t (*v) o = (void *)FFALIGN((uintptr_t)la_##v, a)
#define LOCAL_ALIGNED_D(a, t, v, s, o, ...)             \
DECLARE_ALIGNED(a, t, la_##v) s o;                  \
t (*v) o = la_##v
#define LOCAL_ALIGNED(a, t, v, ...) E1(LOCAL_ALIGNED_A(a, t, v, __VA_ARGS__,,))
#if HAVE_LOCAL_ALIGNED_8
#   define LOCAL_ALIGNED_8(t, v, ...) E1(LOCAL_ALIGNED_D(8, t, v, __VA_ARGS__,,))
#   define LOCAL_ALIGNED_8(t, v, ...) LOCAL_ALIGNED(8, t, v, __VA_ARGS__)
#if HAVE_LOCAL_ALIGNED_16
#   define LOCAL_ALIGNED_16(t, v, ...) E1(LOCAL_ALIGNED_D(16, t, v, __VA_ARGS__,,))
#   define LOCAL_ALIGNED_16(t, v, ...) LOCAL_ALIGNED(16, t, v, __VA_ARGS__)
#if HAVE_LOCAL_ALIGNED_32
#   define LOCAL_ALIGNED_32(t, v, ...) E1(LOCAL_ALIGNED_D(32, t, v, __VA_ARGS__,,))
#   define LOCAL_ALIGNED_32(t, v, ...) LOCAL_ALIGNED(32, t, v, __VA_ARGS__)
#define FF_ALLOC_OR_GOTO(ctx, p, size, label)\
#define FF_ALLOCZ_OR_GOTO(ctx, p, size, label)\
#define FF_ALLOC_ARRAY_OR_GOTO(ctx, p, nelem, elsize, label)\
#define FF_ALLOCZ_ARRAY_OR_GOTO(ctx, p, nelem, elsize, label)\
#if CONFIG_SMALL
#   define NULL_IF_CONFIG_SMALL(x) NULL
#   define NULL_IF_CONFIG_SMALL(x) x
#if HAVE_SYMVER_ASM_LABEL
#   define FF_SYMVER(type, name, args, ver)                     \
type ff_##name args __asm__ (EXTERN_PREFIX #name "@" ver);  \
type ff_##name args
#elif HAVE_SYMVER_GNU_ASM
#   define FF_SYMVER(type, name, args, ver)                             \
__asm__ (".symver ff_" #name "," EXTERN_PREFIX #name "@" ver);      \
type ff_##name args;                                                \
type ff_##name args
#if HAVE_THREADS
#   define ONLY_IF_THREADS_ENABLED(x) x
#   define ONLY_IF_THREADS_ENABLED(x) NULL
void avpriv_report_missing_feature(void *avc,
const char *msg, ...) av_printf_format(2, 3);
void avpriv_request_sample(void *avc,
const char *msg, ...) av_printf_format(2, 3);
#if HAVE_LIBC_MSVCRT
#if defined(_VC_CRT_MAJOR_VERSION) && _VC_CRT_MAJOR_VERSION < 14
#define avpriv_open ff_open
#define avpriv_tempfile ff_tempfile
#define PTRDIFF_SPECIFIER "Id"
#define SIZE_SPECIFIER "Iu"
#define PTRDIFF_SPECIFIER "td"
#define SIZE_SPECIFIER "zu"
#   define ff_dlog(ctx, ...) av_log(ctx, AV_LOG_DEBUG, __VA_ARGS__)
#   define ff_dlog(ctx, ...) do  while (0)
static av_always_inline av_const int64_t ff_rint64_clip(double a, int64_t amin, int64_t amax)
av_warn_unused_result
int avpriv_open(const char *filename, int flags, ...);
int avpriv_tempfile(const char *prefix, char **filename, int log_offset, void *log_ctx);
int avpriv_set_systematic_pal2(uint32_t pal[256], enum AVPixelFormat pix_fmt);
static av_always_inline av_const int avpriv_mirror(int x, int w)
void ff_check_pixfmt_descriptors(void);
int avpriv_dict_set_timestamp(AVDictionary **dict, const char *key, int64_t timestamp);
extern const uint8_t ff_reverse[256];
