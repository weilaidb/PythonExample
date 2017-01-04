#define __CONF_H__
enum ;
enum ;
enum ;
enum ;
enum ;
struct conf_sg_settings ;
enum conf_rx_queue_type ;
struct conf_rx_settings ;
#define CONF_TX_MAX_RATE_CLASSES       8
#define CONF_TX_RATE_MASK_UNSPECIFIED  0
#define CONF_TX_RATE_MASK_BASIC        (CONF_HW_BIT_RATE_1MBPS | \
CONF_HW_BIT_RATE_2MBPS)
#define CONF_TX_RATE_RETRY_LIMIT       10
#define CONF_TX_AP_ENABLED_RATES       (CONF_HW_BIT_RATE_1MBPS | \
CONF_HW_BIT_RATE_2MBPS | CONF_HW_BIT_RATE_5_5MBPS |      \
CONF_HW_BIT_RATE_6MBPS | CONF_HW_BIT_RATE_9MBPS |        \
CONF_HW_BIT_RATE_11MBPS | CONF_HW_BIT_RATE_12MBPS |      \
CONF_HW_BIT_RATE_18MBPS | CONF_HW_BIT_RATE_24MBPS |      \
CONF_HW_BIT_RATE_36MBPS | CONF_HW_BIT_RATE_48MBPS |      \
CONF_HW_BIT_RATE_54MBPS)
#define CONF_TX_OFDM_RATES (CONF_HW_BIT_RATE_6MBPS |             \
CONF_HW_BIT_RATE_12MBPS | CONF_HW_BIT_RATE_24MBPS |      \
CONF_HW_BIT_RATE_36MBPS | CONF_HW_BIT_RATE_48MBPS |      \
CONF_HW_BIT_RATE_54MBPS)
#define CONF_TX_AP_DEFAULT_MGMT_RATES  (CONF_HW_BIT_RATE_1MBPS | \
CONF_HW_BIT_RATE_2MBPS | CONF_HW_BIT_RATE_5_5MBPS)
#define CONF_TX_IBSS_DEFAULT_RATES  (CONF_HW_BIT_RATE_1MBPS |       \
CONF_HW_BIT_RATE_2MBPS | CONF_HW_BIT_RATE_5_5MBPS | \
CONF_HW_BIT_RATE_11MBPS);
struct conf_tx_rate_class ;
#define CONF_TX_MAX_AC_COUNT 4
#define CONF_TX_AIFS_PIFS 1
#define CONF_TX_AIFS_DIFS 2
enum conf_tx_ac ;
struct conf_tx_ac_category ;
#define CONF_TX_MAX_TID_COUNT 8
enum ;
enum ;
enum ;
struct conf_tx_tid ;
struct conf_tx_settings ;
enum ;
#define CONF_MAX_BCN_FILT_IE_COUNT 32
#define CONF_BCN_RULE_PASS_ON_CHANGE         BIT(0)
#define CONF_BCN_RULE_PASS_ON_APPEARANCE     BIT(1)
#define CONF_BCN_IE_OUI_LEN    3
#define CONF_BCN_IE_VER_LEN    2
struct conf_bcn_filt_rule ;
#define CONF_MAX_RSSI_SNR_TRIGGERS 8
enum ;
enum ;
enum ;
struct conf_sig_weights ;
enum conf_bcn_filt_mode ;
enum conf_bet_mode ;
struct conf_conn_settings ;
enum ;
enum single_dual_band_enum ;
#define CONF_RSSI_AND_PROCESS_COMPENSATION_SIZE 15
#define CONF_NUMBER_OF_SUB_BANDS_5  7
#define CONF_NUMBER_OF_RATE_GROUPS  6
#define CONF_NUMBER_OF_CHANNELS_2_4 14
#define CONF_NUMBER_OF_CHANNELS_5   35
struct conf_itrim_settings ;
struct conf_pm_config_settings ;
struct conf_roam_trigger_settings ;
struct conf_scan_settings ;
struct conf_sched_scan_settings ;
#define CONF_TX_PWR_COMPENSATION_LEN_2 7
#define CONF_TX_PWR_COMPENSATION_LEN_5 18
struct conf_rf_settings ;
struct conf_ht_setting ;
struct conf_memory_settings ;
struct conf_fm_coex ;
struct conf_drv_settings ;
