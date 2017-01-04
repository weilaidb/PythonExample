#define CapiNcpiNotSupportedByProtocol	0x0001
#define CapiFlagsNotSupportedByProtocol	0x0002
#define CapiAlertAlreadySent		0x0003
#define CapiFacilitySpecificFunctionNotSupported	0x3011
#define CAPI_CONNECT_IND_BASELEN	(CAPI_MSG_BASELEN+4+2+8*1)
#define CAPI_CONNECT_ACTIVE_IND_BASELEN	(CAPI_MSG_BASELEN+4+3*1)
#define CAPI_CONNECT_B3_IND_BASELEN	(CAPI_MSG_BASELEN+4+1)
#define CAPI_CONNECT_B3_ACTIVE_IND_BASELEN	(CAPI_MSG_BASELEN+4+1)
#define CAPI_DATA_B3_REQ_LEN64		(CAPI_MSG_BASELEN+4+4+2+2+2+8)
#define CAPI_DATA_B3_CONF_LEN		(CAPI_MSG_BASELEN+4+2+2)
#define CAPI_DISCONNECT_IND_LEN		(CAPI_MSG_BASELEN+4+2)
#define CAPI_DISCONNECT_B3_IND_BASELEN	(CAPI_MSG_BASELEN+4+2+1)
#define CAPI_FACILITY_CONF_BASELEN	(CAPI_MSG_BASELEN+4+2+2+1)
#define CAPI_STDCONF_LEN		(CAPI_MSG_BASELEN+4+2)
#define CAPI_FACILITY_HANDSET	0x0000
#define CAPI_FACILITY_DTMF	0x0001
#define CAPI_FACILITY_V42BIS	0x0002
#define CAPI_FACILITY_SUPPSVC	0x0003
#define CAPI_FACILITY_WAKEUP	0x0004
#define CAPI_FACILITY_LI	0x0005
#define CAPI_SUPPSVC_GETSUPPORTED	0x0000
#define CAPI_SUPPSVC_LISTEN		0x0001
#define CAPIMSG_PLCI_PART(m)	CAPIMSG_U8(m, 9)
#define CAPIMSG_NCCI_PART(m)	CAPIMSG_U16(m, 10)
#define CAPIMSG_HANDLE_REQ(m)	CAPIMSG_U16(m, 18)
#define CAPIMSG_FLAGS(m)	CAPIMSG_U16(m, 20)
#define CAPIMSG_SETCONTROLLER(m, contr)	capimsg_setu8(m, 8, contr)
#define CAPIMSG_SETPLCI_PART(m, plci)	capimsg_setu8(m, 9, plci)
#define CAPIMSG_SETNCCI_PART(m, ncci)	capimsg_setu16(m, 10, ncci)
#define CAPIMSG_SETFLAGS(m, flags)	capimsg_setu16(m, 20, flags)
#define CAPIMSG_SETHANDLE_CONF(m, handle)	capimsg_setu16(m, 12, handle)
#define	CAPIMSG_SETINFO_CONF(m, info)		capimsg_setu16(m, 14, info)
#define CAPI_FLAGS_DELIVERY_CONFIRMATION	0x04
#define CAPI_FLAGS_RESERVED			(~0x1f)
#define MAX_BC_OCTETS 11
#define MAX_HLC_OCTETS 3
#define MAX_NUMBER_DIGITS 20
#define MAX_FMT_IE_LEN 20
#define APCONN_NONE	0
#define APCONN_SETUP	1
#define APCONN_ACTIVE	2
struct gigaset_capi_appl ;
struct gigaset_capi_ctr ;
static struct  cip2bchlc[] = ;
static inline void ignore_cstruct_param(struct cardstate *cs, _cstruct param,
char *msgname, char *paramname)
static int encode_ie(char *in, u8 *out, int maxlen)
static void decode_ie(u8 *in, char *out)
static inline struct gigaset_capi_appl *
get_appl(struct gigaset_capi_ctr *iif, u16 appl)
static inline void dump_cmsg(enum debuglevel level, const char *tag, _cmsg *p)
static inline void dump_rawmsg(enum debuglevel level, const char *tag,
unsigned char *data)
static const char *format_ie(const char *ie)
static void send_data_b3_conf(struct cardstate *cs, struct capi_ctr *ctr,
u16 appl, u16 msgid, int channel,
u16 handle, u16 info)
void gigaset_skb_sent(struct bc_state *bcs, struct sk_buff *dskb)
EXPORT_SYMBOL_GPL(gigaset_skb_sent);
void gigaset_skb_rcvd(struct bc_state *bcs, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(gigaset_skb_rcvd);
void gigaset_isdn_rcv_err(struct bc_state *bcs)
EXPORT_SYMBOL_GPL(gigaset_isdn_rcv_err);
int gigaset_isdn_icall(struct at_state_t *at_state)
static void send_disconnect_ind(struct bc_state *bcs,
struct gigaset_capi_appl *ap, u16 reason)
static void send_disconnect_b3_ind(struct bc_state *bcs,
struct gigaset_capi_appl *ap)
void gigaset_isdn_connD(struct bc_state *bcs)
void gigaset_isdn_hupD(struct bc_state *bcs)
void gigaset_isdn_connB(struct bc_state *bcs)
void gigaset_isdn_hupB(struct bc_state *bcs)
void gigaset_isdn_start(struct cardstate *cs)
void gigaset_isdn_stop(struct cardstate *cs)
static void gigaset_register_appl(struct capi_ctr *ctr, u16 appl,
capi_register_params *rp)
static inline void remove_appl_from_channel(struct bc_state *bcs,
struct gigaset_capi_appl *ap)
static void gigaset_release_appl(struct capi_ctr *ctr, u16 appl)
static void send_conf(struct gigaset_capi_ctr *iif,
struct gigaset_capi_appl *ap,
struct sk_buff *skb,
u16 info)
static void do_facility_req(struct gigaset_capi_ctr *iif,
struct gigaset_capi_appl *ap,
struct sk_buff *skb)
static void do_listen_req(struct gigaset_capi_ctr *iif,
struct gigaset_capi_appl *ap,
struct sk_buff *skb)
static void do_alert_req(struct gigaset_capi_ctr *iif,
struct gigaset_capi_appl *ap,
struct sk_buff *skb)
static void do_connect_req(struct gigaset_capi_ctr *iif,
struct gigaset_capi_appl *ap,
struct sk_buff *skb)
static void do_connect_resp(struct gigaset_capi_ctr *iif,
struct gigaset_capi_appl *ap,
struct sk_buff *skb)
static void do_connect_b3_req(struct gigaset_capi_ctr *iif,
struct gigaset_capi_appl *ap,
struct sk_buff *skb)
static void do_connect_b3_resp(struct gigaset_capi_ctr *iif,
struct gigaset_capi_appl *ap,
struct sk_buff *skb)
static void do_disconnect_req(struct gigaset_capi_ctr *iif,
struct gigaset_capi_appl *ap,
struct sk_buff *skb)
static void do_disconnect_b3_req(struct gigaset_capi_ctr *iif,
struct gigaset_capi_appl *ap,
struct sk_buff *skb)
static void do_data_b3_req(struct gigaset_capi_ctr *iif,
struct gigaset_capi_appl *ap,
struct sk_buff *skb)
static void do_reset_b3_req(struct gigaset_capi_ctr *iif,
struct gigaset_capi_appl *ap,
struct sk_buff *skb)
static unsigned long ignored_msg_dump_time;
static void do_unsupported(struct gigaset_capi_ctr *iif,
struct gigaset_capi_appl *ap,
struct sk_buff *skb)
static void do_nothing(struct gigaset_capi_ctr *iif,
struct gigaset_capi_appl *ap,
struct sk_buff *skb)
static void do_data_b3_resp(struct gigaset_capi_ctr *iif,
struct gigaset_capi_appl *ap,
struct sk_buff *skb)
typedef void (*capi_send_handler_t)(struct gigaset_capi_ctr *,
struct gigaset_capi_appl *,
struct sk_buff *);
static struct  capi_send_handler_table[] = ;
static inline capi_send_handler_t lookup_capi_send_handler(const u16 cmd)
static u16 gigaset_send_message(struct capi_ctr *ctr, struct sk_buff *skb)
static char *gigaset_procinfo(struct capi_ctr *ctr)
static int gigaset_proc_show(struct seq_file *m, void *v)
static int gigaset_proc_open(struct inode *inode, struct file *file)
static const struct file_operations gigaset_proc_fops = ;
int gigaset_isdn_regdev(struct cardstate *cs, const char *isdnid)
void gigaset_isdn_unregdev(struct cardstate *cs)
static struct capi_driver capi_driver_gigaset = ;
void gigaset_isdn_regdrv(void)
void gigaset_isdn_unregdrv(void)
