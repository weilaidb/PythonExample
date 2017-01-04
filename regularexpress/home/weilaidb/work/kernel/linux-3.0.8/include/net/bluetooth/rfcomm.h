#define __RFCOMM_H
#define RFCOMM_PSM 3
#define RFCOMM_CONN_TIMEOUT (HZ * 30)
#define RFCOMM_DISC_TIMEOUT (HZ * 20)
#define RFCOMM_AUTH_TIMEOUT (HZ * 25)
#define RFCOMM_IDLE_TIMEOUT (HZ * 2)
#define RFCOMM_DEFAULT_MTU	127
#define RFCOMM_DEFAULT_CREDITS	7
#define RFCOMM_MAX_L2CAP_MTU	1013
#define RFCOMM_MAX_CREDITS	40
#define RFCOMM_SKB_HEAD_RESERVE	8
#define RFCOMM_SKB_TAIL_RESERVE	2
#define RFCOMM_SKB_RESERVE  (RFCOMM_SKB_HEAD_RESERVE + RFCOMM_SKB_TAIL_RESERVE)
#define RFCOMM_SABM	0x2f
#define RFCOMM_DISC	0x43
#define RFCOMM_UA	0x63
#define RFCOMM_DM	0x0f
#define RFCOMM_UIH	0xef
#define RFCOMM_TEST	0x08
#define RFCOMM_FCON	0x28
#define RFCOMM_FCOFF	0x18
#define RFCOMM_MSC	0x38
#define RFCOMM_RPN	0x24
#define RFCOMM_RLS	0x14
#define RFCOMM_PN	0x20
#define RFCOMM_NSC	0x04
#define RFCOMM_V24_FC	0x02
#define RFCOMM_V24_RTC	0x04
#define RFCOMM_V24_RTR	0x08
#define RFCOMM_V24_IC	0x40
#define RFCOMM_V24_DV	0x80
#define RFCOMM_RPN_BR_2400	0x0
#define RFCOMM_RPN_BR_4800	0x1
#define RFCOMM_RPN_BR_7200	0x2
#define RFCOMM_RPN_BR_9600	0x3
#define RFCOMM_RPN_BR_19200	0x4
#define RFCOMM_RPN_BR_38400	0x5
#define RFCOMM_RPN_BR_57600	0x6
#define RFCOMM_RPN_BR_115200	0x7
#define RFCOMM_RPN_BR_230400	0x8
#define RFCOMM_RPN_DATA_5	0x0
#define RFCOMM_RPN_DATA_6	0x1
#define RFCOMM_RPN_DATA_7	0x2
#define RFCOMM_RPN_DATA_8	0x3
#define RFCOMM_RPN_STOP_1	0
#define RFCOMM_RPN_STOP_15	1
#define RFCOMM_RPN_PARITY_NONE	0x0
#define RFCOMM_RPN_PARITY_ODD	0x1
#define RFCOMM_RPN_PARITY_EVEN	0x3
#define RFCOMM_RPN_PARITY_MARK	0x5
#define RFCOMM_RPN_PARITY_SPACE	0x7
#define RFCOMM_RPN_FLOW_NONE	0x00
#define RFCOMM_RPN_XON_CHAR	0x11
#define RFCOMM_RPN_XOFF_CHAR	0x13
#define RFCOMM_RPN_PM_BITRATE		0x0001
#define RFCOMM_RPN_PM_DATA		0x0002
#define RFCOMM_RPN_PM_STOP		0x0004
#define RFCOMM_RPN_PM_PARITY		0x0008
#define RFCOMM_RPN_PM_PARITY_TYPE	0x0010
#define RFCOMM_RPN_PM_XON		0x0020
#define RFCOMM_RPN_PM_XOFF		0x0040
#define RFCOMM_RPN_PM_FLOW		0x3F00
#define RFCOMM_RPN_PM_ALL		0x3F7F
struct rfcomm_hdr  __packed;
struct rfcomm_cmd  __packed;
struct rfcomm_mcc  __packed;
struct rfcomm_pn  __packed;
struct rfcomm_rpn  __packed;
struct rfcomm_rls  __packed;
struct rfcomm_msc  __packed;
struct rfcomm_session ;
struct rfcomm_dlc ;
#define RFCOMM_RX_THROTTLED 0
#define RFCOMM_TX_THROTTLED 1
#define RFCOMM_TIMED_OUT    2
#define RFCOMM_MSC_PENDING  3
#define RFCOMM_SEC_PENDING  4
#define RFCOMM_AUTH_PENDING 5
#define RFCOMM_AUTH_ACCEPT  6
#define RFCOMM_AUTH_REJECT  7
#define RFCOMM_DEFER_SETUP  8
#define RFCOMM_SCHED_WAKEUP 31
#define RFCOMM_MSCEX_TX     1
#define RFCOMM_MSCEX_RX     2
#define RFCOMM_MSCEX_OK     (RFCOMM_MSCEX_TX + RFCOMM_MSCEX_RX)
#define RFCOMM_CFC_UNKNOWN  -1
#define RFCOMM_CFC_DISABLED 0
#define RFCOMM_CFC_ENABLED  RFCOMM_MAX_CREDITS
int rfcomm_send_rpn(struct rfcomm_session *s, int cr, u8 dlci,
u8 bit_rate, u8 data_bits, u8 stop_bits,
u8 parity, u8 flow_ctrl_settings,
u8 xon_char, u8 xoff_char, u16 param_mask);
struct rfcomm_dlc *rfcomm_dlc_alloc(gfp_t prio);
void rfcomm_dlc_free(struct rfcomm_dlc *d);
int  rfcomm_dlc_open(struct rfcomm_dlc *d, bdaddr_t *src, bdaddr_t *dst, u8 channel);
int  rfcomm_dlc_close(struct rfcomm_dlc *d, int reason);
int  rfcomm_dlc_send(struct rfcomm_dlc *d, struct sk_buff *skb);
int  rfcomm_dlc_set_modem_status(struct rfcomm_dlc *d, u8 v24_sig);
int  rfcomm_dlc_get_modem_status(struct rfcomm_dlc *d, u8 *v24_sig);
void rfcomm_dlc_accept(struct rfcomm_dlc *d);
#define rfcomm_dlc_lock(d)     spin_lock(&d->lock)
#define rfcomm_dlc_unlock(d)   spin_unlock(&d->lock)
static inline void rfcomm_dlc_hold(struct rfcomm_dlc *d)
static inline void rfcomm_dlc_put(struct rfcomm_dlc *d)
extern void __rfcomm_dlc_throttle(struct rfcomm_dlc *d);
extern void __rfcomm_dlc_unthrottle(struct rfcomm_dlc *d);
static inline void rfcomm_dlc_throttle(struct rfcomm_dlc *d)
static inline void rfcomm_dlc_unthrottle(struct rfcomm_dlc *d)
void   rfcomm_session_getaddr(struct rfcomm_session *s, bdaddr_t *src, bdaddr_t *dst);
static inline void rfcomm_session_hold(struct rfcomm_session *s)
struct sockaddr_rc ;
#define RFCOMM_CONNINFO	0x02
struct rfcomm_conninfo ;
#define RFCOMM_LM	0x03
#define RFCOMM_LM_MASTER	0x0001
#define RFCOMM_LM_AUTH		0x0002
#define RFCOMM_LM_ENCRYPT	0x0004
#define RFCOMM_LM_TRUSTED	0x0008
#define RFCOMM_LM_RELIABLE	0x0010
#define RFCOMM_LM_SECURE	0x0020
#define rfcomm_pi(sk) ((struct rfcomm_pinfo *) sk)
struct rfcomm_pinfo ;
int  rfcomm_init_sockets(void);
void rfcomm_cleanup_sockets(void);
int  rfcomm_connect_ind(struct rfcomm_session *s, u8 channel, struct rfcomm_dlc **d);
#define RFCOMM_MAX_DEV  256
#define RFCOMMCREATEDEV		_IOW('R', 200, int)
#define RFCOMMRELEASEDEV	_IOW('R', 201, int)
#define RFCOMMGETDEVLIST	_IOR('R', 210, int)
#define RFCOMMGETDEVINFO	_IOR('R', 211, int)
#define RFCOMMSTEALDLC		_IOW('R', 220, int)
#define RFCOMM_REUSE_DLC      0
#define RFCOMM_RELEASE_ONHUP  1
#define RFCOMM_HANGUP_NOW     2
#define RFCOMM_TTY_ATTACHED   3
#define RFCOMM_TTY_RELEASED   4
struct rfcomm_dev_req ;
struct rfcomm_dev_info ;
struct rfcomm_dev_list_req ;
int  rfcomm_dev_ioctl(struct sock *sk, unsigned int cmd, void __user *arg);
int  rfcomm_init_ttys(void);
void rfcomm_cleanup_ttys(void);
static inline int rfcomm_init_ttys(void)
static inline void rfcomm_cleanup_ttys(void)
