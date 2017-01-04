#define __CARL9170_H
#define CARL9170FW_NAME	"carl9170-1.fw"
#define PAYLOAD_MAX	(CARL9170_MAX_CMD_LEN / 4 - 1)
enum carl9170_rf_init_mode ;
#define CARL9170_MAX_RX_BUFFER_SIZE		8192
enum carl9170_device_state ;
#define CARL9170_NUM_TID		16
#define WME_BA_BMP_SIZE			64
#define CARL9170_TX_USER_RATE_TRIES	3
#define WME_AC_BE   2
#define WME_AC_BK   3
#define WME_AC_VI   1
#define WME_AC_VO   0
#define TID_TO_WME_AC(_tid)				\
((((_tid) == 0) || ((_tid) == 3)) ? WME_AC_BE :	\
(((_tid) == 1) || ((_tid) == 2)) ? WME_AC_BK :	\
(((_tid) == 4) || ((_tid) == 5)) ? WME_AC_VI :	\
WME_AC_VO)
#define SEQ_DIFF(_start, _seq) \
(((_start) - (_seq)) & 0x0fff)
#define SEQ_PREV(_seq) \
(((_seq) - 1) & 0x0fff)
#define SEQ_NEXT(_seq) \
(((_seq) + 1) & 0x0fff)
#define BAW_WITHIN(_start, _bawsz, _seqno) \
((((_seqno) - (_start)) & 0xfff) < (_bawsz))
enum carl9170_tid_state ;
#define CARL9170_BAW_BITS (2 * WME_BA_BMP_SIZE)
#define CARL9170_BAW_SIZE (BITS_TO_LONGS(CARL9170_BAW_BITS))
#define CARL9170_BAW_LEN (DIV_ROUND_UP(CARL9170_BAW_BITS, BITS_PER_BYTE))
struct carl9170_sta_tid ;
#define CARL9170_QUEUE_TIMEOUT		256
#define CARL9170_BUMP_QUEUE		1000
#define CARL9170_TX_TIMEOUT		2500
#define CARL9170_JANITOR_DELAY		128
#define CARL9170_QUEUE_STUCK_TIMEOUT	5500
#define CARL9170_NUM_TX_AGG_MAX		30
#define CARL9170_NUM_TX_LIMIT_HARD	((AR9170_TXQ_DEPTH * 3) / 2)
#define CARL9170_NUM_TX_LIMIT_SOFT	(AR9170_TXQ_DEPTH)
struct carl9170_tx_queue_stats ;
struct carl9170_vif ;
struct carl9170_vif_info ;
#define AR9170_NUM_RX_URBS	16
#define AR9170_NUM_RX_URBS_MUL	2
#define AR9170_NUM_TX_URBS	8
#define AR9170_NUM_RX_URBS_POOL (AR9170_NUM_RX_URBS_MUL * AR9170_NUM_RX_URBS)
enum carl9170_device_features ;
struct ar9170;
struct carl9170_led ;
enum carl9170_restart_reasons ;
enum carl9170_erp_modes ;
struct ar9170 ;
enum carl9170_ps_off_override_reasons ;
struct carl9170_ba_stats ;
struct carl9170_sta_info ;
struct carl9170_tx_info ;
#define CHK_DEV_STATE(a, s)	(((struct ar9170 *)a)->state >= (s))
#define IS_INITIALIZED(a)	(CHK_DEV_STATE(a, CARL9170_STOPPED))
#define IS_ACCEPTING_CMD(a)	(CHK_DEV_STATE(a, CARL9170_IDLE))
#define IS_STARTED(a)		(CHK_DEV_STATE(a, CARL9170_STARTED))
static inline void __carl9170_set_state(struct ar9170 *ar,
enum carl9170_device_state newstate)
static inline void carl9170_set_state(struct ar9170 *ar,
enum carl9170_device_state newstate)
static inline void carl9170_set_state_when(struct ar9170 *ar,
enum carl9170_device_state min, enum carl9170_device_state newstate)
void *carl9170_alloc(size_t priv_size);
int carl9170_register(struct ar9170 *ar);
void carl9170_unregister(struct ar9170 *ar);
void carl9170_free(struct ar9170 *ar);
void carl9170_restart(struct ar9170 *ar, const enum carl9170_restart_reasons r);
void carl9170_ps_check(struct ar9170 *ar);
int carl9170_usb_open(struct ar9170 *ar);
void carl9170_usb_stop(struct ar9170 *ar);
void carl9170_usb_tx(struct ar9170 *ar, struct sk_buff *skb);
void carl9170_usb_handle_tx_err(struct ar9170 *ar);
int carl9170_exec_cmd(struct ar9170 *ar, const enum carl9170_cmd_oids,
u32 plen, void *payload, u32 rlen, void *resp);
int __carl9170_exec_cmd(struct ar9170 *ar, struct carl9170_cmd *cmd,
const bool free_buf);
int carl9170_usb_restart(struct ar9170 *ar);
void carl9170_usb_reset(struct ar9170 *ar);
int carl9170_init_mac(struct ar9170 *ar);
int carl9170_set_qos(struct ar9170 *ar);
int carl9170_update_multicast(struct ar9170 *ar, const u64 mc_hast);
int carl9170_mod_virtual_mac(struct ar9170 *ar, const unsigned int id,
const u8 *mac);
int carl9170_set_operating_mode(struct ar9170 *ar);
int carl9170_set_beacon_timers(struct ar9170 *ar);
int carl9170_set_dyn_sifs_ack(struct ar9170 *ar);
int carl9170_set_rts_cts_rate(struct ar9170 *ar);
int carl9170_set_ampdu_settings(struct ar9170 *ar);
int carl9170_set_slot_time(struct ar9170 *ar);
int carl9170_set_mac_rates(struct ar9170 *ar);
int carl9170_set_hwretry_limit(struct ar9170 *ar, const u32 max_retry);
int carl9170_update_beacon(struct ar9170 *ar, const bool submit);
int carl9170_upload_key(struct ar9170 *ar, const u8 id, const u8 *mac,
const u8 ktype, const u8 keyidx, const u8 *keydata, const int keylen);
int carl9170_disable_key(struct ar9170 *ar, const u8 id);
void carl9170_rx(struct ar9170 *ar, void *buf, unsigned int len);
void carl9170_handle_command_response(struct ar9170 *ar, void *buf, u32 len);
void carl9170_op_tx(struct ieee80211_hw *hw, struct sk_buff *skb);
void carl9170_tx_janitor(struct work_struct *work);
void carl9170_tx_process_status(struct ar9170 *ar,
const struct carl9170_rsp *cmd);
void carl9170_tx_status(struct ar9170 *ar, struct sk_buff *skb,
const bool success);
void carl9170_tx_callback(struct ar9170 *ar, struct sk_buff *skb);
void carl9170_tx_drop(struct ar9170 *ar, struct sk_buff *skb);
void carl9170_tx_scheduler(struct ar9170 *ar);
void carl9170_tx_get_skb(struct sk_buff *skb);
int carl9170_tx_put_skb(struct sk_buff *skb);
int carl9170_led_register(struct ar9170 *ar);
void carl9170_led_unregister(struct ar9170 *ar);
int carl9170_led_init(struct ar9170 *ar);
int carl9170_led_set_state(struct ar9170 *ar, const u32 led_state);
int carl9170_set_channel(struct ar9170 *ar, struct ieee80211_channel *channel,
enum nl80211_channel_type bw, enum carl9170_rf_init_mode rfi);
int carl9170_get_noisefloor(struct ar9170 *ar);
int carl9170_parse_firmware(struct ar9170 *ar);
int carl9170_fw_fix_eeprom(struct ar9170 *ar);
extern struct ieee80211_rate __carl9170_ratetable[];
extern int modparam_noht;
static inline struct ar9170 *carl9170_get_priv(struct carl9170_vif *carl_vif)
static inline struct ieee80211_hdr *carl9170_get_hdr(struct sk_buff *skb)
static inline u16 get_seq_h(struct ieee80211_hdr *hdr)
static inline u16 carl9170_get_seq(struct sk_buff *skb)
static inline u16 get_tid_h(struct ieee80211_hdr *hdr)
static inline u16 carl9170_get_tid(struct sk_buff *skb)
static inline struct ieee80211_vif *
carl9170_get_vif(struct carl9170_vif_info *priv)
static inline struct ieee80211_vif *carl9170_get_main_vif(struct ar9170 *ar)
static inline bool is_main_vif(struct ar9170 *ar, struct ieee80211_vif *vif)
