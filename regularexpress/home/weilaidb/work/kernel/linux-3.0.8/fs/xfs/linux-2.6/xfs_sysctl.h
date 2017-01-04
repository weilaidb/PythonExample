#define __XFS_SYSCTL_H__
typedef struct xfs_sysctl_val  xfs_sysctl_val_t;
typedef struct xfs_param  xfs_param_t;
enum ;
extern xfs_param_t	xfs_params;
extern int xfs_sysctl_register(void);
extern void xfs_sysctl_unregister(void);
# define xfs_sysctl_register()		(0)
# define xfs_sysctl_unregister()	do  while (0)
