#define _GENERIC_STATFS_H
typedef __kernel_fsid_t	fsid_t;
#if BITS_PER_LONG == 64
#define __statfs_word long
#define __statfs_word __u32
struct statfs ;
#define ARCH_PACK_STATFS64
struct statfs64  ARCH_PACK_STATFS64;
#define ARCH_PACK_COMPAT_STATFS64
struct compat_statfs64  ARCH_PACK_COMPAT_STATFS64;
