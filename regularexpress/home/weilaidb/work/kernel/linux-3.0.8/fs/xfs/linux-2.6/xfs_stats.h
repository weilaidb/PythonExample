#define __XFS_STATS_H__
#if defined(CONFIG_PROC_FS) && !defined(XFS_STATS_OFF)
struct xfsstats ;
DECLARE_PER_CPU(struct xfsstats, xfsstats);
#define XFS_STATS_INC(v)	(per_cpu(xfsstats, current_cpu()).v++)
#define XFS_STATS_DEC(v)	(per_cpu(xfsstats, current_cpu()).v--)
#define XFS_STATS_ADD(v, inc)	(per_cpu(xfsstats, current_cpu()).v += (inc))
extern int xfs_init_procfs(void);
extern void xfs_cleanup_procfs(void);
# define XFS_STATS_INC(count)
# define XFS_STATS_DEC(count)
# define XFS_STATS_ADD(count, inc)
static inline int xfs_init_procfs(void)
static inline void xfs_cleanup_procfs(void)
