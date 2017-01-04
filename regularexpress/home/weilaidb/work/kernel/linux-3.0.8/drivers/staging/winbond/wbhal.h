#define __WINBOND_WBHAL_S_H
#define HAL_LED_SET_MASK	0x001c
#define HAL_LED_SET_SHIFT	2
#define RF_MAXIM_2825		0
#define RF_MAXIM_2827		1
#define RF_MAXIM_2828		2
#define RF_MAXIM_2829		3
#define RF_MAXIM_V1		15
#define RF_AIROHA_2230		16
#define RF_AIROHA_7230		17
#define RF_AIROHA_2230S		18
#define RF_WB_242		33
#define RF_WB_242_1		34
#define RF_DECIDE_BY_INF	255
#define HAL_USB_MODE_BURST(_H)			(_H->SoftwareSet & 0x20)
#define SCAN_MAX_CHNL_TIME			(50)
#define FRAME_TYPE_802_3_DATA			0
#define FRAME_TYPE_802_11_MANAGEMENT		1
#define FRAME_TYPE_802_11_MANAGEMENT_CHALLENGE	2
#define FRAME_TYPE_802_11_CONTROL		3
#define FRAME_TYPE_802_11_DATA			4
#define FRAME_TYPE_PROMISCUOUS			5
#define DOT_11_SEQUENCE_OFFSET			22
#define DOT_3_TYPE_OFFSET			12
#define DOT_11_MAC_HEADER_SIZE			24
#define DOT_11_SNAP_SIZE			6
#define DOT_11_TYPE_OFFSET			30
#define DEFAULT_SIFSTIME			10
#define DEFAULT_FRAGMENT_THRESHOLD		2346
#define DEFAULT_MSDU_LIFE_TIME			0xffff
#define LONG_PREAMBLE_PLUS_PLCPHEADER_TIME		(144 + 48)
#define SHORT_PREAMBLE_PLUS_PLCPHEADER_TIME		(72 + 24)
#define PREAMBLE_PLUS_SIGNAL_PLUS_SIGNALEXTENSION	(16 + 4 + 6)
#define Tsym						4
#define MAC_TYPE_MANAGEMENT			0x00
#define MAC_TYPE_CONTROL			0x04
#define MAC_TYPE_DATA				0x08
#define MASK_FRAGMENT_NUMBER			0x000F
#define SEQUENCE_NUMBER_SHIFT			4
#define  HAL_WOL_TYPE_WAKEUP_FRAME		0x01
#define  HAL_WOL_TYPE_MAGIC_PACKET		0x02
#define HAL_KEYTYPE_WEP40			0
#define HAL_KEYTYPE_WEP104			1
#define HAL_KEYTYPE_TKIP			2
#define HAL_KEYTYPE_AES_CCMP			3
enum ;
#define MAX_KEY_TABLE			24
#define GROUP_KEY_START_INDEX		4
#define MAPPING_KEY_START_INDEX		8
#define MAX_DESCRIPTOR_BUFFER_INDEX	8
#define FLAG_ERROR_TX_MASK		0x000000bf
#define FLAG_ERROR_RX_MASK		0x0000083f
#define FLAG_BAND_RX_MASK		0x10000000
struct R00_descriptor ;
struct T00_descriptor ;
struct R01_descriptor ;
struct T01_descriptor ;
struct T02_descriptor ;
struct wb35_descriptor ;
#define MAX_TXVGA_EEPROM		9
#define MAX_RF_PARAMETER		32
struct txvga_for_50 ;
struct hw_data ;