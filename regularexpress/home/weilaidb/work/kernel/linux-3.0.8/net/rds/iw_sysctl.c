static struct ctl_table_header *rds_iw_sysctl_hdr;
unsigned long rds_iw_sysctl_max_send_wr = RDS_IW_DEFAULT_SEND_WR;
unsigned long rds_iw_sysctl_max_recv_wr = RDS_IW_DEFAULT_RECV_WR;
unsigned long rds_iw_sysctl_max_recv_allocation = (128 * 1024 * 1024) / RDS_FRAG_SIZE;
static unsigned long rds_iw_sysctl_max_wr_min = 1;
static unsigned long rds_iw_sysctl_max_wr_max = (u32)~0;
unsigned long rds_iw_sysctl_max_unsig_wrs = 16;
static unsigned long rds_iw_sysctl_max_unsig_wr_min = 1;
static unsigned long rds_iw_sysctl_max_unsig_wr_max = 64;
unsigned long rds_iw_sysctl_max_unsig_bytes = (16 << 20);
static unsigned long rds_iw_sysctl_max_unsig_bytes_min = 1;
static unsigned long rds_iw_sysctl_max_unsig_bytes_max = ~0UL;
unsigned int rds_iw_sysctl_flow_control = 1;
static ctl_table rds_iw_sysctl_table[] = ;
static struct ctl_path rds_iw_sysctl_path[] = ;
void rds_iw_sysctl_exit(void)
int rds_iw_sysctl_init(void)
