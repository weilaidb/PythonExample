#define DRIVER_MAJOR 0
#define DRIVER_MINOR 98
MODULE_AUTHOR("Simon Kelley");
MODULE_DESCRIPTION("Support for Atmel at76c50x 802.11 wireless ethernet cards.");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("Atmel at76c50x wireless cards");
static char *firmware = NULL;
module_param(firmware, charp, 0);
static struct  fw_table[] = ;
MODULE_FIRMWARE("atmel_at76c502-wpa.bin");
MODULE_FIRMWARE("atmel_at76c502.bin");
MODULE_FIRMWARE("atmel_at76c502d-wpa.bin");
MODULE_FIRMWARE("atmel_at76c502d.bin");
MODULE_FIRMWARE("atmel_at76c502e-wpa.bin");
MODULE_FIRMWARE("atmel_at76c502e.bin");
MODULE_FIRMWARE("atmel_at76c502_3com-wpa.bin");
MODULE_FIRMWARE("atmel_at76c502_3com.bin");
MODULE_FIRMWARE("atmel_at76c504-wpa.bin");
MODULE_FIRMWARE("atmel_at76c504.bin");
MODULE_FIRMWARE("atmel_at76c504_2958-wpa.bin");
MODULE_FIRMWARE("atmel_at76c504_2958.bin");
MODULE_FIRMWARE("atmel_at76c504a_2958-wpa.bin");
MODULE_FIRMWARE("atmel_at76c504a_2958.bin");
MODULE_FIRMWARE("atmel_at76c506-wpa.bin");
MODULE_FIRMWARE("atmel_at76c506.bin");
#define MAX_SSID_LENGTH 32
#define MGMT_JIFFIES (256 * HZ / 100)
#define MAX_BSS_ENTRIES	64
#define GCR  0x00
#define BSR  0x02
#define AR   0x04
#define DR   0x08
#define MR1  0x12
#define MR2  0x14
#define MR3  0x16
#define MR4  0x18
#define GPR1                            0x0c
#define GPR2                            0x0e
#define GPR3                            0x10
#define GCR_REMAP     0x0400
#define GCR_SWRES     0x0080
#define GCR_CORES     0x0060
#define GCR_ENINT     0x0002
#define GCR_ACKINT    0x0008
#define BSS_SRAM      0x0200
#define BSS_IRAM      0x0100
#define MAC_INIT_COMPLETE       0x0001
#define MAC_BOOT_COMPLETE       0x0010
#define MAC_INIT_OK             0x0002
#define MIB_MAX_DATA_BYTES    212
#define MIB_HEADER_SIZE       4
struct get_set_mib ;
struct rx_desc ;
#define RX_DESC_FLAG_VALID       0x80
#define RX_DESC_FLAG_CONSUMED    0x40
#define RX_DESC_FLAG_IDLE        0x00
#define RX_STATUS_SUCCESS        0x00
#define RX_DESC_MSDU_POS_OFFSET      4
#define RX_DESC_MSDU_SIZE_OFFSET     6
#define RX_DESC_FLAGS_OFFSET         8
#define RX_DESC_STATUS_OFFSET        9
#define RX_DESC_RSSI_OFFSET          11
#define RX_DESC_LINK_QUALITY_OFFSET  12
#define RX_DESC_PREAMBLE_TYPE_OFFSET 13
#define RX_DESC_DURATION_OFFSET      14
#define RX_DESC_RX_TIME_OFFSET       16
struct tx_desc ;
#define TX_DESC_NEXT_OFFSET          0
#define TX_DESC_POS_OFFSET           4
#define TX_DESC_SIZE_OFFSET          6
#define TX_DESC_FLAGS_OFFSET         8
#define TX_DESC_STATUS_OFFSET        9
#define TX_DESC_RETRY_OFFSET         10
#define TX_DESC_RATE_OFFSET          11
#define TX_DESC_KEY_INDEX_OFFSET     12
#define TX_DESC_CIPHER_TYPE_OFFSET   13
#define TX_DESC_CIPHER_LENGTH_OFFSET 14
#define TX_DESC_PACKET_TYPE_OFFSET   17
#define TX_DESC_HOST_LENGTH_OFFSET   18
#define TX_STATUS_SUCCESS       0x00
#define TX_FIRM_OWN             0x80
#define TX_DONE                 0x40
#define TX_ERROR                0x01
#define TX_PACKET_TYPE_DATA     0x01
#define TX_PACKET_TYPE_MGMT     0x02
#define ISR_EMPTY               0x00
#define ISR_TxCOMPLETE          0x01
#define ISR_RxCOMPLETE          0x02
#define ISR_RxFRAMELOST         0x04
#define ISR_FATAL_ERROR         0x08
#define ISR_COMMAND_COMPLETE    0x10
#define ISR_OUT_OF_RANGE        0x20
#define ISR_IBSS_MERGE          0x40
#define ISR_GENERIC_IRQ         0x80
#define Local_Mib_Type          0x01
#define Mac_Address_Mib_Type    0x02
#define Mac_Mib_Type            0x03
#define Statistics_Mib_Type     0x04
#define Mac_Mgmt_Mib_Type       0x05
#define Mac_Wep_Mib_Type        0x06
#define Phy_Mib_Type            0x07
#define Multi_Domain_MIB        0x08
#define MAC_MGMT_MIB_CUR_BSSID_POS            14
#define MAC_MIB_FRAG_THRESHOLD_POS            8
#define MAC_MIB_RTS_THRESHOLD_POS             10
#define MAC_MIB_SHORT_RETRY_POS               16
#define MAC_MIB_LONG_RETRY_POS                17
#define MAC_MIB_SHORT_RETRY_LIMIT_POS         16
#define MAC_MGMT_MIB_BEACON_PER_POS           0
#define MAC_MGMT_MIB_STATION_ID_POS           6
#define MAC_MGMT_MIB_CUR_PRIVACY_POS          11
#define MAC_MGMT_MIB_CUR_BSSID_POS            14
#define MAC_MGMT_MIB_PS_MODE_POS              53
#define MAC_MGMT_MIB_LISTEN_INTERVAL_POS      54
#define MAC_MGMT_MIB_MULTI_DOMAIN_IMPLEMENTED 56
#define MAC_MGMT_MIB_MULTI_DOMAIN_ENABLED     57
#define PHY_MIB_CHANNEL_POS                   14
#define PHY_MIB_RATE_SET_POS                  20
#define PHY_MIB_REG_DOMAIN_POS                26
#define LOCAL_MIB_AUTO_TX_RATE_POS            3
#define LOCAL_MIB_SSID_SIZE                   5
#define LOCAL_MIB_TX_PROMISCUOUS_POS          6
#define LOCAL_MIB_TX_MGMT_RATE_POS            7
#define LOCAL_MIB_TX_CONTROL_RATE_POS         8
#define LOCAL_MIB_PREAMBLE_TYPE               9
#define MAC_ADDR_MIB_MAC_ADDR_POS             0
#define         CMD_Set_MIB_Vars              0x01
#define         CMD_Get_MIB_Vars              0x02
#define         CMD_Scan                      0x03
#define         CMD_Join                      0x04
#define         CMD_Start                     0x05
#define         CMD_EnableRadio               0x06
#define         CMD_DisableRadio              0x07
#define         CMD_SiteSurvey                0x0B
#define         CMD_STATUS_IDLE                   0x00
#define         CMD_STATUS_COMPLETE               0x01
#define         CMD_STATUS_UNKNOWN                0x02
#define         CMD_STATUS_INVALID_PARAMETER      0x03
#define         CMD_STATUS_FUNCTION_NOT_SUPPORTED 0x04
#define         CMD_STATUS_TIME_OUT               0x07
#define         CMD_STATUS_IN_PROGRESS            0x08
#define         CMD_STATUS_REJECTED_RADIO_OFF     0x09
#define         CMD_STATUS_HOST_ERROR             0xFF
#define         CMD_STATUS_BUSY                   0xFE
#define CMD_BLOCK_COMMAND_OFFSET        0
#define CMD_BLOCK_STATUS_OFFSET         1
#define CMD_BLOCK_PARAMETERS_OFFSET     4
#define SCAN_OPTIONS_SITE_SURVEY        0x80
#define MGMT_FRAME_BODY_OFFSET		24
#define MAX_AUTHENTICATION_RETRIES	3
#define MAX_ASSOCIATION_RETRIES		3
#define AUTHENTICATION_RESPONSE_TIME_OUT  1000
#define MAX_WIRELESS_BODY  2316
#define LOOP_RETRY_LIMIT   500000
#define ACTIVE_MODE	1
#define PS_MODE		2
#define MAX_ENCRYPTION_KEYS 4
#define MAX_ENCRYPTION_KEY_SIZE 40
#define REG_DOMAIN_FCC		0x10
#define REG_DOMAIN_DOC		0x20
#define REG_DOMAIN_ETSI		0x30
#define REG_DOMAIN_SPAIN	0x31
#define REG_DOMAIN_FRANCE	0x32
#define REG_DOMAIN_MKK		0x40
#define REG_DOMAIN_MKK1		0x41
#define REG_DOMAIN_ISRAEL	0x50
#define BSS_TYPE_AD_HOC		1
#define BSS_TYPE_INFRASTRUCTURE 2
#define SCAN_TYPE_ACTIVE	0
#define SCAN_TYPE_PASSIVE	1
#define LONG_PREAMBLE		0
#define SHORT_PREAMBLE		1
#define AUTO_PREAMBLE		2
#define DATA_FRAME_WS_HEADER_SIZE   30
#define PROM_MODE_OFF			0x0
#define PROM_MODE_UNKNOWN		0x1
#define PROM_MODE_CRC_FAILED		0x2
#define PROM_MODE_DUPLICATED		0x4
#define PROM_MODE_MGMT			0x8
#define PROM_MODE_CTRL			0x10
#define PROM_MODE_BAD_PROTOCOL		0x20
#define IFACE_INT_STATUS_OFFSET		0
#define IFACE_INT_MASK_OFFSET		1
#define IFACE_LOCKOUT_HOST_OFFSET	2
#define IFACE_LOCKOUT_MAC_OFFSET	3
#define IFACE_FUNC_CTRL_OFFSET		28
#define IFACE_MAC_STAT_OFFSET		30
#define IFACE_GENERIC_INT_TYPE_OFFSET	32
#define CIPHER_SUITE_NONE     0
#define CIPHER_SUITE_WEP_64   1
#define CIPHER_SUITE_TKIP     2
#define CIPHER_SUITE_AES      3
#define CIPHER_SUITE_CCX      4
#define CIPHER_SUITE_WEP_128  5
#define FUNC_CTRL_TxENABLE		0x10
#define FUNC_CTRL_RxENABLE		0x20
#define FUNC_CTRL_INIT_COMPLETE		0x01
static u8 mac_reader[] = ;
struct atmel_private ;
static u8 atmel_basic_rates[4] = ;
static const struct  channel_table[] = ;
static void build_wpa_mib(struct atmel_private *priv);
static int atmel_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static void atmel_copy_to_card(struct net_device *dev, u16 dest,
const unsigned char *src, u16 len);
static void atmel_copy_to_host(struct net_device *dev, unsigned char *dest,
u16 src, u16 len);
static void atmel_set_gcr(struct net_device *dev, u16 mask);
static void atmel_clear_gcr(struct net_device *dev, u16 mask);
static int atmel_lock_mac(struct atmel_private *priv);
static void atmel_wmem32(struct atmel_private *priv, u16 pos, u32 data);
static void atmel_command_irq(struct atmel_private *priv);
static int atmel_validate_channel(struct atmel_private *priv, int channel);
static void atmel_management_frame(struct atmel_private *priv,
struct ieee80211_hdr *header,
u16 frame_len, u8 rssi);
static void atmel_management_timer(u_long a);
static void atmel_send_command(struct atmel_private *priv, int command,
void *cmd, int cmd_size);
static int atmel_send_command_wait(struct atmel_private *priv, int command,
void *cmd, int cmd_size);
static void atmel_transmit_management_frame(struct atmel_private *priv,
struct ieee80211_hdr *header,
u8 *body, int body_len);
static u8 atmel_get_mib8(struct atmel_private *priv, u8 type, u8 index);
static void atmel_set_mib8(struct atmel_private *priv, u8 type, u8 index,
u8 data);
static void atmel_set_mib16(struct atmel_private *priv, u8 type, u8 index,
u16 data);
static void atmel_set_mib(struct atmel_private *priv, u8 type, u8 index,
u8 *data, int data_len);
static void atmel_get_mib(struct atmel_private *priv, u8 type, u8 index,
u8 *data, int data_len);
static void atmel_scan(struct atmel_private *priv, int specific_ssid);
static void atmel_join_bss(struct atmel_private *priv, int bss_index);
static void atmel_smooth_qual(struct atmel_private *priv);
static void atmel_writeAR(struct net_device *dev, u16 data);
static int probe_atmel_card(struct net_device *dev);
static int reset_atmel_card(struct net_device *dev);
static void atmel_enter_state(struct atmel_private *priv, int new_state);
int atmel_open (struct net_device *dev);
static inline u16 atmel_hi(struct atmel_private *priv, u16 offset)
static inline u16 atmel_co(struct atmel_private *priv, u16 offset)
static inline u16 atmel_rx(struct atmel_private *priv, u16 offset, u16 desc)
static inline u16 atmel_tx(struct atmel_private *priv, u16 offset, u16 desc)
static inline u8 atmel_read8(struct net_device *dev, u16 offset)
static inline void atmel_write8(struct net_device *dev, u16 offset, u8 data)
static inline u16 atmel_read16(struct net_device *dev, u16 offset)
static inline void atmel_write16(struct net_device *dev, u16 offset, u16 data)
static inline u8 atmel_rmem8(struct atmel_private *priv, u16 pos)
static inline void atmel_wmem8(struct atmel_private *priv, u16 pos, u16 data)
static inline u16 atmel_rmem16(struct atmel_private *priv, u16 pos)
static inline void atmel_wmem16(struct atmel_private *priv, u16 pos, u16 data)
static const struct iw_handler_def atmel_handler_def;
static void tx_done_irq(struct atmel_private *priv)
static u16 find_tx_buff(struct atmel_private *priv, u16 len)
static void tx_update_descriptor(struct atmel_private *priv, int is_bcast,
u16 len, u16 buff, u8 type)
static netdev_tx_t start_tx(struct sk_buff *skb, struct net_device *dev)
static void atmel_transmit_management_frame(struct atmel_private *priv,
struct ieee80211_hdr *header,
u8 *body, int body_len)
static void fast_rx_path(struct atmel_private *priv,
struct ieee80211_hdr *header,
u16 msdu_size, u16 rx_packet_loc, u32 crc)
static int probe_crc(struct atmel_private *priv, u16 packet_loc, u16 msdu_size)
static void frag_rx_path(struct atmel_private *priv,
struct ieee80211_hdr *header,
u16 msdu_size, u16 rx_packet_loc, u32 crc, u16 seq_no,
u8 frag_no, int more_frags)
static void rx_done_irq(struct atmel_private *priv)
static irqreturn_t service_interrupt(int irq, void *dev_id)
static struct iw_statistics *atmel_get_wireless_stats(struct net_device *dev)
static int atmel_change_mtu(struct net_device *dev, int new_mtu)
static int atmel_set_mac_address(struct net_device *dev, void *p)
EXPORT_SYMBOL(atmel_open);
int atmel_open(struct net_device *dev)
static int atmel_close(struct net_device *dev)
static int atmel_validate_channel(struct atmel_private *priv, int channel)
static int atmel_proc_output (char *buf, struct atmel_private *priv)
static int atmel_read_proc(char *page, char **start, off_t off,
int count, int *eof, void *data)
static const struct net_device_ops atmel_netdev_ops = ;
struct net_device *init_atmel_card(unsigned short irq, unsigned long port,
const AtmelFWType fw_type,
struct device *sys_dev,
int (*card_present)(void *), void *card)
EXPORT_SYMBOL(init_atmel_card);
void stop_atmel_card(struct net_device *dev)
EXPORT_SYMBOL(stop_atmel_card);
static int atmel_set_essid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static int atmel_get_essid(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static int atmel_get_wap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *awrq,
char *extra)
static int atmel_set_encode(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static int atmel_get_encode(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static int atmel_set_encodeext(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu,
char *extra)
static int atmel_get_encodeext(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu,
char *extra)
static int atmel_set_auth(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int atmel_get_auth(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int atmel_get_name(struct net_device *dev,
struct iw_request_info *info,
char *cwrq,
char *extra)
static int atmel_set_rate(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int atmel_set_mode(struct net_device *dev,
struct iw_request_info *info,
__u32 *uwrq,
char *extra)
static int atmel_get_mode(struct net_device *dev,
struct iw_request_info *info,
__u32 *uwrq,
char *extra)
static int atmel_get_rate(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int atmel_set_power(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int atmel_get_power(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int atmel_set_retry(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int atmel_get_retry(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int atmel_set_rts(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int atmel_get_rts(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int atmel_set_frag(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int atmel_get_frag(struct net_device *dev,
struct iw_request_info *info,
struct iw_param *vwrq,
char *extra)
static int atmel_set_freq(struct net_device *dev,
struct iw_request_info *info,
struct iw_freq *fwrq,
char *extra)
static int atmel_get_freq(struct net_device *dev,
struct iw_request_info *info,
struct iw_freq *fwrq,
char *extra)
static int atmel_set_scan(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static int atmel_get_scan(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static int atmel_get_range(struct net_device *dev,
struct iw_request_info *info,
struct iw_point *dwrq,
char *extra)
static int atmel_set_wap(struct net_device *dev,
struct iw_request_info *info,
struct sockaddr *awrq,
char *extra)
static int atmel_config_commit(struct net_device *dev,
struct iw_request_info *info,
void *zwrq,
char *extra)
static const iw_handler atmel_handler[] =
;
static const iw_handler atmel_private_handler[] =
;
typedef struct atmel_priv_ioctl  atmel_priv_ioctl;
#define ATMELFWL	SIOCIWFIRSTPRIV
#define ATMELIDIFC	ATMELFWL + 1
#define ATMELRD		ATMELFWL + 2
#define ATMELMAGIC 0x51807
#define REGDOMAINSZ 20
static const struct iw_priv_args atmel_private_args[] = ;
static const struct iw_handler_def atmel_handler_def = ;
static int atmel_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
struct auth_body ;
static void atmel_enter_state(struct atmel_private *priv, int new_state)
static void atmel_scan(struct atmel_private *priv, int specific_ssid)
static void join(struct atmel_private *priv, int type)
static void start(struct atmel_private *priv, int type)
static void handle_beacon_probe(struct atmel_private *priv, u16 capability,
u8 channel)
static void send_authentication_request(struct atmel_private *priv, u16 system,
u8 *challenge, int challenge_len)
static void send_association_request(struct atmel_private *priv, int is_reassoc)
static int is_frame_from_current_bss(struct atmel_private *priv,
struct ieee80211_hdr *header)
static int retrieve_bss(struct atmel_private *priv)
static void store_bss_info(struct atmel_private *priv,
struct ieee80211_hdr *header, u16 capability,
u16 beacon_period, u8 channel, u8 rssi, u8 ssid_len,
u8 *ssid, int is_beacon)
static void authenticate(struct atmel_private *priv, u16 frame_len)
static void associate(struct atmel_private *priv, u16 frame_len, u16 subtype)
static void atmel_join_bss(struct atmel_private *priv, int bss_index)
static void restart_search(struct atmel_private *priv)
static void smooth_rssi(struct atmel_private *priv, u8 rssi)
static void atmel_smooth_qual(struct atmel_private *priv)
static void atmel_management_frame(struct atmel_private *priv,
struct ieee80211_hdr *header,
u16 frame_len, u8 rssi)
static void atmel_management_timer(u_long a)
static void atmel_command_irq(struct atmel_private *priv)
static int atmel_wakeup_firmware(struct atmel_private *priv)
static int probe_atmel_card(struct net_device *dev)
static void build_wep_mib(struct atmel_private *priv)
static void build_wpa_mib(struct atmel_private *priv)
static int reset_atmel_card(struct net_device *dev)
static void atmel_send_command(struct atmel_private *priv, int command,
void *cmd, int cmd_size)
static int atmel_send_command_wait(struct atmel_private *priv, int command,
void *cmd, int cmd_size)
static u8 atmel_get_mib8(struct atmel_private *priv, u8 type, u8 index)
static void atmel_set_mib8(struct atmel_private *priv, u8 type, u8 index, u8 data)
static void atmel_set_mib16(struct atmel_private *priv, u8 type, u8 index,
u16 data)
static void atmel_set_mib(struct atmel_private *priv, u8 type, u8 index,
u8 *data, int data_len)
static void atmel_get_mib(struct atmel_private *priv, u8 type, u8 index,
u8 *data, int data_len)
static void atmel_writeAR(struct net_device *dev, u16 data)
static void atmel_copy_to_card(struct net_device *dev, u16 dest,
const unsigned char *src, u16 len)
static void atmel_copy_to_host(struct net_device *dev, unsigned char *dest,
u16 src, u16 len)
static void atmel_set_gcr(struct net_device *dev, u16 mask)
static void atmel_clear_gcr(struct net_device *dev, u16 mask)
static int atmel_lock_mac(struct atmel_private *priv)
static void atmel_wmem32(struct atmel_private *priv, u16 pos, u32 data)
