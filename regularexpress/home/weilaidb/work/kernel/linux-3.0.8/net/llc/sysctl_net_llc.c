#error This file should not be compiled without CONFIG_SYSCTL defined
static struct ctl_table llc2_timeout_table[] = ;
static struct ctl_table llc_station_table[] = ;
static struct ctl_table llc2_dir_timeout_table[] = ;
static struct ctl_table llc_table[] = ;
static struct ctl_path llc_path[] = ;
static struct ctl_table_header *llc_table_header;
int __init llc_sysctl_init(void)
void llc_sysctl_exit(void)
