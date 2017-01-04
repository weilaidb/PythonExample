#error This file should not be compiled without CONFIG_SYSCTL defined
static int		zero     = 0,
u8_max   = 0xFF;
static unsigned long	seqw_min = DCCPF_SEQ_WMIN,
seqw_max = 0xFFFFFFFF;
static struct ctl_table dccp_default_table[] = ;
static struct ctl_path dccp_path[] = ;
static struct ctl_table_header *dccp_table_header;
int __init dccp_sysctl_init(void)
void dccp_sysctl_exit(void)
