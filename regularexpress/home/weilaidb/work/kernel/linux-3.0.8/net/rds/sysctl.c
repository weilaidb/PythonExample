static struct ctl_table_header *rds_sysctl_reg_table;
static unsigned long rds_sysctl_reconnect_min = 1;
static unsigned long rds_sysctl_reconnect_max = ~0UL;
unsigned long rds_sysctl_reconnect_min_jiffies;
unsigned long rds_sysctl_reconnect_max_jiffies = HZ;
unsigned int  rds_sysctl_max_unacked_packets = 8;
unsigned int  rds_sysctl_max_unacked_bytes = (16 << 20);
unsigned int rds_sysctl_ping_enable = 1;
static ctl_table rds_sysctl_rds_table[] = ;
static struct ctl_path rds_sysctl_path[] = ;
void rds_sysctl_exit(void)
int rds_sysctl_init(void)
