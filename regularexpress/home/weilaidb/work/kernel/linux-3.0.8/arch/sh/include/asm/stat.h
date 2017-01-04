#define __ASM_SH_STAT_H
struct __old_kernel_stat ;
#if defined(__SH5__) || defined(CONFIG_CPU_SH5)
struct stat ;
struct stat64 ;
struct stat ;
struct stat64 ;
#define STAT_HAVE_NSEC 1
