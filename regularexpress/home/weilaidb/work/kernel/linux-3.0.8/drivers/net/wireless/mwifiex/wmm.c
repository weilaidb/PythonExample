#define DRV_PKT_DELAY_TO_FW_MAX   512
#define WMM_QUEUED_PACKET_LOWER_LIMIT   180
#define WMM_QUEUED_PACKET_UPPER_LIMIT   200
#define IPTOS_OFFSET 5
static const u8 wmm_info_ie[] = ;
static const u8 wmm_aci_to_qidx_map[] = ;
static u8 tos_to_tid[] = ;
static u8 tos_to_tid_inv[] = ;
static u8 ac_to_tid[4][2] = ;
static void
mwifiex_wmm_ac_debug_print(const struct ieee_types_wmm_ac_parameters *ac_param)
static struct mwifiex_ra_list_tbl *
mwifiex_wmm_allocate_ralist_node(struct mwifiex_adapter *adapter, u8 *ra)
void
mwifiex_ralist_add(struct mwifiex_private *priv, u8 *ra)
static void mwifiex_wmm_default_queue_priorities(struct mwifiex_private *priv)
static void
mwifiex_wmm_queue_priorities_tid(struct mwifiex_wmm_desc *wmm)
void
mwifiex_wmm_setup_queue_priorities(struct mwifiex_private *priv,
struct ieee_types_wmm_parameter *wmm_ie)
static enum mwifiex_wmm_ac_e
mwifiex_wmm_eval_downgrade_ac(struct mwifiex_private *priv,
enum mwifiex_wmm_ac_e eval_ac)
void
mwifiex_wmm_setup_ac_downgrade(struct mwifiex_private *priv)
static enum mwifiex_wmm_ac_e
mwifiex_wmm_convert_tos_to_ac(struct mwifiex_adapter *adapter, u32 tos)
static u8
mwifiex_wmm_downgrade_tid(struct mwifiex_private *priv, u32 tid)
void
mwifiex_wmm_init(struct mwifiex_adapter *adapter)
int
mwifiex_wmm_lists_empty(struct mwifiex_adapter *adapter)
static void
mwifiex_wmm_del_pkts_in_ralist_node(struct mwifiex_private *priv,
struct mwifiex_ra_list_tbl *ra_list)
static void
mwifiex_wmm_del_pkts_in_ralist(struct mwifiex_private *priv,
struct list_head *ra_list_head)
static void mwifiex_wmm_cleanup_queues(struct mwifiex_private *priv)
static void mwifiex_wmm_delete_all_ralist(struct mwifiex_private *priv)
void
mwifiex_clean_txrx(struct mwifiex_private *priv)
static struct mwifiex_ra_list_tbl *
mwifiex_wmm_get_ralist_node(struct mwifiex_private *priv, u8 tid,
u8 *ra_addr)
static struct mwifiex_ra_list_tbl *
mwifiex_wmm_get_queue_raptr(struct mwifiex_private *priv, u8 tid, u8 *ra_addr)
int
mwifiex_is_ralist_valid(struct mwifiex_private *priv,
struct mwifiex_ra_list_tbl *ra_list, int ptr_index)
void
mwifiex_wmm_add_buf_txqueue(struct mwifiex_adapter *adapter,
struct sk_buff *skb)
int mwifiex_ret_wmm_get_status(struct mwifiex_private *priv,
const struct host_cmd_ds_command *resp)
u32
mwifiex_wmm_process_association_req(struct mwifiex_private *priv,
u8 **assoc_buf,
struct ieee_types_wmm_parameter *wmm_ie,
struct ieee80211_ht_cap *ht_cap)
u8
mwifiex_wmm_compute_drv_pkt_delay(struct mwifiex_private *priv,
const struct sk_buff *skb)
static struct mwifiex_ra_list_tbl *
mwifiex_wmm_get_highest_priolist_ptr(struct mwifiex_adapter *adapter,
struct mwifiex_private **priv, int *tid)
static int
mwifiex_num_pkts_in_txq(struct mwifiex_private *priv,
struct mwifiex_ra_list_tbl *ptr, int max_buf_size)
static void
mwifiex_send_single_packet(struct mwifiex_private *priv,
struct mwifiex_ra_list_tbl *ptr, int ptr_index,
unsigned long ra_list_flags)
__releases(&priv->wmm.ra_list_spinlock)
static int
mwifiex_is_ptr_processed(struct mwifiex_private *priv,
struct mwifiex_ra_list_tbl *ptr)
static void
mwifiex_send_processed_packet(struct mwifiex_private *priv,
struct mwifiex_ra_list_tbl *ptr, int ptr_index,
unsigned long ra_list_flags)
__releases(&priv->wmm.ra_list_spinlock)
static int
mwifiex_dequeue_tx_packet(struct mwifiex_adapter *adapter)
void
mwifiex_wmm_process_tx(struct mwifiex_adapter *adapter)
