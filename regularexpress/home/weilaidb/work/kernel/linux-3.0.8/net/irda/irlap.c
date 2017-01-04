static hashbin_t *irlap = NULL;
int sysctl_slot_timeout = SLOT_TIMEOUT * 1000 / HZ;
int sysctl_warn_noreply_time = 3;
extern void irlap_queue_xmit(struct irlap_cb *self, struct sk_buff *skb);
static void __irlap_close(struct irlap_cb *self);
static void irlap_init_qos_capabilities(struct irlap_cb *self,
struct qos_info *qos_user);
static const char *const lap_reasons[] = ;
int __init irlap_init(void)
void irlap_cleanup(void)
struct irlap_cb *irlap_open(struct net_device *dev, struct qos_info *qos,
const char *hw_name)
EXPORT_SYMBOL(irlap_open);
static void __irlap_close(struct irlap_cb *self)
void irlap_close(struct irlap_cb *self)
EXPORT_SYMBOL(irlap_close);
void irlap_connect_indication(struct irlap_cb *self, struct sk_buff *skb)
void irlap_connect_response(struct irlap_cb *self, struct sk_buff *userdata)
void irlap_connect_request(struct irlap_cb *self, __u32 daddr,
struct qos_info *qos_user, int sniff)
void irlap_connect_confirm(struct irlap_cb *self, struct sk_buff *skb)
void irlap_data_indication(struct irlap_cb *self, struct sk_buff *skb,
int unreliable)
void irlap_data_request(struct irlap_cb *self, struct sk_buff *skb,
int unreliable)
void irlap_unitdata_request(struct irlap_cb *self, struct sk_buff *skb)
void irlap_unitdata_indication(struct irlap_cb *self, struct sk_buff *skb)
void irlap_disconnect_request(struct irlap_cb *self)
void irlap_disconnect_indication(struct irlap_cb *self, LAP_REASON reason)
void irlap_discovery_request(struct irlap_cb *self, discovery_t *discovery)
void irlap_discovery_confirm(struct irlap_cb *self, hashbin_t *discovery_log)
void irlap_discovery_indication(struct irlap_cb *self, discovery_t *discovery)
void irlap_status_indication(struct irlap_cb *self, int quality_of_link)
void irlap_reset_indication(struct irlap_cb *self)
void irlap_reset_confirm(void)
int irlap_generate_rand_time_slot(int S, int s)
void irlap_update_nr_received(struct irlap_cb *self, int nr)
int irlap_validate_ns_received(struct irlap_cb *self, int ns)
int irlap_validate_nr_received(struct irlap_cb *self, int nr)
void irlap_initiate_connection_state(struct irlap_cb *self)
void irlap_wait_min_turn_around(struct irlap_cb *self, struct qos_info *qos)
void irlap_flush_all_queues(struct irlap_cb *self)
static void irlap_change_speed(struct irlap_cb *self, __u32 speed, int now)
static void irlap_init_qos_capabilities(struct irlap_cb *self,
struct qos_info *qos_user)
void irlap_apply_default_connection_parameters(struct irlap_cb *self)
void irlap_apply_connection_parameters(struct irlap_cb *self, int now)
struct irlap_iter_state ;
static void *irlap_seq_start(struct seq_file *seq, loff_t *pos)
static void *irlap_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void irlap_seq_stop(struct seq_file *seq, void *v)
static int irlap_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations irlap_seq_ops = ;
static int irlap_seq_open(struct inode *inode, struct file *file)
const struct file_operations irlap_seq_fops = ;
