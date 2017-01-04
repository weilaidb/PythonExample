#define _ZCONF_H
#  define MAX_MEM_LEVEL 8
#  define MAX_WBITS   15
#  define DEF_WBITS MAX_WBITS
#if MAX_MEM_LEVEL >= 8
#  define DEF_MEM_LEVEL 8
#  define DEF_MEM_LEVEL  MAX_MEM_LEVEL
typedef unsigned char  Byte;
typedef unsigned int   uInt;
typedef unsigned long  uLong;
typedef void     *voidp;
