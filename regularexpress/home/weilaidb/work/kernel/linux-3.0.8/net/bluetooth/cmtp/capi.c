#define CAPI_INTEROPERABILITY		0x20
#define CAPI_INTEROPERABILITY_REQ	CAPICMD(CAPI_INTEROPERABILITY, CAPI_REQ)
#define CAPI_INTEROPERABILITY_CONF	CAPICMD(CAPI_INTEROPERABILITY, CAPI_CONF)
#define CAPI_INTEROPERABILITY_IND	CAPICMD(CAPI_INTEROPERABILITY, CAPI_IND)
#define CAPI_INTEROPERABILITY_RESP	CAPICMD(CAPI_INTEROPERABILITY, CAPI_RESP)
#define CAPI_INTEROPERABILITY_REQ_LEN	(CAPI_MSG_BASELEN + 2)
#define CAPI_INTEROPERABILITY_CONF_LEN	(CAPI_MSG_BASELEN + 4)
#define CAPI_INTEROPERABILITY_IND_LEN	(CAPI_MSG_BASELEN + 2)
#define CAPI_INTEROPERABILITY_RESP_LEN	(CAPI_MSG_BASELEN + 2)
#define CAPI_FUNCTION_REGISTER		0
#define CAPI_FUNCTION_RELEASE		1
#define CAPI_FUNCTION_GET_PROFILE	2
#define CAPI_FUNCTION_GET_MANUFACTURER	3
#define CAPI_FUNCTION_GET_VERSION	4
#define CAPI_FUNCTION_GET_SERIAL_NUMBER	5
#define CAPI_FUNCTION_MANUFACTURER	6
#define CAPI_FUNCTION_LOOPBACK		7
#define CMTP_MSGNUM	1
#define CMTP_APPLID	2
#define CMTP_MAPPING	3
static struct cmtp_application *cmtp_application_add(struct cmtp_session *session, __u16 appl)
static void cmtp_application_del(struct cmtp_session *session, struct cmtp_application *app)
static struct cmtp_application *cmtp_application_get(struct cmtp_session *session, int pattern, __u16 value)
static int cmtp_msgnum_get(struct cmtp_session *session)
static void cmtp_send_capimsg(struct cmtp_session *session, struct sk_buff *skb)
static void cmtp_send_interopmsg(struct cmtp_session *session,
__u8 subcmd, __u16 appl, __u16 msgnum,
__u16 function, unsigned char *buf, int len)
static void cmtp_recv_interopmsg(struct cmtp_session *session, struct sk_buff *skb)
void cmtp_recv_capimsg(struct cmtp_session *session, struct sk_buff *skb)
static int cmtp_load_firmware(struct capi_ctr *ctrl, capiloaddata *data)
static void cmtp_reset_ctr(struct capi_ctr *ctrl)
static void cmtp_register_appl(struct capi_ctr *ctrl, __u16 appl, capi_register_params *rp)
static void cmtp_release_appl(struct capi_ctr *ctrl, __u16 appl)
static u16 cmtp_send_message(struct capi_ctr *ctrl, struct sk_buff *skb)
static char *cmtp_procinfo(struct capi_ctr *ctrl)
static int cmtp_proc_show(struct seq_file *m, void *v)
static int cmtp_proc_open(struct inode *inode, struct file *file)
static const struct file_operations cmtp_proc_fops = ;
int cmtp_attach_device(struct cmtp_session *session)
void cmtp_detach_device(struct cmtp_session *session)
