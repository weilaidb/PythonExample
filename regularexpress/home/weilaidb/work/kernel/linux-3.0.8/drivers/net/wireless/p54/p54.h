#define P54_H
#define ISL38XX_DEV_FIRMWARE_ADDR 0x20000
#define BR_CODE_MIN			0x80000000
#define BR_CODE_COMPONENT_ID		0x80000001
#define BR_CODE_COMPONENT_VERSION	0x80000002
#define BR_CODE_DEPENDENT_IF		0x80000003
#define BR_CODE_EXPOSED_IF		0x80000004
#define BR_CODE_DESCR			0x80000101
#define BR_CODE_MAX			0x8FFFFFFF
#define BR_CODE_END_OF_BRA		0xFF0000FF
#define LEGACY_BR_CODE_END_OF_BRA	0xFFFFFFFF
struct bootrec  __packed;
#define BR_INTERFACE_ROLE_SERVER	0x0000
#define BR_INTERFACE_ROLE_CLIENT	0x8000
#define BR_DESC_PRIV_CAP_WEP		BIT(0)
#define BR_DESC_PRIV_CAP_TKIP		BIT(1)
#define BR_DESC_PRIV_CAP_MICHAEL	BIT(2)
#define BR_DESC_PRIV_CAP_CCX_CP		BIT(3)
#define BR_DESC_PRIV_CAP_CCX_MIC	BIT(4)
#define BR_DESC_PRIV_CAP_AESCCMP	BIT(5)
struct bootrec_desc  __packed;
#define FW_FMAC 0x464d4143
#define FW_LM86 0x4c4d3836
#define FW_LM87 0x4c4d3837
#define FW_LM20 0x4c4d3230
struct bootrec_comp_id  __packed;
struct bootrec_comp_ver  __packed;
struct bootrec_end  __packed;
#define P54_TX_INFO_DATA_SIZE		16
struct p54_tx_info ;
#define P54_MAX_CTRL_FRAME_LEN		0x1000
#define P54_SET_QUEUE(queue, ai_fs, cw_min, cw_max, _txop)	\
do  while (0)
struct p54_edcf_queue_param  __packed;
struct p54_rssi_db_entry ;
struct p54_cal_database ;
#define EEPROM_READBACK_LEN 0x3fc
enum fw_state ;
#define P54_LED_MAX_NAME_LEN 31
struct p54_led_dev ;
struct p54_tx_queue_stats ;
struct p54_common ;
int p54_rx(struct ieee80211_hw *dev, struct sk_buff *skb);
void p54_free_skb(struct ieee80211_hw *dev, struct sk_buff *skb);
int p54_parse_firmware(struct ieee80211_hw *dev, const struct firmware *fw);
int p54_parse_eeprom(struct ieee80211_hw *dev, void *eeprom, int len);
int p54_read_eeprom(struct ieee80211_hw *dev);
struct ieee80211_hw *p54_init_common(size_t priv_data_len);
int p54_register_common(struct ieee80211_hw *dev, struct device *pdev);
void p54_free_common(struct ieee80211_hw *dev);
void p54_unregister_common(struct ieee80211_hw *dev);
