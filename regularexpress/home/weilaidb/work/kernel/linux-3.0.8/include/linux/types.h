#define _LINUX_TYPES_H
#define DECLARE_BITMAP(name,bits) \
unsigned long name[BITS_TO_LONGS(bits)]
#warning "Attempt to use kernel headers from user space, see http:
typedef __u32 __kernel_dev_t;
typedef __kernel_fd_set		fd_set;
typedef __kernel_dev_t		dev_t;
typedef __kernel_ino_t		ino_t;
typedef __kernel_mode_t		mode_t;
typedef __kernel_nlink_t	nlink_t;
typedef __kernel_off_t		off_t;
typedef __kernel_pid_t		pid_t;
typedef __kernel_daddr_t	daddr_t;
typedef __kernel_key_t		key_t;
typedef __kernel_suseconds_t	suseconds_t;
typedef __kernel_timer_t	timer_t;
typedef __kernel_clockid_t	clockid_t;
typedef __kernel_mqd_t		mqd_t;
typedef _Bool			bool;
typedef __kernel_uid32_t	uid_t;
typedef __kernel_gid32_t	gid_t;
typedef __kernel_uid16_t        uid16_t;
typedef __kernel_gid16_t        gid16_t;
typedef unsigned long		uintptr_t;
typedef __kernel_old_uid_t	old_uid_t;
typedef __kernel_old_gid_t	old_gid_t;
#if defined(__GNUC__)
typedef __kernel_loff_t		loff_t;
#define _SIZE_T
typedef __kernel_size_t		size_t;
#define _SSIZE_T
typedef __kernel_ssize_t	ssize_t;
#define _PTRDIFF_T
typedef __kernel_ptrdiff_t	ptrdiff_t;
#define _TIME_T
typedef __kernel_time_t		time_t;
#define _CLOCK_T
typedef __kernel_clock_t	clock_t;
#define _CADDR_T
typedef __kernel_caddr_t	caddr_t;
typedef unsigned char		u_char;
typedef unsigned short		u_short;
typedef unsigned int		u_int;
typedef unsigned long		u_long;
typedef unsigned char		unchar;
typedef unsigned short		ushort;
typedef unsigned int		uint;
typedef unsigned long		ulong;
#define __BIT_TYPES_DEFINED__
typedef		__u8		u_int8_t;
typedef		__s8		int8_t;
typedef		__u16		u_int16_t;
typedef		__s16		int16_t;
typedef		__u32		u_int32_t;
typedef		__s32		int32_t;
typedef		__u8		uint8_t;
typedef		__u16		uint16_t;
typedef		__u32		uint32_t;
#if defined(__GNUC__)
typedef		__u64		uint64_t;
typedef		__u64		u_int64_t;
typedef		__s64		int64_t;
#define aligned_u64 __u64 __attribute__((aligned(8)))
#define aligned_be64 __be64 __attribute__((aligned(8)))
#define aligned_le64 __le64 __attribute__((aligned(8)))
typedef u64 sector_t;
typedef u64 blkcnt_t;
typedef unsigned long sector_t;
typedef unsigned long blkcnt_t;
#define pgoff_t unsigned long
typedef u64 dma_addr_t;
typedef u32 dma_addr_t;
#define __bitwise__ __attribute__((bitwise))
#define __bitwise__
#define __bitwise __bitwise__
#define __bitwise
typedef __u16 __bitwise __le16;
typedef __u16 __bitwise __be16;
typedef __u32 __bitwise __le32;
typedef __u32 __bitwise __be32;
typedef __u64 __bitwise __le64;
typedef __u64 __bitwise __be64;
typedef __u16 __bitwise __sum16;
typedef __u32 __bitwise __wsum;
#define __aligned_u64 __u64 __attribute__((aligned(8)))
#define __aligned_be64 __be64 __attribute__((aligned(8)))
#define __aligned_le64 __le64 __attribute__((aligned(8)))
typedef unsigned __bitwise__ gfp_t;
typedef unsigned __bitwise__ fmode_t;
typedef u64 phys_addr_t;
typedef u32 phys_addr_t;
typedef phys_addr_t resource_size_t;
typedef struct  atomic_t;
typedef struct  atomic64_t;
struct list_head ;
struct hlist_head ;
struct hlist_node ;
struct ustat ;
