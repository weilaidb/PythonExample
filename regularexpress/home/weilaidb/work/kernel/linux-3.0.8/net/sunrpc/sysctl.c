unsigned int	rpc_debug;
EXPORT_SYMBOL_GPL(rpc_debug);
unsigned int	nfs_debug;
EXPORT_SYMBOL_GPL(nfs_debug);
unsigned int	nfsd_debug;
EXPORT_SYMBOL_GPL(nfsd_debug);
unsigned int	nlm_debug;
EXPORT_SYMBOL_GPL(nlm_debug);
static struct ctl_table_header *sunrpc_table_header;
static ctl_table		sunrpc_table[];
void
rpc_register_sysctl(void)
void
rpc_unregister_sysctl(void)
static int proc_do_xprt(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int
proc_dodebug(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static ctl_table debug_table[] = ;
static ctl_table sunrpc_table[] = ;
