#error This file should not be compiled without CONFIG_SYSCTL defined
extern int sysctl_ipx_pprop_broadcasting;
static struct ctl_table ipx_table[] = ;
static struct ctl_path ipx_path[] = ;
static struct ctl_table_header *ipx_table_header;
void ipx_register_sysctl(void)
void ipx_unregister_sysctl(void)
