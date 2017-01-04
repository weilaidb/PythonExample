MODULE_AUTHOR("Open-FCoE.org");
MODULE_DESCRIPTION("FCoE");
MODULE_LICENSE("GPL v2");
static unsigned int fcoe_ddp_min;
module_param_named(ddp_min, fcoe_ddp_min, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(ddp_min, "Minimum I/O size in bytes for "	\
"Direct Data Placement (DDP).");
DEFINE_MUTEX(fcoe_config_mutex);
static struct workqueue_struct *fcoe_wq;
static DECLARE_COMPLETION(fcoe_flush_completion);
LIST_HEAD(fcoe_hostlist);
DEFINE_PER_CPU(struct fcoe_percpu_s, fcoe_percpu);
static int fcoe_reset(struct Scsi_Host *);
static int fcoe_xmit(struct fc_lport *, struct fc_frame *);
static int fcoe_rcv(struct sk_buff *, struct net_device *,
struct packet_type *, struct net_device *);
static int fcoe_percpu_receive_thread(void *);
static void fcoe_percpu_clean(struct fc_lport *);
static int fcoe_link_speed_update(struct fc_lport *);
static int fcoe_link_ok(struct fc_lport *);
static struct fc_lport *fcoe_hostlist_lookup(const struct net_device *);
static int fcoe_hostlist_add(const struct fc_lport *);
static int fcoe_device_notification(struct notifier_block *, ulong, void *);
static void fcoe_dev_setup(void);
static void fcoe_dev_cleanup(void);
static struct fcoe_interface
*fcoe_hostlist_lookup_port(const struct net_device *);
static int fcoe_fip_recv(struct sk_buff *, struct net_device *,
struct packet_type *, struct net_device *);
static void fcoe_fip_send(struct fcoe_ctlr *, struct sk_buff *);
static void fcoe_update_src_mac(struct fc_lport *, u8 *);
static u8 *fcoe_get_src_mac(struct fc_lport *);
static void fcoe_destroy_work(struct work_struct *);
static int fcoe_ddp_setup(struct fc_lport *, u16, struct scatterlist *,
unsigned int);
static int fcoe_ddp_done(struct fc_lport *, u16);
static int fcoe_cpu_callback(struct notifier_block *, unsigned long, void *);
static bool fcoe_match(struct net_device *netdev);
static int fcoe_create(struct net_device *netdev, enum fip_state fip_mode);
static int fcoe_destroy(struct net_device *netdev);
static int fcoe_enable(struct net_device *netdev);
static int fcoe_disable(struct net_device *netdev);
static struct fc_seq *fcoe_elsct_send(struct fc_lport *,
u32 did, struct fc_frame *,
unsigned int op,
void (*resp)(struct fc_seq *,
struct fc_frame *,
void *),
void *, u32 timeout);
static void fcoe_recv_frame(struct sk_buff *skb);
static void fcoe_get_lesb(struct fc_lport *, struct fc_els_lesb *);
static struct notifier_block fcoe_notifier = ;
static struct notifier_block fcoe_cpu_notifier = ;
static struct scsi_transport_template *fcoe_nport_scsi_transport;
static struct scsi_transport_template *fcoe_vport_scsi_transport;
static int fcoe_vport_destroy(struct fc_vport *);
static int fcoe_vport_create(struct fc_vport *, bool disabled);
static int fcoe_vport_disable(struct fc_vport *, bool disable);
static void fcoe_set_vport_symbolic_name(struct fc_vport *);
static void fcoe_set_port_id(struct fc_lport *, u32, struct fc_frame *);
static int fcoe_validate_vport_create(struct fc_vport *);
static struct libfc_function_template fcoe_libfc_fcn_templ = ;
struct fc_function_template fcoe_nport_fc_functions = ;
struct fc_function_template fcoe_vport_fc_functions = ;
static struct scsi_host_template fcoe_shost_template = ;
static int fcoe_interface_setup(struct fcoe_interface *fcoe,
struct net_device *netdev)
static struct fcoe_interface *fcoe_interface_create(struct net_device *netdev,
enum fip_state fip_mode)
static void fcoe_interface_release(struct kref *kref)
static inline void fcoe_interface_get(struct fcoe_interface *fcoe)
static inline void fcoe_interface_put(struct fcoe_interface *fcoe)
void fcoe_interface_cleanup(struct fcoe_interface *fcoe)
static int fcoe_fip_recv(struct sk_buff *skb, struct net_device *netdev,
struct packet_type *ptype,
struct net_device *orig_dev)
static void fcoe_fip_send(struct fcoe_ctlr *fip, struct sk_buff *skb)
static void fcoe_update_src_mac(struct fc_lport *lport, u8 *addr)
static u8 *fcoe_get_src_mac(struct fc_lport *lport)
static int fcoe_lport_config(struct fc_lport *lport)
static int fcoe_get_wwn(struct net_device *netdev, u64 *wwn, int type)
static void fcoe_netdev_features_change(struct fc_lport *lport,
struct net_device *netdev)
static int fcoe_netdev_config(struct fc_lport *lport, struct net_device *netdev)
static int fcoe_shost_config(struct fc_lport *lport, struct device *dev)
bool fcoe_oem_match(struct fc_frame *fp)
static inline int fcoe_em_config(struct fc_lport *lport)
static void fcoe_if_destroy(struct fc_lport *lport)
static int fcoe_ddp_setup(struct fc_lport *lport, u16 xid,
struct scatterlist *sgl, unsigned int sgc)
static int fcoe_ddp_done(struct fc_lport *lport, u16 xid)
static struct fc_lport *fcoe_if_create(struct fcoe_interface *fcoe,
struct device *parent, int npiv)
static int __init fcoe_if_init(void)
int __exit fcoe_if_exit(void)
static void fcoe_percpu_thread_create(unsigned int cpu)
static void fcoe_percpu_thread_destroy(unsigned int cpu)
static int fcoe_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
int fcoe_rcv(struct sk_buff *skb, struct net_device *netdev,
struct packet_type *ptype, struct net_device *olddev)
static int fcoe_alloc_paged_crc_eof(struct sk_buff *skb, int tlen)
int fcoe_xmit(struct fc_lport *lport, struct fc_frame *fp)
static void fcoe_percpu_flush_done(struct sk_buff *skb)
static inline int fcoe_filter_frames(struct fc_lport *lport,
struct fc_frame *fp)
static void fcoe_recv_frame(struct sk_buff *skb)
int fcoe_percpu_receive_thread(void *arg)
static void fcoe_dev_setup(void)
static void fcoe_dev_cleanup(void)
static int fcoe_device_notification(struct notifier_block *notifier,
ulong event, void *ptr)
static int fcoe_disable(struct net_device *netdev)
static int fcoe_enable(struct net_device *netdev)
static int fcoe_destroy(struct net_device *netdev)
static void fcoe_destroy_work(struct work_struct *work)
static bool fcoe_match(struct net_device *netdev)
static int fcoe_create(struct net_device *netdev, enum fip_state fip_mode)
int fcoe_link_speed_update(struct fc_lport *lport)
int fcoe_link_ok(struct fc_lport *lport)
void fcoe_percpu_clean(struct fc_lport *lport)
int fcoe_reset(struct Scsi_Host *shost)
static struct fcoe_interface *
fcoe_hostlist_lookup_port(const struct net_device *netdev)
static struct fc_lport *fcoe_hostlist_lookup(const struct net_device *netdev)
static int fcoe_hostlist_add(const struct fc_lport *lport)
static struct fcoe_transport fcoe_sw_transport = ;
static int __init fcoe_init(void)
module_init(fcoe_init);
static void __exit fcoe_exit(void)
module_exit(fcoe_exit);
static void fcoe_flogi_resp(struct fc_seq *seq, struct fc_frame *fp, void *arg)
static void fcoe_logo_resp(struct fc_seq *seq, struct fc_frame *fp, void *arg)
static struct fc_seq *fcoe_elsct_send(struct fc_lport *lport, u32 did,
struct fc_frame *fp, unsigned int op,
void (*resp)(struct fc_seq *,
struct fc_frame *,
void *),
void *arg, u32 timeout)
static int fcoe_vport_create(struct fc_vport *vport, bool disabled)
static int fcoe_vport_destroy(struct fc_vport *vport)
static int fcoe_vport_disable(struct fc_vport *vport, bool disable)
static void fcoe_set_vport_symbolic_name(struct fc_vport *vport)
static void fcoe_get_lesb(struct fc_lport *lport,
struct fc_els_lesb *fc_lesb)
static void fcoe_set_port_id(struct fc_lport *lport,
u32 port_id, struct fc_frame *fp)
static int fcoe_validate_vport_create(struct fc_vport *vport)
