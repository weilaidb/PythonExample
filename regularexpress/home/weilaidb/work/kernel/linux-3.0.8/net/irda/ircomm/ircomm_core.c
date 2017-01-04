static int __ircomm_close(struct ircomm_cb *self);
static void ircomm_control_indication(struct ircomm_cb *self,
struct sk_buff *skb, int clen);
extern struct proc_dir_entry *proc_irda;
static int ircomm_seq_open(struct inode *, struct file *);
static const struct file_operations ircomm_proc_fops = ;
hashbin_t *ircomm = NULL;
static int __init ircomm_init(void)
static void __exit ircomm_cleanup(void)
struct ircomm_cb *ircomm_open(notify_t *notify, __u8 service_type, int line)
EXPORT_SYMBOL(ircomm_open);
static int __ircomm_close(struct ircomm_cb *self)
int ircomm_close(struct ircomm_cb *self)
EXPORT_SYMBOL(ircomm_close);
int ircomm_connect_request(struct ircomm_cb *self, __u8 dlsap_sel,
__u32 saddr, __u32 daddr, struct sk_buff *skb,
__u8 service_type)
EXPORT_SYMBOL(ircomm_connect_request);
void ircomm_connect_indication(struct ircomm_cb *self, struct sk_buff *skb,
struct ircomm_info *info)
int ircomm_connect_response(struct ircomm_cb *self, struct sk_buff *userdata)
EXPORT_SYMBOL(ircomm_connect_response);
void ircomm_connect_confirm(struct ircomm_cb *self, struct sk_buff *skb,
struct ircomm_info *info)
int ircomm_data_request(struct ircomm_cb *self, struct sk_buff *skb)
EXPORT_SYMBOL(ircomm_data_request);
void ircomm_data_indication(struct ircomm_cb *self, struct sk_buff *skb)
void ircomm_process_data(struct ircomm_cb *self, struct sk_buff *skb)
int ircomm_control_request(struct ircomm_cb *self, struct sk_buff *skb)
EXPORT_SYMBOL(ircomm_control_request);
static void ircomm_control_indication(struct ircomm_cb *self,
struct sk_buff *skb, int clen)
int ircomm_disconnect_request(struct ircomm_cb *self, struct sk_buff *userdata)
EXPORT_SYMBOL(ircomm_disconnect_request);
void ircomm_disconnect_indication(struct ircomm_cb *self, struct sk_buff *skb,
struct ircomm_info *info)
void ircomm_flow_request(struct ircomm_cb *self, LOCAL_FLOW flow)
EXPORT_SYMBOL(ircomm_flow_request);
static void *ircomm_seq_start(struct seq_file *seq, loff_t *pos)
static void *ircomm_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void ircomm_seq_stop(struct seq_file *seq, void *v)
static int ircomm_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations ircomm_seq_ops = ;
static int ircomm_seq_open(struct inode *inode, struct file *file)
MODULE_AUTHOR("Dag Brattli <dag@brattli.net>");
MODULE_DESCRIPTION("IrCOMM protocol");
MODULE_LICENSE("GPL");
module_init(ircomm_init);
module_exit(ircomm_cleanup);
