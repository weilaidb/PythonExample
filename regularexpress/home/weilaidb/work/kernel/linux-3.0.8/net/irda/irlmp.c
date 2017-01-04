static __u8 irlmp_find_free_slsap(void);
static int irlmp_slsap_inuse(__u8 slsap_sel);
struct irlmp_cb *irlmp = NULL;
int  sysctl_discovery         = 0;
int  sysctl_discovery_timeout = 3;
int  sysctl_discovery_slots   = 6;
int  sysctl_lap_keepalive_time = LM_IDLE_TIMEOUT * 1000 / HZ;
char sysctl_devname[65];
const char *irlmp_reasons[] = ;
int __init irlmp_init(void)
void irlmp_cleanup(void)
struct lsap_cb *irlmp_open_lsap(__u8 slsap_sel, notify_t *notify, __u8 pid)
EXPORT_SYMBOL(irlmp_open_lsap);
static void __irlmp_close_lsap(struct lsap_cb *self)
void irlmp_close_lsap(struct lsap_cb *self)
EXPORT_SYMBOL(irlmp_close_lsap);
void irlmp_register_link(struct irlap_cb *irlap, __u32 saddr, notify_t *notify)
void irlmp_unregister_link(__u32 saddr)
int irlmp_connect_request(struct lsap_cb *self, __u8 dlsap_sel,
__u32 saddr, __u32 daddr,
struct qos_info *qos, struct sk_buff *userdata)
EXPORT_SYMBOL(irlmp_connect_request);
void irlmp_connect_indication(struct lsap_cb *self, struct sk_buff *skb)
int irlmp_connect_response(struct lsap_cb *self, struct sk_buff *userdata)
EXPORT_SYMBOL(irlmp_connect_response);
void irlmp_connect_confirm(struct lsap_cb *self, struct sk_buff *skb)
struct lsap_cb *irlmp_dup(struct lsap_cb *orig, void *instance)
int irlmp_disconnect_request(struct lsap_cb *self, struct sk_buff *userdata)
EXPORT_SYMBOL(irlmp_disconnect_request);
void irlmp_disconnect_indication(struct lsap_cb *self, LM_REASON reason,
struct sk_buff *skb)
void irlmp_do_expiry(void)
void irlmp_do_discovery(int nslots)
void irlmp_discovery_request(int nslots)
EXPORT_SYMBOL(irlmp_discovery_request);
struct irda_device_info *irlmp_get_discoveries(int *pn, __u16 mask, int nslots)
EXPORT_SYMBOL(irlmp_get_discoveries);
static inline void
irlmp_notify_client(irlmp_client_t *client,
hashbin_t *log, DISCOVERY_MODE mode)
void irlmp_discovery_confirm(hashbin_t *log, DISCOVERY_MODE mode)
void irlmp_discovery_expiry(discinfo_t *expiries, int number)
discovery_t *irlmp_get_discovery_response(void)
int irlmp_data_request(struct lsap_cb *self, struct sk_buff *userdata)
EXPORT_SYMBOL(irlmp_data_request);
void irlmp_data_indication(struct lsap_cb *self, struct sk_buff *skb)
int irlmp_udata_request(struct lsap_cb *self, struct sk_buff *userdata)
void irlmp_udata_indication(struct lsap_cb *self, struct sk_buff *skb)
int irlmp_connless_data_request(struct lsap_cb *self, struct sk_buff *userdata,
__u8 pid)
void irlmp_connless_data_indication(struct lsap_cb *self, struct sk_buff *skb)
void irlmp_status_indication(struct lap_cb *self,
LINK_STATUS link, LOCK_STATUS lock)
void irlmp_flow_indication(struct lap_cb *self, LOCAL_FLOW flow)
static const __u16 service_hint_mapping[S_END][2] = ;
__u16 irlmp_service_to_hint(int service)
EXPORT_SYMBOL(irlmp_service_to_hint);
void *irlmp_register_service(__u16 hints)
EXPORT_SYMBOL(irlmp_register_service);
int irlmp_unregister_service(void *handle)
EXPORT_SYMBOL(irlmp_unregister_service);
void *irlmp_register_client(__u16 hint_mask, DISCOVERY_CALLBACK1 disco_clb,
DISCOVERY_CALLBACK2 expir_clb, void *priv)
EXPORT_SYMBOL(irlmp_register_client);
int irlmp_update_client(void *handle, __u16 hint_mask,
DISCOVERY_CALLBACK1 disco_clb,
DISCOVERY_CALLBACK2 expir_clb, void *priv)
EXPORT_SYMBOL(irlmp_update_client);
int irlmp_unregister_client(void *handle)
EXPORT_SYMBOL(irlmp_unregister_client);
static int irlmp_slsap_inuse(__u8 slsap_sel)
static __u8 irlmp_find_free_slsap(void)
LM_REASON irlmp_convert_lap_reason( LAP_REASON lap_reason)
struct irlmp_iter_state ;
#define LSAP_START_TOKEN	((void *)1)
#define LINK_START_TOKEN	((void *)2)
static void *irlmp_seq_hb_idx(struct irlmp_iter_state *iter, loff_t *off)
static void *irlmp_seq_start(struct seq_file *seq, loff_t *pos)
static void *irlmp_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void irlmp_seq_stop(struct seq_file *seq, void *v)
static int irlmp_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations irlmp_seq_ops = ;
static int irlmp_seq_open(struct inode *inode, struct file *file)
const struct file_operations irlmp_seq_fops = ;
