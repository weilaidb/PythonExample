static void *get_uts(ctl_table *table, int write)
static void put_uts(ctl_table *table, int write, void *which)
static int proc_do_uts_string(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
#define proc_do_uts_string NULL
static struct ctl_table uts_kern_table[] = ;
static struct ctl_table uts_root_table[] = ;
static int __init utsname_sysctl_init(void)
__initcall(utsname_sysctl_init);
