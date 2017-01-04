#define DYNAMIC_PORT_MIN	0x40
#define DYNAMIC_PORT_MAX	0x7f
static DEFINE_SEQLOCK(local_port_range_lock);
static int local_port_range_min[2] = ;
static int local_port_range_max[2] = ;
static int local_port_range[2] = ;
static struct ctl_table_header *phonet_table_hrd;
static void set_local_port_range(int range[2])
void phonet_get_local_port_range(int *min, int *max)
static int proc_local_port_range(ctl_table *table, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos)
static struct ctl_table phonet_table[] = ;
static struct ctl_path phonet_ctl_path[] = ;
int __init phonet_sysctl_init(void)
void phonet_sysctl_exit(void)
