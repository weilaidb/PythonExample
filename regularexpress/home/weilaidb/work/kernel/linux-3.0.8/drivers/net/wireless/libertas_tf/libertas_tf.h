#define DRV_NAME "libertas_tf"
#define	MRVL_DEFAULT_RETRIES			9
#define MRVL_PER_PACKET_RATE			0x10
#define MRVL_MAX_BCN_SIZE			440
#define CMD_OPTION_WAITFORRSP			0x0002
#define CMD_RET(cmd)			(0x8000 | cmd)
#define CMD_GET_HW_SPEC				0x0003
#define CMD_802_11_RESET			0x0005
#define CMD_MAC_MULTICAST_ADR			0x0010
#define CMD_802_11_RADIO_CONTROL		0x001c
#define CMD_802_11_RF_CHANNEL			0x001d
#define CMD_802_11_RF_TX_POWER			0x001e
#define CMD_MAC_CONTROL				0x0028
#define CMD_802_11_MAC_ADDRESS			0x004d
#define	CMD_SET_BOOT2_VER			0x00a5
#define CMD_802_11_BEACON_CTRL			0x00b0
#define CMD_802_11_BEACON_SET			0x00cb
#define CMD_802_11_SET_MODE			0x00cc
#define CMD_802_11_SET_BSSID			0x00cd
#define CMD_ACT_GET			0x0000
#define CMD_ACT_SET			0x0001
#define CMD_ACT_HALT			0x0003
#define CMD_ACT_MAC_RX_ON			0x0001
#define CMD_ACT_MAC_TX_ON			0x0002
#define CMD_ACT_MAC_MULTICAST_ENABLE		0x0020
#define CMD_ACT_MAC_BROADCAST_ENABLE		0x0040
#define CMD_ACT_MAC_PROMISCUOUS_ENABLE		0x0080
#define CMD_ACT_MAC_ALL_MULTICAST_ENABLE	0x0100
#define CMD_TYPE_AUTO_PREAMBLE		0x0001
#define CMD_TYPE_SHORT_PREAMBLE		0x0002
#define CMD_TYPE_LONG_PREAMBLE		0x0003
#define TURN_ON_RF			0x01
#define RADIO_ON			0x01
#define RADIO_OFF			0x00
#define SET_AUTO_PREAMBLE		0x05
#define SET_SHORT_PREAMBLE		0x03
#define SET_LONG_PREAMBLE		0x01
#define CMD_OPT_802_11_RF_CHANNEL_GET	0x00
#define CMD_OPT_802_11_RF_CHANNEL_SET	0x01
enum lbtf_mode ;
#define MACREG_INT_CODE_FIRMWARE_READY		48
#define MRVDRV_MAX_MULTICAST_LIST_SIZE	32
#define LBS_NUM_CMD_BUFFERS             10
#define LBS_CMD_BUFFER_SIZE             (2 * 1024)
#define MRVDRV_MAX_CHANNEL_SIZE		14
#define MRVDRV_SNAP_HEADER_LEN          8
#define	LBS_UPLD_SIZE			2312
#define DEV_NAME_LEN			32
#define MRVDRV_MAX_REGION_CODE			6
#define LBTF_REGDOMAIN_US	0x10
#define LBTF_REGDOMAIN_CA	0x20
#define LBTF_REGDOMAIN_EU	0x30
#define LBTF_REGDOMAIN_SP	0x31
#define LBTF_REGDOMAIN_FR	0x32
#define LBTF_REGDOMAIN_JP	0x40
#define SBI_EVENT_CAUSE_SHIFT		3
#define MRVDRV_RXPD_STATUS_OK                0x0001
#define EXTRA_LEN	36
#define MRVDRV_ETH_TX_PACKET_BUFFER_SIZE \
(ETH_FRAME_LEN + sizeof(struct txpd) + EXTRA_LEN)
#define MRVDRV_ETH_RX_PACKET_BUFFER_SIZE \
(ETH_FRAME_LEN + sizeof(struct rxpd) \
+ MRVDRV_SNAP_HEADER_LEN + EXTRA_LEN)
#define	CMD_F_HOSTCMD		(1 << 0)
#define FW_CAPINFO_WPA  	(1 << 0)
#define RF_ANTENNA_1		0x1
#define RF_ANTENNA_2		0x2
#define RF_ANTENNA_AUTO		0xFFFF
#define LBTF_EVENT_BCN_SENT	55
enum mv_ms_type ;
extern struct workqueue_struct *lbtf_wq;
struct lbtf_private;
struct lbtf_offset_value ;
struct channel_range ;
struct if_usb_card;
struct lbtf_private ;
struct txpd ;
struct rxpd ;
struct cmd_header  __packed;
struct cmd_ctrl_node ;
struct cmd_ds_get_hw_spec  __packed;
struct cmd_ds_mac_control ;
struct cmd_ds_802_11_mac_address ;
struct cmd_ds_mac_multicast_addr ;
struct cmd_ds_set_mode ;
struct cmd_ds_set_bssid ;
struct cmd_ds_802_11_radio_control ;
struct cmd_ds_802_11_rf_channel ;
struct cmd_ds_set_boot2_ver ;
struct cmd_ds_802_11_reset ;
struct cmd_ds_802_11_beacon_control ;
struct cmd_ds_802_11_beacon_set ;
struct lbtf_private;
struct cmd_ctrl_node;
void lbtf_set_mac_control(struct lbtf_private *priv);
int lbtf_free_cmd_buffer(struct lbtf_private *priv);
int lbtf_allocate_cmd_buffer(struct lbtf_private *priv);
int lbtf_execute_next_command(struct lbtf_private *priv);
int lbtf_set_radio_control(struct lbtf_private *priv);
int lbtf_update_hw_spec(struct lbtf_private *priv);
int lbtf_cmd_set_mac_multicast_addr(struct lbtf_private *priv);
void lbtf_set_mode(struct lbtf_private *priv, enum lbtf_mode mode);
void lbtf_set_bssid(struct lbtf_private *priv, bool activate, const u8 *bssid);
int lbtf_set_mac_address(struct lbtf_private *priv, uint8_t *mac_addr);
int lbtf_set_channel(struct lbtf_private *priv, u8 channel);
int lbtf_beacon_set(struct lbtf_private *priv, struct sk_buff *beacon);
int lbtf_beacon_ctrl(struct lbtf_private *priv, bool beacon_enable,
int beacon_int);
int lbtf_process_rx_command(struct lbtf_private *priv);
void lbtf_complete_command(struct lbtf_private *priv, struct cmd_ctrl_node *cmd,
int result);
void lbtf_cmd_response_rx(struct lbtf_private *priv);
struct chan_freq_power *lbtf_get_region_cfp_table(u8 region,
int *cfp_no);
struct lbtf_private *lbtf_add_card(void *card, struct device *dmdev);
int lbtf_remove_card(struct lbtf_private *priv);
int lbtf_start_card(struct lbtf_private *priv);
int lbtf_rx(struct lbtf_private *priv, struct sk_buff *skb);
void lbtf_send_tx_feedback(struct lbtf_private *priv, u8 retrycnt, u8 fail);
void lbtf_bcn_sent(struct lbtf_private *priv);
#define lbtf_cmd(priv, cmdnr, cmd, cb, cb_arg)	()
#define lbtf_cmd_with_response(priv, cmdnr, cmd)	\
lbtf_cmd(priv, cmdnr, cmd, lbtf_cmd_copyback, (unsigned long) (cmd))
void lbtf_cmd_async(struct lbtf_private *priv, uint16_t command,
struct cmd_header *in_cmd, int in_cmd_size);
int __lbtf_cmd(struct lbtf_private *priv, uint16_t command,
struct cmd_header *in_cmd, int in_cmd_size,
int (*callback)(struct lbtf_private *, unsigned long,
struct cmd_header *),
unsigned long callback_arg);
int lbtf_cmd_copyback(struct lbtf_private *priv, unsigned long extra,
struct cmd_header *resp);
