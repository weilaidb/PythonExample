#define __XFS_QM_STATS_H__
#if defined(CONFIG_PROC_FS) && !defined(XFS_STATS_OFF)
struct xqmstats ;
extern struct xqmstats xqmstats;
# define XQM_STATS_INC(count)	( (count)++ )
extern void xfs_qm_init_procfs(void);
extern void xfs_qm_cleanup_procfs(void);
# define XQM_STATS_INC(count)	do  while (0)
static inline void xfs_qm_init_procfs(void) ;
static inline void xfs_qm_cleanup_procfs(void) ;
