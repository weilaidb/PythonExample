static LIST_HEAD(irlans);
static void *ckey;
static void *skey;
static int eth;
static int access = ACCESS_PEER;
static const char *const irlan_access[] = ;
static const char *const irlan_media[] = ;
extern struct proc_dir_entry *proc_irda;
static int irlan_seq_open(struct inode *inode, struct file *file);
static const struct file_operations irlan_fops = ;
extern struct proc_dir_entry *proc_irda;
static struct irlan_cb *irlan_open(__u32 saddr, __u32 daddr);
static void __irlan_close(struct irlan_cb *self);
static int __irlan_insert_param(struct sk_buff *skb, char *param, int type,
__u8 value_byte, __u16 value_short,
__u8 *value_array, __u16 value_len);
static void irlan_open_unicast_addr(struct irlan_cb *self);
static void irlan_get_unicast_addr(struct irlan_cb *self);
void irlan_close_tsaps(struct irlan_cb *self);
static int __init irlan_init(void)
static void __exit irlan_cleanup(void)
static struct irlan_cb *irlan_open(__u32 saddr, __u32 daddr)
static void __irlan_close(struct irlan_cb *self)
struct irlan_cb *irlan_get_any(void)
static void irlan_connect_indication(void *instance, void *sap,
struct qos_info *qos,
__u32 max_sdu_size,
__u8 max_header_size,
struct sk_buff *skb)
static void irlan_connect_confirm(void *instance, void *sap,
struct qos_info *qos,
__u32 max_sdu_size,
__u8 max_header_size,
struct sk_buff *skb)
static void irlan_disconnect_indication(void *instance,
void *sap, LM_REASON reason,
struct sk_buff *userdata)
void irlan_open_data_tsap(struct irlan_cb *self)
void irlan_close_tsaps(struct irlan_cb *self)
void irlan_ias_register(struct irlan_cb *self, __u8 tsap_sel)
int irlan_run_ctrl_tx_queue(struct irlan_cb *self)
static void irlan_ctrl_data_request(struct irlan_cb *self, struct sk_buff *skb)
void irlan_get_provider_info(struct irlan_cb *self)
void irlan_open_data_channel(struct irlan_cb *self)
void irlan_close_data_channel(struct irlan_cb *self)
static void irlan_open_unicast_addr(struct irlan_cb *self)
void irlan_set_broadcast_filter(struct irlan_cb *self, int status)
void irlan_set_multicast_filter(struct irlan_cb *self, int status)
static void irlan_get_unicast_addr(struct irlan_cb *self)
void irlan_get_media_char(struct irlan_cb *self)
int irlan_insert_byte_param(struct sk_buff *skb, char *param, __u8 value)
int irlan_insert_short_param(struct sk_buff *skb, char *param, __u16 value)
int irlan_insert_string_param(struct sk_buff *skb, char *param, char *string)
int irlan_insert_array_param(struct sk_buff *skb, char *name, __u8 *array,
__u16 array_len)
static int __irlan_insert_param(struct sk_buff *skb, char *param, int type,
__u8 value_byte, __u16 value_short,
__u8 *value_array, __u16 value_len)
int irlan_extract_param(__u8 *buf, char *name, char *value, __u16 *len)
static void *irlan_seq_start(struct seq_file *seq, loff_t *pos)
static void *irlan_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void irlan_seq_stop(struct seq_file *seq, void *v)
static int irlan_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations irlan_seq_ops = ;
static int irlan_seq_open(struct inode *inode, struct file *file)
MODULE_AUTHOR("Dag Brattli <dagb@cs.uit.no>");
MODULE_DESCRIPTION("The Linux IrDA LAN protocol");
MODULE_LICENSE("GPL");
module_param(eth, bool, 0);
MODULE_PARM_DESC(eth, "Name devices ethX (0) or irlanX (1)");
module_param(access, int, 0);
MODULE_PARM_DESC(access, "Access type DIRECT=1, PEER=2, HOSTED=3");
module_init(irlan_init);
module_exit(irlan_cleanup);
