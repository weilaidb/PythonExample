static struct irttp_cb *irttp;
static void __irttp_close_tsap(struct tsap_cb *self);
static int irttp_data_indication(void *instance, void *sap,
struct sk_buff *skb);
static int irttp_udata_indication(void *instance, void *sap,
struct sk_buff *skb);
static void irttp_disconnect_indication(void *instance, void *sap,
LM_REASON reason, struct sk_buff *);
static void irttp_connect_indication(void *instance, void *sap,
struct qos_info *qos, __u32 max_sdu_size,
__u8 header_size, struct sk_buff *skb);
static void irttp_connect_confirm(void *instance, void *sap,
struct qos_info *qos, __u32 max_sdu_size,
__u8 header_size, struct sk_buff *skb);
static void irttp_run_tx_queue(struct tsap_cb *self);
static void irttp_run_rx_queue(struct tsap_cb *self);
static void irttp_flush_queues(struct tsap_cb *self);
static void irttp_fragment_skb(struct tsap_cb *self, struct sk_buff *skb);
static struct sk_buff *irttp_reassemble_skb(struct tsap_cb *self);
static void irttp_todo_expired(unsigned long data);
static int irttp_param_max_sdu_size(void *instance, irda_param_t *param,
int get);
static void irttp_flow_indication(void *instance, void *sap, LOCAL_FLOW flow);
static void irttp_status_indication(void *instance,
LINK_STATUS link, LOCK_STATUS lock);
static pi_minor_info_t pi_minor_call_table[] = ;
static pi_major_info_t pi_major_call_table[] = ;
static pi_param_info_t param_info = ;
int __init irttp_init(void)
void irttp_cleanup(void)
static inline void irttp_start_todo_timer(struct tsap_cb *self, int timeout)
static void irttp_todo_expired(unsigned long data)
static void irttp_flush_queues(struct tsap_cb *self)
static struct sk_buff *irttp_reassemble_skb(struct tsap_cb *self)
static inline void irttp_fragment_skb(struct tsap_cb *self,
struct sk_buff *skb)
static int irttp_param_max_sdu_size(void *instance, irda_param_t *param,
int get)
static void irttp_init_tsap(struct tsap_cb *tsap)
struct tsap_cb *irttp_open_tsap(__u8 stsap_sel, int credit, notify_t *notify)
EXPORT_SYMBOL(irttp_open_tsap);
static void __irttp_close_tsap(struct tsap_cb *self)
int irttp_close_tsap(struct tsap_cb *self)
EXPORT_SYMBOL(irttp_close_tsap);
int irttp_udata_request(struct tsap_cb *self, struct sk_buff *skb)
EXPORT_SYMBOL(irttp_udata_request);
int irttp_data_request(struct tsap_cb *self, struct sk_buff *skb)
EXPORT_SYMBOL(irttp_data_request);
static void irttp_run_tx_queue(struct tsap_cb *self)
static inline void irttp_give_credit(struct tsap_cb *self)
static int irttp_udata_indication(void *instance, void *sap,
struct sk_buff *skb)
static int irttp_data_indication(void *instance, void *sap,
struct sk_buff *skb)
static void irttp_status_indication(void *instance,
LINK_STATUS link, LOCK_STATUS lock)
static void irttp_flow_indication(void *instance, void *sap, LOCAL_FLOW flow)
void irttp_flow_request(struct tsap_cb *self, LOCAL_FLOW flow)
EXPORT_SYMBOL(irttp_flow_request);
int irttp_connect_request(struct tsap_cb *self, __u8 dtsap_sel,
__u32 saddr, __u32 daddr,
struct qos_info *qos, __u32 max_sdu_size,
struct sk_buff *userdata)
EXPORT_SYMBOL(irttp_connect_request);
static void irttp_connect_confirm(void *instance, void *sap,
struct qos_info *qos, __u32 max_seg_size,
__u8 max_header_size, struct sk_buff *skb)
static void irttp_connect_indication(void *instance, void *sap,
struct qos_info *qos, __u32 max_seg_size, __u8 max_header_size,
struct sk_buff *skb)
int irttp_connect_response(struct tsap_cb *self, __u32 max_sdu_size,
struct sk_buff *userdata)
EXPORT_SYMBOL(irttp_connect_response);
struct tsap_cb *irttp_dup(struct tsap_cb *orig, void *instance)
EXPORT_SYMBOL(irttp_dup);
int irttp_disconnect_request(struct tsap_cb *self, struct sk_buff *userdata,
int priority)
EXPORT_SYMBOL(irttp_disconnect_request);
static void irttp_disconnect_indication(void *instance, void *sap,
LM_REASON reason, struct sk_buff *skb)
static void irttp_do_data_indication(struct tsap_cb *self, struct sk_buff *skb)
static void irttp_run_rx_queue(struct tsap_cb *self)
struct irttp_iter_state ;
static void *irttp_seq_start(struct seq_file *seq, loff_t *pos)
static void *irttp_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void irttp_seq_stop(struct seq_file *seq, void *v)
static int irttp_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations irttp_seq_ops = ;
static int irttp_seq_open(struct inode *inode, struct file *file)
const struct file_operations irttp_seq_fops = ;
