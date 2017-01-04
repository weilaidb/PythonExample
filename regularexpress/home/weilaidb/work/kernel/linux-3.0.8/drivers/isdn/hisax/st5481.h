#define _ST5481_H_
#define ST_VENDOR_ID 0x0483
#define ST5481_PRODUCT_ID 0x4810
#define ST5481_PRODUCT_ID_MASK 0xFFF0
#define EP_CTRL   0x00U
#define EP_INT    0x01U
#define EP_B1_OUT 0x02U
#define EP_B1_IN  0x03U
#define EP_B2_OUT 0x04U
#define EP_B2_IN  0x05U
#define EP_D_OUT  0x06U
#define EP_D_IN   0x07U
#define NUM_ISO_PACKETS_D      20
#define NUM_ISO_PACKETS_B      20
#define SIZE_ISO_PACKETS_D_IN  16
#define SIZE_ISO_PACKETS_D_OUT 2
#define SIZE_ISO_PACKETS_B_IN  32
#define SIZE_ISO_PACKETS_B_OUT 8
#define B_FLOW_ADJUST 2
#define LBA			0x02
#define SET_DEFAULT		0x06
#define LBB			0x1D
#define STT			0x1e
#define SDA_MIN			0x20
#define SDA_MAX			0x21
#define SDELAY_VALUE		0x22
#define IN_D_COUNTER		0x36
#define OUT_D_COUNTER		0x37
#define IN_B1_COUNTER		0x38
#define OUT_B1_COUNTER		0x39
#define IN_B2_COUNTER		0x3a
#define OUT_B2_COUNTER		0x3b
#define FFCTRL_IN_D		0x3C
#define FFCTRH_IN_D		0x3D
#define FFCTRL_OUT_D		0x3E
#define FFCTRH_OUT_D		0x3F
#define FFCTRL_IN_B1		0x40
#define FFCTRH_IN_B1		0x41
#define FFCTRL_OUT_B1		0x42
#define FFCTRH_OUT_B1		0x43
#define FFCTRL_IN_B2		0x44
#define FFCTRH_IN_B2		0x45
#define FFCTRL_OUT_B2		0x46
#define FFCTRH_OUT_B2		0x47
#define MPMSK			0x4A
#define	FFMSK_D			0x4c
#define	FFMSK_B1		0x4e
#define	FFMSK_B2		0x50
#define GPIO_DIR		0x52
#define GPIO_OUT		0x53
#define GPIO_IN			0x54
#define TXCI			0x56
#define MPINT			0
#define FFINT_D			1
#define FFINT_B1		2
#define FFINT_B2		3
#define CCIST			4
#define GPIO_INT		5
#define INT_PKT_SIZE            6
#define LSD_INT                 0x80
#define RXCI_INT		0x40
#define	DEN_INT			0x20
#define DCOLL_INT		0x10
#define AMIVN_INT		0x04
#define INFOI_INT		0x04
#define DRXON_INT               0x02
#define GPCHG_INT               0x01
#define IN_OVERRUN		0x80
#define OUT_UNDERRUN		0x40
#define IN_UP			0x20
#define IN_DOWN			0x10
#define OUT_UP			0x08
#define OUT_DOWN		0x04
#define IN_COUNTER_ZEROED	0x02
#define OUT_COUNTER_ZEROED	0x01
#define ANY_REC_INT	(IN_OVERRUN+IN_UP+IN_DOWN+IN_COUNTER_ZEROED)
#define ANY_XMIT_INT	(OUT_UNDERRUN+OUT_UP+OUT_DOWN+OUT_COUNTER_ZEROED)
#define ST5481_CMD_DR		 0x0
#define ST5481_CMD_RES		 0x1
#define ST5481_CMD_TM1		 0x2
#define ST5481_CMD_TM2		 0x3
#define ST5481_CMD_PUP		 0x7
#define ST5481_CMD_AR8		 0x8
#define ST5481_CMD_AR10		 0x9
#define ST5481_CMD_ARL		 0xA
#define ST5481_CMD_PDN		 0xF
#define B1_LED		0x10U
#define B2_LED		0x20U
#define GREEN_LED	0x40U
#define RED_LED	        0x80U
enum ;
#define DOUT_STATE_COUNT (ST_DOUT_WAIT_FOR_RESET + 1)
enum ;
#define DOUT_EVENT_COUNT (EV_DOUT_UNDERRUN + 1)
enum ;
#define L1_STATE_COUNT (ST_L1_F8+1)
enum ;
#define L1_EVENT_COUNT (EV_TIMER3 + 1)
#define ERR(format, arg...) \
printk(KERN_ERR "%s:%s: " format "\n" , __FILE__,  __func__ , ## arg)
#define WARNING(format, arg...) \
printk(KERN_WARNING "%s:%s: " format "\n" , __FILE__,  __func__ , ## arg)
#define INFO(format, arg...) \
printk(KERN_INFO "%s:%s: " format "\n" , __FILE__,  __func__ , ## arg)
struct fifo ;
static inline void fifo_init(struct fifo *fifo, int size)
static inline int fifo_add(struct fifo *fifo)
static inline int fifo_remove(struct fifo *fifo)
typedef void (*ctrl_complete_t)(void *);
typedef struct ctrl_msg  ctrl_msg;
#define MAX_EP0_MSG 16
struct ctrl_msg_fifo ;
#define MAX_DFRAME_LEN_L1	300
#define HSCX_BUFMAX	4096
struct st5481_ctrl ;
struct st5481_intr ;
struct st5481_d_out ;
struct st5481_b_out ;
struct st5481_in ;
int st5481_setup_in(struct st5481_in *in);
void st5481_release_in(struct st5481_in *in);
void st5481_in_mode(struct st5481_in *in, int mode);
struct st5481_bcs ;
struct st5481_adapter ;
#define TIMER3_VALUE 7000
#define SUBMIT_URB(urb, mem_flags) \
()
static inline int get_buf_nr(struct urb *urbs[], struct urb *urb)
int  st5481_setup_b(struct st5481_bcs *bcs);
void st5481_release_b(struct st5481_bcs *bcs);
void st5481_d_l2l1(struct hisax_if *hisax_d_if, int pr, void *arg);
int  st5481_setup_d(struct st5481_adapter *adapter);
void st5481_release_d(struct st5481_adapter *adapter);
void st5481_b_l2l1(struct hisax_if *b_if, int pr, void *arg);
int  st5481_d_init(void);
void st5481_d_exit(void);
void st5481_ph_command(struct st5481_adapter *adapter, unsigned int command);
int st5481_setup_isocpipes(struct urb* urb[2], struct usb_device *dev,
unsigned int pipe, int num_packets,
int packet_size, int buf_size,
usb_complete_t complete, void *context);
void st5481_release_isocpipes(struct urb* urb[2]);
void st5481_usb_pipe_reset(struct st5481_adapter *adapter,
u_char pipe, ctrl_complete_t complete, void *context);
void st5481_usb_device_ctrl_msg(struct st5481_adapter *adapter,
u8 request, u16 value,
ctrl_complete_t complete, void *context);
int  st5481_setup_usb(struct st5481_adapter *adapter);
void st5481_release_usb(struct st5481_adapter *adapter);
void st5481_start(struct st5481_adapter *adapter);
void st5481_stop(struct st5481_adapter *adapter);
#define __debug_variable st5481_debug
extern int st5481_debug;
#define DBG_ISO_PACKET(level,urb) \
if (level & __debug_variable) dump_iso_packet(__func__,urb)
static void __attribute__((unused))
dump_iso_packet(const char *name, struct urb *urb)
static inline const char *ST5481_CMD_string(int evt)
#define DBG_ISO_PACKET(level,urb) do  while (0)
