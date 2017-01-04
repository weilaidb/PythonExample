#if SYS_WINDOWS
#if PTW32_STATIC_LIB
extern int ptw32_processInitialized;
int64_t x264_mdate( void )
#if HAVE_WIN32THREAD || PTW32_STATIC_LIB
static volatile LONG x264_threading_is_init = 0;
static void x264_threading_destroy( void )
int x264_threading_init( void )
FILE *x264_fopen( const char *filename, const char *mode )
int x264_rename( const char *oldname, const char *newname )
int x264_stat( const char *path, x264_struct_stat *buf )
#if !HAVE_WINRT
int x264_vfprintf( FILE *stream, const char *format, va_list arg )
int x264_is_pipe( const char *path )
#if defined(_MSC_VER) && _MSC_VER < 1900
int x264_snprintf( char *s, size_t n, const char *fmt, ... )
int x264_vsnprintf( char *s, size_t n, const char *fmt, va_list arg )
