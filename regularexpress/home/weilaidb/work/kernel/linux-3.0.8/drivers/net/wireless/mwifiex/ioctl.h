#define _MWIFIEX_IOCTL_H_
enum ;
struct mwifiex_user_scan ;
#define MWIFIEX_PROMISC_MODE            1
#define MWIFIEX_MULTICAST_MODE		2
#define	MWIFIEX_ALL_MULTI_MODE		4
#define MWIFIEX_MAX_MULTICAST_LIST_SIZE	32
struct mwifiex_multicast_list ;
struct mwifiex_chan_freq ;
struct mwifiex_ssid_bssid ;
enum ;
#define NO_SEC_CHANNEL               0
#define SEC_CHANNEL_ABOVE            1
#define SEC_CHANNEL_BELOW            3
struct mwifiex_ds_band_cfg ;
enum ;
struct mwifiex_ds_get_stats ;
#define BCN_RSSI_AVG_MASK               0x00000002
#define BCN_NF_AVG_MASK                 0x00000200
#define ALL_RSSI_INFO_MASK              0x00000fff
struct mwifiex_ds_get_signal ;
#define MWIFIEX_MAX_VER_STR_LEN    128
struct mwifiex_ver_ext ;
struct mwifiex_bss_info ;
#define MAX_NUM_TID     8
#define MAX_RX_WINSIZE  64
struct mwifiex_ds_rx_reorder_tbl ;
struct mwifiex_ds_tx_ba_stream_tbl ;
#define DBG_CMD_NUM	5
struct mwifiex_debug_info ;
#define MWIFIEX_KEY_INDEX_UNICAST	0x40000000
#define WAPI_RXPN_LEN			16
struct mwifiex_ds_encrypt_key ;
struct mwifiex_rate_cfg ;
struct mwifiex_power_cfg ;
struct mwifiex_ds_hs_cfg ;
#define DEEP_SLEEP_ON  1
#define DEEP_SLEEP_IDLE_TIME	100
#define PS_MODE_AUTO		1
struct mwifiex_ds_auto_ds ;
struct mwifiex_ds_pm_cfg ;
struct mwifiex_ds_11n_tx_cfg ;
struct mwifiex_ds_11n_amsdu_aggr_ctrl ;
#define MWIFIEX_NUM_OF_CMD_BUFFER	20
#define MWIFIEX_SIZE_OF_CMD_BUFFER	2048
enum ;
enum ;
struct mwifiex_ds_reg_rw ;
#define MAX_EEPROM_DATA 256
struct mwifiex_ds_read_eeprom ;
struct mwifiex_ds_misc_gen_ie ;
struct mwifiex_ds_misc_cmd ;
#define MWIFIEX_MAX_VSIE_LEN       (256)
#define MWIFIEX_MAX_VSIE_NUM       (8)
#define MWIFIEX_VSIE_MASK_SCAN     0x01
#define MWIFIEX_VSIE_MASK_ASSOC    0x02
#define MWIFIEX_VSIE_MASK_ADHOC    0x04
enum ;
