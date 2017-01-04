int decnet_debug_level;
int decnet_time_wait = 30;
int decnet_dn_count = 1;
int decnet_di_count = 3;
int decnet_dr_count = 3;
int decnet_log_martians = 1;
int decnet_no_fc_max_cwnd = NSP_MIN_WINDOW;
long sysctl_decnet_mem[3] = ;
int sysctl_decnet_wmem[3] = ;
int sysctl_decnet_rmem[3] = ;
extern int decnet_dst_gc_interval;
static int min_decnet_time_wait[] = ;
static int max_decnet_time_wait[] = ;
static int min_state_count[] = ;
static int max_state_count[] = ;
static int min_decnet_dst_gc_interval[] = ;
static int max_decnet_dst_gc_interval[] = ;
static int min_decnet_no_fc_max_cwnd[] = ;
static int max_decnet_no_fc_max_cwnd[] = ;
static char node_name[7] = "???";
static struct ctl_table_header *dn_table_header = NULL;
#define ISNUM(x) (((x) >= '0') && ((x) <= '9'))
#define ISLOWER(x) (((x) >= 'a') && ((x) <= 'z'))
#define ISUPPER(x) (((x) >= 'A') && ((x) <= 'Z'))
#define ISALPHA(x) (ISLOWER(x) || ISUPPER(x))
#define INVALID_END_CHAR(x) (ISNUM(x) || ISALPHA(x))
static void strip_it(char *str)
static int parse_addr(__le16 *addr, char *str)
static int dn_node_address_handler(ctl_table *table, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos)
static int dn_def_dev_handler(ctl_table *table, int write,
void __user *buffer,
size_t *lenp, loff_t *ppos)
static ctl_table dn_table[] = ;
static struct ctl_path dn_path[] = ;
void dn_register_sysctl(void)
void dn_unregister_sysctl(void)
void dn_unregister_sysctl(void)
void dn_register_sysctl(void)
