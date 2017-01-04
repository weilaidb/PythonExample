#define __ASM_GENERIC_STAT_H
#define STAT_HAVE_NSEC 1
struct stat ;
#if __BITS_PER_LONG != 64 || defined(__ARCH_WANT_STAT64)
struct stat64 ;
