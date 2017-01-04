#define __SPARC_STAT_H
#if defined(__sparc__) && defined(__arch64__)
struct stat ;
struct stat64 ;
struct stat ;
#define STAT_HAVE_NSEC 1
struct stat64 ;
