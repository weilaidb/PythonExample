#define _Z_UTIL_H
typedef unsigned char  uch;
typedef unsigned short ush;
typedef unsigned long  ulg;
#define STORED_BLOCK 0
#define STATIC_TREES 1
#define DYN_TREES    2
#define MIN_MATCH  3
#define MAX_MATCH  258
#define PRESET_DICT 0x20
#  define OS_CODE  0x03
typedef uLong (*check_func) (uLong check, const Byte *buf,
uInt len);
#define BASE 65521L
#define NMAX 5552
#define DO1(buf,i)
#define DO2(buf,i)  DO1(buf,i); DO1(buf,i+1);
#define DO4(buf,i)  DO2(buf,i); DO2(buf,i+2);
#define DO8(buf,i)  DO4(buf,i); DO4(buf,i+4);
#define DO16(buf)   DO8(buf,0); DO8(buf,8);
static inline uLong zlib_adler32(uLong adler,
const Byte *buf,
uInt len)
