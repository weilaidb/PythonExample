#define X264_OSDEP_H
#define _LARGEFILE_SOURCE 1
#define _FILE_OFFSET_BITS 64
#if !HAVE_LOG2F
#define log2f(x) (logf(x)/0.693147180559945f)
#define log2(x) (log(x)/0.693147180559945)
#define inline __inline
#define strcasecmp _stricmp
#define strncasecmp _strnicmp
#define strtok_r strtok_s
#define S_ISREG(x) (((x) & S_IFMT) == S_IFREG)
#if _MSC_VER < 1900
int x264_snprintf( char *s, size_t n, const char *fmt, ... );
int x264_vsnprintf( char *s, size_t n, const char *fmt, va_list arg );
#define snprintf  x264_snprintf
#define vsnprintf x264_vsnprintf
#if !defined(va_copy) && defined(__INTEL_COMPILER)
#define va_copy(dst, src) ((dst) = (src))
#if !defined(isfinite) && (SYS_OPENBSD || SYS_SunOS)
#define isfinite finite
#define strtok_r(str,delim,save) strtok(str,delim)
#define utf8_to_utf16( utf8, utf16 )\
MultiByteToWideChar( CP_UTF8, MB_ERR_INVALID_CHARS, utf8, -1, utf16, sizeof(utf16)/sizeof(wchar_t) )
FILE *x264_fopen( const char *filename, const char *mode );
int x264_rename( const char *oldname, const char *newname );
#define x264_struct_stat struct _stati64
#define x264_fstat _fstati64
int x264_stat( const char *path, x264_struct_stat *buf );
#define x264_fopen       fopen
#define x264_rename      rename
#define x264_struct_stat struct stat
#define x264_fstat       fstat
#define x264_stat        stat
#if defined(_WIN32) && !HAVE_WINRT
int x264_vfprintf( FILE *stream, const char *format, va_list arg );
int x264_is_pipe( const char *path );
#define x264_vfprintf vfprintf
#define x264_is_pipe(x) 0
#define DECLARE_ALIGNED( var, n ) __declspec(align(n)) var
#define DECLARE_ALIGNED( var, n ) var __attribute__((aligned(n)))
#define ALIGNED_32( var ) DECLARE_ALIGNED( var, 32 )
#define ALIGNED_16( var ) DECLARE_ALIGNED( var, 16 )
#define ALIGNED_8( var )  DECLARE_ALIGNED( var, 8 )
#define ALIGNED_4( var )  DECLARE_ALIGNED( var, 4 )
#define ALIGNED_ARRAY_EMU( mask, type, name, sub1, ... )\
uint8_t name##_u [sizeof(type sub1 __VA_ARGS__) + mask]; \
type (*name) __VA_ARGS__ = (void*)((intptr_t)(name##_u+mask) & ~mask)
#if ARCH_ARM && SYS_MACOSX
#define ALIGNED_ARRAY_8( ... ) ALIGNED_ARRAY_EMU( 7, __VA_ARGS__ )
#define ALIGNED_ARRAY_8( type, name, sub1, ... )\
ALIGNED_8( type name sub1 __VA_ARGS__ )
#if ARCH_ARM
#define ALIGNED_ARRAY_16( ... ) ALIGNED_ARRAY_EMU( 15, __VA_ARGS__ )
#define ALIGNED_ARRAY_16( type, name, sub1, ... )\
ALIGNED_16( type name sub1 __VA_ARGS__ )
#define EXPAND(x) x
#if STACK_ALIGNMENT >= 32
#define ALIGNED_ARRAY_32( type, name, sub1, ... )\
ALIGNED_32( type name sub1 __VA_ARGS__ )
#define ALIGNED_ARRAY_32( ... ) EXPAND( ALIGNED_ARRAY_EMU( 31, __VA_ARGS__ ) )
#define ALIGNED_ARRAY_64( ... ) EXPAND( ALIGNED_ARRAY_EMU( 63, __VA_ARGS__ ) )
#if ARCH_X86 || ARCH_X86_64
#define NATIVE_ALIGN 32
#define ALIGNED_N ALIGNED_32
#define ALIGNED_ARRAY_N ALIGNED_ARRAY_32
#define NATIVE_ALIGN 16
#define ALIGNED_N ALIGNED_16
#define ALIGNED_ARRAY_N ALIGNED_ARRAY_16
#if defined(__GNUC__) && (__GNUC__ > 3 || __GNUC__ == 3 && __GNUC_MINOR__ > 0)
#define UNUSED __attribute__((unused))
#define ALWAYS_INLINE __attribute__((always_inline)) inline
#define NOINLINE __attribute__((noinline))
#define MAY_ALIAS __attribute__((may_alias))
#define x264_constant_p(x) __builtin_constant_p(x)
#define x264_nonconstant_p(x) (!__builtin_constant_p(x))
#define ALWAYS_INLINE __forceinline
#define NOINLINE __declspec(noinline)
#define ALWAYS_INLINE inline
#define NOINLINE
#define UNUSED
#define MAY_ALIAS
#define x264_constant_p(x) 0
#define x264_nonconstant_p(x) 0
#if HAVE_BEOSTHREAD
#define x264_pthread_t               thread_id
static inline int x264_pthread_create( x264_pthread_t *t, void *a, void *(*f)(void *), void *d )
#define x264_pthread_join(t,s)
#elif HAVE_POSIXTHREAD
#define x264_pthread_t               pthread_t
#define x264_pthread_create          pthread_create
#define x264_pthread_join            pthread_join
#define x264_pthread_mutex_t         pthread_mutex_t
#define x264_pthread_mutex_init      pthread_mutex_init
#define x264_pthread_mutex_destroy   pthread_mutex_destroy
#define x264_pthread_mutex_lock      pthread_mutex_lock
#define x264_pthread_mutex_unlock    pthread_mutex_unlock
#define x264_pthread_cond_t          pthread_cond_t
#define x264_pthread_cond_init       pthread_cond_init
#define x264_pthread_cond_destroy    pthread_cond_destroy
#define x264_pthread_cond_broadcast  pthread_cond_broadcast
#define x264_pthread_cond_wait       pthread_cond_wait
#define x264_pthread_attr_t          pthread_attr_t
#define x264_pthread_attr_init       pthread_attr_init
#define x264_pthread_attr_destroy    pthread_attr_destroy
#define x264_pthread_num_processors_np pthread_num_processors_np
#define X264_PTHREAD_MUTEX_INITIALIZER PTHREAD_MUTEX_INITIALIZER
#elif HAVE_WIN32THREAD
#define x264_pthread_t               int
#define x264_pthread_create(t,u,f,d) 0
#define x264_pthread_join(t,s)
#if !HAVE_POSIXTHREAD && !HAVE_WIN32THREAD
#define x264_pthread_mutex_t         int
#define x264_pthread_mutex_init(m,f) 0
#define x264_pthread_mutex_destroy(m)
#define x264_pthread_mutex_lock(m)
#define x264_pthread_mutex_unlock(m)
#define x264_pthread_cond_t          int
#define x264_pthread_cond_init(c,f)  0
#define x264_pthread_cond_destroy(c)
#define x264_pthread_cond_broadcast(c)
#define x264_pthread_cond_wait(c,m)
#define x264_pthread_attr_t          int
#define x264_pthread_attr_init(a)    0
#define x264_pthread_attr_destroy(a)
#define X264_PTHREAD_MUTEX_INITIALIZER 0
#if HAVE_WIN32THREAD || PTW32_STATIC_LIB
int x264_threading_init( void );
#define x264_threading_init() 0
static ALWAYS_INLINE int x264_pthread_fetch_and_add( int *val, int add, x264_pthread_mutex_t *mutex )
#define WORD_SIZE sizeof(void*)
#define asm __asm__
#if WORDS_BIGENDIAN
#define endian_fix(x) (x)
#define endian_fix64(x) (x)
#define endian_fix32(x) (x)
#define endian_fix16(x) (x)
#if HAVE_X86_INLINE_ASM && HAVE_MMX
static ALWAYS_INLINE uint32_t endian_fix32( uint32_t x )
#elif defined(__GNUC__) && HAVE_ARMV6
static ALWAYS_INLINE uint32_t endian_fix32( uint32_t x )
static ALWAYS_INLINE uint32_t endian_fix32( uint32_t x )
#if HAVE_X86_INLINE_ASM && ARCH_X86_64
static ALWAYS_INLINE uint64_t endian_fix64( uint64_t x )
static ALWAYS_INLINE uint64_t endian_fix64( uint64_t x )
static ALWAYS_INLINE intptr_t endian_fix( intptr_t x )
static ALWAYS_INLINE uint16_t endian_fix16( uint16_t x )
static int ALWAYS_INLINE x264_ctz_4bit( uint32_t x )
#if defined(__GNUC__) && (__GNUC__ > 3 || __GNUC__ == 3 && __GNUC_MINOR__ > 3)
#define x264_clz(x) __builtin_clz(x)
#define x264_ctz(x) __builtin_ctz(x)
static int ALWAYS_INLINE x264_clz( uint32_t x )
static int ALWAYS_INLINE x264_ctz( uint32_t x )
#if HAVE_X86_INLINE_ASM && HAVE_MMX
static ALWAYS_INLINE void x264_prefetch( void *p )
#elif defined(__GNUC__) && (__GNUC__ > 3 || __GNUC__ == 3 && __GNUC_MINOR__ > 1) &&\
(ARCH_X86 || ARCH_X86_64 || ARCH_ARM || ARCH_PPC)
#define x264_prefetch(x) __builtin_prefetch(x)
#define x264_prefetch(x)
#if HAVE_POSIXTHREAD
#if SYS_WINDOWS
#define x264_lower_thread_priority(p)\
#elif SYS_HAIKU
#define x264_lower_thread_priority(p)\
#define x264_lower_thread_priority(p)
#elif HAVE_WIN32THREAD
#define x264_lower_thread_priority(p) SetThreadPriority( GetCurrentThread(), X264_MAX( -2, -p ) )
#define x264_lower_thread_priority(p)
static inline int x264_is_regular_file( FILE *filehandle )
static inline int x264_is_regular_file_path( const char *filename )
