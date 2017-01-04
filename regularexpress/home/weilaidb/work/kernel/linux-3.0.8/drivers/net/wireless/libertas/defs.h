#define _LBS_DEFS_H_
#define DEBUG
#define PROC_DEBUG
#define DRV_NAME "libertas"
#define LBS_DEB_ENTER	0x00000001
#define LBS_DEB_LEAVE	0x00000002
#define LBS_DEB_MAIN	0x00000004
#define LBS_DEB_NET	0x00000008
#define LBS_DEB_MESH	0x00000010
#define LBS_DEB_WEXT	0x00000020
#define LBS_DEB_IOCTL	0x00000040
#define LBS_DEB_SCAN	0x00000080
#define LBS_DEB_ASSOC	0x00000100
#define LBS_DEB_JOIN	0x00000200
#define LBS_DEB_11D	0x00000400
#define LBS_DEB_DEBUGFS	0x00000800
#define LBS_DEB_ETHTOOL	0x00001000
#define LBS_DEB_HOST	0x00002000
#define LBS_DEB_CMD	0x00004000
#define LBS_DEB_RX	0x00008000
#define LBS_DEB_TX	0x00010000
#define LBS_DEB_USB	0x00020000
#define LBS_DEB_CS	0x00040000
#define LBS_DEB_FW	0x00080000
#define LBS_DEB_THREAD	0x00100000
#define LBS_DEB_HEX	0x00200000
#define LBS_DEB_SDIO	0x00400000
#define LBS_DEB_SYSFS	0x00800000
#define LBS_DEB_SPI	0x01000000
#define LBS_DEB_CFG80211 0x02000000
extern unsigned int lbs_debug;
#define LBS_DEB_LL(grp, grpnam, fmt, args...) \
do  while (0)
#define LBS_DEB_LL(grp, grpnam, fmt, args...) do  while (0)
#define lbs_deb_enter(grp) \
LBS_DEB_LL(grp | LBS_DEB_ENTER, " enter", "%s()\n", __func__);
#define lbs_deb_enter_args(grp, fmt, args...) \
LBS_DEB_LL(grp | LBS_DEB_ENTER, " enter", "%s(" fmt ")\n", __func__, ## args);
#define lbs_deb_leave(grp) \
LBS_DEB_LL(grp | LBS_DEB_LEAVE, " leave", "%s()\n", __func__);
#define lbs_deb_leave_args(grp, fmt, args...) \
LBS_DEB_LL(grp | LBS_DEB_LEAVE, " leave", "%s(), " fmt "\n", \
__func__, ##args);
#define lbs_deb_main(fmt, args...)      LBS_DEB_LL(LBS_DEB_MAIN, " main", fmt, ##args)
#define lbs_deb_net(fmt, args...)       LBS_DEB_LL(LBS_DEB_NET, " net", fmt, ##args)
#define lbs_deb_mesh(fmt, args...)      LBS_DEB_LL(LBS_DEB_MESH, " mesh", fmt, ##args)
#define lbs_deb_wext(fmt, args...)      LBS_DEB_LL(LBS_DEB_WEXT, " wext", fmt, ##args)
#define lbs_deb_ioctl(fmt, args...)     LBS_DEB_LL(LBS_DEB_IOCTL, " ioctl", fmt, ##args)
#define lbs_deb_scan(fmt, args...)      LBS_DEB_LL(LBS_DEB_SCAN, " scan", fmt, ##args)
#define lbs_deb_assoc(fmt, args...)     LBS_DEB_LL(LBS_DEB_ASSOC, " assoc", fmt, ##args)
#define lbs_deb_join(fmt, args...)      LBS_DEB_LL(LBS_DEB_JOIN, " join", fmt, ##args)
#define lbs_deb_11d(fmt, args...)       LBS_DEB_LL(LBS_DEB_11D, " 11d", fmt, ##args)
#define lbs_deb_debugfs(fmt, args...)   LBS_DEB_LL(LBS_DEB_DEBUGFS, " debugfs", fmt, ##args)
#define lbs_deb_ethtool(fmt, args...)   LBS_DEB_LL(LBS_DEB_ETHTOOL, " ethtool", fmt, ##args)
#define lbs_deb_host(fmt, args...)      LBS_DEB_LL(LBS_DEB_HOST, " host", fmt, ##args)
#define lbs_deb_cmd(fmt, args...)       LBS_DEB_LL(LBS_DEB_CMD, " cmd", fmt, ##args)
#define lbs_deb_rx(fmt, args...)        LBS_DEB_LL(LBS_DEB_RX, " rx", fmt, ##args)
#define lbs_deb_tx(fmt, args...)        LBS_DEB_LL(LBS_DEB_TX, " tx", fmt, ##args)
#define lbs_deb_fw(fmt, args...)        LBS_DEB_LL(LBS_DEB_FW, " fw", fmt, ##args)
#define lbs_deb_usb(fmt, args...)       LBS_DEB_LL(LBS_DEB_USB, " usb", fmt, ##args)
#define lbs_deb_usbd(dev, fmt, args...) LBS_DEB_LL(LBS_DEB_USB, " usbd", "%s:" fmt, dev_name(dev), ##args)
#define lbs_deb_cs(fmt, args...)        LBS_DEB_LL(LBS_DEB_CS, " cs", fmt, ##args)
#define lbs_deb_thread(fmt, args...)    LBS_DEB_LL(LBS_DEB_THREAD, " thread", fmt, ##args)
#define lbs_deb_sdio(fmt, args...)      LBS_DEB_LL(LBS_DEB_SDIO, " sdio", fmt, ##args)
#define lbs_deb_sysfs(fmt, args...)     LBS_DEB_LL(LBS_DEB_SYSFS, " sysfs", fmt, ##args)
#define lbs_deb_spi(fmt, args...)       LBS_DEB_LL(LBS_DEB_SPI, " spi", fmt, ##args)
#define lbs_deb_cfg80211(fmt, args...)  LBS_DEB_LL(LBS_DEB_CFG80211, " cfg80211", fmt, ##args)
static inline void lbs_deb_hex(unsigned int grp, const char *prompt, u8 *buf, int len)
#define lbs_deb_hex(grp,prompt,buf,len)	do  while (0)
#define MRVDRV_MAX_MULTICAST_LIST_SIZE	32
#define LBS_NUM_CMD_BUFFERS             10
#define LBS_CMD_BUFFER_SIZE             (2 * 1024)
#define MRVDRV_MAX_CHANNEL_SIZE		14
#define MRVDRV_ASSOCIATION_TIME_OUT	255
#define MRVDRV_SNAP_HEADER_LEN          8
#define	LBS_UPLD_SIZE			2312
#define DEV_NAME_LEN			32
#define EHS_WAKE_ON_BROADCAST_DATA	0x0001
#define EHS_WAKE_ON_UNICAST_DATA	0x0002
#define EHS_WAKE_ON_MAC_EVENT		0x0004
#define EHS_WAKE_ON_MULTICAST_DATA	0x0008
#define EHS_REMOVE_WAKEUP		0xFFFFFFFF
#define WOL_RULE_NET_TYPE_INFRA_OR_IBSS	0x00
#define WOL_RULE_NET_TYPE_MESH		0x10
#define WOL_RULE_ADDR_TYPE_BCAST	0x01
#define WOL_RULE_ADDR_TYPE_MCAST	0x08
#define WOL_RULE_ADDR_TYPE_UCAST	0x02
#define WOL_RULE_OP_AND			0x01
#define WOL_RULE_OP_OR			0x02
#define WOL_RULE_OP_INVALID		0xFF
#define WOL_RESULT_VALID_CMD		0
#define WOL_RESULT_NOSPC_ERR		1
#define WOL_RESULT_EEXIST_ERR		2
#define MRVDRV_MAX_BSS_DESCRIPTS		16
#define MRVDRV_MAX_REGION_CODE			6
#define MRVDRV_DEFAULT_LISTEN_INTERVAL		10
#define	MRVDRV_CHANNELS_PER_SCAN		4
#define	MRVDRV_MAX_CHANNELS_PER_SCAN		14
#define MRVDRV_MIN_BEACON_INTERVAL		20
#define MRVDRV_MAX_BEACON_INTERVAL		1000
#define MRVDRV_BEACON_INTERVAL			100
#define MARVELL_MESH_IE_LENGTH		9
#define MARVELL_MESH_IE_TYPE		4
#define MARVELL_MESH_IE_SUBTYPE		0
#define MARVELL_MESH_IE_VERSION		0
#define MARVELL_MESH_PROTO_ID_HWMP	0
#define MARVELL_MESH_METRIC_ID		0
#define MARVELL_MESH_CAPABILITY		0
#define MRVDRV_TX_DNLD_RDY		0x0001
#define MRVDRV_RX_UPLD_RDY		0x0002
#define MRVDRV_CMD_DNLD_RDY		0x0004
#define MRVDRV_CMD_UPLD_RDY		0x0008
#define MRVDRV_CARDEVENT		0x0010
#define POW_ADAPT_DEFAULT_P0 13
#define POW_ADAPT_DEFAULT_P1 15
#define POW_ADAPT_DEFAULT_P2 18
#define TPC_DEFAULT_P0 5
#define TPC_DEFAULT_P1 10
#define TPC_DEFAULT_P2 13
#define MRVDRV_TxPD_POWER_MGMT_NULL_PACKET 0x01
#define MRVDRV_TxPD_POWER_MGMT_LAST_PACKET 0x08
#define TxPD_CONTROL_WDS_FRAME (1<<17)
#define TxPD_MESH_FRAME TxPD_CONTROL_WDS_FRAME
#define MESH_IFACE_ID					0x0001
#define MESH_IFACE_BIT_OFFSET				0x000c
#define MESH_CAPINFO_ENABLE_MASK			(1<<16)
#define MRVL_FW_V4					(0x04)
#define MRVL_FW_V5					(0x05)
#define MRVL_FW_V10					(0x0a)
#define MRVL_FW_MAJOR_REV(x)				((x)>>24)
#define MRVDRV_RXPD_STATUS_OK                0x0001
#define RxPD_CONTROL_WDS_FRAME (0x40)
#define RxPD_MESH_FRAME RxPD_CONTROL_WDS_FRAME
#define MRVDRV_NF_DEFAULT_SCAN_VALUE		(-96)
#define MRVDRV_RTS_MIN_VALUE		0
#define MRVDRV_RTS_MAX_VALUE		2347
#define MRVDRV_FRAG_MIN_VALUE		256
#define MRVDRV_FRAG_MAX_VALUE		2346
#define EXTRA_LEN	36
#define MRVDRV_ETH_TX_PACKET_BUFFER_SIZE \
(ETH_FRAME_LEN + sizeof(struct txpd) + EXTRA_LEN)
#define MRVDRV_ETH_RX_PACKET_BUFFER_SIZE \
(ETH_FRAME_LEN + sizeof(struct rxpd) \
+ MRVDRV_SNAP_HEADER_LEN + EXTRA_LEN)
#define	CMD_F_HOSTCMD		(1 << 0)
#define FW_CAPINFO_WPA  	(1 << 0)
#define FW_CAPINFO_PS  		(1 << 1)
#define FW_CAPINFO_FIRMWARE_UPGRADE	(1 << 13)
#define FW_CAPINFO_BOOT2_UPGRADE	(1<<14)
#define FW_CAPINFO_PERSISTENT_CONFIG	(1<<15)
#define KEY_LEN_WPA_AES			16
#define KEY_LEN_WPA_TKIP		32
#define KEY_LEN_WEP_104			13
#define KEY_LEN_WEP_40			5
#define RF_ANTENNA_1		0x1
#define RF_ANTENNA_2		0x2
#define RF_ANTENNA_AUTO		0xFFFF
#define	BAND_B			(0x01)
#define	BAND_G			(0x02)
#define ALL_802_11_BANDS	(BAND_B | BAND_G)
#define MAX_RATES			14
#define	MAX_LEDS			8
extern const char lbs_driver_version[];
extern u16 lbs_region_code_to_index[MRVDRV_MAX_REGION_CODE];
enum SNRNF_TYPE ;
enum SNRNF_DATA ;
enum LBS_802_11_POWER_MODE ;
enum PS_STATE ;
enum DNLD_STATE ;
enum LBS_MEDIA_STATE ;
enum LBS_802_11_PRIVACY_FILTER ;
enum mv_ms_type ;
enum KEY_TYPE_ID ;
enum KEY_INFO_WPA ;
#define FWT_DEFAULT_METRIC 0
#define FWT_DEFAULT_DIR 1
#define FWT_DEFAULT_RATE 3
#define FWT_DEFAULT_SSN 0xffffffff
#define FWT_DEFAULT_DSN 0
#define FWT_DEFAULT_HOPCOUNT 0
#define FWT_DEFAULT_TTL 0
#define FWT_DEFAULT_EXPIRATION 0
#define FWT_DEFAULT_SLEEPMODE 0
#define FWT_DEFAULT_SNR 0