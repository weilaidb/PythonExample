#define __iwl_dev_h__
struct iwl_tx_queue;
#define CT_KILL_THRESHOLD_LEGACY   110
#define CT_KILL_THRESHOLD	   114
#define CT_KILL_EXIT_THRESHOLD     95
#define IWL_NOISE_MEAS_NOT_AVAILABLE (-127)
#define DEFAULT_RTS_THRESHOLD     2347U
#define MIN_RTS_THRESHOLD         0U
#define MAX_RTS_THRESHOLD         2347U
#define MAX_MSDU_SIZE		  2304U
#define MAX_MPDU_SIZE		  2346U
#define DEFAULT_BEACON_INTERVAL   200U
#define	DEFAULT_SHORT_RETRY_LIMIT 7U
#define	DEFAULT_LONG_RETRY_LIMIT  4U
struct iwl_rx_mem_buffer ;
#define rxb_addr(r) page_address(r->page)
struct iwl_device_cmd;
struct iwl_cmd_meta ;
struct iwl_queue ;
struct iwl_tx_info ;
#define TFD_TX_CMD_SLOTS 256
#define TFD_CMD_SLOTS 32
struct iwl_tx_queue ;
#define IWL_NUM_SCAN_RATES         (2)
struct iwl_channel_info ;
#define IWL_TX_FIFO_BK		0
#define IWL_TX_FIFO_BE		1
#define IWL_TX_FIFO_VI		2
#define IWL_TX_FIFO_VO		3
#define IWL_TX_FIFO_BK_IPAN	IWL_TX_FIFO_BK
#define IWL_TX_FIFO_BE_IPAN	4
#define IWL_TX_FIFO_VI_IPAN	IWL_TX_FIFO_VI
#define IWL_TX_FIFO_VO_IPAN	5
#define IWL_TX_FIFO_UNUSED	-1
#define IWL_MIN_NUM_QUEUES	10
#define IWL_DEFAULT_CMD_QUEUE_NUM	4
#define IWL_IPAN_CMD_QUEUE_NUM		9
#define IWL_IPAN_MCAST_QUEUE		8
#define IEEE80211_DATA_LEN              2304
#define IEEE80211_4ADDR_LEN             30
#define IEEE80211_HLEN                  (IEEE80211_4ADDR_LEN)
#define IEEE80211_FRAME_LEN             (IEEE80211_DATA_LEN + IEEE80211_HLEN)
#define SEQ_TO_SN(seq) (((seq) & IEEE80211_SCTL_SEQ) >> 4)
#define SN_TO_SEQ(ssn) (((ssn) << 4) & IEEE80211_SCTL_SEQ)
#define MAX_SN ((IEEE80211_SCTL_SEQ) >> 4)
enum ;
#define DEF_CMD_PAYLOAD_SIZE 320
struct iwl_device_cmd  __packed;
#define TFD_MAX_PAYLOAD_SIZE (sizeof(struct iwl_device_cmd))
#define IWL_MAX_CMD_TFDS	2
enum iwl_hcmd_dataflag ;
struct iwl_host_cmd ;
#define SUP_RATE_11A_MAX_NUM_CHANNELS  8
#define SUP_RATE_11B_MAX_NUM_CHANNELS  4
#define SUP_RATE_11G_MAX_NUM_CHANNELS  12
struct iwl_rx_queue ;
#define IWL_SUPPORTED_RATES_IE_LEN         8
#define MAX_TID_COUNT        9
#define IWL_INVALID_RATE     0xFF
#define IWL_INVALID_VALUE    -1
struct iwl_ht_agg ;
struct iwl_tid_data ;
struct iwl_hw_key ;
union iwl_ht_rate_supp ;
#define CFG_HT_RX_AMPDU_FACTOR_8K   (0x0)
#define CFG_HT_RX_AMPDU_FACTOR_16K  (0x1)
#define CFG_HT_RX_AMPDU_FACTOR_32K  (0x2)
#define CFG_HT_RX_AMPDU_FACTOR_64K  (0x3)
#define CFG_HT_RX_AMPDU_FACTOR_DEF  CFG_HT_RX_AMPDU_FACTOR_64K
#define CFG_HT_RX_AMPDU_FACTOR_MAX  CFG_HT_RX_AMPDU_FACTOR_64K
#define CFG_HT_RX_AMPDU_FACTOR_MIN  CFG_HT_RX_AMPDU_FACTOR_8K
#define CFG_HT_MPDU_DENSITY_2USEC   (0x4)
#define CFG_HT_MPDU_DENSITY_4USEC   (0x5)
#define CFG_HT_MPDU_DENSITY_8USEC   (0x6)
#define CFG_HT_MPDU_DENSITY_16USEC  (0x7)
#define CFG_HT_MPDU_DENSITY_DEF CFG_HT_MPDU_DENSITY_4USEC
#define CFG_HT_MPDU_DENSITY_MAX CFG_HT_MPDU_DENSITY_16USEC
#define CFG_HT_MPDU_DENSITY_MIN     (0x1)
struct iwl_ht_config ;
struct iwl_qos_info ;
struct iwl_station_entry ;
struct iwl_station_priv_common ;
struct iwl_station_priv ;
struct iwl_vif_priv ;
struct fw_desc ;
struct fw_img ;
struct iwl_ucode_header ;
enum iwl_ucode_tlv_type ;
enum iwl_ucode_tlv_flag ;
struct iwl_ucode_tlv  __packed;
#define IWL_TLV_UCODE_MAGIC	0x0a4c5749
struct iwl_tlv_ucode_header ;
struct iwl_sensitivity_ranges ;
#define KELVIN_TO_CELSIUS(x) ((x)-273)
#define CELSIUS_TO_KELVIN(x) ((x)+273)
struct iwl_hw_params ;
extern void iwl_update_chain_flags(struct iwl_priv *priv);
extern const u8 iwl_bcast_addr[ETH_ALEN];
extern int iwl_rxq_stop(struct iwl_priv *priv);
extern void iwl_txq_ctx_stop(struct iwl_priv *priv);
extern int iwl_queue_space(const struct iwl_queue *q);
static inline int iwl_queue_used(const struct iwl_queue *q, int i)
static inline u8 get_cmd_index(struct iwl_queue *q, u32 index)
struct iwl_dma_ptr ;
#define IWL_OPERATION_MODE_AUTO     0
#define IWL_OPERATION_MODE_HT_ONLY  1
#define IWL_OPERATION_MODE_MIXED    2
#define IWL_OPERATION_MODE_20MHZ    3
#define IWL_TX_CRC_SIZE 4
#define IWL_TX_DELIMITER_SIZE 4
#define TX_POWER_IWL_ILLEGAL_VOLTAGE -10000
#define INITIALIZATION_VALUE		0xFFFF
#define IWL_CAL_NUM_BEACONS		16
#define MAXIMUM_ALLOWED_PATHLOSS	15
#define CHAIN_NOISE_MAX_DELTA_GAIN_CODE 3
#define MAX_FA_OFDM  50
#define MIN_FA_OFDM  5
#define MAX_FA_CCK   50
#define MIN_FA_CCK   5
#define AUTO_CORR_STEP_OFDM       1
#define AUTO_CORR_STEP_CCK     3
#define AUTO_CORR_MAX_TH_CCK   160
#define NRG_DIFF               2
#define NRG_STEP_CCK           2
#define NRG_MARGIN             8
#define MAX_NUMBER_CCK_NO_FA 100
#define AUTO_CORR_CCK_MIN_VAL_DEF    (125)
#define CHAIN_A             0
#define CHAIN_B             1
#define CHAIN_C             2
#define CHAIN_NOISE_DELTA_GAIN_INIT_VAL 4
#define ALL_BAND_FILTER			0xFF00
#define IN_BAND_FILTER			0xFF
#define MIN_AVERAGE_NOISE_MAX_VALUE	0xFFFFFFFF
#define NRG_NUM_PREV_STAT_L     20
#define NUM_RX_CHAINS           3
enum iwlagn_false_alarm_state ;
enum iwlagn_chain_noise_state ;
enum iwl_calib ;
struct iwl_calib_result ;
struct iwl_sensitivity_data ;
struct iwl_chain_noise_data ;
#define	EEPROM_SEM_TIMEOUT 10
#define EEPROM_SEM_RETRY_LIMIT 1000
#define IWL_TRAFFIC_ENTRIES	(256)
#define IWL_TRAFFIC_ENTRY_SIZE  (64)
enum ;
enum iwl_nvm_type ;
enum iwl_access_mode ;
enum iwl_pa_type ;
struct isr_statistics ;
struct reply_tx_error_statistics ;
struct reply_agg_tx_error_statistics ;
enum iwl_mgmt_stats ;
enum iwl_ctrl_stats ;
struct traffic_stats ;
#define UCODE_TRACE_PERIOD (100)
struct iwl_event_log ;
#define IWL_HOST_INT_TIMEOUT_MAX	(0xFF)
#define IWL_HOST_INT_TIMEOUT_DEF	(0x40)
#define IWL_HOST_INT_TIMEOUT_MIN	(0x0)
#define IWL_HOST_INT_CALIB_TIMEOUT_MAX	(0xFF)
#define IWL_HOST_INT_CALIB_TIMEOUT_DEF	(0x10)
#define IWL_HOST_INT_CALIB_TIMEOUT_MIN	(0x0)
#define IWL_MAX_PLCP_ERR_THRESHOLD_MIN	(1)
#define IWL_MAX_PLCP_ERR_THRESHOLD_DEF	(50)
#define IWL_MAX_PLCP_ERR_LONG_THRESHOLD_DEF	(100)
#define IWL_MAX_PLCP_ERR_EXT_LONG_THRESHOLD_DEF	(200)
#define IWL_MAX_PLCP_ERR_THRESHOLD_MAX	(255)
#define IWL_MAX_PLCP_ERR_THRESHOLD_DISABLE	(0)
#define IWL_DELAY_NEXT_FORCE_RF_RESET  (HZ*3)
#define IWL_DELAY_NEXT_FORCE_FW_RELOAD (HZ*5)
#define IWL_DEF_WD_TIMEOUT	(2000)
#define IWL_LONG_WD_TIMEOUT	(10000)
#define IWL_MAX_WD_TIMEOUT	(120000)
#define IWL_BT_ANTENNA_COUPLING_THRESHOLD	(35)
#define IWL_MIN_RELOAD_DURATION		1000
#define IWL_MAX_CONTINUE_RELOAD_CNT	4
enum iwl_reset ;
struct iwl_force_reset ;
#define IWLAGN_EXT_BEACON_TIME_POS	22
struct iwl_notification_wait ;
enum iwl_rxon_context_id ;
struct iwl_rxon_context ;
enum iwl_scan_type ;
struct iwl_testmode_trace ;
struct iwl_priv ;
static inline void iwl_txq_ctx_activate(struct iwl_priv *priv, int txq_id)
static inline void iwl_txq_ctx_deactivate(struct iwl_priv *priv, int txq_id)
static inline u32 iwl_get_debug_level(struct iwl_priv *priv)
static inline u32 iwl_get_debug_level(struct iwl_priv *priv)
static inline struct ieee80211_hdr *iwl_tx_queue_get_hdr(struct iwl_priv *priv,
int txq_id, int idx)
static inline struct iwl_rxon_context *
iwl_rxon_ctx_from_vif(struct ieee80211_vif *vif)
#define for_each_context(priv, ctx)				\
for (ctx = &priv->contexts[IWL_RXON_CTX_BSS];		\
ctx < &priv->contexts[NUM_IWL_RXON_CTX]; ctx++)	\
if (priv->valid_contexts & BIT(ctx->ctxid))
static inline int iwl_is_associated_ctx(struct iwl_rxon_context *ctx)
static inline int iwl_is_associated(struct iwl_priv *priv,
enum iwl_rxon_context_id ctxid)
static inline int iwl_is_any_associated(struct iwl_priv *priv)
static inline int is_channel_valid(const struct iwl_channel_info *ch_info)
static inline int is_channel_radar(const struct iwl_channel_info *ch_info)
static inline u8 is_channel_a_band(const struct iwl_channel_info *ch_info)
static inline u8 is_channel_bg_band(const struct iwl_channel_info *ch_info)
static inline int is_channel_passive(const struct iwl_channel_info *ch)
static inline int is_channel_ibss(const struct iwl_channel_info *ch)
static inline void __iwl_free_pages(struct iwl_priv *priv, struct page *page)
static inline void iwl_free_pages(struct iwl_priv *priv, unsigned long page)
