#define __RTL92C_DEF_H__
#define HAL_RETRY_LIMIT_INFRA				48
#define HAL_RETRY_LIMIT_AP_ADHOC			7
#define	PHY_RSSI_SLID_WIN_MAX				100
#define	PHY_LINKQUALITY_SLID_WIN_MAX			20
#define	PHY_BEACON_RSSI_SLID_WIN_MAX			10
#define RESET_DELAY_8185				20
#define RT_IBSS_INT_MASKS	(IMR_BCNINT | IMR_TBDOK | IMR_TBDER)
#define RT_AC_INT_MASKS		(IMR_VIDOK | IMR_VODOK | IMR_BEDOK|IMR_BKDOK)
#define NUM_OF_FIRMWARE_QUEUE				10
#define NUM_OF_PAGES_IN_FW				0x100
#define NUM_OF_PAGE_IN_FW_QUEUE_BK			0x07
#define NUM_OF_PAGE_IN_FW_QUEUE_BE			0x07
#define NUM_OF_PAGE_IN_FW_QUEUE_VI			0x07
#define NUM_OF_PAGE_IN_FW_QUEUE_VO			0x07
#define NUM_OF_PAGE_IN_FW_QUEUE_HCCA			0x0
#define NUM_OF_PAGE_IN_FW_QUEUE_CMD			0x0
#define NUM_OF_PAGE_IN_FW_QUEUE_MGNT			0x02
#define NUM_OF_PAGE_IN_FW_QUEUE_HIGH			0x02
#define NUM_OF_PAGE_IN_FW_QUEUE_BCN			0x2
#define NUM_OF_PAGE_IN_FW_QUEUE_PUB			0xA1
#define NUM_OF_PAGE_IN_FW_QUEUE_BK_DTM			0x026
#define NUM_OF_PAGE_IN_FW_QUEUE_BE_DTM			0x048
#define NUM_OF_PAGE_IN_FW_QUEUE_VI_DTM			0x048
#define NUM_OF_PAGE_IN_FW_QUEUE_VO_DTM			0x026
#define NUM_OF_PAGE_IN_FW_QUEUE_PUB_DTM			0x00
#define MAX_LINES_HWCONFIG_TXT				1000
#define MAX_BYTES_LINE_HWCONFIG_TXT			256
#define SW_THREE_WIRE					0
#define HW_THREE_WIRE					2
#define BT_DEMO_BOARD					0
#define BT_QA_BOARD					1
#define BT_FPGA						2
#define RX_SMOOTH_FACTOR				20
#define HAL_PRIME_CHNL_OFFSET_DONT_CARE			0
#define HAL_PRIME_CHNL_OFFSET_LOWER			1
#define HAL_PRIME_CHNL_OFFSET_UPPER			2
#define MAX_H2C_QUEUE_NUM				10
#define RX_MPDU_QUEUE					0
#define RX_CMD_QUEUE					1
#define RX_MAX_QUEUE					2
#define AC2QUEUEID(_AC)					(_AC)
#define	C2H_RX_CMD_HDR_LEN				8
#define	GET_C2H_CMD_CMD_LEN(__prxhdr)		\
LE_BITS_TO_4BYTE((__prxhdr), 0, 16)
#define	GET_C2H_CMD_ELEMENT_ID(__prxhdr)	\
LE_BITS_TO_4BYTE((__prxhdr), 16, 8)
#define	GET_C2H_CMD_CMD_SEQ(__prxhdr)		\
LE_BITS_TO_4BYTE((__prxhdr), 24, 7)
#define	GET_C2H_CMD_CONTINUE(__prxhdr)		\
LE_BITS_TO_4BYTE((__prxhdr), 31, 1)
#define	GET_C2H_CMD_CONTENT(__prxhdr)		\
((u8 *)(__prxhdr) + C2H_RX_CMD_HDR_LEN)
#define	GET_C2H_CMD_FEEDBACK_ELEMENT_ID(__pcmdfbhdr)	\
LE_BITS_TO_4BYTE((__pcmdfbhdr), 0, 8)
#define	GET_C2H_CMD_FEEDBACK_CCX_LEN(__pcmdfbhdr)	\
LE_BITS_TO_4BYTE((__pcmdfbhdr), 8, 8)
#define	GET_C2H_CMD_FEEDBACK_CCX_CMD_CNT(__pcmdfbhdr)	\
LE_BITS_TO_4BYTE((__pcmdfbhdr), 16, 16)
#define	GET_C2H_CMD_FEEDBACK_CCX_MAC_ID(__pcmdfbhdr)	\
LE_BITS_TO_4BYTE(((__pcmdfbhdr) + 4), 0, 5)
#define	GET_C2H_CMD_FEEDBACK_CCX_VALID(__pcmdfbhdr)	\
LE_BITS_TO_4BYTE(((__pcmdfbhdr) + 4), 7, 1)
#define	GET_C2H_CMD_FEEDBACK_CCX_RETRY_CNT(__pcmdfbhdr)	\
LE_BITS_TO_4BYTE(((__pcmdfbhdr) + 4), 8, 5)
#define	GET_C2H_CMD_FEEDBACK_CCX_TOK(__pcmdfbhdr)	\
LE_BITS_TO_4BYTE(((__pcmdfbhdr) + 4), 15, 1)
#define	GET_C2H_CMD_FEEDBACK_CCX_QSEL(__pcmdfbhdr)	\
LE_BITS_TO_4BYTE(((__pcmdfbhdr) + 4), 16, 4)
#define	GET_C2H_CMD_FEEDBACK_CCX_SEQ(__pcmdfbhdr)	\
LE_BITS_TO_4BYTE(((__pcmdfbhdr) + 4), 20, 12)
#define CHIP_VER_B			BIT(4)
#define CHIP_92C_BITMASK		BIT(0)
#define CHIP_92C_1T2R			0x03
#define CHIP_92C			0x01
#define CHIP_88C			0x00
enum version_8192c ;
#define IS_CHIP_VER_B(version)  ((version & CHIP_VER_B) ? true : false)
#define IS_92C_SERIAL(version)  ((version & CHIP_92C_BITMASK) ? true : false)
enum rtl819x_loopback_e ;
enum rf_optype ;
enum rf_power_state ;
enum power_save_mode ;
enum power_polocy_config ;
enum interface_select_pci ;
enum hal_fw_c2h_cmd_id ;
enum rtl_desc_qsel ;
enum rtl_desc92c_rate ;
struct phy_sts_cck_8192s_t ;
struct h2c_cmd_8192c ;
static inline int _rtl92c_rate_mapping(struct ieee80211_hw *hw, bool isHT,
u8 desc_rate, bool first_ampdu)
