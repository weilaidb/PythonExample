#define _SPARC_RESOURCE_H
#define RLIMIT_NOFILE		6
#define RLIMIT_NPROC		7
#if defined(__sparc__) && defined(__arch64__)
#define RLIM_INFINITY		0x7fffffff
