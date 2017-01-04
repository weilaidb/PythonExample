#undef	VERBOSE_DEBUG
#define RNDIS_MAX_CONFIGS	1
static rndis_params rndis_per_dev_params[RNDIS_MAX_CONFIGS];
static const __le32 rndis_driver_version = cpu_to_le32(1);
static rndis_resp_t *rndis_add_response(int configNr, u32 length);
static const u32 oid_supported_list[] =
;
static int gen_ndis_query_resp(int configNr, u32 OID, u8 *buf,
unsigned buf_len, rndis_resp_t *r)
static int gen_ndis_set_resp(u8 configNr, u32 OID, u8 *buf, u32 buf_len,
rndis_resp_t *r)
static int rndis_init_response(int configNr, rndis_init_msg_type *buf)
static int rndis_query_response(int configNr, rndis_query_msg_type *buf)
static int rndis_set_response(int configNr, rndis_set_msg_type *buf)
static int rndis_reset_response(int configNr, rndis_reset_msg_type *buf)
static int rndis_keepalive_response(int configNr,
rndis_keepalive_msg_type *buf)
static int rndis_indicate_status_msg(int configNr, u32 status)
int rndis_signal_connect(int configNr)
int rndis_signal_disconnect(int configNr)
void rndis_uninit(int configNr)
void rndis_set_host_mac(int configNr, const u8 *addr)
int rndis_msg_parser(u8 configNr, u8 *buf)
int rndis_register(void (*resp_avail)(void *v), void *v)
void rndis_deregister(int configNr)
int rndis_set_param_dev(u8 configNr, struct net_device *dev, u16 *cdc_filter)
int rndis_set_param_vendor(u8 configNr, u32 vendorID, const char *vendorDescr)
int rndis_set_param_medium(u8 configNr, u32 medium, u32 speed)
void rndis_add_hdr(struct sk_buff *skb)
void rndis_free_response(int configNr, u8 *buf)
u8 *rndis_get_next_response(int configNr, u32 *length)
static rndis_resp_t *rndis_add_response(int configNr, u32 length)
int rndis_rm_hdr(struct gether *port,
struct sk_buff *skb,
struct sk_buff_head *list)
static int rndis_proc_show(struct seq_file *m, void *v)
static ssize_t rndis_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *ppos)
static int rndis_proc_open(struct inode *inode, struct file *file)
static const struct file_operations rndis_proc_fops = ;
#define	NAME_TEMPLATE "driver/rndis-%03d"
static struct proc_dir_entry *rndis_connect_state [RNDIS_MAX_CONFIGS];
int rndis_init(void)
void rndis_exit(void)
