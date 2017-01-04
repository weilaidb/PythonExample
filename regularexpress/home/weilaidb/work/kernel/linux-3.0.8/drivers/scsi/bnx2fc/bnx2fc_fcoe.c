static struct list_head adapter_list;
static u32 adapter_count;
static DEFINE_MUTEX(bnx2fc_dev_lock);
DEFINE_PER_CPU(struct bnx2fc_percpu_s, bnx2fc_percpu);
#define DRV_MODULE_NAME		"bnx2fc"
#define DRV_MODULE_VERSION	BNX2FC_VERSION
#define DRV_MODULE_RELDATE	"Mar 17, 2011"
static char version[] __devinitdata =
"Broadcom NetXtreme II FCoE Driver " DRV_MODULE_NAME \
" v" DRV_MODULE_VERSION " (" DRV_MODULE_RELDATE ")\n";
MODULE_AUTHOR("Bhanu Prakash Gollapudi <bprakash@broadcom.com>");
MODULE_DESCRIPTION("Broadcom NetXtreme II BCM57710 FCoE Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_MODULE_VERSION);
#define BNX2FC_MAX_QUEUE_DEPTH	256
#define BNX2FC_MIN_QUEUE_DEPTH	32
#define FCOE_WORD_TO_BYTE  4
static struct scsi_transport_template	*bnx2fc_transport_template;
static struct scsi_transport_template	*bnx2fc_vport_xport_template;
struct workqueue_struct *bnx2fc_wq;
struct fcoe_percpu_s bnx2fc_global;
DEFINE_SPINLOCK(bnx2fc_global_lock);
static struct cnic_ulp_ops bnx2fc_cnic_cb;
static struct libfc_function_template bnx2fc_libfc_fcn_templ;
static struct scsi_host_template bnx2fc_shost_template;
static struct fc_function_template bnx2fc_transport_function;
static struct fc_function_template bnx2fc_vport_xport_function;
static int bnx2fc_create(struct net_device *netdev, enum fip_state fip_mode);
static int bnx2fc_destroy(struct net_device *net_device);
static int bnx2fc_enable(struct net_device *netdev);
static int bnx2fc_disable(struct net_device *netdev);
static void bnx2fc_recv_frame(struct sk_buff *skb);
static void bnx2fc_start_disc(struct bnx2fc_hba *hba);
static int bnx2fc_shost_config(struct fc_lport *lport, struct device *dev);
static int bnx2fc_net_config(struct fc_lport *lp);
static int bnx2fc_lport_config(struct fc_lport *lport);
static int bnx2fc_em_config(struct fc_lport *lport);
static int bnx2fc_bind_adapter_devices(struct bnx2fc_hba *hba);
static void bnx2fc_unbind_adapter_devices(struct bnx2fc_hba *hba);
static int bnx2fc_bind_pcidev(struct bnx2fc_hba *hba);
static void bnx2fc_unbind_pcidev(struct bnx2fc_hba *hba);
static struct fc_lport *bnx2fc_if_create(struct bnx2fc_hba *hba,
struct device *parent, int npiv);
static void bnx2fc_destroy_work(struct work_struct *work);
static struct bnx2fc_hba *bnx2fc_hba_lookup(struct net_device *phys_dev);
static struct bnx2fc_hba *bnx2fc_find_hba_for_cnic(struct cnic_dev *cnic);
static int bnx2fc_fw_init(struct bnx2fc_hba *hba);
static void bnx2fc_fw_destroy(struct bnx2fc_hba *hba);
static void bnx2fc_port_shutdown(struct fc_lport *lport);
static void bnx2fc_stop(struct bnx2fc_hba *hba);
static int __init bnx2fc_mod_init(void);
static void __exit bnx2fc_mod_exit(void);
unsigned int bnx2fc_debug_level;
module_param_named(debug_logging, bnx2fc_debug_level, int, S_IRUGO|S_IWUSR);
static int bnx2fc_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu);
static struct notifier_block bnx2fc_cpu_notifier = ;
static void bnx2fc_clean_rx_queue(struct fc_lport *lp)
int bnx2fc_get_paged_crc_eof(struct sk_buff *skb, int tlen)
static void bnx2fc_abort_io(struct fc_lport *lport)
static void bnx2fc_cleanup(struct fc_lport *lport)
static int bnx2fc_xmit_l2_frame(struct bnx2fc_rport *tgt,
struct fc_frame *fp)
static int bnx2fc_xmit(struct fc_lport *lport, struct fc_frame *fp)
static int bnx2fc_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *ptype, struct net_device *olddev)
static int bnx2fc_l2_rcv_thread(void *arg)
static void bnx2fc_recv_frame(struct sk_buff *skb)
int bnx2fc_percpu_io_thread(void *arg)
static struct fc_host_statistics *bnx2fc_get_host_stats(struct Scsi_Host *shost)
static int bnx2fc_shost_config(struct fc_lport *lport, struct device *dev)
static void bnx2fc_link_speed_update(struct fc_lport *lport)
static int bnx2fc_link_ok(struct fc_lport *lport)
void bnx2fc_get_link_state(struct bnx2fc_hba *hba)
static int bnx2fc_net_config(struct fc_lport *lport)
static void bnx2fc_destroy_timer(unsigned long data)
static void bnx2fc_indicate_netevent(void *context, unsigned long event)
static int bnx2fc_libfc_config(struct fc_lport *lport)
static int bnx2fc_em_config(struct fc_lport *lport)
static int bnx2fc_lport_config(struct fc_lport *lport)
static int bnx2fc_fip_recv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *ptype,
struct net_device *orig_dev)
static void bnx2fc_update_src_mac(struct fc_lport *lport, u8 *addr)
static u8 *bnx2fc_get_src_mac(struct fc_lport *lport)
static void bnx2fc_fip_send(struct fcoe_ctlr *fip, struct sk_buff *skb)
static int bnx2fc_vport_create(struct fc_vport *vport, bool disabled)
static int bnx2fc_vport_destroy(struct fc_vport *vport)
static int bnx2fc_vport_disable(struct fc_vport *vport, bool disable)
static int bnx2fc_netdev_setup(struct bnx2fc_hba *hba)
static int bnx2fc_attach_transport(void)
static void bnx2fc_release_transport(void)
static void bnx2fc_interface_release(struct kref *kref)
static inline void bnx2fc_interface_get(struct bnx2fc_hba *hba)
static inline void bnx2fc_interface_put(struct bnx2fc_hba *hba)
static void bnx2fc_interface_destroy(struct bnx2fc_hba *hba)
static struct bnx2fc_hba *bnx2fc_interface_create(struct cnic_dev *cnic)
static int bnx2fc_interface_setup(struct bnx2fc_hba *hba,
enum fip_state fip_mode)
static struct fc_lport *bnx2fc_if_create(struct bnx2fc_hba *hba,
struct device *parent, int npiv)
static void bnx2fc_netdev_cleanup(struct bnx2fc_hba *hba)
static void bnx2fc_if_destroy(struct fc_lport *lport)
static int bnx2fc_destroy(struct net_device *netdev)
static void bnx2fc_destroy_work(struct work_struct *work)
static void bnx2fc_unbind_adapter_devices(struct bnx2fc_hba *hba)
static int bnx2fc_bind_adapter_devices(struct bnx2fc_hba *hba)
static int bnx2fc_bind_pcidev(struct bnx2fc_hba *hba)
static void bnx2fc_unbind_pcidev(struct bnx2fc_hba *hba)
static void bnx2fc_ulp_start(void *handle)
static void bnx2fc_port_shutdown(struct fc_lport *lport)
static void bnx2fc_stop(struct bnx2fc_hba *hba)
static int bnx2fc_fw_init(struct bnx2fc_hba *hba)
static void bnx2fc_fw_destroy(struct bnx2fc_hba *hba)
static void bnx2fc_ulp_stop(void *handle)
static void bnx2fc_start_disc(struct bnx2fc_hba *hba)
static void bnx2fc_ulp_init(struct cnic_dev *dev)
static int bnx2fc_disable(struct net_device *netdev)
static int bnx2fc_enable(struct net_device *netdev)
static int bnx2fc_create(struct net_device *netdev, enum fip_state fip_mode)
static struct bnx2fc_hba *bnx2fc_find_hba_for_cnic(struct cnic_dev *cnic)
static struct bnx2fc_hba *bnx2fc_hba_lookup(struct net_device *phys_dev)
static void bnx2fc_ulp_exit(struct cnic_dev *dev)
static int bnx2fc_fcoe_reset(struct Scsi_Host *shost)
static bool bnx2fc_match(struct net_device *netdev)
static struct fcoe_transport bnx2fc_transport = ;
static void bnx2fc_percpu_thread_create(unsigned int cpu)
static void bnx2fc_percpu_thread_destroy(unsigned int cpu)
static int bnx2fc_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static int __init bnx2fc_mod_init(void)
static void __exit bnx2fc_mod_exit(void)
module_init(bnx2fc_mod_init);
module_exit(bnx2fc_mod_exit);
static struct fc_function_template bnx2fc_transport_function = ;
static struct fc_function_template bnx2fc_vport_xport_function = ;
static struct scsi_host_template bnx2fc_shost_template = ;
static struct libfc_function_template bnx2fc_libfc_fcn_templ = ;
static struct cnic_ulp_ops bnx2fc_cnic_cb = ;
