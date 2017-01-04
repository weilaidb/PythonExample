#define MIN_MSGMAX	1
#define MAX_MSGMAX	HARD_MSGMAX
#define MIN_MSGSIZEMAX	128
#define MAX_MSGSIZEMAX	(8192*128)
static void *get_mq(ctl_table *table)
static int proc_mq_dointvec(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int proc_mq_dointvec_minmax(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
#define proc_mq_dointvec NULL
#define proc_mq_dointvec_minmax NULL
static int msg_max_limit_min = MIN_MSGMAX;
static int msg_max_limit_max = MAX_MSGMAX;
static int msg_maxsize_limit_min = MIN_MSGSIZEMAX;
static int msg_maxsize_limit_max = MAX_MSGSIZEMAX;
static ctl_table mq_sysctls[] = ;
static ctl_table mq_sysctl_dir[] = ;
static ctl_table mq_sysctl_root[] = ;
struct ctl_table_header *mq_register_sysctl_table(void)
