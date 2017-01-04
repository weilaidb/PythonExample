static const char *const ias_charset_types[] = ;
static hashbin_t *iriap = NULL;
static void *service_handle;
static void __iriap_close(struct iriap_cb *self);
static int iriap_register_lsap(struct iriap_cb *self, __u8 slsap_sel, int mode);
static void iriap_disconnect_indication(void *instance, void *sap,
LM_REASON reason, struct sk_buff *skb);
static void iriap_connect_indication(void *instance, void *sap,
struct qos_info *qos, __u32 max_sdu_size,
__u8 max_header_size,
struct sk_buff *skb);
static void iriap_connect_confirm(void *instance, void *sap,
struct qos_info *qos,
__u32 max_sdu_size, __u8 max_header_size,
struct sk_buff *skb);
static int iriap_data_indication(void *instance, void *sap,
struct sk_buff *skb);
static void iriap_watchdog_timer_expired(void *data);
static inline void iriap_start_watchdog_timer(struct iriap_cb *self,
int timeout)
static struct lock_class_key irias_objects_key;
int __init iriap_init(void)
void iriap_cleanup(void)
struct iriap_cb *iriap_open(__u8 slsap_sel, int mode, void *priv,
CONFIRM_CALLBACK callback)
EXPORT_SYMBOL(iriap_open);
static void __iriap_close(struct iriap_cb *self)
void iriap_close(struct iriap_cb *self)
EXPORT_SYMBOL(iriap_close);
static int iriap_register_lsap(struct iriap_cb *self, __u8 slsap_sel, int mode)
static void iriap_disconnect_indication(void *instance, void *sap,
LM_REASON reason,
struct sk_buff *skb)
static void iriap_disconnect_request(struct iriap_cb *self)
int iriap_getvaluebyclass_request(struct iriap_cb *self,
__u32 saddr, __u32 daddr,
char *name, char *attr)
EXPORT_SYMBOL(iriap_getvaluebyclass_request);
static void iriap_getvaluebyclass_confirm(struct iriap_cb *self,
struct sk_buff *skb)
static void iriap_getvaluebyclass_response(struct iriap_cb *self,
__u16 obj_id,
__u8 ret_code,
struct ias_value *value)
static void iriap_getvaluebyclass_indication(struct iriap_cb *self,
struct sk_buff *skb)
void iriap_send_ack(struct iriap_cb *self)
void iriap_connect_request(struct iriap_cb *self)
static void iriap_connect_confirm(void *instance, void *sap,
struct qos_info *qos, __u32 max_seg_size,
__u8 max_header_size,
struct sk_buff *skb)
static void iriap_connect_indication(void *instance, void *sap,
struct qos_info *qos, __u32 max_seg_size,
__u8 max_header_size,
struct sk_buff *skb)
static int iriap_data_indication(void *instance, void *sap,
struct sk_buff *skb)
void iriap_call_indication(struct iriap_cb *self, struct sk_buff *skb)
static void iriap_watchdog_timer_expired(void *data)
static const char *const ias_value_types[] = ;
static inline struct ias_object *irias_seq_idx(loff_t pos)
static void *irias_seq_start(struct seq_file *seq, loff_t *pos)
static void *irias_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void irias_seq_stop(struct seq_file *seq, void *v)
static int irias_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations irias_seq_ops = ;
static int irias_seq_open(struct inode *inode, struct file *file)
const struct file_operations irias_seq_fops = ;
