#define SETUP_STAGE		0
#define DATA_STAGE		1
#define STATUS_STAGE		2
struct c67x00_ep_data ;
struct c67x00_td ;
struct c67x00_urb_priv ;
#define td_udev(td)	((td)->ep_data->dev)
#define CY_TD_SIZE		12
#define TD_PIDEP_OFFSET		0x04
#define TD_PIDEPMASK_PID	0xF0
#define TD_PIDEPMASK_EP		0x0F
#define TD_PORTLENMASK_DL	0x02FF
#define TD_PORTLENMASK_PN	0xC000
#define TD_STATUS_OFFSET	0x07
#define TD_STATUSMASK_ACK	0x01
#define TD_STATUSMASK_ERR	0x02
#define TD_STATUSMASK_TMOUT	0x04
#define TD_STATUSMASK_SEQ	0x08
#define TD_STATUSMASK_SETUP	0x10
#define TD_STATUSMASK_OVF	0x20
#define TD_STATUSMASK_NAK	0x40
#define TD_STATUSMASK_STALL	0x80
#define TD_ERROR_MASK		(TD_STATUSMASK_ERR | TD_STATUSMASK_TMOUT | \
TD_STATUSMASK_STALL)
#define TD_RETRYCNT_OFFSET	0x08
#define TD_RETRYCNTMASK_ACT_FLG	0x10
#define TD_RETRYCNTMASK_TX_TYPE	0x0C
#define TD_RETRYCNTMASK_RTY_CNT	0x03
#define TD_RESIDUE_OVERFLOW	0x80
#define TD_PID_IN		0x90
#define td_residue(td)		((__s8)(td->residue))
#define td_ly_base_addr(td)	(__le16_to_cpu((td)->ly_base_addr))
#define td_port_length(td)	(__le16_to_cpu((td)->port_length))
#define td_next_td_addr(td)	(__le16_to_cpu((td)->next_td_addr))
#define td_active(td)		((td)->retry_cnt & TD_RETRYCNTMASK_ACT_FLG)
#define td_length(td)		(td_port_length(td) & TD_PORTLENMASK_DL)
#define td_sequence_ok(td)	(!td->status || \
(!(td->status & TD_STATUSMASK_SEQ) ==	\
!(td->ctrl_reg & SEQ_SEL)))
#define td_acked(td)		(!td->status || \
(td->status & TD_STATUSMASK_ACK))
#define td_actual_bytes(td)	(td_length(td) - td_residue(td))
static void dbg_td(struct c67x00_hcd *c67x00, struct c67x00_td *td, char *msg)
static inline void
dbg_td(struct c67x00_hcd *c67x00, struct c67x00_td *td, char *msg)
static inline u16 c67x00_get_current_frame_number(struct c67x00_hcd *c67x00)
static inline u16 frame_add(u16 a, u16 b)
static inline int frame_after(u16 a, u16 b)
static inline int frame_after_eq(u16 a, u16 b)
static void c67x00_release_urb(struct c67x00_hcd *c67x00, struct urb *urb)
static struct c67x00_ep_data *
c67x00_ep_data_alloc(struct c67x00_hcd *c67x00, struct urb *urb)
static int c67x00_ep_data_free(struct usb_host_endpoint *hep)
void c67x00_endpoint_disable(struct usb_hcd *hcd, struct usb_host_endpoint *ep)
static inline int get_root_port(struct usb_device *dev)
int c67x00_urb_enqueue(struct usb_hcd *hcd,
struct urb *urb, gfp_t mem_flags)
int c67x00_urb_dequeue(struct usb_hcd *hcd, struct urb *urb, int status)
static void
c67x00_giveback_urb(struct c67x00_hcd *c67x00, struct urb *urb, int status)
static int c67x00_claim_frame_bw(struct c67x00_hcd *c67x00, struct urb *urb,
int len, int periodic)
static int c67x00_create_td(struct c67x00_hcd *c67x00, struct urb *urb,
void *data, int len, int pid, int toggle,
unsigned long privdata)
static inline void c67x00_release_td(struct c67x00_td *td)
static int c67x00_add_data_urb(struct c67x00_hcd *c67x00, struct urb *urb)
static int c67x00_add_ctrl_urb(struct c67x00_hcd *c67x00, struct urb *urb)
static int c67x00_add_int_urb(struct c67x00_hcd *c67x00, struct urb *urb)
static int c67x00_add_iso_urb(struct c67x00_hcd *c67x00, struct urb *urb)
static void c67x00_fill_from_list(struct c67x00_hcd *c67x00, int type,
int (*add)(struct c67x00_hcd *, struct urb *))
static void c67x00_fill_frame(struct c67x00_hcd *c67x00)
static inline void
c67x00_parse_td(struct c67x00_hcd *c67x00, struct c67x00_td *td)
static int c67x00_td_to_error(struct c67x00_hcd *c67x00, struct c67x00_td *td)
static inline int c67x00_end_of_data(struct c67x00_td *td)
static inline void c67x00_clear_pipe(struct c67x00_hcd *c67x00,
struct c67x00_td *last_td)
static void c67x00_handle_successful_td(struct c67x00_hcd *c67x00,
struct c67x00_td *td)
static void c67x00_handle_isoc(struct c67x00_hcd *c67x00, struct c67x00_td *td)
static inline void c67x00_check_td_list(struct c67x00_hcd *c67x00)
static inline int c67x00_all_tds_processed(struct c67x00_hcd *c67x00)
static void c67x00_send_td(struct c67x00_hcd *c67x00, struct c67x00_td *td)
static void c67x00_send_frame(struct c67x00_hcd *c67x00)
static void c67x00_do_work(struct c67x00_hcd *c67x00)
static void c67x00_sched_tasklet(unsigned long __c67x00)
void c67x00_sched_kick(struct c67x00_hcd *c67x00)
int c67x00_sched_start_scheduler(struct c67x00_hcd *c67x00)
void c67x00_sched_stop_scheduler(struct c67x00_hcd *c67x00)
