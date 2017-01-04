#define __FHCI_H
#define USB_CLOCK	48000000
#define FHCI_PRAM_SIZE 0x100
#define MAX_EDS		32
#define MAX_TDS		32
#define CRC_SIZE 2
#define PROTOCOL_OVERHEAD 7
#define PKT_PID_DATA0		0x80000000
#define PKT_PID_DATA1		0x40000000
#define PKT_PID_SETUP		0x20000000
#define PKT_SETUP_STATUS	0x10000000
#define PKT_SETADDR_STATUS	0x08000000
#define PKT_SET_HOST_LAST	0x04000000
#define PKT_HOST_DATA		0x02000000
#define PKT_FIRST_IN_FRAME	0x01000000
#define PKT_TOKEN_FRAME		0x00800000
#define PKT_ZLP			0x00400000
#define PKT_IN_TOKEN_FRAME	0x00200000
#define PKT_OUT_TOKEN_FRAME	0x00100000
#define PKT_SETUP_TOKEN_FRAME	0x00080000
#define PKT_STALL_FRAME		0x00040000
#define PKT_NACK_FRAME		0x00020000
#define PKT_NO_PID		0x00010000
#define PKT_NO_CRC		0x00008000
#define PKT_HOST_COMMAND	0x00004000
#define PKT_DUMMY_PACKET	0x00002000
#define PKT_LOW_SPEED_PACKET	0x00001000
#define TRANS_OK		(0)
#define TRANS_INPROGRESS	(-1)
#define TRANS_DISCARD		(-2)
#define TRANS_FAIL		(-3)
#define PS_INT		0
#define PS_DISCONNECTED	1
#define PS_CONNECTED	2
#define PS_READY	3
#define PS_MISSING	4
#define USB_TD_OK		0x00000000
#define USB_TD_INPROGRESS	0x80000000
#define USB_TD_RX_ER_NONOCT	0x40000000
#define USB_TD_RX_ER_BITSTUFF	0x20000000
#define USB_TD_RX_ER_CRC	0x10000000
#define USB_TD_RX_ER_OVERUN	0x08000000
#define USB_TD_RX_ER_PID	0x04000000
#define USB_TD_RX_DATA_UNDERUN	0x02000000
#define USB_TD_RX_DATA_OVERUN	0x01000000
#define USB_TD_TX_ER_NAK	0x00800000
#define USB_TD_TX_ER_STALL	0x00400000
#define USB_TD_TX_ER_TIMEOUT	0x00200000
#define USB_TD_TX_ER_UNDERUN	0x00100000
#define USB_TD_ERROR (USB_TD_RX_ER_NONOCT | USB_TD_RX_ER_BITSTUFF | \
USB_TD_RX_ER_CRC | USB_TD_RX_ER_OVERUN | USB_TD_RX_ER_PID | \
USB_TD_RX_DATA_UNDERUN | USB_TD_RX_DATA_OVERUN | \
USB_TD_TX_ER_NAK | USB_TD_TX_ER_STALL | \
USB_TD_TX_ER_TIMEOUT | USB_TD_TX_ER_UNDERUN)
#define USB_TD_TOGGLE_DATA0	0
#define USB_TD_TOGGLE_DATA1	1
#define USB_TD_TOGGLE_CARRY	2
#define BUS_MODE_GBL	0x20
#define BUS_MODE_BO	0x18
#define BUS_MODE_BO_BE	0x10
#define BUS_MODE_DTB	0x02
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
struct fhci_regs ;
struct fhci_pram ;
struct fhci_ep_pram ;
struct fhci_controller_list ;
struct virtual_root_hub ;
enum fhci_gpios ;
enum fhci_pins ;
struct fhci_hcd ;
#define USB_FRAME_USAGE 90
#define FRAME_TIME_USAGE (USB_FRAME_USAGE*10)
#define SW_FIX_TIME_BETWEEN_TRANSACTION 150
#define MAX_BYTES_PER_FRAME (USB_FRAME_USAGE*15)
#define MAX_PERIODIC_FRAME_USAGE 90
enum fhci_ta_type ;
enum fhci_tf_mode ;
enum fhci_speed ;
enum fhci_ed_state ;
enum fhci_port_status ;
enum fhci_mem_alloc ;
#define DEFAULT_RING_LEN	8
#define DEFAULT_DATA_MEM	MEM_CACHABLE_SYS
struct ed ;
struct td ;
struct packet ;
#define URB_INPROGRESS	0
#define URB_DEL		1
#define US_BULK		0
#define US_BULK0	1
#define US_CTRL_SETUP	2
#define US_CTRL_DATA	1
#define US_CTRL_ACK	0
#define EP_ZERO	0
struct urb_priv ;
struct endpoint ;
#define FRAME_IS_TRANSMITTED		0x00
#define FRAME_TIMER_END_TRANSMISSION	0x01
#define FRAME_DATA_END_TRANSMISSION	0x02
#define FRAME_END_TRANSMISSION		0x03
#define FRAME_IS_PREPARED		0x04
struct fhci_time_frame ;
struct fhci_usb ;
static inline u16 get_frame_num(struct fhci_hcd *fhci)
#define fhci_dbg(fhci, fmt, args...) \
dev_dbg(fhci_to_hcd(fhci)->self.controller, fmt, ##args)
#define fhci_vdbg(fhci, fmt, args...) \
dev_vdbg(fhci_to_hcd(fhci)->self.controller, fmt, ##args)
#define fhci_err(fhci, fmt, args...) \
dev_err(fhci_to_hcd(fhci)->self.controller, fmt, ##args)
#define fhci_info(fhci, fmt, args...) \
dev_info(fhci_to_hcd(fhci)->self.controller, fmt, ##args)
#define fhci_warn(fhci, fmt, args...) \
dev_warn(fhci_to_hcd(fhci)->self.controller, fmt, ##args)
static inline struct fhci_hcd *hcd_to_fhci(struct usb_hcd *hcd)
static inline struct usb_hcd *fhci_to_hcd(struct fhci_hcd *fhci)
static inline int cq_new(struct kfifo *fifo, int size)
static inline void cq_delete(struct kfifo *kfifo)
static inline unsigned int cq_howmany(struct kfifo *kfifo)
static inline int cq_put(struct kfifo *kfifo, void *p)
static inline void *cq_get(struct kfifo *kfifo)
void fhci_start_sof_timer(struct fhci_hcd *fhci);
void fhci_stop_sof_timer(struct fhci_hcd *fhci);
u16 fhci_get_sof_timer_count(struct fhci_usb *usb);
void fhci_usb_enable_interrupt(struct fhci_usb *usb);
void fhci_usb_disable_interrupt(struct fhci_usb *usb);
int fhci_ioports_check_bus_state(struct fhci_hcd *fhci);
void fhci_recycle_empty_td(struct fhci_hcd *fhci, struct td *td);
void fhci_recycle_empty_ed(struct fhci_hcd *fhci, struct ed *ed);
struct ed *fhci_get_empty_ed(struct fhci_hcd *fhci);
struct td *fhci_td_fill(struct fhci_hcd *fhci, struct urb *urb,
struct urb_priv *urb_priv, struct ed *ed, u16 index,
enum fhci_ta_type type, int toggle, u8 *data, u32 len,
u16 interval, u16 start_frame, bool ioc);
void fhci_add_tds_to_ed(struct ed *ed, struct td **td_list, int number);
void fhci_config_transceiver(struct fhci_hcd *fhci,
enum fhci_port_status status);
void fhci_port_disable(struct fhci_hcd *fhci);
void fhci_port_enable(void *lld);
void fhci_io_port_generate_reset(struct fhci_hcd *fhci);
void fhci_port_reset(void *lld);
int fhci_hub_status_data(struct usb_hcd *hcd, char *buf);
int fhci_hub_control(struct usb_hcd *hcd, u16 typeReq, u16 wValue,
u16 wIndex, char *buf, u16 wLength);
void fhci_flush_bds(struct fhci_usb *usb);
void fhci_flush_actual_frame(struct fhci_usb *usb);
u32 fhci_host_transaction(struct fhci_usb *usb, struct packet *pkt,
enum fhci_ta_type trans_type, u8 dest_addr,
u8 dest_ep, enum fhci_tf_mode trans_mode,
enum fhci_speed dest_speed, u8 data_toggle);
void fhci_host_transmit_actual_frame(struct fhci_usb *usb);
void fhci_tx_conf_interrupt(struct fhci_usb *usb);
void fhci_push_dummy_bd(struct endpoint *ep);
u32 fhci_create_ep(struct fhci_usb *usb, enum fhci_mem_alloc data_mem,
u32 ring_len);
void fhci_init_ep_registers(struct fhci_usb *usb,
struct endpoint *ep,
enum fhci_mem_alloc data_mem);
void fhci_ep0_free(struct fhci_usb *usb);
extern struct tasklet_struct fhci_tasklet;
void fhci_transaction_confirm(struct fhci_usb *usb, struct packet *pkt);
void fhci_flush_all_transmissions(struct fhci_usb *usb);
void fhci_schedule_transactions(struct fhci_usb *usb);
void fhci_device_connected_interrupt(struct fhci_hcd *fhci);
void fhci_device_disconnected_interrupt(struct fhci_hcd *fhci);
void fhci_queue_urb(struct fhci_hcd *fhci, struct urb *urb);
u32 fhci_transfer_confirm_callback(struct fhci_hcd *fhci);
irqreturn_t fhci_irq(struct usb_hcd *hcd);
irqreturn_t fhci_frame_limit_timer_irq(int irq, void *_hcd);
void fhci_urb_complete_free(struct fhci_hcd *fhci, struct urb *urb);
struct td *fhci_remove_td_from_ed(struct ed *ed);
struct td *fhci_remove_td_from_frame(struct fhci_time_frame *frame);
void fhci_move_td_from_ed_to_done_list(struct fhci_usb *usb, struct ed *ed);
struct td *fhci_peek_td_from_frame(struct fhci_time_frame *frame);
void fhci_add_td_to_frame(struct fhci_time_frame *frame, struct td *td);
struct td *fhci_remove_td_from_done_list(struct fhci_controller_list *p_list);
void fhci_done_td(struct urb *urb, struct td *td);
void fhci_del_ed_list(struct fhci_hcd *fhci, struct ed *ed);
void fhci_dbg_isr(struct fhci_hcd *fhci, int usb_er);
void fhci_dfs_destroy(struct fhci_hcd *fhci);
void fhci_dfs_create(struct fhci_hcd *fhci);
static inline void fhci_dbg_isr(struct fhci_hcd *fhci, int usb_er)
static inline void fhci_dfs_destroy(struct fhci_hcd *fhci)
static inline void fhci_dfs_create(struct fhci_hcd *fhci)
