#define _LBS_TYPES_H_
struct ieee_ie_header  __packed;
struct ieee_ie_cf_param_set  __packed;
struct ieee_ie_ibss_param_set  __packed;
union ieee_ss_param_set  __packed;
struct ieee_ie_fh_param_set  __packed;
struct ieee_ie_ds_param_set  __packed;
union ieee_phy_param_set  __packed;
#define PROPRIETARY_TLV_BASE_ID		0x0100
#define MRVL_TERMINATE_TLV_ID		0xffff
#define TLV_TYPE_SSID				0x0000
#define TLV_TYPE_RATES				0x0001
#define TLV_TYPE_PHY_FH				0x0002
#define TLV_TYPE_PHY_DS				0x0003
#define TLV_TYPE_CF				    0x0004
#define TLV_TYPE_IBSS				0x0006
#define TLV_TYPE_DOMAIN				0x0007
#define TLV_TYPE_POWER_CAPABILITY	0x0021
#define TLV_TYPE_KEY_MATERIAL       (PROPRIETARY_TLV_BASE_ID + 0)
#define TLV_TYPE_CHANLIST           (PROPRIETARY_TLV_BASE_ID + 1)
#define TLV_TYPE_NUMPROBES          (PROPRIETARY_TLV_BASE_ID + 2)
#define TLV_TYPE_RSSI_LOW           (PROPRIETARY_TLV_BASE_ID + 4)
#define TLV_TYPE_SNR_LOW            (PROPRIETARY_TLV_BASE_ID + 5)
#define TLV_TYPE_FAILCOUNT          (PROPRIETARY_TLV_BASE_ID + 6)
#define TLV_TYPE_BCNMISS            (PROPRIETARY_TLV_BASE_ID + 7)
#define TLV_TYPE_LED_GPIO           (PROPRIETARY_TLV_BASE_ID + 8)
#define TLV_TYPE_LEDBEHAVIOR        (PROPRIETARY_TLV_BASE_ID + 9)
#define TLV_TYPE_PASSTHROUGH        (PROPRIETARY_TLV_BASE_ID + 10)
#define TLV_TYPE_REASSOCAP          (PROPRIETARY_TLV_BASE_ID + 11)
#define TLV_TYPE_POWER_TBL_2_4GHZ   (PROPRIETARY_TLV_BASE_ID + 12)
#define TLV_TYPE_POWER_TBL_5GHZ     (PROPRIETARY_TLV_BASE_ID + 13)
#define TLV_TYPE_BCASTPROBE	    (PROPRIETARY_TLV_BASE_ID + 14)
#define TLV_TYPE_NUMSSID_PROBE	    (PROPRIETARY_TLV_BASE_ID + 15)
#define TLV_TYPE_WMMQSTATUS   	    (PROPRIETARY_TLV_BASE_ID + 16)
#define TLV_TYPE_CRYPTO_DATA	    (PROPRIETARY_TLV_BASE_ID + 17)
#define TLV_TYPE_WILDCARDSSID	    (PROPRIETARY_TLV_BASE_ID + 18)
#define TLV_TYPE_TSFTIMESTAMP	    (PROPRIETARY_TLV_BASE_ID + 19)
#define TLV_TYPE_RSSI_HIGH          (PROPRIETARY_TLV_BASE_ID + 22)
#define TLV_TYPE_SNR_HIGH           (PROPRIETARY_TLV_BASE_ID + 23)
#define TLV_TYPE_AUTH_TYPE          (PROPRIETARY_TLV_BASE_ID + 31)
#define TLV_TYPE_MESH_ID            (PROPRIETARY_TLV_BASE_ID + 37)
#define TLV_TYPE_OLD_MESH_ID        (PROPRIETARY_TLV_BASE_ID + 291)
struct mrvl_ie_header  __packed;
struct mrvl_ie_data  __packed;
struct mrvl_ie_rates_param_set  __packed;
struct mrvl_ie_ssid_param_set  __packed;
struct mrvl_ie_wildcard_ssid_param_set  __packed;
struct chanscanmode  __packed;
struct chanscanparamset  __packed;
struct mrvl_ie_chanlist_param_set  __packed;
struct mrvl_ie_cf_param_set  __packed;
struct mrvl_ie_ds_param_set  __packed;
struct mrvl_ie_rsn_param_set  __packed;
struct mrvl_ie_tsf_timestamp  __packed;
struct mrvl_ie_auth_type  __packed;
struct mrvl_ie_power_capability  __packed;
struct mrvl_ie_thresholds  __packed;
struct mrvl_ie_beacons_missed  __packed;
struct mrvl_ie_num_probes  __packed;
struct mrvl_ie_bcast_probe  __packed;
struct mrvl_ie_num_ssid_probe  __packed;
struct led_pin  __packed;
struct mrvl_ie_ledgpio  __packed;
struct led_bhv  __packed;
struct mrvl_ie_ledbhv  __packed;
struct mrvl_meshie_val  __packed;
struct mrvl_meshie  __packed;
struct mrvl_mesh_defaults  __packed;
