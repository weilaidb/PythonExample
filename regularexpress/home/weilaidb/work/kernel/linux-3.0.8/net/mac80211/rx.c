static struct sk_buff *remove_monitor_info(struct ieee80211_local *local,
struct sk_buff *skb)
static inline int should_drop_frame(struct sk_buff *skb,
int present_fcs_len)
static int
ieee80211_rx_radiotap_len(struct ieee80211_local *local,
struct ieee80211_rx_status *status)
static void
ieee80211_add_rx_radiotap_header(struct ieee80211_local *local,
struct sk_buff *skb,
struct ieee80211_rate *rate,
int rtap_len)
static struct sk_buff *
ieee80211_rx_monitor(struct ieee80211_local *local, struct sk_buff *origskb,
struct ieee80211_rate *rate)
static void ieee80211_parse_qos(struct ieee80211_rx_data *rx)
static void ieee80211_verify_alignment(struct ieee80211_rx_data *rx)
static ieee80211_rx_result debug_noinline
ieee80211_rx_h_passive_scan(struct ieee80211_rx_data *rx)
static int ieee80211_is_unicast_robust_mgmt_frame(struct sk_buff *skb)
static int ieee80211_is_multicast_robust_mgmt_frame(struct sk_buff *skb)
static int ieee80211_get_mmie_keyidx(struct sk_buff *skb)
static ieee80211_rx_result
ieee80211_rx_mesh_check(struct ieee80211_rx_data *rx)
#define SEQ_MODULO 0x1000
#define SEQ_MASK   0xfff
static inline int seq_less(u16 sq1, u16 sq2)
static inline u16 seq_inc(u16 sq)
static inline u16 seq_sub(u16 sq1, u16 sq2)
static void ieee80211_release_reorder_frame(struct ieee80211_hw *hw,
struct tid_ampdu_rx *tid_agg_rx,
int index)
static void ieee80211_release_reorder_frames(struct ieee80211_hw *hw,
struct tid_ampdu_rx *tid_agg_rx,
u16 head_seq_num)
#define HT_RX_REORDER_BUF_TIMEOUT (HZ / 10)
static void ieee80211_sta_reorder_release(struct ieee80211_hw *hw,
struct tid_ampdu_rx *tid_agg_rx)
static bool ieee80211_sta_manage_reorder_buf(struct ieee80211_hw *hw,
struct tid_ampdu_rx *tid_agg_rx,
struct sk_buff *skb)
static void ieee80211_rx_reorder_ampdu(struct ieee80211_rx_data *rx)
static ieee80211_rx_result debug_noinline
ieee80211_rx_h_check(struct ieee80211_rx_data *rx)
static ieee80211_rx_result debug_noinline
ieee80211_rx_h_decrypt(struct ieee80211_rx_data *rx)
static ieee80211_rx_result debug_noinline
ieee80211_rx_h_check_more_data(struct ieee80211_rx_data *rx)
static void ap_sta_ps_start(struct sta_info *sta)
static void ap_sta_ps_end(struct sta_info *sta)
int ieee80211_sta_ps_transition(struct ieee80211_sta *sta, bool start)
EXPORT_SYMBOL(ieee80211_sta_ps_transition);
static ieee80211_rx_result debug_noinline
ieee80211_rx_h_sta_process(struct ieee80211_rx_data *rx)
static inline struct ieee80211_fragment_entry *
ieee80211_reassemble_add(struct ieee80211_sub_if_data *sdata,
unsigned int frag, unsigned int seq, int rx_queue,
struct sk_buff **skb)
static inline struct ieee80211_fragment_entry *
ieee80211_reassemble_find(struct ieee80211_sub_if_data *sdata,
unsigned int frag, unsigned int seq,
int rx_queue, struct ieee80211_hdr *hdr)
static ieee80211_rx_result debug_noinline
ieee80211_rx_h_defragment(struct ieee80211_rx_data *rx)
static ieee80211_rx_result debug_noinline
ieee80211_rx_h_ps_poll(struct ieee80211_rx_data *rx)
static ieee80211_rx_result debug_noinline
ieee80211_rx_h_remove_qos_control(struct ieee80211_rx_data *rx)
static int
ieee80211_802_1x_port_control(struct ieee80211_rx_data *rx)
static int
ieee80211_drop_unencrypted(struct ieee80211_rx_data *rx, __le16 fc)
static int
ieee80211_drop_unencrypted_mgmt(struct ieee80211_rx_data *rx)
static int
__ieee80211_data_to_8023(struct ieee80211_rx_data *rx, bool *port_control)
static bool ieee80211_frame_allowed(struct ieee80211_rx_data *rx, __le16 fc)
static void
ieee80211_deliver_skb(struct ieee80211_rx_data *rx)
static ieee80211_rx_result debug_noinline
ieee80211_rx_h_amsdu(struct ieee80211_rx_data *rx)
static ieee80211_rx_result
ieee80211_rx_h_mesh_fwding(struct ieee80211_rx_data *rx)
static ieee80211_rx_result debug_noinline
ieee80211_rx_h_data(struct ieee80211_rx_data *rx)
static ieee80211_rx_result debug_noinline
ieee80211_rx_h_ctrl(struct ieee80211_rx_data *rx)
static void ieee80211_process_sa_query_req(struct ieee80211_sub_if_data *sdata,
struct ieee80211_mgmt *mgmt,
size_t len)
static ieee80211_rx_result debug_noinline
ieee80211_rx_h_mgmt_check(struct ieee80211_rx_data *rx)
static ieee80211_rx_result debug_noinline
ieee80211_rx_h_action(struct ieee80211_rx_data *rx)
static ieee80211_rx_result debug_noinline
ieee80211_rx_h_userspace_mgmt(struct ieee80211_rx_data *rx)
static ieee80211_rx_result debug_noinline
ieee80211_rx_h_action_return(struct ieee80211_rx_data *rx)
static ieee80211_rx_result debug_noinline
ieee80211_rx_h_mgmt(struct ieee80211_rx_data *rx)
static void ieee80211_rx_cooked_monitor(struct ieee80211_rx_data *rx,
struct ieee80211_rate *rate)
static void ieee80211_rx_handlers_result(struct ieee80211_rx_data *rx,
ieee80211_rx_result res)
static void ieee80211_rx_handlers(struct ieee80211_rx_data *rx)
static void ieee80211_invoke_rx_handlers(struct ieee80211_rx_data *rx)
void ieee80211_release_reorder_timeout(struct sta_info *sta, int tid)
static int prepare_for_handlers(struct ieee80211_rx_data *rx,
struct ieee80211_hdr *hdr)
static bool ieee80211_prepare_and_rx_handle(struct ieee80211_rx_data *rx,
struct sk_buff *skb, bool consume)
static void __ieee80211_rx_handle_packet(struct ieee80211_hw *hw,
struct sk_buff *skb)
void ieee80211_rx(struct ieee80211_hw *hw, struct sk_buff *skb)
EXPORT_SYMBOL(ieee80211_rx);
void ieee80211_rx_irqsafe(struct ieee80211_hw *hw, struct sk_buff *skb)
EXPORT_SYMBOL(ieee80211_rx_irqsafe);
