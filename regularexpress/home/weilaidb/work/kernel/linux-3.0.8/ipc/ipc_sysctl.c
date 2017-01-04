static void *get_ipc(ctl_table *table)
static int proc_ipc_dointvec(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int proc_ipc_callback_dointvec(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int proc_ipc_doulongvec_minmax(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static void ipc_auto_callback(int val)
static int proc_ipcauto_dointvec_minmax(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
#define proc_ipc_doulongvec_minmax NULL
#define proc_ipc_dointvec	   NULL
#define proc_ipc_callback_dointvec NULL
#define proc_ipcauto_dointvec_minmax NULL
static int zero;
static int one = 1;
static struct ctl_table ipc_kern_table[] = ;
static struct ctl_table ipc_root_table[] = ;
static int __init ipc_sysctl_init(void)
__initcall(ipc_sysctl_init);
