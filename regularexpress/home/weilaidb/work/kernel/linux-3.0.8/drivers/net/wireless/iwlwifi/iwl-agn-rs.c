#define RS_NAME "iwl-agn-rs"
#define NUM_TRY_BEFORE_ANT_TOGGLE 1
#define IWL_NUMBER_TRY      1
#define IWL_HT_NUMBER_TRY   3
#define IWL_RATE_MAX_WINDOW		62
#define IWL_RATE_MIN_FAILURE_TH		6
#define IWL_RATE_MIN_SUCCESS_TH		8
#define IWL_MISSED_RATE_MAX		15
#define IWL_RATE_SCALE_FLUSH_INTVL   (3*HZ)
static u8 rs_ht_to_legacy[] = ;
static const u8 ant_toggle_lookup[] = ;
#define IWL_DECLARE_RATE_INFO(r, s, ip, in, rp, rn, pp, np)    \
[IWL_RATE_##r##M_INDEX] =
const struct iwl_rate_info iwl_rates[IWL_RATE_COUNT] = ;
static inline u8 rs_extract_rate(u32 rate_n_flags)
static int iwl_hwrate_to_plcp_idx(u32 rate_n_flags)
static void rs_rate_scale_perform(struct iwl_priv *priv,
struct sk_buff *skb,
struct ieee80211_sta *sta,
struct iwl_lq_sta *lq_sta);
static void rs_fill_link_cmd(struct iwl_priv *priv,
struct iwl_lq_sta *lq_sta, u32 rate_n_flags);
static void rs_stay_in_table(struct iwl_lq_sta *lq_sta, bool force_search);
static void rs_dbgfs_set_mcs(struct iwl_lq_sta *lq_sta,
u32 *rate_n_flags, int index);
static void rs_dbgfs_set_mcs(struct iwl_lq_sta *lq_sta,
u32 *rate_n_flags, int index)
static s32 expected_tpt_legacy[IWL_RATE_COUNT] = ;
static s32 expected_tpt_siso20MHz[4][IWL_RATE_COUNT] = ;
static s32 expected_tpt_siso40MHz[4][IWL_RATE_COUNT] = ;
static s32 expected_tpt_mimo2_20MHz[4][IWL_RATE_COUNT] = ;
static s32 expected_tpt_mimo2_40MHz[4][IWL_RATE_COUNT] = ;
static s32 expected_tpt_mimo3_20MHz[4][IWL_RATE_COUNT] = ;
static s32 expected_tpt_mimo3_40MHz[4][IWL_RATE_COUNT] = ;
static const struct iwl_rate_mcs_info iwl_rate_mcs[IWL_RATE_COUNT] = ;
#define MCS_INDEX_PER_STREAM	(8)
static void rs_rate_scale_clear_window(struct iwl_rate_scale_data *window)
static inline u8 rs_is_valid_ant(u8 valid_antenna, u8 ant_type)
static void rs_tl_rm_old_stats(struct iwl_traffic_load *tl, u32 curr_time)
static u8 rs_tl_add_packet(struct iwl_lq_sta *lq_data,
struct ieee80211_hdr *hdr)
static void rs_program_fix_rate(struct iwl_priv *priv,
struct iwl_lq_sta *lq_sta)
static u32 rs_tl_get_load(struct iwl_lq_sta *lq_data, u8 tid)
static int rs_tl_turn_on_agg_for_tid(struct iwl_priv *priv,
struct iwl_lq_sta *lq_data, u8 tid,
struct ieee80211_sta *sta)
static void rs_tl_turn_on_agg(struct iwl_priv *priv, u8 tid,
struct iwl_lq_sta *lq_data,
struct ieee80211_sta *sta)
static inline int get_num_of_ant_from_rate(u32 rate_n_flags)
static s32 get_expected_tpt(struct iwl_scale_tbl_info *tbl, int rs_index)
static int rs_collect_tx_data(struct iwl_scale_tbl_info *tbl,
int scale_index, int attempts, int successes)
static u32 rate_n_flags_from_tbl(struct iwl_priv *priv,
struct iwl_scale_tbl_info *tbl,
int index, u8 use_green)
static int rs_get_tbl_info_from_mcs(const u32 rate_n_flags,
enum ieee80211_band band,
struct iwl_scale_tbl_info *tbl,
int *rate_idx)
static int rs_toggle_antenna(u32 valid_ant, u32 *rate_n_flags,
struct iwl_scale_tbl_info *tbl)
static bool rs_use_green(struct ieee80211_sta *sta)
static u16 rs_get_supported_rates(struct iwl_lq_sta *lq_sta,
struct ieee80211_hdr *hdr,
enum iwl_table_type rate_type)
static u16 rs_get_adjacent_rate(struct iwl_priv *priv, u8 index, u16 rate_mask,
int rate_type)
static u32 rs_get_lower_rate(struct iwl_lq_sta *lq_sta,
struct iwl_scale_tbl_info *tbl,
u8 scale_index, u8 ht_possible)
static bool table_type_matches(struct iwl_scale_tbl_info *a,
struct iwl_scale_tbl_info *b)
static void rs_bt_update_lq(struct iwl_priv *priv, struct iwl_rxon_context *ctx,
struct iwl_lq_sta *lq_sta)
static void rs_tx_status(void *priv_r, struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta,
struct sk_buff *skb)
static void rs_set_stay_in_table(struct iwl_priv *priv, u8 is_legacy,
struct iwl_lq_sta *lq_sta)
static void rs_set_expected_tpt_table(struct iwl_lq_sta *lq_sta,
struct iwl_scale_tbl_info *tbl)
static s32 rs_get_best_rate(struct iwl_priv *priv,
struct iwl_lq_sta *lq_sta,
struct iwl_scale_tbl_info *tbl,
u16 rate_mask, s8 index)
static int rs_switch_to_mimo2(struct iwl_priv *priv,
struct iwl_lq_sta *lq_sta,
struct ieee80211_conf *conf,
struct ieee80211_sta *sta,
struct iwl_scale_tbl_info *tbl, int index)
static int rs_switch_to_mimo3(struct iwl_priv *priv,
struct iwl_lq_sta *lq_sta,
struct ieee80211_conf *conf,
struct ieee80211_sta *sta,
struct iwl_scale_tbl_info *tbl, int index)
static int rs_switch_to_siso(struct iwl_priv *priv,
struct iwl_lq_sta *lq_sta,
struct ieee80211_conf *conf,
struct ieee80211_sta *sta,
struct iwl_scale_tbl_info *tbl, int index)
static int rs_move_legacy_other(struct iwl_priv *priv,
struct iwl_lq_sta *lq_sta,
struct ieee80211_conf *conf,
struct ieee80211_sta *sta,
int index)
static int rs_move_siso_to_other(struct iwl_priv *priv,
struct iwl_lq_sta *lq_sta,
struct ieee80211_conf *conf,
struct ieee80211_sta *sta, int index)
static int rs_move_mimo2_to_other(struct iwl_priv *priv,
struct iwl_lq_sta *lq_sta,
struct ieee80211_conf *conf,
struct ieee80211_sta *sta, int index)
static int rs_move_mimo3_to_other(struct iwl_priv *priv,
struct iwl_lq_sta *lq_sta,
struct ieee80211_conf *conf,
struct ieee80211_sta *sta, int index)
static void rs_stay_in_table(struct iwl_lq_sta *lq_sta, bool force_search)
static void rs_update_rate_tbl(struct iwl_priv *priv,
struct iwl_rxon_context *ctx,
struct iwl_lq_sta *lq_sta,
struct iwl_scale_tbl_info *tbl,
int index, u8 is_green)
static void rs_rate_scale_perform(struct iwl_priv *priv,
struct sk_buff *skb,
struct ieee80211_sta *sta,
struct iwl_lq_sta *lq_sta)
static void rs_initialize_lq(struct iwl_priv *priv,
struct ieee80211_conf *conf,
struct ieee80211_sta *sta,
struct iwl_lq_sta *lq_sta)
static void rs_get_rate(void *priv_r, struct ieee80211_sta *sta, void *priv_sta,
struct ieee80211_tx_rate_control *txrc)
static void *rs_alloc_sta(void *priv_rate, struct ieee80211_sta *sta,
gfp_t gfp)
void iwl_rs_rate_init(struct iwl_priv *priv, struct ieee80211_sta *sta, u8 sta_id)
static void rs_fill_link_cmd(struct iwl_priv *priv,
struct iwl_lq_sta *lq_sta, u32 new_rate)
static void *rs_alloc(struct ieee80211_hw *hw, struct dentry *debugfsdir)
static void rs_free(void *priv_rate)
static void rs_free_sta(void *priv_r, struct ieee80211_sta *sta,
void *priv_sta)
static int open_file_generic(struct inode *inode, struct file *file)
static void rs_dbgfs_set_mcs(struct iwl_lq_sta *lq_sta,
u32 *rate_n_flags, int index)
static ssize_t rs_sta_dbgfs_scale_table_write(struct file *file,
const char __user *user_buf, size_t count, loff_t *ppos)
static ssize_t rs_sta_dbgfs_scale_table_read(struct file *file,
char __user *user_buf, size_t count, loff_t *ppos)
static const struct file_operations rs_sta_dbgfs_scale_table_ops = ;
static ssize_t rs_sta_dbgfs_stats_table_read(struct file *file,
char __user *user_buf, size_t count, loff_t *ppos)
static const struct file_operations rs_sta_dbgfs_stats_table_ops = ;
static ssize_t rs_sta_dbgfs_rate_scale_data_read(struct file *file,
char __user *user_buf, size_t count, loff_t *ppos)
static const struct file_operations rs_sta_dbgfs_rate_scale_data_ops = ;
static void rs_add_debugfs(void *priv, void *priv_sta,
struct dentry *dir)
static void rs_remove_debugfs(void *priv, void *priv_sta)
static void rs_rate_init_stub(void *priv_r, struct ieee80211_supported_band *sband,
struct ieee80211_sta *sta, void *priv_sta)
static struct rate_control_ops rs_ops = ;
int iwlagn_rate_control_register(void)
void iwlagn_rate_control_unregister(void)
