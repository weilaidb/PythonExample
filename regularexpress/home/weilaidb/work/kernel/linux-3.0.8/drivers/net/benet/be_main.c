MODULE_VERSION(DRV_VER);
MODULE_DEVICE_TABLE(pci, be_dev_ids);
MODULE_DESCRIPTION(DRV_DESC " " DRV_VER);
MODULE_AUTHOR("ServerEngines Corporation");
MODULE_LICENSE("GPL");
static ushort rx_frag_size = 2048;
static unsigned int num_vfs;
module_param(rx_frag_size, ushort, S_IRUGO);
module_param(num_vfs, uint, S_IRUGO);
MODULE_PARM_DESC(rx_frag_size, "Size of a fragment that holds rcvd data.");
MODULE_PARM_DESC(num_vfs, "Number of PCI VFs to initialize");
static bool multi_rxq = true;
module_param(multi_rxq, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(multi_rxq, "Multi Rx Queue support. Enabled by default");
static DEFINE_PCI_DEVICE_TABLE(be_dev_ids) = ;
MODULE_DEVICE_TABLE(pci, be_dev_ids);
static char *ue_status_low_desc[] = ;
static char *ue_status_hi_desc[] = ;
static void be_queue_free(struct be_adapter *adapter, struct be_queue_info *q)
static int be_queue_alloc(struct be_adapter *adapter, struct be_queue_info *q,
u16 len, u16 entry_size)
static void be_intr_set(struct be_adapter *adapter, bool enable)
static void be_rxq_notify(struct be_adapter *adapter, u16 qid, u16 posted)
static void be_txq_notify(struct be_adapter *adapter, u16 qid, u16 posted)
static void be_eq_notify(struct be_adapter *adapter, u16 qid,
bool arm, bool clear_int, u16 num_popped)
void be_cq_notify(struct be_adapter *adapter, u16 qid, bool arm, u16 num_popped)
static int be_mac_addr_set(struct net_device *netdev, void *p)
static void populate_be2_stats(struct be_adapter *adapter)
static void populate_be3_stats(struct be_adapter *adapter)
static void populate_lancer_stats(struct be_adapter *adapter)
void be_parse_stats(struct be_adapter *adapter)
void netdev_stats_update(struct be_adapter *adapter)
void be_link_status_update(struct be_adapter *adapter, bool link_up)
static void be_rx_eqd_update(struct be_adapter *adapter, struct be_rx_obj *rxo)
static u32 be_calc_rate(u64 bytes, unsigned long ticks)
static void be_tx_rate_update(struct be_adapter *adapter)
static void be_tx_stats_update(struct be_adapter *adapter,
u32 wrb_cnt, u32 copied, u32 gso_segs, bool stopped)
static u32 wrb_cnt_for_skb(struct be_adapter *adapter, struct sk_buff *skb,
bool *dummy)
static inline void wrb_fill(struct be_eth_wrb *wrb, u64 addr, int len)
static void wrb_fill_hdr(struct be_adapter *adapter, struct be_eth_hdr_wrb *hdr,
struct sk_buff *skb, u32 wrb_cnt, u32 len)
static void unmap_tx_frag(struct device *dev, struct be_eth_wrb *wrb,
bool unmap_single)
static int make_tx_wrbs(struct be_adapter *adapter,
struct sk_buff *skb, u32 wrb_cnt, bool dummy_wrb)
static netdev_tx_t be_xmit(struct sk_buff *skb,
struct net_device *netdev)
static int be_change_mtu(struct net_device *netdev, int new_mtu)
static int be_vid_config(struct be_adapter *adapter, bool vf, u32 vf_num)
static void be_vlan_register(struct net_device *netdev, struct vlan_group *grp)
static void be_vlan_add_vid(struct net_device *netdev, u16 vid)
static void be_vlan_rem_vid(struct net_device *netdev, u16 vid)
static void be_set_multicast_list(struct net_device *netdev)
static int be_set_vf_mac(struct net_device *netdev, int vf, u8 *mac)
static int be_get_vf_config(struct net_device *netdev, int vf,
struct ifla_vf_info *vi)
static int be_set_vf_vlan(struct net_device *netdev,
int vf, u16 vlan, u8 qos)
static int be_set_vf_tx_rate(struct net_device *netdev,
int vf, int rate)
static void be_rx_rate_update(struct be_rx_obj *rxo)
static void be_rx_stats_update(struct be_rx_obj *rxo,
struct be_rx_compl_info *rxcp)
static inline bool csum_passed(struct be_rx_compl_info *rxcp)
static struct be_rx_page_info *
get_rx_page_info(struct be_adapter *adapter,
struct be_rx_obj *rxo,
u16 frag_idx)
static void be_rx_compl_discard(struct be_adapter *adapter,
struct be_rx_obj *rxo,
struct be_rx_compl_info *rxcp)
static void skb_fill_rx_data(struct be_adapter *adapter, struct be_rx_obj *rxo,
struct sk_buff *skb, struct be_rx_compl_info *rxcp)
static void be_rx_compl_process(struct be_adapter *adapter,
struct be_rx_obj *rxo,
struct be_rx_compl_info *rxcp)
static void be_rx_compl_process_gro(struct be_adapter *adapter,
struct be_rx_obj *rxo,
struct be_rx_compl_info *rxcp)
static void be_parse_rx_compl_v1(struct be_adapter *adapter,
struct be_eth_rx_compl *compl,
struct be_rx_compl_info *rxcp)
static void be_parse_rx_compl_v0(struct be_adapter *adapter,
struct be_eth_rx_compl *compl,
struct be_rx_compl_info *rxcp)
static struct be_rx_compl_info *be_rx_compl_get(struct be_rx_obj *rxo)
static inline struct page *be_alloc_pages(u32 size, gfp_t gfp)
static void be_post_rx_frags(struct be_rx_obj *rxo, gfp_t gfp)
static struct be_eth_tx_compl *be_tx_compl_get(struct be_queue_info *tx_cq)
static u16 be_tx_compl_process(struct be_adapter *adapter, u16 last_index)
static inline struct be_eq_entry *event_get(struct be_eq_obj *eq_obj)
static int event_handle(struct be_adapter *adapter,
struct be_eq_obj *eq_obj)
static void be_eq_clean(struct be_adapter *adapter,
struct be_eq_obj *eq_obj)
static void be_rx_q_clean(struct be_adapter *adapter, struct be_rx_obj *rxo)
static void be_tx_compl_clean(struct be_adapter *adapter)
static void be_mcc_queues_destroy(struct be_adapter *adapter)
static int be_mcc_queues_create(struct be_adapter *adapter)
static void be_tx_queues_destroy(struct be_adapter *adapter)
static int be_tx_queues_create(struct be_adapter *adapter)
static void be_rx_queues_destroy(struct be_adapter *adapter)
static u32 be_num_rxqs_want(struct be_adapter *adapter)
static int be_rx_queues_create(struct be_adapter *adapter)
static bool event_peek(struct be_eq_obj *eq_obj)
static irqreturn_t be_intx(int irq, void *dev)
static irqreturn_t be_msix_rx(int irq, void *dev)
static irqreturn_t be_msix_tx_mcc(int irq, void *dev)
static inline bool do_gro(struct be_rx_compl_info *rxcp)
static int be_poll_rx(struct napi_struct *napi, int budget)
static int be_poll_tx_mcc(struct napi_struct *napi, int budget)
void be_detect_dump_ue(struct be_adapter *adapter)
static void be_worker(struct work_struct *work)
static void be_msix_disable(struct be_adapter *adapter)
static void be_msix_enable(struct be_adapter *adapter)
static void be_sriov_enable(struct be_adapter *adapter)
static void be_sriov_disable(struct be_adapter *adapter)
static inline int be_msix_vec_get(struct be_adapter *adapter,
struct be_eq_obj *eq_obj)
static int be_request_irq(struct be_adapter *adapter,
struct be_eq_obj *eq_obj,
void *handler, char *desc, void *context)
static void be_free_irq(struct be_adapter *adapter, struct be_eq_obj *eq_obj,
void *context)
static int be_msix_register(struct be_adapter *adapter)
static int be_irq_register(struct be_adapter *adapter)
static void be_irq_unregister(struct be_adapter *adapter)
static int be_close(struct net_device *netdev)
static int be_open(struct net_device *netdev)
static int be_setup_wol(struct be_adapter *adapter, bool enable)
static inline int be_vf_eth_addr_config(struct be_adapter *adapter)
static inline void be_vf_eth_addr_rem(struct be_adapter *adapter)
static int be_setup(struct be_adapter *adapter)
static int be_clear(struct be_adapter *adapter)
#define FW_FILE_HDR_SIGN 	"ServerEngines Corp. "
static bool be_flash_redboot(struct be_adapter *adapter,
const u8 *p, u32 img_start, int image_size,
int hdr_size)
static int be_flash_data(struct be_adapter *adapter,
const struct firmware *fw,
struct be_dma_mem *flash_cmd, int num_of_images)
static int get_ufigen_type(struct flash_file_hdr_g2 *fhdr)
static int lancer_fw_download(struct be_adapter *adapter,
const struct firmware *fw)
static int be_fw_download(struct be_adapter *adapter, const struct firmware* fw)
int be_load_fw(struct be_adapter *adapter, u8 *fw_file)
static struct net_device_ops be_netdev_ops = ;
static void be_netdev_init(struct net_device *netdev)
static void be_unmap_pci_bars(struct be_adapter *adapter)
static int be_map_pci_bars(struct be_adapter *adapter)
static void be_ctrl_cleanup(struct be_adapter *adapter)
static int be_ctrl_init(struct be_adapter *adapter)
static void be_stats_cleanup(struct be_adapter *adapter)
static int be_stats_init(struct be_adapter *adapter)
static void __devexit be_remove(struct pci_dev *pdev)
static int be_get_config(struct be_adapter *adapter)
static int be_dev_family_check(struct be_adapter *adapter)
static int lancer_wait_ready(struct be_adapter *adapter)
static int lancer_test_and_set_rdy_state(struct be_adapter *adapter)
static int __devinit be_probe(struct pci_dev *pdev,
const struct pci_device_id *pdev_id)
static int be_suspend(struct pci_dev *pdev, pm_message_t state)
static int be_resume(struct pci_dev *pdev)
static void be_shutdown(struct pci_dev *pdev)
static pci_ers_result_t be_eeh_err_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t be_eeh_reset(struct pci_dev *pdev)
static void be_eeh_resume(struct pci_dev *pdev)
static struct pci_error_handlers be_eeh_handlers = ;
static struct pci_driver be_driver = ;
static int __init be_init_module(void)
module_init(be_init_module);
static void __exit be_exit_module(void)
module_exit(be_exit_module);
