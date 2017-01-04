static const int nfs_set_port_min = 0;
static const int nfs_set_port_max = 65535;
static struct ctl_table_header *nfs_callback_sysctl_table;
static ctl_table nfs_cb_sysctls[] = ;
static ctl_table nfs_cb_sysctl_dir[] = ;
static ctl_table nfs_cb_sysctl_root[] = ;
int nfs_register_sysctl(void)
void nfs_unregister_sysctl(void)
