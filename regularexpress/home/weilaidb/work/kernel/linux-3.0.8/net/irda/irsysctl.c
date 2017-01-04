extern int  sysctl_discovery;
extern int  sysctl_discovery_slots;
extern int  sysctl_discovery_timeout;
extern int  sysctl_slot_timeout;
extern int  sysctl_fast_poll_increase;
extern char sysctl_devname[];
extern int  sysctl_max_baud_rate;
extern int  sysctl_min_tx_turn_time;
extern int  sysctl_max_tx_data_size;
extern int  sysctl_max_tx_window;
extern int  sysctl_max_noreply_time;
extern int  sysctl_warn_noreply_time;
extern int  sysctl_lap_keepalive_time;
extern struct irlmp_cb *irlmp;
static int max_discovery_slots = 16;
static int min_discovery_slots = 1;
static int max_slot_timeout = 160;
static int min_slot_timeout = 20;
static int max_max_baud_rate = 16000000;
static int min_max_baud_rate = 2400;
static int max_min_tx_turn_time = 10000;
static int min_min_tx_turn_time;
static int max_max_tx_data_size = 2048;
static int min_max_tx_data_size = 64;
static int max_max_tx_window = 7;
static int min_max_tx_window = 1;
static int max_max_noreply_time = 40;
static int min_max_noreply_time = 3;
static int max_warn_noreply_time = 3;
static int min_warn_noreply_time = 1;
static int max_lap_keepalive_time = 10000;
static int min_lap_keepalive_time = 100;
static int do_devname(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static int do_discovery(ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static ctl_table irda_table[] = ;
static struct ctl_path irda_path[] = ;
static struct ctl_table_header *irda_table_header;
int __init irda_sysctl_register(void)
void irda_sysctl_unregister(void)
