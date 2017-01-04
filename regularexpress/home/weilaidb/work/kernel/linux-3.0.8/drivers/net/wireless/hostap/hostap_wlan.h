#define HOSTAP_WLAN_H
#define MAX_PARM_DEVICES 8
#define PARM_MIN_MAX "1-" __MODULE_STRING(MAX_PARM_DEVICES)
#define DEF_INTS -1, -1, -1, -1, -1, -1, -1
#define GET_INT_PARM(var,idx) var[var[idx] < 0 ? 0 : idx]
#define ETH_P_HOSTAP ETH_P_CONTROL
struct linux_wlan_ng_val  __packed;
struct linux_wlan_ng_prism_hdr  __packed;
struct linux_wlan_ng_cap_hdr  __packed;
struct hostap_radiotap_rx  __packed;
#define LWNG_CAP_DID_BASE   (4 | (1 << 6))
#define LWNG_CAPHDR_VERSION 0x80211001
struct hfa384x_rx_frame  __packed;
struct hfa384x_tx_frame  __packed;
struct hfa384x_rid_hdr
__packed;
#define HFA384X_LEVEL_TO_dBm(v) 0x100 + (v) * 100 / 255 - 100
#define HFA384X_LEVEL_TO_dBm_sign(v) (v) * 100 / 255 - 100
struct hfa384x_scan_request  __packed;
struct hfa384x_hostscan_request  __packed;
struct hfa384x_join_request  __packed;
struct hfa384x_info_frame  __packed;
struct hfa384x_comm_tallies  __packed;
struct hfa384x_comm_tallies32  __packed;
struct hfa384x_scan_result_hdr  __packed;
#define HFA384X_SCAN_MAX_RESULTS 32
struct hfa384x_scan_result  __packed;
struct hfa384x_hostscan_result  __packed;
struct comm_tallies_sums ;
struct hfa384x_regs ;
#if defined(PRISM2_PCCARD) || defined(PRISM2_PLX)
#define HFA384X_CMD_OFF 0x00
#define HFA384X_PARAM0_OFF 0x02
#define HFA384X_PARAM1_OFF 0x04
#define HFA384X_PARAM2_OFF 0x06
#define HFA384X_STATUS_OFF 0x08
#define HFA384X_RESP0_OFF 0x0A
#define HFA384X_RESP1_OFF 0x0C
#define HFA384X_RESP2_OFF 0x0E
#define HFA384X_INFOFID_OFF 0x10
#define HFA384X_CONTROL_OFF 0x14
#define HFA384X_SELECT0_OFF 0x18
#define HFA384X_SELECT1_OFF 0x1A
#define HFA384X_OFFSET0_OFF 0x1C
#define HFA384X_OFFSET1_OFF 0x1E
#define HFA384X_RXFID_OFF 0x20
#define HFA384X_ALLOCFID_OFF 0x22
#define HFA384X_TXCOMPLFID_OFF 0x24
#define HFA384X_SWSUPPORT0_OFF 0x28
#define HFA384X_SWSUPPORT1_OFF 0x2A
#define HFA384X_SWSUPPORT2_OFF 0x2C
#define HFA384X_EVSTAT_OFF 0x30
#define HFA384X_INTEN_OFF 0x32
#define HFA384X_EVACK_OFF 0x34
#define HFA384X_DATA0_OFF 0x36
#define HFA384X_DATA1_OFF 0x38
#define HFA384X_AUXPAGE_OFF 0x3A
#define HFA384X_AUXOFFSET_OFF 0x3C
#define HFA384X_AUXDATA_OFF 0x3E
#define HFA384X_CMD_OFF 0x00
#define HFA384X_PARAM0_OFF 0x04
#define HFA384X_PARAM1_OFF 0x08
#define HFA384X_PARAM2_OFF 0x0C
#define HFA384X_STATUS_OFF 0x10
#define HFA384X_RESP0_OFF 0x14
#define HFA384X_RESP1_OFF 0x18
#define HFA384X_RESP2_OFF 0x1C
#define HFA384X_INFOFID_OFF 0x20
#define HFA384X_CONTROL_OFF 0x28
#define HFA384X_SELECT0_OFF 0x30
#define HFA384X_SELECT1_OFF 0x34
#define HFA384X_OFFSET0_OFF 0x38
#define HFA384X_OFFSET1_OFF 0x3C
#define HFA384X_RXFID_OFF 0x40
#define HFA384X_ALLOCFID_OFF 0x44
#define HFA384X_TXCOMPLFID_OFF 0x48
#define HFA384X_PCICOR_OFF 0x4C
#define HFA384X_SWSUPPORT0_OFF 0x50
#define HFA384X_SWSUPPORT1_OFF 0x54
#define HFA384X_SWSUPPORT2_OFF 0x58
#define HFA384X_PCIHCR_OFF 0x5C
#define HFA384X_EVSTAT_OFF 0x60
#define HFA384X_INTEN_OFF 0x64
#define HFA384X_EVACK_OFF 0x68
#define HFA384X_DATA0_OFF 0x6C
#define HFA384X_DATA1_OFF 0x70
#define HFA384X_AUXPAGE_OFF 0x74
#define HFA384X_AUXOFFSET_OFF 0x78
#define HFA384X_AUXDATA_OFF 0x7C
#define HFA384X_PCI_M0_ADDRH_OFF 0x80
#define HFA384X_PCI_M0_ADDRL_OFF 0x84
#define HFA384X_PCI_M0_LEN_OFF 0x88
#define HFA384X_PCI_M0_CTL_OFF 0x8C
#define HFA384X_PCI_STATUS_OFF 0x98
#define HFA384X_PCI_M1_ADDRH_OFF 0xA0
#define HFA384X_PCI_M1_ADDRL_OFF 0xA4
#define HFA384X_PCI_M1_LEN_OFF 0xA8
#define HFA384X_PCI_M1_CTL_OFF 0xAC
#define HFA384X_PCI_CTL_FROM_BAP (BIT(5) | BIT(1) | BIT(0))
#define HFA384X_PCI_CTL_TO_BAP (BIT(5) | BIT(0))
#define HFA384X_CMDCODE_INIT 0x00
#define HFA384X_CMDCODE_ENABLE 0x01
#define HFA384X_CMDCODE_DISABLE 0x02
#define HFA384X_CMDCODE_ALLOC 0x0A
#define HFA384X_CMDCODE_TRANSMIT 0x0B
#define HFA384X_CMDCODE_INQUIRE 0x11
#define HFA384X_CMDCODE_ACCESS 0x21
#define HFA384X_CMDCODE_ACCESS_WRITE (0x21 | BIT(8))
#define HFA384X_CMDCODE_DOWNLOAD 0x22
#define HFA384X_CMDCODE_READMIF 0x30
#define HFA384X_CMDCODE_WRITEMIF 0x31
#define HFA384X_CMDCODE_TEST 0x38
#define HFA384X_CMDCODE_MASK 0x3F
#define HFA384X_TEST_CHANGE_CHANNEL 0x08
#define HFA384X_TEST_MONITOR 0x0B
#define HFA384X_TEST_STOP 0x0F
#define HFA384X_TEST_CFG_BITS 0x15
#define HFA384X_TEST_CFG_BIT_ALC BIT(3)
#define HFA384X_CMD_BUSY BIT(15)
#define HFA384X_CMD_TX_RECLAIM BIT(8)
#define HFA384X_OFFSET_ERR BIT(14)
#define HFA384X_OFFSET_BUSY BIT(15)
#define HFA384X_PROGMODE_DISABLE 0
#define HFA384X_PROGMODE_ENABLE_VOLATILE 1
#define HFA384X_PROGMODE_ENABLE_NON_VOLATILE 2
#define HFA384X_PROGMODE_PROGRAM_NON_VOLATILE 3
#define HFA384X_AUX_MAGIC0 0xfe01
#define HFA384X_AUX_MAGIC1 0xdc23
#define HFA384X_AUX_MAGIC2 0xba45
#define HFA384X_AUX_PORT_DISABLED 0
#define HFA384X_AUX_PORT_DISABLE BIT(14)
#define HFA384X_AUX_PORT_ENABLE BIT(15)
#define HFA384X_AUX_PORT_ENABLED (BIT(14) | BIT(15))
#define HFA384X_AUX_PORT_MASK (BIT(14) | BIT(15))
#define PRISM2_PDA_SIZE 1024
#define HFA384X_EV_TICK BIT(15)
#define HFA384X_EV_WTERR BIT(14)
#define HFA384X_EV_INFDROP BIT(13)
#define HFA384X_EV_PCI_M1 BIT(9)
#define HFA384X_EV_PCI_M0 BIT(8)
#define HFA384X_EV_INFO BIT(7)
#define HFA384X_EV_DTIM BIT(5)
#define HFA384X_EV_CMD BIT(4)
#define HFA384X_EV_ALLOC BIT(3)
#define HFA384X_EV_TXEXC BIT(2)
#define HFA384X_EV_TX BIT(1)
#define HFA384X_EV_RX BIT(0)
#define HFA384X_INFO_HANDOVERADDR 0xF000
#define HFA384X_INFO_HANDOVERDEAUTHADDR 0xF001
#define HFA384X_INFO_COMMTALLIES 0xF100
#define HFA384X_INFO_SCANRESULTS 0xF101
#define HFA384X_INFO_CHANNELINFORESULTS 0xF102
#define HFA384X_INFO_HOSTSCANRESULTS 0xF103
#define HFA384X_INFO_LINKSTATUS 0xF200
#define HFA384X_INFO_ASSOCSTATUS 0xF201
#define HFA384X_INFO_AUTHREQ 0xF202
#define HFA384X_INFO_PSUSERCNT 0xF203
#define HFA384X_INFO_KEYIDCHANGED 0xF204
enum ;
enum ;
#define HFA384X_RATES_1MBPS BIT(0)
#define HFA384X_RATES_2MBPS BIT(1)
#define HFA384X_RATES_5MBPS BIT(2)
#define HFA384X_RATES_11MBPS BIT(3)
#define HFA384X_ROAMING_FIRMWARE 1
#define HFA384X_ROAMING_HOST 2
#define HFA384X_ROAMING_DISABLED 3
#define HFA384X_WEPFLAGS_PRIVACYINVOKED BIT(0)
#define HFA384X_WEPFLAGS_EXCLUDEUNENCRYPTED BIT(1)
#define HFA384X_WEPFLAGS_HOSTENCRYPT BIT(4)
#define HFA384X_WEPFLAGS_HOSTDECRYPT BIT(7)
#define HFA384X_RX_STATUS_MSGTYPE (BIT(15) | BIT(14) | BIT(13))
#define HFA384X_RX_STATUS_PCF BIT(12)
#define HFA384X_RX_STATUS_MACPORT (BIT(10) | BIT(9) | BIT(8))
#define HFA384X_RX_STATUS_UNDECR BIT(1)
#define HFA384X_RX_STATUS_FCSERR BIT(0)
#define HFA384X_RX_STATUS_GET_MSGTYPE(s) \
(((s) & HFA384X_RX_STATUS_MSGTYPE) >> 13)
#define HFA384X_RX_STATUS_GET_MACPORT(s) \
(((s) & HFA384X_RX_STATUS_MACPORT) >> 8)
enum ;
#define HFA384X_TX_CTRL_ALT_RTRY BIT(5)
#define HFA384X_TX_CTRL_802_11 BIT(3)
#define HFA384X_TX_CTRL_802_3 0
#define HFA384X_TX_CTRL_TX_EX BIT(2)
#define HFA384X_TX_CTRL_TX_OK BIT(1)
#define HFA384X_TX_STATUS_RETRYERR BIT(0)
#define HFA384X_TX_STATUS_AGEDERR BIT(1)
#define HFA384X_TX_STATUS_DISCON BIT(2)
#define HFA384X_TX_STATUS_FORMERR BIT(3)
#define HFA386X_CR_TX_CONFIGURE 0x12
#define HFA386X_CR_RX_CONFIGURE 0x14
#define HFA386X_CR_A_D_TEST_MODES2 0x1A
#define HFA386X_CR_MANUAL_TX_POWER 0x3E
#define HFA386X_CR_MEASURED_TX_POWER 0x74
#define PRISM2_TXFID_COUNT 8
#define PRISM2_DATA_MAXLEN 2304
#define PRISM2_TXFID_LEN (PRISM2_DATA_MAXLEN + sizeof(struct hfa384x_tx_frame))
#define PRISM2_TXFID_EMPTY 0xffff
#define PRISM2_TXFID_RESERVED 0xfffe
#define PRISM2_DUMMY_FID 0xffff
#define MAX_SSID_LEN 32
#define MAX_NAME_LEN 32
#define PRISM2_DUMP_RX_HDR BIT(0)
#define PRISM2_DUMP_TX_HDR BIT(1)
#define PRISM2_DUMP_TXEXC_HDR BIT(2)
struct hostap_tx_callback_info ;
#define PRISM2_FRAG_CACHE_LEN 4
struct prism2_frag_entry ;
struct hostap_cmd_queue ;
#define HOSTAP_HW_NO_DISABLE BIT(0)
#define HOSTAP_HW_ENABLE_CMDCOMPL BIT(1)
typedef struct local_info local_info_t;
struct prism2_helper_functions ;
struct prism2_download_data ;
#define HOSTAP_MAX_BSS_COUNT 64
#define MAX_WPA_IE_LEN 64
struct hostap_bss_info ;
struct local_info ;
struct hostap_interface ;
#define HOSTAP_SKB_TX_DATA_MAGIC 0xf08a36a2
struct hostap_skb_tx_data ;
#define DEBUG_FID BIT(0)
#define DEBUG_PS BIT(1)
#define DEBUG_FLOW BIT(2)
#define DEBUG_AP BIT(3)
#define DEBUG_HW BIT(4)
#define DEBUG_EXTRA BIT(5)
#define DEBUG_EXTRA2 BIT(6)
#define DEBUG_PS2 BIT(7)
#define DEBUG_MASK (DEBUG_PS | DEBUG_AP | DEBUG_HW | DEBUG_EXTRA)
#define PDEBUG(n, args...) \
do  while (0)
#define PDEBUG2(n, args...) \
do  while (0)
#define PDEBUG(n, args...)
#define PDEBUG2(n, args...)
enum ;
#define PRISM2_IO_DEBUG_CMD_INB 0
#define PRISM2_IO_DEBUG_CMD_INW 1
#define PRISM2_IO_DEBUG_CMD_INSW 2
#define PRISM2_IO_DEBUG_CMD_OUTB 3
#define PRISM2_IO_DEBUG_CMD_OUTW 4
#define PRISM2_IO_DEBUG_CMD_OUTSW 5
#define PRISM2_IO_DEBUG_CMD_ERROR 6
#define PRISM2_IO_DEBUG_CMD_INTERRUPT 7
#define PRISM2_IO_DEBUG_ENTRY(cmd, reg, value) \
(((cmd) << 24) | ((reg) << 16) | value)
static inline void prism2_io_debug_add(struct net_device *dev, int cmd,
int reg, int value)
static inline void prism2_io_debug_error(struct net_device *dev, int err)
static inline void prism2_io_debug_add(struct net_device *dev, int cmd,
int reg, int value)
static inline void prism2_io_debug_error(struct net_device *dev, int err)
enum ;
void prism2_callback(local_info_t *local, int event);
#define prism2_callback(d, e) do  while (0)
