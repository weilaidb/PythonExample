#define GIGASET_H
#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define GIG_VERSION
#define GIG_COMPAT
#define MAX_REC_PARAMS 10
#define MAX_RESP_SIZE 511
#define MAX_EVENTS 64
#define RBUFSIZE 8192
#define GIG_TICK 100
#define INIT_TIMEOUT 1
#define RING_TIMEOUT 3
#define BAS_TIMEOUT 20
#define ATRDY_TIMEOUT 3
#define BAS_RETRY 3
#define MAXACT 3
extern int gigaset_debuglevel;
enum debuglevel ;
#define gig_dbg(level, format, arg...) \
do  while (0)
#define DEBUG_DEFAULT (DEBUG_TRANSCMD | DEBUG_CMD | DEBUG_USBREQ)
#define gig_dbg(level, format, arg...) do  while (0)
#define DEBUG_DEFAULT 0
void gigaset_dbg_buffer(enum debuglevel level, const unsigned char *msg,
size_t len, const unsigned char *buf);
#define ZSAU_NONE			0
#define ZSAU_DISCONNECT_IND		4
#define ZSAU_OUTGOING_CALL_PROCEEDING	1
#define ZSAU_PROCEEDING			1
#define ZSAU_CALL_DELIVERED		2
#define ZSAU_ACTIVE			3
#define ZSAU_NULL			5
#define ZSAU_DISCONNECT_REQ		6
#define ZSAU_UNKNOWN			-1
#define OUT_VENDOR_REQ	(USB_DIR_OUT | USB_TYPE_VENDOR | USB_RECIP_ENDPOINT)
#define IN_VENDOR_REQ	(USB_DIR_IN | USB_TYPE_VENDOR | USB_RECIP_ENDPOINT)
#define HD_B1_FLOW_CONTROL		0x80
#define HD_B2_FLOW_CONTROL		0x81
#define HD_RECEIVEATDATA_ACK		(0x35)
#define HD_READY_SEND_ATDATA		(0x36)
#define HD_OPEN_ATCHANNEL_ACK		(0x37)
#define HD_CLOSE_ATCHANNEL_ACK		(0x38)
#define HD_DEVICE_INIT_OK		(0x11)
#define HD_OPEN_B1CHANNEL_ACK		(0x51)
#define HD_OPEN_B2CHANNEL_ACK		(0x52)
#define HD_CLOSE_B1CHANNEL_ACK		(0x53)
#define HD_CLOSE_B2CHANNEL_ACK		(0x54)
#define HD_SUSPEND_END			(0x61)
#define HD_RESET_INTERRUPT_PIPE_ACK	(0xFF)
#define	HD_OPEN_B1CHANNEL		(0x23)
#define	HD_CLOSE_B1CHANNEL		(0x24)
#define	HD_OPEN_B2CHANNEL		(0x25)
#define	HD_CLOSE_B2CHANNEL		(0x26)
#define HD_RESET_INTERRUPT_PIPE		(0x27)
#define	HD_DEVICE_INIT_ACK		(0x34)
#define	HD_WRITE_ATMESSAGE		(0x12)
#define	HD_READ_ATMESSAGE		(0x13)
#define	HD_OPEN_ATCHANNEL		(0x28)
#define	HD_CLOSE_ATCHANNEL		(0x29)
#define BAS_CHANNELS	2
#define BAS_FRAMETIME	1
#define BAS_NUMFRAMES	8
#define BAS_MAXFRAME	16
#define BAS_NORMFRAME	8
#define BAS_HIGHFRAME	10
#define BAS_LOWFRAME	5
#define BAS_CORRFRAMES	4
#define BAS_INBUFSIZE	(BAS_MAXFRAME * BAS_NUMFRAMES)
#define BAS_OUTBUFSIZE	4096
#define BAS_OUTBUFPAD	BAS_MAXFRAME
#define BAS_INURBS	3
#define BAS_OUTURBS	3
#define AT_ISO		0
#define AT_DIAL		1
#define AT_MSN		2
#define AT_BC		3
#define AT_PROTO	4
#define AT_TYPE		5
#define AT_CLIP		6
#define AT_NUM		7
#define VAR_ZSAU	0
#define VAR_ZDLE	1
#define VAR_ZCTP	2
#define VAR_NUM		3
#define STR_NMBR	0
#define STR_ZCPN	1
#define STR_ZCON	2
#define STR_ZBC		3
#define STR_ZHLC	4
#define STR_NUM		5
#define EV_TIMEOUT	-105
#define EV_IF_VER	-106
#define EV_PROC_CIDMODE	-107
#define EV_SHUTDOWN	-108
#define EV_START	-110
#define EV_STOP		-111
#define EV_IF_LOCK	-112
#define EV_ACCEPT	-114
#define EV_DIAL		-115
#define EV_HUP		-116
#define EV_BC_OPEN	-117
#define EV_BC_CLOSED	-118
#define INS_command	0x0001
#define INS_DLE_char	0x0002
#define INS_byte_stuff	0x0004
#define INS_have_data	0x0008
#define INS_DLE_command	0x0020
#define INS_flag_hunt	0x0040
#define CHS_D_UP	0x01
#define CHS_B_UP	0x02
#define CHS_NOTIFY_LL	0x04
#define ICALL_REJECT	0
#define ICALL_ACCEPT	1
#define ICALL_IGNORE	2
#define MS_UNINITIALIZED	0
#define MS_INIT			1
#define MS_LOCKED		2
#define MS_SHUTDOWN		3
#define MS_RECOVER		4
#define MS_READY		5
#define M_UNKNOWN	0
#define M_CONFIG	1
#define M_UNIMODEM	2
#define M_CID		3
#define SM_LOCKED	0
#define SM_ISDN		1
#define L2_BITSYNC	0
#define L2_HDLC		1
#define L2_VOICE	2
struct gigaset_ops;
struct gigaset_driver;
struct usb_cardstate;
struct ser_cardstate;
struct bas_cardstate;
struct bc_state;
struct usb_bc_state;
struct ser_bc_state;
struct bas_bc_state;
struct reply_t ;
extern struct reply_t gigaset_tab_cid[];
extern struct reply_t gigaset_tab_nocid[];
struct inbuf_t ;
struct isowbuf_t ;
struct isow_urbctx_t ;
struct at_state_t ;
struct event_t ;
struct bc_state ;
struct cardstate ;
struct gigaset_driver ;
struct cmdbuf_t ;
struct bas_bc_state ;
struct gigaset_ops ;
#define DLE_FLAG	0x10
int gigaset_m10x_send_skb(struct bc_state *bcs, struct sk_buff *skb);
void gigaset_m10x_input(struct inbuf_t *inbuf);
int gigaset_isoc_send_skb(struct bc_state *bcs, struct sk_buff *skb);
void gigaset_isoc_input(struct inbuf_t *inbuf);
void gigaset_isoc_receive(unsigned char *src, unsigned count,
struct bc_state *bcs);
int gigaset_isoc_buildframe(struct bc_state *bcs, unsigned char *in, int len);
void gigaset_isowbuf_init(struct isowbuf_t *iwb, unsigned char idle);
int gigaset_isowbuf_getbytes(struct isowbuf_t *iwb, int size);
void gigaset_isdn_regdrv(void);
void gigaset_isdn_unregdrv(void);
int gigaset_isdn_regdev(struct cardstate *cs, const char *isdnid);
void gigaset_isdn_unregdev(struct cardstate *cs);
void gigaset_skb_sent(struct bc_state *bcs, struct sk_buff *skb);
void gigaset_skb_rcvd(struct bc_state *bcs, struct sk_buff *skb);
void gigaset_isdn_rcv_err(struct bc_state *bcs);
void gigaset_isdn_start(struct cardstate *cs);
void gigaset_isdn_stop(struct cardstate *cs);
int gigaset_isdn_icall(struct at_state_t *at_state);
void gigaset_isdn_connD(struct bc_state *bcs);
void gigaset_isdn_hupD(struct bc_state *bcs);
void gigaset_isdn_connB(struct bc_state *bcs);
void gigaset_isdn_hupB(struct bc_state *bcs);
void gigaset_handle_event(unsigned long data);
void gigaset_handle_modem_response(struct cardstate *cs);
void gigaset_init_dev_sysfs(struct cardstate *cs);
void gigaset_free_dev_sysfs(struct cardstate *cs);
void gigaset_bcs_reinit(struct bc_state *bcs);
void gigaset_at_init(struct at_state_t *at_state, struct bc_state *bcs,
struct cardstate *cs, int cid);
int gigaset_get_channel(struct bc_state *bcs);
struct bc_state *gigaset_get_free_channel(struct cardstate *cs);
void gigaset_free_channel(struct bc_state *bcs);
int gigaset_get_channels(struct cardstate *cs);
void gigaset_free_channels(struct cardstate *cs);
void gigaset_block_channels(struct cardstate *cs);
struct gigaset_driver *gigaset_initdriver(unsigned minor, unsigned minors,
const char *procname,
const char *devname,
const struct gigaset_ops *ops,
struct module *owner);
void gigaset_freedriver(struct gigaset_driver *drv);
struct cardstate *gigaset_get_cs_by_tty(struct tty_struct *tty);
struct cardstate *gigaset_get_cs_by_id(int id);
void gigaset_blockdriver(struct gigaset_driver *drv);
struct cardstate *gigaset_initcs(struct gigaset_driver *drv, int channels,
int onechannel, int ignoreframes,
int cidmode, const char *modulename);
void gigaset_freecs(struct cardstate *cs);
int gigaset_start(struct cardstate *cs);
void gigaset_stop(struct cardstate *cs);
int gigaset_shutdown(struct cardstate *cs);
void gigaset_skb_sent(struct bc_state *bcs, struct sk_buff *skb);
struct event_t *gigaset_add_event(struct cardstate *cs,
struct at_state_t *at_state, int type,
void *ptr, int parameter, void *arg);
int gigaset_enterconfigmode(struct cardstate *cs);
static inline void gigaset_schedule_event(struct cardstate *cs)
static inline void gigaset_bchannel_down(struct bc_state *bcs)
static inline void gigaset_bchannel_up(struct bc_state *bcs)
static inline struct sk_buff *gigaset_new_rx_skb(struct bc_state *bcs)
int gigaset_fill_inbuf(struct inbuf_t *inbuf, const unsigned char *src,
unsigned numbytes);
void gigaset_if_initdriver(struct gigaset_driver *drv, const char *procname,
const char *devname);
void gigaset_if_freedriver(struct gigaset_driver *drv);
void gigaset_if_init(struct cardstate *cs);
void gigaset_if_free(struct cardstate *cs);
void gigaset_if_receive(struct cardstate *cs,
unsigned char *buffer, size_t len);
