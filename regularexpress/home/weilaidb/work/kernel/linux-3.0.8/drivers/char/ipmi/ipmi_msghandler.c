#define PFX "IPMI message handler: "
#define IPMI_DRIVER_VERSION "39.2"
static struct ipmi_recv_msg *ipmi_alloc_recv_msg(void);
static int ipmi_init_msghandler(void);
static int initialized;
static struct proc_dir_entry *proc_ipmi_root;
#define IPMI_MAINTENANCE_MODE_TIMEOUT 30000
#define MAX_EVENTS_IN_QUEUE	25
#define MAX_MSG_TIMEOUT		60000
struct ipmi_user ;
struct cmd_rcvr ;
struct seq_table ;
#define STORE_SEQ_IN_MSGID(seq, seqid) (((seq&0xff)<<26) | (seqid&0x3ffffff))
#define GET_SEQ_FROM_MSGID(msgid, seq, seqid) \
do  while (0)
#define NEXT_SEQID(seqid) (((seqid) + 1) & 0x3fffff)
struct ipmi_channel ;
struct ipmi_proc_entry ;
struct bmc_device ;
enum ipmi_stat_indexes ;
#define IPMI_IPMB_NUM_SEQ	64
#define IPMI_MAX_CHANNELS       16
struct ipmi_smi ;
#define to_si_intf_from_dev(device) container_of(device, struct ipmi_smi, dev)
static struct platform_driver ipmidriver = ;
static DEFINE_MUTEX(ipmidriver_mutex);
static LIST_HEAD(ipmi_interfaces);
static DEFINE_MUTEX(ipmi_interfaces_mutex);
static LIST_HEAD(smi_watchers);
static DEFINE_MUTEX(smi_watchers_mutex);
#define ipmi_inc_stat(intf, stat) \
atomic_inc(&(intf)->stats[IPMI_STAT_ ## stat])
#define ipmi_get_stat(intf, stat) \
((unsigned int) atomic_read(&(intf)->stats[IPMI_STAT_ ## stat]))
static int is_lan_addr(struct ipmi_addr *addr)
static int is_ipmb_addr(struct ipmi_addr *addr)
static int is_ipmb_bcast_addr(struct ipmi_addr *addr)
static void free_recv_msg_list(struct list_head *q)
static void free_smi_msg_list(struct list_head *q)
static void clean_up_interface_data(ipmi_smi_t intf)
static void intf_free(struct kref *ref)
struct watcher_entry ;
int ipmi_smi_watcher_register(struct ipmi_smi_watcher *watcher)
EXPORT_SYMBOL(ipmi_smi_watcher_register);
int ipmi_smi_watcher_unregister(struct ipmi_smi_watcher *watcher)
EXPORT_SYMBOL(ipmi_smi_watcher_unregister);
static void
call_smi_watchers(int i, struct device *dev)
static int
ipmi_addr_equal(struct ipmi_addr *addr1, struct ipmi_addr *addr2)
int ipmi_validate_addr(struct ipmi_addr *addr, int len)
EXPORT_SYMBOL(ipmi_validate_addr);
unsigned int ipmi_addr_length(int addr_type)
EXPORT_SYMBOL(ipmi_addr_length);
static void deliver_response(struct ipmi_recv_msg *msg)
static void
deliver_err_response(struct ipmi_recv_msg *msg, int err)
static int intf_next_seq(ipmi_smi_t           intf,
struct ipmi_recv_msg *recv_msg,
unsigned long        timeout,
int                  retries,
int                  broadcast,
unsigned char        *seq,
long                 *seqid)
static int intf_find_seq(ipmi_smi_t           intf,
unsigned char        seq,
short                channel,
unsigned char        cmd,
unsigned char        netfn,
struct ipmi_addr     *addr,
struct ipmi_recv_msg **recv_msg)
static int intf_start_seq_timer(ipmi_smi_t intf,
long       msgid)
static int intf_err_seq(ipmi_smi_t   intf,
long         msgid,
unsigned int err)
int ipmi_create_user(unsigned int          if_num,
struct ipmi_user_hndl *handler,
void                  *handler_data,
ipmi_user_t           *user)
EXPORT_SYMBOL(ipmi_create_user);
int ipmi_get_smi_info(int if_num, struct ipmi_smi_info *data)
EXPORT_SYMBOL(ipmi_get_smi_info);
static void free_user(struct kref *ref)
int ipmi_destroy_user(ipmi_user_t user)
EXPORT_SYMBOL(ipmi_destroy_user);
void ipmi_get_version(ipmi_user_t   user,
unsigned char *major,
unsigned char *minor)
EXPORT_SYMBOL(ipmi_get_version);
int ipmi_set_my_address(ipmi_user_t   user,
unsigned int  channel,
unsigned char address)
EXPORT_SYMBOL(ipmi_set_my_address);
int ipmi_get_my_address(ipmi_user_t   user,
unsigned int  channel,
unsigned char *address)
EXPORT_SYMBOL(ipmi_get_my_address);
int ipmi_set_my_LUN(ipmi_user_t   user,
unsigned int  channel,
unsigned char LUN)
EXPORT_SYMBOL(ipmi_set_my_LUN);
int ipmi_get_my_LUN(ipmi_user_t   user,
unsigned int  channel,
unsigned char *address)
EXPORT_SYMBOL(ipmi_get_my_LUN);
int ipmi_get_maintenance_mode(ipmi_user_t user)
EXPORT_SYMBOL(ipmi_get_maintenance_mode);
static void maintenance_mode_update(ipmi_smi_t intf)
int ipmi_set_maintenance_mode(ipmi_user_t user, int mode)
EXPORT_SYMBOL(ipmi_set_maintenance_mode);
int ipmi_set_gets_events(ipmi_user_t user, int val)
EXPORT_SYMBOL(ipmi_set_gets_events);
static struct cmd_rcvr *find_cmd_rcvr(ipmi_smi_t    intf,
unsigned char netfn,
unsigned char cmd,
unsigned char chan)
static int is_cmd_rcvr_exclusive(ipmi_smi_t    intf,
unsigned char netfn,
unsigned char cmd,
unsigned int  chans)
int ipmi_register_for_cmd(ipmi_user_t   user,
unsigned char netfn,
unsigned char cmd,
unsigned int  chans)
EXPORT_SYMBOL(ipmi_register_for_cmd);
int ipmi_unregister_for_cmd(ipmi_user_t   user,
unsigned char netfn,
unsigned char cmd,
unsigned int  chans)
EXPORT_SYMBOL(ipmi_unregister_for_cmd);
static unsigned char
ipmb_checksum(unsigned char *data, int size)
static inline void format_ipmb_msg(struct ipmi_smi_msg   *smi_msg,
struct kernel_ipmi_msg *msg,
struct ipmi_ipmb_addr *ipmb_addr,
long                  msgid,
unsigned char         ipmb_seq,
int                   broadcast,
unsigned char         source_address,
unsigned char         source_lun)
static inline void format_lan_msg(struct ipmi_smi_msg   *smi_msg,
struct kernel_ipmi_msg *msg,
struct ipmi_lan_addr  *lan_addr,
long                  msgid,
unsigned char         ipmb_seq,
unsigned char         source_lun)
static int i_ipmi_request(ipmi_user_t          user,
ipmi_smi_t           intf,
struct ipmi_addr     *addr,
long                 msgid,
struct kernel_ipmi_msg *msg,
void                 *user_msg_data,
void                 *supplied_smi,
struct ipmi_recv_msg *supplied_recv,
int                  priority,
unsigned char        source_address,
unsigned char        source_lun,
int                  retries,
unsigned int         retry_time_ms)
static int check_addr(ipmi_smi_t       intf,
struct ipmi_addr *addr,
unsigned char    *saddr,
unsigned char    *lun)
int ipmi_request_settime(ipmi_user_t      user,
struct ipmi_addr *addr,
long             msgid,
struct kernel_ipmi_msg  *msg,
void             *user_msg_data,
int              priority,
int              retries,
unsigned int     retry_time_ms)
EXPORT_SYMBOL(ipmi_request_settime);
int ipmi_request_supply_msgs(ipmi_user_t          user,
struct ipmi_addr     *addr,
long                 msgid,
struct kernel_ipmi_msg *msg,
void                 *user_msg_data,
void                 *supplied_smi,
struct ipmi_recv_msg *supplied_recv,
int                  priority)
EXPORT_SYMBOL(ipmi_request_supply_msgs);
static int smi_ipmb_proc_show(struct seq_file *m, void *v)
static int smi_ipmb_proc_open(struct inode *inode, struct file *file)
static const struct file_operations smi_ipmb_proc_ops = ;
static int smi_version_proc_show(struct seq_file *m, void *v)
static int smi_version_proc_open(struct inode *inode, struct file *file)
static const struct file_operations smi_version_proc_ops = ;
static int smi_stats_proc_show(struct seq_file *m, void *v)
static int smi_stats_proc_open(struct inode *inode, struct file *file)
static const struct file_operations smi_stats_proc_ops = ;
int ipmi_smi_add_proc_entry(ipmi_smi_t smi, char *name,
const struct file_operations *proc_ops,
void *data)
EXPORT_SYMBOL(ipmi_smi_add_proc_entry);
static int add_proc_entries(ipmi_smi_t smi, int num)
static void remove_proc_entries(ipmi_smi_t smi)
static int __find_bmc_guid(struct device *dev, void *data)
static struct bmc_device *ipmi_find_bmc_guid(struct device_driver *drv,
unsigned char *guid)
struct prod_dev_id ;
static int __find_bmc_prod_dev_id(struct device *dev, void *data)
static struct bmc_device *ipmi_find_bmc_prod_dev_id(
struct device_driver *drv,
unsigned int product_id, unsigned char device_id)
static ssize_t device_id_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t provides_dev_sdrs_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t revision_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t firmware_rev_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ipmi_version_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t add_dev_support_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t manufacturer_id_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t product_id_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t aux_firmware_rev_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t guid_show(struct device *dev, struct device_attribute *attr,
char *buf)
static void remove_files(struct bmc_device *bmc)
static void
cleanup_bmc_device(struct kref *ref)
static void ipmi_bmc_unregister(ipmi_smi_t intf)
static int create_files(struct bmc_device *bmc)
static int ipmi_bmc_register(ipmi_smi_t intf, int ifnum,
const char *sysfs_name)
static int
send_guid_cmd(ipmi_smi_t intf, int chan)
static void
guid_handler(ipmi_smi_t intf, struct ipmi_recv_msg *msg)
static void
get_guid(ipmi_smi_t intf)
static int
send_channel_info_cmd(ipmi_smi_t intf, int chan)
static void
channel_handler(ipmi_smi_t intf, struct ipmi_recv_msg *msg)
void ipmi_poll_interface(ipmi_user_t user)
EXPORT_SYMBOL(ipmi_poll_interface);
int ipmi_register_smi(struct ipmi_smi_handlers *handlers,
void		       *send_info,
struct ipmi_device_id    *device_id,
struct device            *si_dev,
const char               *sysfs_name,
unsigned char            slave_addr)
EXPORT_SYMBOL(ipmi_register_smi);
static void cleanup_smi_msgs(ipmi_smi_t intf)
int ipmi_unregister_smi(ipmi_smi_t intf)
EXPORT_SYMBOL(ipmi_unregister_smi);
static int handle_ipmb_get_msg_rsp(ipmi_smi_t          intf,
struct ipmi_smi_msg *msg)
static int handle_ipmb_get_msg_cmd(ipmi_smi_t          intf,
struct ipmi_smi_msg *msg)
static int handle_lan_get_msg_rsp(ipmi_smi_t          intf,
struct ipmi_smi_msg *msg)
static int handle_lan_get_msg_cmd(ipmi_smi_t          intf,
struct ipmi_smi_msg *msg)
static int handle_oem_get_msg_cmd(ipmi_smi_t          intf,
struct ipmi_smi_msg *msg)
static void copy_event_into_recv_msg(struct ipmi_recv_msg *recv_msg,
struct ipmi_smi_msg  *msg)
static int handle_read_event_rsp(ipmi_smi_t          intf,
struct ipmi_smi_msg *msg)
static int handle_bmc_rsp(ipmi_smi_t          intf,
struct ipmi_smi_msg *msg)
static int handle_new_recv_msg(ipmi_smi_t          intf,
struct ipmi_smi_msg *msg)
void ipmi_smi_msg_received(ipmi_smi_t          intf,
struct ipmi_smi_msg *msg)
EXPORT_SYMBOL(ipmi_smi_msg_received);
void ipmi_smi_watchdog_pretimeout(ipmi_smi_t intf)
EXPORT_SYMBOL(ipmi_smi_watchdog_pretimeout);
static struct ipmi_smi_msg *
smi_from_recv_msg(ipmi_smi_t intf, struct ipmi_recv_msg *recv_msg,
unsigned char seq, long seqid)
static void check_msg_timeout(ipmi_smi_t intf, struct seq_table *ent,
struct list_head *timeouts, long timeout_period,
int slot, unsigned long *flags)
static void ipmi_timeout_handler(long timeout_period)
static void ipmi_request_event(void)
static struct timer_list ipmi_timer;
#define IPMI_TIMEOUT_TIME	1000
#define IPMI_TIMEOUT_JIFFIES	((IPMI_TIMEOUT_TIME * HZ) / 1000)
#define IPMI_REQUEST_EV_TIME	(1000 / (IPMI_TIMEOUT_TIME))
static atomic_t stop_operation;
static unsigned int ticks_to_req_ev = IPMI_REQUEST_EV_TIME;
static void ipmi_timeout(unsigned long data)
static atomic_t smi_msg_inuse_count = ATOMIC_INIT(0);
static atomic_t recv_msg_inuse_count = ATOMIC_INIT(0);
static void free_smi_msg(struct ipmi_smi_msg *msg)
struct ipmi_smi_msg *ipmi_alloc_smi_msg(void)
EXPORT_SYMBOL(ipmi_alloc_smi_msg);
static void free_recv_msg(struct ipmi_recv_msg *msg)
static struct ipmi_recv_msg *ipmi_alloc_recv_msg(void)
void ipmi_free_recv_msg(struct ipmi_recv_msg *msg)
EXPORT_SYMBOL(ipmi_free_recv_msg);
static void dummy_smi_done_handler(struct ipmi_smi_msg *msg)
static void dummy_recv_done_handler(struct ipmi_recv_msg *msg)
static void event_receiver_fetcher(ipmi_smi_t intf, struct ipmi_recv_msg *msg)
static void device_id_fetcher(ipmi_smi_t intf, struct ipmi_recv_msg *msg)
static void send_panic_events(char *str)
static int has_panicked;
static int panic_event(struct notifier_block *this,
unsigned long         event,
void                  *ptr)
static struct notifier_block panic_block = ;
static int ipmi_init_msghandler(void)
static int __init ipmi_init_msghandler_mod(void)
static void __exit cleanup_ipmi(void)
module_exit(cleanup_ipmi);
module_init(ipmi_init_msghandler_mod);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Corey Minyard <minyard@mvista.com>");
MODULE_DESCRIPTION("Incoming and outgoing message routing for an IPMI"
" interface.");
MODULE_VERSION(IPMI_DRIVER_VERSION);
