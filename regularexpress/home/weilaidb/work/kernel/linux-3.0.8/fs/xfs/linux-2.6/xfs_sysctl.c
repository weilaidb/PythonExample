static struct ctl_table_header *xfs_table_header;
STATIC int
xfs_stats_clear_proc_handler(
ctl_table	*ctl,
int		write,
void		__user *buffer,
size_t		*lenp,
loff_t		*ppos)
STATIC int
xfs_panic_mask_proc_handler(
ctl_table	*ctl,
int		write,
void		__user *buffer,
size_t		*lenp,
loff_t		*ppos)
static ctl_table xfs_table[] = ;
static ctl_table xfs_dir_table[] = ;
static ctl_table xfs_root_table[] = ;
int
xfs_sysctl_register(void)
void
xfs_sysctl_unregister(void)
