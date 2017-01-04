#define KMSG_COMPONENT "qeth"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
struct qeth_dbf_info qeth_dbf[QETH_DBF_INFOS] = ;
EXPORT_SYMBOL_GPL(qeth_dbf);
struct qeth_card_list_struct qeth_core_card_list;
EXPORT_SYMBOL_GPL(qeth_core_card_list);
struct kmem_cache *qeth_core_header_cache;
EXPORT_SYMBOL_GPL(qeth_core_header_cache);
static struct device *qeth_core_root_dev;
static unsigned int known_devices[][6] = QETH_MODELLIST_ARRAY;
static struct lock_class_key qdio_out_skb_queue_key;
static void qeth_send_control_data_cb(struct qeth_channel *,
struct qeth_cmd_buffer *);
static int qeth_issue_next_read(struct qeth_card *);
static struct qeth_cmd_buffer *qeth_get_buffer(struct qeth_channel *);
static void qeth_setup_ccw(struct qeth_channel *, unsigned char *, __u32);
static void qeth_free_buffer_pool(struct qeth_card *);
static int qeth_qdio_establish(struct qeth_card *);
static inline const char *qeth_get_cardname(struct qeth_card *card)
const char *qeth_get_cardname_short(struct qeth_card *card)
void qeth_set_allowed_threads(struct qeth_card *card, unsigned long threads,
int clear_start_mask)
EXPORT_SYMBOL_GPL(qeth_set_allowed_threads);
int qeth_threads_running(struct qeth_card *card, unsigned long threads)
EXPORT_SYMBOL_GPL(qeth_threads_running);
int qeth_wait_for_threads(struct qeth_card *card, unsigned long threads)
EXPORT_SYMBOL_GPL(qeth_wait_for_threads);
void qeth_clear_working_pool_list(struct qeth_card *card)
EXPORT_SYMBOL_GPL(qeth_clear_working_pool_list);
static int qeth_alloc_buffer_pool(struct qeth_card *card)
int qeth_realloc_buffer_pool(struct qeth_card *card, int bufcnt)
EXPORT_SYMBOL_GPL(qeth_realloc_buffer_pool);
static int qeth_issue_next_read(struct qeth_card *card)
static struct qeth_reply *qeth_alloc_reply(struct qeth_card *card)
static void qeth_get_reply(struct qeth_reply *reply)
static void qeth_put_reply(struct qeth_reply *reply)
static void qeth_issue_ipa_msg(struct qeth_ipa_cmd *cmd, int rc,
struct qeth_card *card)
static struct qeth_ipa_cmd *qeth_check_ipa_data(struct qeth_card *card,
struct qeth_cmd_buffer *iob)
void qeth_clear_ipacmd_list(struct qeth_card *card)
EXPORT_SYMBOL_GPL(qeth_clear_ipacmd_list);
static int qeth_check_idx_response(struct qeth_card *card,
unsigned char *buffer)
static void qeth_setup_ccw(struct qeth_channel *channel, unsigned char *iob,
__u32 len)
static struct qeth_cmd_buffer *__qeth_get_buffer(struct qeth_channel *channel)
void qeth_release_buffer(struct qeth_channel *channel,
struct qeth_cmd_buffer *iob)
EXPORT_SYMBOL_GPL(qeth_release_buffer);
static struct qeth_cmd_buffer *qeth_get_buffer(struct qeth_channel *channel)
struct qeth_cmd_buffer *qeth_wait_for_buffer(struct qeth_channel *channel)
EXPORT_SYMBOL_GPL(qeth_wait_for_buffer);
void qeth_clear_cmd_buffers(struct qeth_channel *channel)
EXPORT_SYMBOL_GPL(qeth_clear_cmd_buffers);
static void qeth_send_control_data_cb(struct qeth_channel *channel,
struct qeth_cmd_buffer *iob)
static int qeth_setup_channel(struct qeth_channel *channel)
static int qeth_set_thread_start_bit(struct qeth_card *card,
unsigned long thread)
void qeth_clear_thread_start_bit(struct qeth_card *card, unsigned long thread)
EXPORT_SYMBOL_GPL(qeth_clear_thread_start_bit);
void qeth_clear_thread_running_bit(struct qeth_card *card, unsigned long thread)
EXPORT_SYMBOL_GPL(qeth_clear_thread_running_bit);
static int __qeth_do_run_thread(struct qeth_card *card, unsigned long thread)
int qeth_do_run_thread(struct qeth_card *card, unsigned long thread)
EXPORT_SYMBOL_GPL(qeth_do_run_thread);
void qeth_schedule_recovery(struct qeth_card *card)
EXPORT_SYMBOL_GPL(qeth_schedule_recovery);
static int qeth_get_problem(struct ccw_device *cdev, struct irb *irb)
static long __qeth_check_irb_error(struct ccw_device *cdev,
unsigned long intparm, struct irb *irb)
static void qeth_irq(struct ccw_device *cdev, unsigned long intparm,
struct irb *irb)
static void qeth_clear_output_buffer(struct qeth_qdio_out_q *queue,
struct qeth_qdio_out_buffer *buf)
void qeth_clear_qdio_buffers(struct qeth_card *card)
EXPORT_SYMBOL_GPL(qeth_clear_qdio_buffers);
static void qeth_free_buffer_pool(struct qeth_card *card)
static void qeth_free_qdio_buffers(struct qeth_card *card)
static void qeth_clean_channel(struct qeth_channel *channel)
static void qeth_get_channel_path_desc(struct qeth_card *card)
static void qeth_init_qdio_info(struct qeth_card *card)
static void qeth_set_intial_options(struct qeth_card *card)
static int qeth_do_start_thread(struct qeth_card *card, unsigned long thread)
static void qeth_start_kernel_thread(struct work_struct *work)
static int qeth_setup_card(struct qeth_card *card)
static void qeth_core_sl_print(struct seq_file *m, struct service_level *slr)
static struct qeth_card *qeth_alloc_card(void)
static int qeth_determine_card_type(struct qeth_card *card)
static int qeth_clear_channel(struct qeth_channel *channel)
static int qeth_halt_channel(struct qeth_channel *channel)
static int qeth_halt_channels(struct qeth_card *card)
static int qeth_clear_channels(struct qeth_card *card)
static int qeth_clear_halt_card(struct qeth_card *card, int halt)
int qeth_qdio_clear_card(struct qeth_card *card, int use_halt)
EXPORT_SYMBOL_GPL(qeth_qdio_clear_card);
static int qeth_read_conf_data(struct qeth_card *card, void **buffer,
int *length)
static void qeth_configure_unitaddr(struct qeth_card *card, char *prcd)
static void qeth_configure_blkt_default(struct qeth_card *card, char *prcd)
static void qeth_init_tokens(struct qeth_card *card)
static void qeth_init_func_level(struct qeth_card *card)
static int qeth_idx_activate_get_answer(struct qeth_channel *channel,
void (*idx_reply_cb)(struct qeth_channel *,
struct qeth_cmd_buffer *))
static int qeth_idx_activate_channel(struct qeth_channel *channel,
void (*idx_reply_cb)(struct qeth_channel *,
struct qeth_cmd_buffer *))
static int qeth_peer_func_level(int level)
static void qeth_idx_write_cb(struct qeth_channel *channel,
struct qeth_cmd_buffer *iob)
static void qeth_idx_read_cb(struct qeth_channel *channel,
struct qeth_cmd_buffer *iob)
void qeth_prepare_control_data(struct qeth_card *card, int len,
struct qeth_cmd_buffer *iob)
EXPORT_SYMBOL_GPL(qeth_prepare_control_data);
int qeth_send_control_data(struct qeth_card *card, int len,
struct qeth_cmd_buffer *iob,
int (*reply_cb)(struct qeth_card *, struct qeth_reply *,
unsigned long),
void *reply_param)
EXPORT_SYMBOL_GPL(qeth_send_control_data);
static int qeth_cm_enable_cb(struct qeth_card *card, struct qeth_reply *reply,
unsigned long data)
static int qeth_cm_enable(struct qeth_card *card)
static int qeth_cm_setup_cb(struct qeth_card *card, struct qeth_reply *reply,
unsigned long data)
static int qeth_cm_setup(struct qeth_card *card)
static inline int qeth_get_initial_mtu_for_card(struct qeth_card *card)
static inline int qeth_get_mtu_outof_framesize(int framesize)
static inline int qeth_mtu_is_valid(struct qeth_card *card, int mtu)
static int qeth_ulp_enable_cb(struct qeth_card *card, struct qeth_reply *reply,
unsigned long data)
static int qeth_ulp_enable(struct qeth_card *card)
static int qeth_ulp_setup_cb(struct qeth_card *card, struct qeth_reply *reply,
unsigned long data)
static int qeth_ulp_setup(struct qeth_card *card)
static int qeth_alloc_qdio_buffers(struct qeth_card *card)
static void qeth_create_qib_param_field(struct qeth_card *card,
char *param_field)
static void qeth_create_qib_param_field_blkt(struct qeth_card *card,
char *param_field)
static int qeth_qdio_activate(struct qeth_card *card)
static int qeth_dm_act(struct qeth_card *card)
static int qeth_mpc_initialize(struct qeth_card *card)
static void qeth_print_status_with_portname(struct qeth_card *card)
static void qeth_print_status_no_portname(struct qeth_card *card)
void qeth_print_status_message(struct qeth_card *card)
EXPORT_SYMBOL_GPL(qeth_print_status_message);
static void qeth_initialize_working_pool_list(struct qeth_card *card)
static inline struct qeth_buffer_pool_entry *qeth_find_free_buffer_pool_entry(
struct qeth_card *card)
static int qeth_init_input_buffer(struct qeth_card *card,
struct qeth_qdio_buffer *buf)
int qeth_init_qdio_queues(struct qeth_card *card)
EXPORT_SYMBOL_GPL(qeth_init_qdio_queues);
static inline __u8 qeth_get_ipa_adp_type(enum qeth_link_types link_type)
static void qeth_fill_ipacmd_header(struct qeth_card *card,
struct qeth_ipa_cmd *cmd, __u8 command,
enum qeth_prot_versions prot)
struct qeth_cmd_buffer *qeth_get_ipacmd_buffer(struct qeth_card *card,
enum qeth_ipa_cmds ipacmd, enum qeth_prot_versions prot)
EXPORT_SYMBOL_GPL(qeth_get_ipacmd_buffer);
void qeth_prepare_ipa_cmd(struct qeth_card *card, struct qeth_cmd_buffer *iob,
char prot_type)
EXPORT_SYMBOL_GPL(qeth_prepare_ipa_cmd);
int qeth_send_ipa_cmd(struct qeth_card *card, struct qeth_cmd_buffer *iob,
int (*reply_cb)(struct qeth_card *, struct qeth_reply*,
unsigned long),
void *reply_param)
EXPORT_SYMBOL_GPL(qeth_send_ipa_cmd);
int qeth_send_startlan(struct qeth_card *card)
EXPORT_SYMBOL_GPL(qeth_send_startlan);
int qeth_default_setadapterparms_cb(struct qeth_card *card,
struct qeth_reply *reply, unsigned long data)
EXPORT_SYMBOL_GPL(qeth_default_setadapterparms_cb);
static int qeth_query_setadapterparms_cb(struct qeth_card *card,
struct qeth_reply *reply, unsigned long data)
struct qeth_cmd_buffer *qeth_get_adapter_cmd(struct qeth_card *card,
__u32 command, __u32 cmdlen)
EXPORT_SYMBOL_GPL(qeth_get_adapter_cmd);
int qeth_query_setadapterparms(struct qeth_card *card)
EXPORT_SYMBOL_GPL(qeth_query_setadapterparms);
static int qeth_query_ipassists_cb(struct qeth_card *card,
struct qeth_reply *reply, unsigned long data)
int qeth_query_ipassists(struct qeth_card *card, enum qeth_prot_versions prot)
EXPORT_SYMBOL_GPL(qeth_query_ipassists);
static int qeth_query_setdiagass_cb(struct qeth_card *card,
struct qeth_reply *reply, unsigned long data)
static int qeth_query_setdiagass(struct qeth_card *card)
static void qeth_get_trap_id(struct qeth_card *card, struct qeth_trap_id *tid)
static int qeth_hw_trap_cb(struct qeth_card *card,
struct qeth_reply *reply, unsigned long data)
int qeth_hw_trap(struct qeth_card *card, enum qeth_diags_trap_action action)
EXPORT_SYMBOL_GPL(qeth_hw_trap);
int qeth_check_qdio_errors(struct qeth_card *card, struct qdio_buffer *buf,
unsigned int qdio_error, const char *dbftext)
EXPORT_SYMBOL_GPL(qeth_check_qdio_errors);
void qeth_queue_input_buffer(struct qeth_card *card, int index)
EXPORT_SYMBOL_GPL(qeth_queue_input_buffer);
static int qeth_handle_send_error(struct qeth_card *card,
struct qeth_qdio_out_buffer *buffer, unsigned int qdio_err)
static void qeth_switch_to_packing_if_needed(struct qeth_qdio_out_q *queue)
static int qeth_switch_to_nonpacking_if_needed(struct qeth_qdio_out_q *queue)
static int qeth_flush_buffers_on_no_pci(struct qeth_qdio_out_q *queue)
static void qeth_flush_buffers(struct qeth_qdio_out_q *queue, int index,
int count)
static void qeth_check_outbound_queue(struct qeth_qdio_out_q *queue)
void qeth_qdio_start_poll(struct ccw_device *ccwdev, int queue,
unsigned long card_ptr)
EXPORT_SYMBOL_GPL(qeth_qdio_start_poll);
void qeth_qdio_input_handler(struct ccw_device *ccwdev, unsigned int qdio_err,
unsigned int queue, int first_element, int count,
unsigned long card_ptr)
EXPORT_SYMBOL_GPL(qeth_qdio_input_handler);
void qeth_qdio_output_handler(struct ccw_device *ccwdev,
unsigned int qdio_error, int __queue, int first_element,
int count, unsigned long card_ptr)
EXPORT_SYMBOL_GPL(qeth_qdio_output_handler);
int qeth_get_priority_queue(struct qeth_card *card, struct sk_buff *skb,
int ipv, int cast_type)
EXPORT_SYMBOL_GPL(qeth_get_priority_queue);
int qeth_get_elements_no(struct qeth_card *card, void *hdr,
struct sk_buff *skb, int elems)
EXPORT_SYMBOL_GPL(qeth_get_elements_no);
int qeth_hdr_chk_and_bounce(struct sk_buff *skb, int len)
EXPORT_SYMBOL_GPL(qeth_hdr_chk_and_bounce);
static inline void __qeth_fill_buffer(struct sk_buff *skb,
struct qdio_buffer *buffer, int is_tso, int *next_element_to_fill,
int offset)
static inline int qeth_fill_buffer(struct qeth_qdio_out_q *queue,
struct qeth_qdio_out_buffer *buf, struct sk_buff *skb,
struct qeth_hdr *hdr, int offset, int hd_len)
int qeth_do_send_packet_fast(struct qeth_card *card,
struct qeth_qdio_out_q *queue, struct sk_buff *skb,
struct qeth_hdr *hdr, int elements_needed,
int offset, int hd_len)
EXPORT_SYMBOL_GPL(qeth_do_send_packet_fast);
int qeth_do_send_packet(struct qeth_card *card, struct qeth_qdio_out_q *queue,
struct sk_buff *skb, struct qeth_hdr *hdr,
int elements_needed)
EXPORT_SYMBOL_GPL(qeth_do_send_packet);
static int qeth_setadp_promisc_mode_cb(struct qeth_card *card,
struct qeth_reply *reply, unsigned long data)
void qeth_setadp_promisc_mode(struct qeth_card *card)
EXPORT_SYMBOL_GPL(qeth_setadp_promisc_mode);
int qeth_change_mtu(struct net_device *dev, int new_mtu)
EXPORT_SYMBOL_GPL(qeth_change_mtu);
struct net_device_stats *qeth_get_stats(struct net_device *dev)
EXPORT_SYMBOL_GPL(qeth_get_stats);
static int qeth_setadpparms_change_macaddr_cb(struct qeth_card *card,
struct qeth_reply *reply, unsigned long data)
int qeth_setadpparms_change_macaddr(struct qeth_card *card)
EXPORT_SYMBOL_GPL(qeth_setadpparms_change_macaddr);
static int qeth_setadpparms_set_access_ctrl_cb(struct qeth_card *card,
struct qeth_reply *reply, unsigned long data)
static int qeth_setadpparms_set_access_ctrl(struct qeth_card *card,
enum qeth_ipa_isolation_modes isolation)
int qeth_set_access_ctrl_online(struct qeth_card *card)
EXPORT_SYMBOL_GPL(qeth_set_access_ctrl_online);
void qeth_tx_timeout(struct net_device *dev)
EXPORT_SYMBOL_GPL(qeth_tx_timeout);
int qeth_mdio_read(struct net_device *dev, int phy_id, int regnum)
EXPORT_SYMBOL_GPL(qeth_mdio_read);
static int qeth_send_ipa_snmp_cmd(struct qeth_card *card,
struct qeth_cmd_buffer *iob, int len,
int (*reply_cb)(struct qeth_card *, struct qeth_reply *,
unsigned long),
void *reply_param)
static int qeth_snmp_command_cb(struct qeth_card *card,
struct qeth_reply *reply, unsigned long sdata)
int qeth_snmp_command(struct qeth_card *card, char __user *udata)
EXPORT_SYMBOL_GPL(qeth_snmp_command);
static inline int qeth_get_qdio_q_format(struct qeth_card *card)
static void qeth_determine_capabilities(struct qeth_card *card)
static int qeth_qdio_establish(struct qeth_card *card)
static void qeth_core_free_card(struct qeth_card *card)
static struct ccw_device_id qeth_ids[] = ;
MODULE_DEVICE_TABLE(ccw, qeth_ids);
static struct ccw_driver qeth_ccw_driver = ;
static int qeth_core_driver_group(const char *buf, struct device *root_dev,
unsigned long driver_id)
int qeth_core_hardsetup_card(struct qeth_card *card)
EXPORT_SYMBOL_GPL(qeth_core_hardsetup_card);
static inline int qeth_create_skb_frag(struct qdio_buffer_element *element,
struct sk_buff **pskb, int offset, int *pfrag, int data_len)
struct sk_buff *qeth_core_get_next_skb(struct qeth_card *card,
struct qdio_buffer *buffer,
struct qdio_buffer_element **__element, int *__offset,
struct qeth_hdr **hdr)
EXPORT_SYMBOL_GPL(qeth_core_get_next_skb);
static void qeth_unregister_dbf_views(void)
void qeth_dbf_longtext(debug_info_t *id, int level, char *fmt, ...)
EXPORT_SYMBOL_GPL(qeth_dbf_longtext);
static int qeth_register_dbf_views(void)
int qeth_core_load_discipline(struct qeth_card *card,
enum qeth_discipline_id discipline)
void qeth_core_free_discipline(struct qeth_card *card)
static int qeth_core_probe_device(struct ccwgroup_device *gdev)
static void qeth_core_remove_device(struct ccwgroup_device *gdev)
static int qeth_core_set_online(struct ccwgroup_device *gdev)
static int qeth_core_set_offline(struct ccwgroup_device *gdev)
static void qeth_core_shutdown(struct ccwgroup_device *gdev)
static int qeth_core_prepare(struct ccwgroup_device *gdev)
static void qeth_core_complete(struct ccwgroup_device *gdev)
static int qeth_core_freeze(struct ccwgroup_device *gdev)
static int qeth_core_thaw(struct ccwgroup_device *gdev)
static int qeth_core_restore(struct ccwgroup_device *gdev)
static struct ccwgroup_driver qeth_core_ccwgroup_driver = ;
static ssize_t
qeth_core_driver_group_store(struct device_driver *ddrv, const char *buf,
size_t count)
static DRIVER_ATTR(group, 0200, NULL, qeth_core_driver_group_store);
static struct  qeth_ethtool_stats_keys[] = ;
int qeth_core_get_sset_count(struct net_device *dev, int stringset)
EXPORT_SYMBOL_GPL(qeth_core_get_sset_count);
void qeth_core_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 *data)
EXPORT_SYMBOL_GPL(qeth_core_get_ethtool_stats);
void qeth_core_get_strings(struct net_device *dev, u32 stringset, u8 *data)
EXPORT_SYMBOL_GPL(qeth_core_get_strings);
void qeth_core_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
EXPORT_SYMBOL_GPL(qeth_core_get_drvinfo);
int qeth_core_ethtool_get_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd)
EXPORT_SYMBOL_GPL(qeth_core_ethtool_get_settings);
static int __init qeth_core_init(void)
static void __exit qeth_core_exit(void)
module_init(qeth_core_init);
module_exit(qeth_core_exit);
MODULE_AUTHOR("Frank Blaschka <frank.blaschka@de.ibm.com>");
MODULE_DESCRIPTION("qeth core functions");
MODULE_LICENSE("GPL");
