int proc_dolasatstring(ctl_table *table, int write,
void *buffer, size_t *lenp, loff_t *ppos)
int proc_dolasatint(ctl_table *table, int write,
void *buffer, size_t *lenp, loff_t *ppos)
static int rtctmp;
int proc_dolasatrtc(ctl_table *table, int write,
void *buffer, size_t *lenp, loff_t *ppos)
int proc_lasat_ip(ctl_table *table, int write,
void *buffer, size_t *lenp, loff_t *ppos)
int proc_lasat_prid(ctl_table *table, int write,
void *buffer, size_t *lenp, loff_t *ppos)
extern int lasat_boot_to_service;
static ctl_table lasat_table[] = ;
static ctl_table lasat_root_table[] = ;
static int __init lasat_register_sysctl(void)
__initcall(lasat_register_sysctl);
