#define ZUTIL_H
#  define ZLIB_INTERNAL __attribute__((visibility ("hidden")))
#  define ZLIB_INTERNAL
#if defined(STDC) && !defined(Z_SOLO)
#  if !(defined(_WIN32_WCE) && defined(_MSC_VER))
#    include <stddef.h>
#  endif
#  include <string.h>
#  include <stdlib.h>
typedef long ptrdiff_t;
#  define local static
typedef unsigned char  uch;
typedef uch FAR uchf;
typedef unsigned short ush;
typedef ush FAR ushf;
typedef unsigned long  ulg;
extern z_const char * const z_errmsg[10];
#define ERR_MSG(err) z_errmsg[Z_NEED_DICT-(err)]
#define ERR_RETURN(strm,err) \
return (strm->msg = ERR_MSG(err), (err))
#  define DEF_WBITS MAX_WBITS
#if MAX_MEM_LEVEL >= 8
#  define DEF_MEM_LEVEL 8
#  define DEF_MEM_LEVEL  MAX_MEM_LEVEL
#define STORED_BLOCK 0
#define STATIC_TREES 1
#define DYN_TREES    2
#define MIN_MATCH  3
#define MAX_MATCH  258
#define PRESET_DICT 0x20
#if defined(MSDOS) || (defined(WINDOWS) && !defined(WIN32))
#  define OS_CODE  0x00
#  ifndef Z_SOLO
#    if defined(__TURBOC__) || defined(__BORLANDC__)
#      if (__STDC__ == 1) && (defined(__LARGE__) || defined(__COMPACT__))
void _Cdecl farfree( void *block );
void *_Cdecl farmalloc( unsigned long nbytes );
#      else
#        include <alloc.h>
#      endif
#    else
#      include <malloc.h>
#    endif
#  endif
#  define OS_CODE  0x01
#if defined(VAXC) || defined(VMS)
#  define OS_CODE  0x02
#  define F_OPEN(name, mode) \
fopen((name), (mode), "mbc=60", "ctx=stm", "rfm=fix", "mrs=512")
#if defined(ATARI) || defined(atarist)
#  define OS_CODE  0x05
#  define OS_CODE  0x06
#  if defined(M_I86) && !defined(Z_SOLO)
#    include <malloc.h>
#  endif
#if defined(MACOS) || defined(TARGET_OS_MAC)
#  define OS_CODE  0x07
#  ifndef Z_SOLO
#    if defined(__MWERKS__) && __dest_os != __be_os && __dest_os != __win32_os
#      include <unix.h>
#    else
#      ifndef fdopen
#        define fdopen(fd,mode) NULL
#      endif
#    endif
#  endif
#  define OS_CODE  0x0a
#  ifndef __CYGWIN__
#    define OS_CODE  0x0b
#  endif
#  define OS_CODE  0x0f
#if defined(_BEOS_) || defined(RISCOS)
#  define fdopen(fd,mode) NULL
#if (defined(_MSC_VER) && (_MSC_VER > 600)) && !defined __INTERIX
#  if defined(_WIN32_WCE)
#    define fdopen(fd,mode) NULL
#    ifndef _PTRDIFF_T_DEFINED
typedef int ptrdiff_t;
#      define _PTRDIFF_T_DEFINED
#    endif
#  else
#    define fdopen(fd,type)  _fdopen(fd,type)
#  endif
#if defined(__BORLANDC__) && !defined(MSDOS)
#if !defined(_WIN32) && \
(!defined(_LARGEFILE64_SOURCE) || _LFS64_LARGEFILE-0 == 0)
ZEXTERN uLong ZEXPORT adler32_combine64 OF((uLong, uLong, z_off_t));
ZEXTERN uLong ZEXPORT crc32_combine64 OF((uLong, uLong, z_off_t));
#  define OS_CODE  0x03
#  define F_OPEN(name, mode) fopen((name), (mode))
#if defined(pyr) || defined(Z_SOLO)
#  define NO_MEMCPY
#if defined(SMALL_MEDIUM) && !defined(_MSC_VER) && !defined(__SC__)
#  define NO_MEMCPY
#if defined(STDC) && !defined(HAVE_MEMCPY) && !defined(NO_MEMCPY)
#  define HAVE_MEMCPY
#  ifdef SMALL_MEDIUM
#    define zmemcpy _fmemcpy
#    define zmemcmp _fmemcmp
#    define zmemzero(dest, len) _fmemset(dest, 0, len)
#  else
#    define zmemcpy memcpy
#    define zmemcmp memcmp
#    define zmemzero(dest, len) memset(dest, 0, len)
#  endif
void ZLIB_INTERNAL zmemcpy OF((Bytef* dest, const Bytef* source, uInt len));
int ZLIB_INTERNAL zmemcmp OF((const Bytef* s1, const Bytef* s2, uInt len));
void ZLIB_INTERNAL zmemzero OF((Bytef* dest, uInt len));
#  include <stdio.h>
extern int ZLIB_INTERNAL z_verbose;
extern void ZLIB_INTERNAL z_error OF((char *m));
#  define Assert(cond,msg)
#  define Trace(x)
#  define Tracev(x)
#  define Tracevv(x)
#  define Tracec(c,x)
#  define Tracecv(c,x)
#  define Assert(cond,msg)
#  define Trace(x)
#  define Tracev(x)
#  define Tracevv(x)
#  define Tracec(c,x)
#  define Tracecv(c,x)
voidpf ZLIB_INTERNAL zcalloc OF((voidpf opaque, unsigned items,
unsigned size));
void ZLIB_INTERNAL zcfree  OF((voidpf opaque, voidpf ptr));
#define ZALLOC(strm, items, size) \
(*((strm)->zalloc))((strm)->opaque, (items), (size))
#define ZFREE(strm, addr)  (*((strm)->zfree))((strm)->opaque, (voidpf)(addr))
#define TRY_FREE(s, p)
#define ZSWAP32(q) ((((q) >> 24) & 0xff) + (((q) >> 8) & 0xff00) + \
(((q) & 0xff00) << 8) + (((q) & 0xff) << 24))
