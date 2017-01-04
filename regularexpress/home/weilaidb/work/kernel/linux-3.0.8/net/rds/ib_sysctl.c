static struct ctl_table_header *rds_ib_sysctl_hdr;
unsigned long rds_ib_sysctl_max_send_wr = RDS_IB_DEFAULT_SEND_WR;
unsigned long rds_ib_sysctl_max_recv_wr = RDS_IB_DEFAULT_RECV_WR;
unsigned long rds_ib_sysctl_max_recv_allocation = (128 * 1024 * 1024) / RDS_FRAG_SIZE;
static unsigned long rds_ib_sysctl_max_wr_min = 1;
static unsigned long rds_ib_sysctl_max_wr_max = (u32)~0;
unsigned long rds_ib_sysctl_max_unsig_wrs = 16;
static unsigned long rds_ib_sysctl_max_unsig_wr_min = 1;
static unsigned long rds_ib_sysctl_max_unsig_wr_max = 64;
unsigned int rds_ib_sysctl_flow_control = 0;
static ctl_table rds_ib_sysctl_table[] = ;
static struct ctl_path rds_ib_sysctl_path[] = ;
void rds_ib_sysctl_exit(void)
int rds_ib_sysctl_init(void)
