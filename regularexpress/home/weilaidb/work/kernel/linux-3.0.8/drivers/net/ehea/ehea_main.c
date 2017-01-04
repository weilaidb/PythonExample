#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Christoph Raisch <raisch@de.ibm.com>");
MODULE_DESCRIPTION("IBM eServer HEA Driver");
MODULE_VERSION(DRV_VERSION);
static int msg_level = -1;
static int rq1_entries = EHEA_DEF_ENTRIES_RQ1;
static int rq2_entries = EHEA_DEF_ENTRIES_RQ2;
static int rq3_entries = EHEA_DEF_ENTRIES_RQ3;
static int sq_entries = EHEA_DEF_ENTRIES_SQ;
static int use_mcs;
static int use_lro;
static int lro_max_aggr = EHEA_LRO_MAX_AGGR;
static int num_tx_qps = EHEA_NUM_TX_QP;
static int prop_carrier_state;
module_param(msg_level, int, 0);
module_param(rq1_entries, int, 0);
module_param(rq2_entries, int, 0);
module_param(rq3_entries, int, 0);
module_param(sq_entries, int, 0);
module_param(prop_carrier_state, int, 0);
module_param(use_mcs, int, 0);
module_param(use_lro, int, 0);
module_param(lro_max_aggr, int, 0);
module_param(num_tx_qps, int, 0);
MODULE_PARM_DESC(num_tx_qps, "Number of TX-QPS");
MODULE_PARM_DESC(msg_level, "msg_level");
MODULE_PARM_DESC(prop_carrier_state, "Propagate carrier state of physical "
"port to stack. 1:yes, 0:no.  Default = 0 ");
MODULE_PARM_DESC(rq3_entries, "Number of entries for Receive Queue 3 "
"[2^x - 1], x = [6..14]. Default = "
__MODULE_STRING(EHEA_DEF_ENTRIES_RQ3) ")");
MODULE_PARM_DESC(rq2_entries, "Number of entries for Receive Queue 2 "
"[2^x - 1], x = [6..14]. Default = "
__MODULE_STRING(EHEA_DEF_ENTRIES_RQ2) ")");
MODULE_PARM_DESC(rq1_entries, "Number of entries for Receive Queue 1 "
"[2^x - 1], x = [6..14]. Default = "
__MODULE_STRING(EHEA_DEF_ENTRIES_RQ1) ")");
MODULE_PARM_DESC(sq_entries, " Number of entries for the Send Queue  "
"[2^x - 1], x = [6..14]. Default = "
__MODULE_STRING(EHEA_DEF_ENTRIES_SQ) ")");
MODULE_PARM_DESC(use_mcs, " 0:NAPI, 1:Multiple receive queues, Default = 0 ");
MODULE_PARM_DESC(lro_max_aggr, " LRO: Max packets to be aggregated. Default = "
__MODULE_STRING(EHEA_LRO_MAX_AGGR));
MODULE_PARM_DESC(use_lro, " Large Receive Offload, 1: enable, 0: disable, "
"Default = 0");
static int port_name_cnt;
static LIST_HEAD(adapter_list);
static unsigned long ehea_driver_flags;
static DEFINE_MUTEX(dlpar_mem_lock);
struct ehea_fw_handle_array ehea_fw_handles;
struct ehea_bcmc_reg_array ehea_bcmc_regs;
static int __devinit ehea_probe_adapter(struct platform_device *dev,
const struct of_device_id *id);
static int __devexit ehea_remove(struct platform_device *dev);
static struct of_device_id ehea_device_table[] = ;
MODULE_DEVICE_TABLE(of, ehea_device_table);
static struct of_platform_driver ehea_driver = ;
void ehea_dump(void *adr, int len, char *msg)
void ehea_schedule_port_reset(struct ehea_port *port)
static void ehea_update_firmware_handles(void)
static void ehea_update_bcmc_registrations(void)
static struct net_device_stats *ehea_get_stats(struct net_device *dev)
static void ehea_refill_rq1(struct ehea_port_res *pr, int index, int nr_of_wqes)
static void ehea_init_fill_rq1(struct ehea_port_res *pr, int nr_rq1a)
static int ehea_refill_rq_def(struct ehea_port_res *pr,
struct ehea_q_skb_arr *q_skba, int rq_nr,
int num_wqes, int wqe_type, int packet_size)
static int ehea_refill_rq2(struct ehea_port_res *pr, int nr_of_wqes)
static int ehea_refill_rq3(struct ehea_port_res *pr, int nr_of_wqes)
static inline int ehea_check_cqe(struct ehea_cqe *cqe, int *rq_num)
static inline void ehea_fill_skb(struct net_device *dev,
struct sk_buff *skb, struct ehea_cqe *cqe)
static inline struct sk_buff *get_skb_by_index(struct sk_buff **skb_array,
int arr_len,
struct ehea_cqe *cqe)
static inline struct sk_buff *get_skb_by_index_ll(struct sk_buff **skb_array,
int arr_len, int wqe_index)
static int ehea_treat_poll_error(struct ehea_port_res *pr, int rq,
struct ehea_cqe *cqe, int *processed_rq2,
int *processed_rq3)
static int get_skb_hdr(struct sk_buff *skb, void **iphdr,
void **tcph, u64 *hdr_flags, void *priv)
static void ehea_proc_skb(struct ehea_port_res *pr, struct ehea_cqe *cqe,
struct sk_buff *skb)
static int ehea_proc_rwqes(struct net_device *dev,
struct ehea_port_res *pr,
int budget)
#define SWQE_RESTART_CHECK 0xdeadbeaff00d0000ull
static void reset_sq_restart_flag(struct ehea_port *port)
static void check_sqs(struct ehea_port *port)
static struct ehea_cqe *ehea_proc_cqes(struct ehea_port_res *pr, int my_quota)
#define EHEA_NAPI_POLL_NUM_BEFORE_IRQ 16
#define EHEA_POLL_MAX_CQES 65535
static int ehea_poll(struct napi_struct *napi, int budget)
static void ehea_netpoll(struct net_device *dev)
static irqreturn_t ehea_recv_irq_handler(int irq, void *param)
static irqreturn_t ehea_qp_aff_irq_handler(int irq, void *param)
static struct ehea_port *ehea_get_port(struct ehea_adapter *adapter,
int logical_port)
int ehea_sense_port_attr(struct ehea_port *port)
int ehea_set_portspeed(struct ehea_port *port, u32 port_speed)
static void ehea_parse_eqe(struct ehea_adapter *adapter, u64 eqe)
static void ehea_neq_tasklet(unsigned long data)
static irqreturn_t ehea_interrupt_neq(int irq, void *param)
static int ehea_fill_port_res(struct ehea_port_res *pr)
static int ehea_reg_interrupts(struct net_device *dev)
static void ehea_free_interrupts(struct net_device *dev)
static int ehea_configure_port(struct ehea_port *port)
int ehea_gen_smrs(struct ehea_port_res *pr)
int ehea_rem_smrs(struct ehea_port_res *pr)
static int ehea_init_q_skba(struct ehea_q_skb_arr *q_skba, int max_q_entries)
static int ehea_init_port_res(struct ehea_port *port, struct ehea_port_res *pr,
struct port_res_cfg *pr_cfg, int queue_token)
static int ehea_clean_portres(struct ehea_port *port, struct ehea_port_res *pr)
static inline void write_ip_start_end(struct ehea_swqe *swqe,
const struct sk_buff *skb)
static inline void write_tcp_offset_end(struct ehea_swqe *swqe,
const struct sk_buff *skb)
static inline void write_udp_offset_end(struct ehea_swqe *swqe,
const struct sk_buff *skb)
static void write_swqe2_TSO(struct sk_buff *skb,
struct ehea_swqe *swqe, u32 lkey)
static void write_swqe2_nonTSO(struct sk_buff *skb,
struct ehea_swqe *swqe, u32 lkey)
static inline void write_swqe2_data(struct sk_buff *skb, struct net_device *dev,
struct ehea_swqe *swqe, u32 lkey)
static int ehea_broadcast_reg_helper(struct ehea_port *port, u32 hcallid)
static int ehea_set_mac_addr(struct net_device *dev, void *sa)
static void ehea_promiscuous_error(u64 hret, int enable)
static void ehea_promiscuous(struct net_device *dev, int enable)
static u64 ehea_multicast_reg_helper(struct ehea_port *port, u64 mc_mac_addr,
u32 hcallid)
static int ehea_drop_multicast_list(struct net_device *dev)
static void ehea_allmulti(struct net_device *dev, int enable)
static void ehea_add_multicast_entry(struct ehea_port *port, u8 *mc_mac_addr)
static void ehea_set_multicast_list(struct net_device *dev)
static int ehea_change_mtu(struct net_device *dev, int new_mtu)
static void ehea_xmit2(struct sk_buff *skb, struct net_device *dev,
struct ehea_swqe *swqe, u32 lkey)
static void ehea_xmit3(struct sk_buff *skb, struct net_device *dev,
struct ehea_swqe *swqe)
static inline int ehea_hash_skb(struct sk_buff *skb, int num_qps)
static int ehea_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void ehea_vlan_rx_register(struct net_device *dev,
struct vlan_group *grp)
static void ehea_vlan_rx_add_vid(struct net_device *dev, unsigned short vid)
static void ehea_vlan_rx_kill_vid(struct net_device *dev, unsigned short vid)
int ehea_activate_qp(struct ehea_adapter *adapter, struct ehea_qp *qp)
static int ehea_port_res_setup(struct ehea_port *port, int def_qps,
int add_tx_qps)
static int ehea_clean_all_portres(struct ehea_port *port)
static void ehea_remove_adapter_mr(struct ehea_adapter *adapter)
static int ehea_add_adapter_mr(struct ehea_adapter *adapter)
static int ehea_up(struct net_device *dev)
static void port_napi_disable(struct ehea_port *port)
static void port_napi_enable(struct ehea_port *port)
static int ehea_open(struct net_device *dev)
static int ehea_down(struct net_device *dev)
static int ehea_stop(struct net_device *dev)
static void ehea_purge_sq(struct ehea_qp *orig_qp)
static void ehea_flush_sq(struct ehea_port *port)
int ehea_stop_qps(struct net_device *dev)
void ehea_update_rqs(struct ehea_qp *orig_qp, struct ehea_port_res *pr)
int ehea_restart_qps(struct net_device *dev)
static void ehea_reset_port(struct work_struct *work)
static void ehea_rereg_mrs(void)
static void ehea_tx_watchdog(struct net_device *dev)
int ehea_sense_adapter_attr(struct ehea_adapter *adapter)
int ehea_get_jumboframe_status(struct ehea_port *port, int *jumbo)
static ssize_t ehea_show_port_id(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(log_port_id, S_IRUSR | S_IRGRP | S_IROTH, ehea_show_port_id,
NULL);
static void __devinit logical_port_release(struct device *dev)
static struct device *ehea_register_port(struct ehea_port *port,
struct device_node *dn)
static void ehea_unregister_port(struct ehea_port *port)
static const struct net_device_ops ehea_netdev_ops = ;
struct ehea_port *ehea_setup_single_port(struct ehea_adapter *adapter,
u32 logical_port_id,
struct device_node *dn)
static void ehea_shutdown_single_port(struct ehea_port *port)
static int ehea_setup_ports(struct ehea_adapter *adapter)
static struct device_node *ehea_get_eth_dn(struct ehea_adapter *adapter,
u32 logical_port_id)
static ssize_t ehea_probe_port(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t ehea_remove_port(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(probe_port, S_IWUSR, NULL, ehea_probe_port);
static DEVICE_ATTR(remove_port, S_IWUSR, NULL, ehea_remove_port);
int ehea_create_device_sysfs(struct platform_device *dev)
void ehea_remove_device_sysfs(struct platform_device *dev)
static int __devinit ehea_probe_adapter(struct platform_device *dev,
const struct of_device_id *id)
static int __devexit ehea_remove(struct platform_device *dev)
void ehea_crash_handler(void)
static int ehea_mem_notifier(struct notifier_block *nb,
unsigned long action, void *data)
static struct notifier_block ehea_mem_nb = ;
static int ehea_reboot_notifier(struct notifier_block *nb,
unsigned long action, void *unused)
static struct notifier_block ehea_reboot_nb = ;
static int check_module_parm(void)
static ssize_t ehea_show_capabilities(struct device_driver *drv,
char *buf)
static DRIVER_ATTR(capabilities, S_IRUSR | S_IRGRP | S_IROTH,
ehea_show_capabilities, NULL);
int __init ehea_module_init(void)
static void __exit ehea_module_exit(void)
module_init(ehea_module_init);
module_exit(ehea_module_exit);
