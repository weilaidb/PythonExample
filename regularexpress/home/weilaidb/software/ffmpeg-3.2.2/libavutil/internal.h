#define AVUTIL_INTERNAL_H
#if !defined(DEBUG) && !defined(NDEBUG)
#    define NDEBUG
#if ARCH_X86
#   include
emms_c while(0)
AV_GCC_VERSION_AT_LEAST
__attribute__)
#    define attribute_align_arg
defined && CONFIG_SHARED
__declspec
#    define av_export
#if HAVE_PRAGMA_DEPRECATED
defined || defined (__INTEL_COMPILER)
__pragma) __pragma(warning(disable:1478))
__pragma)
defined
__pragma) __pragma(warning(disable:4996))
__pragma)
#    else
_Pragma
_Pragma
#    endif
#    define FF_DISABLE_DEPRECATION_WARNINGS
#    define FF_ENABLE_DEPRECATION_WARNINGS
#define FF_MEMORY_POISON 0x2a
MAKE_ACCESSORS \
type av_##name##_get_##field(const str *s)  \
void av_##name##_set_##field(str *s, type v)
E1 x
AV_CHECK_OFFSET struct check_##o
LOCAL_ALIGNED_A             \
uint8_t la_##v[sizeof(t s o) + (a)];                \
t (*v) o = (void *)FFALIGN((uintptr_t)la_##v, a)
LOCAL_ALIGNED_D             \
DECLARE_ALIGNED(a, t, la_##v) s o;                  \
t (*v) o = la_##v
LOCAL_ALIGNED E1(LOCAL_ALIGNED_A(a, t, v, __VA_ARGS__,,))
#if HAVE_LOCAL_ALIGNED_8
LOCAL_ALIGNED_8 E1(LOCAL_ALIGNED_D(8, t, v, __VA_ARGS__,,))
LOCAL_ALIGNED_8 LOCAL_ALIGNED(8, t, v, __VA_ARGS__)
#if HAVE_LOCAL_ALIGNED_16
LOCAL_ALIGNED_16 E1(LOCAL_ALIGNED_D(16, t, v, __VA_ARGS__,,))
LOCAL_ALIGNED_16 LOCAL_ALIGNED(16, t, v, __VA_ARGS__)
#if HAVE_LOCAL_ALIGNED_32
LOCAL_ALIGNED_32 E1(LOCAL_ALIGNED_D(32, t, v, __VA_ARGS__,,))
LOCAL_ALIGNED_32 LOCAL_ALIGNED(32, t, v, __VA_ARGS__)
FF_ALLOC_OR_GOTO\
FF_ALLOCZ_OR_GOTO\
FF_ALLOC_ARRAY_OR_GOTO\
FF_ALLOCZ_ARRAY_OR_GOTO\
#if CONFIG_SMALL
NULL_IF_CONFIG_SMALL NULL
NULL_IF_CONFIG_SMALL x
#if HAVE_SYMVER_ASM_LABEL
FF_SYMVER                     \
type ff_##name args __asm__ (EXTERN_PREFIX #name  ver);  \
type ff_##name args
#elif HAVE_SYMVER_GNU_ASM
FF_SYMVER                             \
__asm__ ( ver);      \
type ff_##name args;                                                \
type ff_##name args
#if HAVE_THREADS
ONLY_IF_THREADS_ENABLED x
ONLY_IF_THREADS_ENABLED NULL
avpriv_report_missing_feature av_printf_format(2, 3);
avpriv_request_sample av_printf_format(2, 3);
#if HAVE_LIBC_MSVCRT
defined && _VC_CRT_MAJOR_VERSION < 14
comment
comment
#define avpriv_open ff_open
#define avpriv_tempfile ff_tempfile
#define PTRDIFF_SPECIFIER
#define SIZE_SPECIFIER
#define PTRDIFF_SPECIFIER
#define SIZE_SPECIFIER
ff_dlog av_log(ctx, AV_LOG_DEBUG, __VA_ARGS__)
ff_dlog do  while (0)
ff_rint64_clip
av_warn_unused_result
avpriv_open;
avpriv_tempfile;
avpriv_set_systematic_pal2;
avpriv_mirror
ff_check_pixfmt_descriptors;
avpriv_dict_set_timestamp;
extern const uint8_t ff_reverse[256];
