#define DUMMY_BD_BUFFER  0xdeadbeef
#define DUMMY2_BD_BUFFER 0xbaadf00d
#define TD_R		0x8000
#define TD_W		0x2000
#define TD_I		0x1000
#define TD_L		0x0800
#define TD_TC		0x0400
#define TD_CNF		0x0200
#define TD_LSP		0x0100
#define TD_PID		0x00c0
#define TD_RXER		0x0020
#define TD_NAK		0x0010
#define TD_STAL		0x0008
#define TD_TO		0x0004
#define TD_UN		0x0002
#define TD_NO		0x0010
#define TD_AB		0x0008
#define TD_CR		0x0004
#define TD_OV		0x0002
#define TD_BOV		0x0001
#define TD_ERRORS	(TD_NAK | TD_STAL | TD_TO | TD_UN | \
TD_NO | TD_AB | TD_CR | TD_OV | TD_BOV)
#define TD_PID_DATA0	0x0080
#define TD_PID_DATA1	0x00c0
#define TD_PID_TOGGLE	0x00c0
#define TD_TOK_SETUP	0x0000
#define TD_TOK_OUT	0x4000
#define TD_TOK_IN	0x8000
#define TD_ISO		0x1000
#define TD_ENDP		0x0780
#define TD_ADDR		0x007f
#define TD_ENDP_SHIFT 7
struct usb_td ;
static struct usb_td __iomem *next_bd(struct usb_td __iomem *base,
struct usb_td __iomem *td,
u16 status)
void fhci_push_dummy_bd(struct endpoint *ep)
void fhci_ep0_free(struct fhci_usb *usb)
u32 fhci_create_ep(struct fhci_usb *usb, enum fhci_mem_alloc data_mem,
u32 ring_len)
void fhci_init_ep_registers(struct fhci_usb *usb, struct endpoint *ep,
enum fhci_mem_alloc data_mem)
static void fhci_td_transaction_confirm(struct fhci_usb *usb)
u32 fhci_host_transaction(struct fhci_usb *usb,
struct packet *pkt,
enum fhci_ta_type trans_type,
u8 dest_addr,
u8 dest_ep,
enum fhci_tf_mode trans_mode,
enum fhci_speed dest_speed, u8 data_toggle)
void fhci_flush_bds(struct fhci_usb *usb)
void fhci_flush_actual_frame(struct fhci_usb *usb)
void fhci_tx_conf_interrupt(struct fhci_usb *usb)
void fhci_host_transmit_actual_frame(struct fhci_usb *usb)
