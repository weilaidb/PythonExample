#  ifndef _LARGEFILE_SOURCE
#    define _LARGEFILE_SOURCE 1
#  endif
#  ifdef _FILE_OFFSET_BITS
#    undef _FILE_OFFSET_BITS
#  endif
#  define ZLIB_INTERNAL __attribute__((visibility ()))
#  define ZLIB_INTERNAL
#  include <string.h>
#  include <stdlib.h>
#  include <limits.h>
#  include <stddef.h>
#if defined(__TURBOC__) || defined(_MSC_VER) || defined(_WIN32)
#  include <io.h>
#  define open _open
#  define read _read
#  define write _write
#  define close _close
#  define NO_GZCOMPRESS
#if defined(STDC99) || (defined(__TURBOC__) && __TURBOC__ >= 0x550)
#  ifndef HAVE_VSNPRINTF
#    define HAVE_VSNPRINTF
#  endif
#if defined(__CYGWIN__)
#  ifndef HAVE_VSNPRINTF
#    define HAVE_VSNPRINTF
#  endif
#if defined(MSDOS) && defined(__BORLANDC__) && (BORLANDC > 0x410)
#  ifndef HAVE_VSNPRINTF
#    define HAVE_VSNPRINTF
#  endif
#  ifdef MSDOS
#    define NO_vsnprintf
#  endif
#  ifdef __TURBOC__
#    define NO_vsnprintf
#  endif
#  ifdef WIN32
#    if !defined(vsnprintf) && !defined(NO_vsnprintf)
#      if !defined(_MSC_VER) || ( defined(_MSC_VER) && _MSC_VER < 1500 )
#         define vsnprintf _vsnprintf
#      endif
#    endif
#  endif
#  ifdef __SASC
#    define NO_vsnprintf
#  endif
#  ifdef VMS
#    define NO_vsnprintf
#  endif
#  ifdef __OS400__
#    define NO_vsnprintf
#  endif
#  ifdef __MVS__
#    define NO_vsnprintf
#  endif
#  define snprintf _snprintf
#  define local static
extern voidp  malloc OF((uInt size));
extern void   free   OF((voidpf ptr));
#if defined UNDER_CE
#  include <windows.h>
#  define zstrerror() gz_strwinerror((DWORD)GetLastError())
#  ifndef NO_STRERROR
#    include <errno.h>
#    define zstrerror() strerror(errno)
#  else
#    define zstrerror()
#  endif
#if !defined(_LARGEFILE64_SOURCE) || _LFS64_LARGEFILE-0 == 0
ZEXTERN gzFile ZEXPORT gzopen64 OF((const char *, const char *));
ZEXTERN z_off64_t ZEXPORT gzseek64 OF((gzFile, z_off64_t, int));
ZEXTERN z_off64_t ZEXPORT gztell64 OF((gzFile));
ZEXTERN z_off64_t ZEXPORT gzoffset64 OF((gzFile));
#if MAX_MEM_LEVEL >= 8
#  define DEF_MEM_LEVEL 8
#  define DEF_MEM_LEVEL  MAX_MEM_LEVEL
#define GZBUFSIZE 8192
#define GZ_NONE 0
#define GZ_READ 7247
#define GZ_WRITE 31153
#define GZ_APPEND 1
#define LOOK 0
#define COPY 1
#define GZIP 2
typedef struct  gz_state;
typedef gz_state FAR *gz_statep;
void ZLIB_INTERNAL gz_error OF((gz_statep, int, const char *));
#if defined UNDER_CE
char ZLIB_INTERNAL *gz_strwinerror OF((DWORD error));
#  define GT_OFF(x) (sizeof(int) == sizeof(z_off64_t) && (x) > INT_MAX)
unsigned ZLIB_INTERNAL gz_intmax OF((void));
#  define GT_OFF(x) (sizeof(int) == sizeof(z_off64_t) && (x) > gz_intmax())
