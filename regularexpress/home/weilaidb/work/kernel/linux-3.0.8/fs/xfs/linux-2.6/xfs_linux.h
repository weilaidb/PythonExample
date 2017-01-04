#define __XFS_LINUX__
#if defined(CONFIG_LBDAF) || (BITS_PER_LONG == 64)
# define XFS_BIG_BLKNOS	1
# define XFS_BIG_INUMS	1
# define XFS_BIG_BLKNOS	0
# define XFS_BIG_INUMS	0
#define HAVE_PERCPU_SB
#undef  HAVE_PERCPU_SB
#define irix_sgid_inherit	xfs_params.sgid_inherit.val
#define irix_symlink_mode	xfs_params.symlink_mode.val
#define xfs_panic_mask		xfs_params.panic_mask.val
#define xfs_error_level		xfs_params.error_level.val
#define xfs_syncd_centisecs	xfs_params.syncd_timer.val
#define xfs_stats_clear		xfs_params.stats_clear.val
#define xfs_inherit_sync	xfs_params.inherit_sync.val
#define xfs_inherit_nodump	xfs_params.inherit_nodump.val
#define xfs_inherit_noatime	xfs_params.inherit_noatim.val
#define xfs_buf_timer_centisecs	xfs_params.xfs_buf_timer.val
#define xfs_buf_age_centisecs	xfs_params.xfs_buf_age.val
#define xfs_inherit_nosymlinks	xfs_params.inherit_nosym.val
#define xfs_rotorstep		xfs_params.rotorstep.val
#define xfs_inherit_nodefrag	xfs_params.inherit_nodfrg.val
#define xfs_fstrm_centisecs	xfs_params.fstrm_timer.val
#define current_cpu()		(raw_smp_processor_id())
#define current_pid()		(current->pid)
#define current_test_flags(f)	(current->flags & (f))
#define current_set_flags_nested(sp, f)		\
(*(sp) = current->flags, current->flags |= (f))
#define current_clear_flags_nested(sp, f)	\
(*(sp) = current->flags, current->flags &= ~(f))
#define current_restore_flags_nested(sp, f)	\
(current->flags = ((current->flags & ~(f)) | (*(sp) & (f))))
#define spinlock_destroy(lock)
#define NBBY		8
#define	BLKDEV_IOSHIFT		PAGE_CACHE_SHIFT
#define	BLKDEV_IOSIZE		(1<<BLKDEV_IOSHIFT)
#define	BLKDEV_BB		BTOBB(BLKDEV_IOSIZE)
#define ENOATTR		ENODATA
#define EWRONGFS	EINVAL
#define EFSCORRUPTED	EUCLEAN
#define SYNCHRONIZE()	barrier()
#define __return_address __builtin_return_address(0)
#define XFS_PROJID_DEFAULT	0
#define MAXPATHLEN	1024
#define MIN(a,b)	(min(a,b))
#define MAX(a,b)	(max(a,b))
#define howmany(x, y)	(((x)+((y)-1))/(y))
#define xfs_sort(a,n,s,fn)	sort(a,n,s,fn,NULL)
#define xfs_stack_trace()	dump_stack()
#if defined __i386__
static inline __u32 xfs_do_div(void *a, __u32 b, int n)
static inline __u32 xfs_do_mod(void *a, __u32 b, int n)
static inline __u32 xfs_do_div(void *a, __u32 b, int n)
static inline __u32 xfs_do_mod(void *a, __u32 b, int n)
#undef do_div
#define do_div(a, b)	xfs_do_div(&(a), (b), sizeof(a))
#define do_mod(a, b)	xfs_do_mod(&(a), (b), sizeof(a))
static inline __uint64_t roundup_64(__uint64_t x, __uint32_t y)
static inline __uint64_t howmany_64(__uint64_t x, __uint32_t y)
#if defined(__arm__) && !defined(__ARM_EABI__)
#define __arch_pack __attribute__((packed))
#define __arch_pack
#define ASSERT_ALWAYS(expr)	\
(unlikely(expr) ? (void)0 : assfail(#expr, __FILE__, __LINE__))
#define ASSERT(expr)	((void)0)
# define STATIC static noinline
#define ASSERT(expr)	\
(unlikely(expr) ? (void)0 : assfail(#expr, __FILE__, __LINE__))
# define STATIC noinline
