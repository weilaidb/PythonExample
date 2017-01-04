#define __FSL_QE_UDC_H
#define PORT_CPM	0
#define PORT_QE		1
#define USB_MAX_ENDPOINTS               4
#define USB_MAX_PIPES                   USB_MAX_ENDPOINTS
#define USB_EP0_MAX_SIZE		64
#define USB_MAX_CTRL_PAYLOAD            0x4000
#define USB_BDRING_LEN			16
#define USB_BDRING_LEN_RX		256
#define USB_BDRING_LEN_TX		16
#define MIN_EMPTY_BDS			128
#define MAX_DATA_BDS			8
#define USB_CRC_SIZE			2
#define USB_DIR_BOTH			0x88
#define R_BUF_MAXSIZE			0x800
#define USB_EP_PARA_ALIGNMENT		32
#define USB_MODE_EN		0x01
#define USB_MODE_HOST		0x02
#define USB_MODE_TEST		0x04
#define USB_MODE_SFTE		0x08
#define USB_MODE_RESUME		0x40
#define USB_MODE_LSS		0x80
#define USB_SLVADDR_MASK	0x7F
#define USB_EPNUM_MASK		0xF000
#define USB_EPNUM_SHIFT		12
#define USB_TRANS_MODE_SHIFT	8
#define USB_TRANS_CTR		0x0000
#define USB_TRANS_INT		0x0100
#define USB_TRANS_BULK		0x0200
#define USB_TRANS_ISO		0x0300
#define USB_EP_MF		0x0020
#define USB_EP_RTE		0x0010
#define USB_THS_SHIFT		2
#define USB_THS_MASK		0x000c
#define USB_THS_NORMAL		0x0
#define USB_THS_IGNORE_IN	0x0004
#define USB_THS_NACK		0x0008
#define USB_THS_STALL		0x000c
#define USB_RHS_SHIFT   	0
#define USB_RHS_MASK		0x0003
#define USB_RHS_NORMAL  	0x0
#define USB_RHS_IGNORE_OUT	0x0001
#define USB_RHS_NACK		0x0002
#define USB_RHS_STALL		0x0003
#define USB_RTHS_MASK		0x000f
#define USB_CMD_STR_FIFO	0x80
#define USB_CMD_FLUSH_FIFO	0x40
#define USB_CMD_ISFT		0x20
#define USB_CMD_DSFT		0x10
#define USB_CMD_EP_MASK		0x03
#define USB_E_MSF_MASK		0x0800
#define USB_E_SFT_MASK		0x0400
#define USB_E_RESET_MASK	0x0200
#define USB_E_IDLE_MASK		0x0100
#define USB_E_TXE4_MASK		0x0080
#define USB_E_TXE3_MASK		0x0040
#define USB_E_TXE2_MASK		0x0020
#define USB_E_TXE1_MASK		0x0010
#define USB_E_SOF_MASK		0x0008
#define USB_E_BSY_MASK		0x0004
#define USB_E_TXB_MASK		0x0002
#define USB_E_RXB_MASK		0x0001
#define USBER_ALL_CLEAR 	0x0fff
#define USB_E_DEFAULT_DEVICE   (USB_E_RESET_MASK | USB_E_TXE4_MASK | \
USB_E_TXE3_MASK | USB_E_TXE2_MASK | \
USB_E_TXE1_MASK | USB_E_BSY_MASK | \
USB_E_TXB_MASK | USB_E_RXB_MASK)
#define USB_E_TXE_MASK         (USB_E_TXE4_MASK | USB_E_TXE3_MASK|\
USB_E_TXE2_MASK | USB_E_TXE1_MASK)
#define USB_IDLE_STATUS_MASK	0x01
#define USB_USSFT_MASK		0x3FFF
#define USB_USFRN_MASK		0xFFFF
struct usb_device_para;
struct usb_ep_para;
#define USB_BUSMODE_GBL		0x20
#define USB_BUSMODE_BO_MASK	0x18
#define USB_BUSMODE_BO_SHIFT	0x3
#define USB_BUSMODE_BE		0x2
#define USB_BUSMODE_CETM	0x04
#define USB_BUSMODE_DTB		0x02
#define ep_index(EP)		((EP)->desc->bEndpointAddress & 0xF)
#define ep_maxpacket(EP)	((EP)->ep.maxpacket)
#define ep_is_in(EP)	((ep_index(EP) == 0) ? (EP->udc->ep0_dir == \
USB_DIR_IN) : ((EP)->desc->bEndpointAddress \
& USB_DIR_IN) == USB_DIR_IN)
#define WAIT_FOR_SETUP          0
#define DATA_STATE_XMIT         1
#define DATA_STATE_NEED_ZLP     2
#define WAIT_FOR_OUT_STATUS     3
#define DATA_STATE_RECV         4
#define USBP_TM_CTL	0
#define USBP_TM_ISO	1
#define USBP_TM_BULK	2
#define USBP_TM_INT	3
struct qe_frame;
#define PID_DATA0              0x80000000
#define PID_DATA1              0x40000000
#define PID_SETUP              0x20000000
#define SETUP_STATUS           0x10000000
#define SETADDR_STATUS         0x08000000
#define NO_REQ                 0x04000000
#define HOST_DATA              0x02000000
#define FIRST_PACKET_IN_FRAME  0x01000000
#define TOKEN_FRAME            0x00800000
#define ZLP                    0x00400000
#define IN_TOKEN_FRAME         0x00200000
#define OUT_TOKEN_FRAME        0x00100000
#define SETUP_TOKEN_FRAME      0x00080000
#define STALL_FRAME            0x00040000
#define NACK_FRAME             0x00020000
#define NO_PID                 0x00010000
#define NO_CRC                 0x00008000
#define HOST_COMMAND           0x00004000
#define FRAME_OK               0x00000000
#define FRAME_ERROR            0x80000000
#define START_FRAME_LOST       0x40000000
#define END_FRAME_LOST         0x20000000
#define RX_ER_NONOCT           0x10000000
#define RX_ER_BITSTUFF         0x08000000
#define RX_ER_CRC              0x04000000
#define RX_ER_OVERUN           0x02000000
#define RX_ER_PID              0x01000000
#define TX_ER_NAK              0x00800000
#define TX_ER_STALL            0x00400000
#define TX_ER_TIMEOUT          0x00200000
#define TX_ER_UNDERUN          0x00100000
#define FRAME_INPROGRESS       0x00080000
#define ER_DATA_UNDERUN        0x00040000
#define ER_DATA_OVERUN         0x00020000
#define frame_get_length(frm) (frm->len)
#define frame_set_length(frm, leng) (frm->len = leng)
#define frame_get_data(frm) (frm->data)
#define frame_set_data(frm, dat) (frm->data = dat)
#define frame_get_info(frm) (frm->info)
#define frame_set_info(frm, inf) (frm->info = inf)
#define frame_get_status(frm) (frm->status)
#define frame_set_status(frm, stat) (frm->status = stat)
#define frame_get_privdata(frm) (frm->privdata)
#define frame_set_privdata(frm, dat) (frm->privdata = dat)
static inline void qe_frame_clean(struct qe_frame *frm)
static inline void qe_frame_init(struct qe_frame *frm)
struct qe_req ;
struct qe_ep ;
struct qe_udc ;
#define EP_STATE_IDLE	0
#define EP_STATE_NACK	1
#define EP_STATE_STALL	2
#define T_R           0x80000000
#define T_W           0x20000000
#define T_I           0x10000000
#define T_L           0x08000000
#define T_TC          0x04000000
#define T_CNF         0x02000000
#define T_LSP         0x01000000
#define T_PID         0x00c00000
#define T_NAK         0x00100000
#define T_STAL        0x00080000
#define T_TO          0x00040000
#define T_UN          0x00020000
#define DEVICE_T_ERROR    (T_UN | T_TO)
#define HOST_T_ERROR      (T_UN | T_TO | T_NAK | T_STAL)
#define DEVICE_T_BD_MASK  DEVICE_T_ERROR
#define HOST_T_BD_MASK    HOST_T_ERROR
#define T_PID_SHIFT   6
#define T_PID_DATA0   0x00800000
#define T_PID_DATA1   0x00c00000
#define R_E           0x80000000
#define R_W           0x20000000
#define R_I           0x10000000
#define R_L           0x08000000
#define R_F           0x04000000
#define R_PID         0x00c00000
#define R_NO          0x00100000
#define R_AB          0x00080000
#define R_CR          0x00040000
#define R_OV          0x00020000
#define R_ERROR       (R_NO | R_AB | R_CR | R_OV)
#define R_BD_MASK     R_ERROR
#define R_PID_DATA0   0x00000000
#define R_PID_DATA1   0x00400000
#define R_PID_SETUP   0x00800000
#define CPM_USB_STOP_TX 0x2e600000
#define CPM_USB_RESTART_TX 0x2e600000
#define CPM_USB_STOP_TX_OPCODE 0x0a
#define CPM_USB_RESTART_TX_OPCODE 0x0b
#define CPM_USB_EP_SHIFT 5
