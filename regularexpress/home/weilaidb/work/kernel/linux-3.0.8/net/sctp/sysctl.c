static int zero = 0;
static int one = 1;
static int timer_max = 86400000;
static int int_max = INT_MAX;
static int sack_timer_min = 1;
static int sack_timer_max = 500;
static int addr_scope_max = 3;
static int rwnd_scale_max = 16;
extern long sysctl_sctp_mem[3];
extern int sysctl_sctp_rmem[3];
extern int sysctl_sctp_wmem[3];
static ctl_table sctp_table[] = ;
static struct ctl_path sctp_path[] = ;
static struct ctl_table_header * sctp_sysctl_header;
void sctp_sysctl_register(void)
void sctp_sysctl_unregister(void)
