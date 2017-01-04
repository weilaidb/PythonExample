#define __HFCSUSB_H__
#define DRIVER_NAME "HFC-S_USB"
#define DBG_HFC_CALL_TRACE	0x00010000
#define DBG_HFC_FIFO_VERBOSE	0x00020000
#define DBG_HFC_USB_VERBOSE	0x00100000
#define DBG_HFC_URB_INFO	0x00200000
#define DBG_HFC_URB_ERROR	0x00400000
#define DEFAULT_TRANSP_BURST_SZ 128
#define HFC_CTRL_TIMEOUT	20
#define CLKDEL_TE		0x0f
#define CLKDEL_NT		0x6c
#define HFC_L1_ACTIVATE_TE		1
#define HFC_L1_ACTIVATE_NT		2
#define HFC_L1_DEACTIVATE_NT		3
#define HFC_L1_FORCE_DEACTIVATE_TE	4
#define HFCUSB_LOAD_STATE	0x10
#define HFCUSB_ACTIVATE		0x20
#define HFCUSB_DO_ACTION	0x40
#define HFCUSB_NT_G2_G3		0x80
#define NT_ACTIVATION_TIMER	0x01
#define NT_T1_COUNT		10
#define MAX_BCH_SIZE 		2048
#define HFCUSB_RX_THRESHOLD 	64
#define HFCUSB_TX_THRESHOLD 	96
#define HFCUSB_CHIP_ID		0x16
#define HFCUSB_CIRM		0x00
#define HFCUSB_USB_SIZE		0x07
#define HFCUSB_USB_SIZE_I	0x06
#define HFCUSB_F_CROSS		0x0b
#define HFCUSB_CLKDEL		0x37
#define HFCUSB_CON_HDLC		0xfa
#define HFCUSB_HDLC_PAR		0xfb
#define HFCUSB_SCTRL		0x31
#define HFCUSB_SCTRL_E		0x32
#define HFCUSB_SCTRL_R		0x33
#define HFCUSB_F_THRES		0x0c
#define HFCUSB_FIFO		0x0f
#define HFCUSB_F_USAGE		0x1a
#define HFCUSB_MST_MODE0	0x14
#define HFCUSB_MST_MODE1	0x15
#define HFCUSB_P_DATA		0x1f
#define HFCUSB_INC_RES_F	0x0e
#define HFCUSB_B1_SSL		0x20
#define HFCUSB_B2_SSL		0x21
#define HFCUSB_B1_RSL		0x24
#define HFCUSB_B2_RSL		0x25
#define HFCUSB_STATES		0x30
#define HFCUSB_CHIPID		0x40
#define HFCUSB_NUM_FIFOS	8
#define HFCUSB_B1_TX		0
#define HFCUSB_B1_RX		1
#define HFCUSB_B2_TX		2
#define HFCUSB_B2_RX		3
#define HFCUSB_D_TX		4
#define HFCUSB_D_RX		5
#define HFCUSB_PCM_TX		6
#define HFCUSB_PCM_RX		7
#define USB_INT		0
#define USB_BULK	1
#define USB_ISOC	2
#define ISOC_PACKETS_D	8
#define ISOC_PACKETS_B	8
#define ISO_BUFFER_SIZE	128
static int iso_packets[8] =
;
#define SINK_MAX	68
#define SINK_MIN	48
#define SINK_DMIN	12
#define SINK_DMAX	18
#define BITLINE_INF	(-96*8)
#define write_reg_atomic(a, b, c) \
usb_control_msg((a)->dev, (a)->ctrl_out_pipe, 0, 0x40, (c), (b), \
0, 0, HFC_CTRL_TIMEOUT)
#define read_reg_atomic(a, b, c) \
usb_control_msg((a)->dev, (a)->ctrl_in_pipe, 1, 0xC0, 0, (b), (c), \
1, HFC_CTRL_TIMEOUT)
#define HFC_CTRL_BUFSIZE 64
struct ctrl_buf ;
struct hfcusb_symbolic_list ;
static struct hfcusb_symbolic_list urb_errlist[] = ;
static inline const char *
symbolic(struct hfcusb_symbolic_list list[], const int num)
#define CNF_4INT3ISO	1
#define CNF_3INT3ISO	2
#define CNF_4ISO3ISO	3
#define CNF_3ISO3ISO	4
#define EP_NUL 1
#define EP_NOP 2
#define EP_ISO 3
#define EP_BLK 4
#define EP_INT 5
#define HFC_CHAN_B1	0
#define HFC_CHAN_B2	1
#define HFC_CHAN_D	2
#define HFC_CHAN_E	3
static int
validconf[][19] = ;
static char *conf_str[] = ;
#define LED_OFF		0
#define LED_SCHEME1	1
#define LED_SCHEME2	2
#define LED_POWER_ON	1
#define LED_POWER_OFF	2
#define LED_S0_ON	3
#define LED_S0_OFF	4
#define LED_B1_ON	5
#define LED_B1_OFF	6
#define LED_B1_DATA	7
#define LED_B2_ON	8
#define LED_B2_OFF	9
#define LED_B2_DATA	10
#define LED_NORMAL	0
#define LED_INVERTED 	1
#define LED_TIME      250
struct hfcsusb;
struct usb_fifo;
struct iso_urb ;
struct usb_fifo ;
struct hfcsusb ;
struct hfcsusb_vdata ;
#define HFC_MAX_TE_LAYER1_STATE 8
#define HFC_MAX_NT_LAYER1_STATE 4
static const char *HFC_TE_LAYER1_STATES[HFC_MAX_TE_LAYER1_STATE + 1] = ;
static const char *HFC_NT_LAYER1_STATES[HFC_MAX_NT_LAYER1_STATE + 1] = ;
static struct usb_device_id hfcsusb_idtab[] = ;
MODULE_DEVICE_TABLE(usb, hfcsusb_idtab);
