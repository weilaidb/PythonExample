#define __QETH_CORE_H__
enum qeth_dbf_names ;
struct qeth_dbf_info ;
#define QETH_DBF_CTRL_LEN 256
#define QETH_DBF_TEXT(name, level, text) \
debug_text_event(qeth_dbf[QETH_DBF_##name].id, level, text)
#define QETH_DBF_HEX(name, level, addr, len) \
debug_event(qeth_dbf[QETH_DBF_##name].id, level, (void *)(addr), len)
#define QETH_DBF_MESSAGE(level, text...) \
debug_sprintf_event(qeth_dbf[QETH_DBF_MSG].id, level, text)
#define QETH_DBF_TEXT_(name, level, text...) \
qeth_dbf_longtext(qeth_dbf[QETH_DBF_##name].id, level, text)
#define QETH_CARD_TEXT(card, level, text) \
debug_text_event(card->debug, level, text)
#define QETH_CARD_HEX(card, level, addr, len) \
debug_event(card->debug, level, (void *)(addr), len)
#define QETH_CARD_MESSAGE(card, text...) \
debug_sprintf_event(card->debug, level, text)
#define QETH_CARD_TEXT_(card, level, text...) \
qeth_dbf_longtext(card->debug, level, text)
#define SENSE_COMMAND_REJECT_BYTE 0
#define SENSE_COMMAND_REJECT_FLAG 0x80
#define SENSE_RESETTING_EVENT_BYTE 1
#define SENSE_RESETTING_EVENT_FLAG 0x80
#define CARD_RDEV(card) card->read.ccwdev
#define CARD_WDEV(card) card->write.ccwdev
#define CARD_DDEV(card) card->data.ccwdev
#define CARD_BUS_ID(card) dev_name(&card->gdev->dev)
#define CARD_RDEV_ID(card) dev_name(&card->read.ccwdev->dev)
#define CARD_WDEV_ID(card) dev_name(&card->write.ccwdev->dev)
#define CARD_DDEV_ID(card) dev_name(&card->data.ccwdev->dev)
#define CHANNEL_ID(channel) dev_name(&channel->ccwdev->dev)
struct qeth_perf_stats ;
struct qeth_routing_info ;
struct qeth_ipa_info ;
static inline int qeth_is_ipa_supported(struct qeth_ipa_info *ipa,
enum qeth_ipa_funcs func)
static inline int qeth_is_ipa_enabled(struct qeth_ipa_info *ipa,
enum qeth_ipa_funcs func)
#define qeth_adp_supported(c, f) \
qeth_is_ipa_supported(&c->options.adp, f)
#define qeth_adp_enabled(c, f) \
qeth_is_ipa_enabled(&c->options.adp, f)
#define qeth_is_supported(c, f) \
qeth_is_ipa_supported(&c->options.ipa4, f)
#define qeth_is_enabled(c, f) \
qeth_is_ipa_enabled(&c->options.ipa4, f)
#define qeth_is_supported6(c, f) \
qeth_is_ipa_supported(&c->options.ipa6, f)
#define qeth_is_enabled6(c, f) \
qeth_is_ipa_enabled(&c->options.ipa6, f)
#define qeth_is_ipafunc_supported(c, prot, f) \
((prot == QETH_PROT_IPV6) ? \
qeth_is_supported6(c, f) : qeth_is_supported(c, f))
#define qeth_is_ipafunc_enabled(c, prot, f) \
((prot == QETH_PROT_IPV6) ? \
qeth_is_enabled6(c, f) : qeth_is_enabled(c, f))
#define QETH_IDX_FUNC_LEVEL_OSD		 0x0101
#define QETH_IDX_FUNC_LEVEL_IQD		 0x4108
#define QETH_MODELLIST_ARRAY \
#define QETH_CU_TYPE_IND	0
#define QETH_CU_MODEL_IND	1
#define QETH_DEV_TYPE_IND	2
#define QETH_DEV_MODEL_IND	3
#define QETH_QUEUE_NO_IND	4
#define QETH_MULTICAST_IND	5
#define QETH_REAL_CARD		1
#define QETH_VLAN_CARD		2
#define QETH_BUFSIZE		4096
#define QETH_TX_TIMEOUT		100 * HZ
#define QETH_RCD_TIMEOUT	60 * HZ
#define QETH_HEADER_SIZE	32
#define QETH_MAX_PORTNO		15
#define UNIQUE_ID_IF_CREATE_ADDR_FAILED 0xfffe
#define UNIQUE_ID_NOT_BY_CARD		0x10000
#define QETH_MAX_QUEUES 4
#define QETH_IN_BUF_SIZE_DEFAULT 65536
#define QETH_IN_BUF_COUNT_DEFAULT 64
#define QETH_IN_BUF_COUNT_HSDEFAULT 128
#define QETH_IN_BUF_COUNT_MIN 8
#define QETH_IN_BUF_COUNT_MAX 128
#define QETH_MAX_BUFFER_ELEMENTS(card) ((card)->qdio.in_buf_size >> 12)
#define QETH_IN_BUF_REQUEUE_THRESHOLD(card) \
((card)->qdio.in_buf_pool.buf_count / 2)
#define QETH_PCI_THRESHOLD_A(card) ((card)->qdio.in_buf_pool.buf_count+1)
#define QETH_PCI_THRESHOLD_B(card) 0
#define QETH_PCI_TIMER_VALUE(card) 3
#define QETH_PRIOQ_DEFAULT QETH_NO_PRIO_QUEUEING
#define QETH_DEFAULT_QUEUE    2
#define QETH_NO_PRIO_QUEUEING 0
#define QETH_PRIO_Q_ING_PREC  1
#define QETH_PRIO_Q_ING_TOS   2
#define IP_TOS_LOWDELAY 0x10
#define IP_TOS_HIGHTHROUGHPUT 0x08
#define IP_TOS_HIGHRELIABILITY 0x04
#define IP_TOS_NOTIMPORTANT 0x02
#define QETH_LOW_WATERMARK_PACK  2
#define QETH_HIGH_WATERMARK_PACK 5
#define QETH_WATERMARK_PACK_FUZZ 1
#define QETH_IP_HEADER_SIZE 40
#define QETH_RX_SG_CB (PAGE_SIZE >> 1)
struct qeth_hdr_layer3  __attribute__ ((packed));
struct qeth_hdr_layer2  __attribute__ ((packed));
struct qeth_hdr_osn  __attribute__ ((packed));
struct qeth_hdr  __attribute__ ((packed));
struct qeth_hdr_ext_tso  __attribute__ ((packed));
struct qeth_hdr_tso  __attribute__ ((packed));
#define QETH_HDR_PASSTHRU 0x10
#define QETH_HDR_IPV6     0x80
#define QETH_HDR_CAST_MASK 0x07
enum qeth_cast_flags ;
enum qeth_layer2_frame_flags ;
enum qeth_header_ids ;
#define QETH_HDR_EXT_VLAN_FRAME       0x01
#define QETH_HDR_EXT_TOKEN_ID         0x02
#define QETH_HDR_EXT_INCLUDE_VLAN_TAG 0x04
#define QETH_HDR_EXT_SRC_MAC_ADDR     0x08
#define QETH_HDR_EXT_CSUM_HDR_REQ     0x10
#define QETH_HDR_EXT_CSUM_TRANSP_REQ  0x20
#define QETH_HDR_EXT_UDP	      0x40
static inline int qeth_is_last_sbale(struct qdio_buffer_element *sbale)
enum qeth_qdio_buffer_states ;
enum qeth_qdio_info_states ;
struct qeth_buffer_pool_entry ;
struct qeth_qdio_buffer_pool ;
struct qeth_qdio_buffer ;
struct qeth_qdio_q  __attribute__ ((aligned(256)));
struct qeth_qdio_out_buffer ;
struct qeth_card;
enum qeth_out_q_states ;
struct qeth_qdio_out_q  __attribute__ ((aligned(256)));
struct qeth_qdio_info ;
enum qeth_send_errors ;
#define QETH_ETH_MAC_V4      0x0100
#define QETH_ETH_MAC_V6      0x3333
#define QETH_TR_MAC_NC       0xc000
#define QETH_TR_MAC_C        0x0300
#define DEFAULT_ADD_HHLEN 0
#define MAX_ADD_HHLEN 1024
#define QETH_CMD_BUFFER_NO	8
enum qeth_channel_states ;
enum qeth_card_states ;
enum qeth_prot_versions ;
enum qeth_ip_types ;
enum qeth_cmd_buffer_state ;
struct qeth_ipato ;
struct qeth_channel;
struct qeth_cmd_buffer ;
struct qeth_channel ;
struct qeth_token ;
struct qeth_seqno ;
struct qeth_reply ;
struct qeth_card_blkt ;
#define QETH_BROADCAST_WITH_ECHO    0x01
#define QETH_BROADCAST_WITHOUT_ECHO 0x02
#define QETH_LAYER2_MAC_READ	    0x01
#define QETH_LAYER2_MAC_REGISTERED  0x02
struct qeth_card_info ;
struct qeth_card_options ;
enum qeth_threads ;
struct qeth_osn_info ;
enum qeth_discipline_id ;
struct qeth_discipline ;
struct qeth_vlan_vid ;
struct qeth_mc_mac ;
struct qeth_rx ;
#define QETH_NAPI_WEIGHT 128
struct qeth_card ;
struct qeth_card_list_struct ;
struct qeth_trap_id  __packed;
#define QETH_CARD_IFNAME(card) (((card)->dev)? (card)->dev->name : "")
static inline struct qeth_card *CARD_FROM_CDEV(struct ccw_device *cdev)
static inline int qeth_get_micros(void)
static inline int qeth_get_ip_version(struct sk_buff *skb)
static inline void qeth_put_buffer_pool_entry(struct qeth_card *card,
struct qeth_buffer_pool_entry *entry)
static inline int qeth_is_diagass_supported(struct qeth_card *card,
enum qeth_diags_cmds cmd)
extern struct ccwgroup_driver qeth_l2_ccwgroup_driver;
extern struct ccwgroup_driver qeth_l3_ccwgroup_driver;
const char *qeth_get_cardname_short(struct qeth_card *);
int qeth_realloc_buffer_pool(struct qeth_card *, int);
int qeth_core_load_discipline(struct qeth_card *, enum qeth_discipline_id);
void qeth_core_free_discipline(struct qeth_card *);
int qeth_core_create_device_attributes(struct device *);
void qeth_core_remove_device_attributes(struct device *);
int qeth_core_create_osn_attributes(struct device *);
void qeth_core_remove_osn_attributes(struct device *);
extern struct qeth_card_list_struct qeth_core_card_list;
extern struct kmem_cache *qeth_core_header_cache;
extern struct qeth_dbf_info qeth_dbf[QETH_DBF_INFOS];
void qeth_set_allowed_threads(struct qeth_card *, unsigned long , int);
int qeth_threads_running(struct qeth_card *, unsigned long);
int qeth_wait_for_threads(struct qeth_card *, unsigned long);
int qeth_do_run_thread(struct qeth_card *, unsigned long);
void qeth_clear_thread_start_bit(struct qeth_card *, unsigned long);
void qeth_clear_thread_running_bit(struct qeth_card *, unsigned long);
int qeth_core_hardsetup_card(struct qeth_card *);
void qeth_print_status_message(struct qeth_card *);
int qeth_init_qdio_queues(struct qeth_card *);
int qeth_send_startlan(struct qeth_card *);
int qeth_send_stoplan(struct qeth_card *);
int qeth_send_ipa_cmd(struct qeth_card *, struct qeth_cmd_buffer *,
int (*reply_cb)
(struct qeth_card *, struct qeth_reply *, unsigned long),
void *);
struct qeth_cmd_buffer *qeth_get_ipacmd_buffer(struct qeth_card *,
enum qeth_ipa_cmds, enum qeth_prot_versions);
int qeth_query_setadapterparms(struct qeth_card *);
int qeth_check_qdio_errors(struct qeth_card *, struct qdio_buffer *,
unsigned int, const char *);
void qeth_queue_input_buffer(struct qeth_card *, int);
struct sk_buff *qeth_core_get_next_skb(struct qeth_card *,
struct qdio_buffer *, struct qdio_buffer_element **, int *,
struct qeth_hdr **);
void qeth_schedule_recovery(struct qeth_card *);
void qeth_qdio_start_poll(struct ccw_device *, int, unsigned long);
void qeth_qdio_input_handler(struct ccw_device *,
unsigned int, unsigned int, int,
int, unsigned long);
void qeth_qdio_output_handler(struct ccw_device *, unsigned int,
int, int, int, unsigned long);
void qeth_clear_ipacmd_list(struct qeth_card *);
int qeth_qdio_clear_card(struct qeth_card *, int);
void qeth_clear_working_pool_list(struct qeth_card *);
void qeth_clear_cmd_buffers(struct qeth_channel *);
void qeth_clear_qdio_buffers(struct qeth_card *);
void qeth_setadp_promisc_mode(struct qeth_card *);
struct net_device_stats *qeth_get_stats(struct net_device *);
int qeth_change_mtu(struct net_device *, int);
int qeth_setadpparms_change_macaddr(struct qeth_card *);
void qeth_tx_timeout(struct net_device *);
void qeth_prepare_control_data(struct qeth_card *, int,
struct qeth_cmd_buffer *);
void qeth_release_buffer(struct qeth_channel *, struct qeth_cmd_buffer *);
void qeth_prepare_ipa_cmd(struct qeth_card *, struct qeth_cmd_buffer *, char);
struct qeth_cmd_buffer *qeth_wait_for_buffer(struct qeth_channel *);
int qeth_mdio_read(struct net_device *, int, int);
int qeth_snmp_command(struct qeth_card *, char __user *);
struct qeth_cmd_buffer *qeth_get_adapter_cmd(struct qeth_card *, __u32, __u32);
int qeth_default_setadapterparms_cb(struct qeth_card *, struct qeth_reply *,
unsigned long);
int qeth_send_control_data(struct qeth_card *, int, struct qeth_cmd_buffer *,
int (*reply_cb)(struct qeth_card *, struct qeth_reply*, unsigned long),
void *reply_param);
int qeth_get_priority_queue(struct qeth_card *, struct sk_buff *, int, int);
int qeth_get_elements_no(struct qeth_card *, void *, struct sk_buff *, int);
int qeth_do_send_packet_fast(struct qeth_card *, struct qeth_qdio_out_q *,
struct sk_buff *, struct qeth_hdr *, int, int, int);
int qeth_do_send_packet(struct qeth_card *, struct qeth_qdio_out_q *,
struct sk_buff *, struct qeth_hdr *, int);
int qeth_core_get_sset_count(struct net_device *, int);
void qeth_core_get_ethtool_stats(struct net_device *,
struct ethtool_stats *, u64 *);
void qeth_core_get_strings(struct net_device *, u32, u8 *);
void qeth_core_get_drvinfo(struct net_device *, struct ethtool_drvinfo *);
void qeth_dbf_longtext(debug_info_t *id, int level, char *text, ...);
int qeth_core_ethtool_get_settings(struct net_device *, struct ethtool_cmd *);
int qeth_set_access_ctrl_online(struct qeth_card *card);
int qeth_hdr_chk_and_bounce(struct sk_buff *, int);
int qeth_hw_trap(struct qeth_card *, enum qeth_diags_trap_action);
int qeth_query_ipassists(struct qeth_card *, enum qeth_prot_versions prot);
int qeth_osn_assist(struct net_device *, void *, int);
int qeth_osn_register(unsigned char *read_dev_no, struct net_device **,
int (*assist_cb)(struct net_device *, void *),
int (*data_cb)(struct sk_buff *));
void qeth_osn_deregister(struct net_device *);
