#define	VER_DRIVER	0
#define	VER_CARDTYPE	1
#define	VER_HWID	2
#define	VER_SERIAL	3
#define	VER_OPTION	4
#define	VER_PROTO	5
#define	VER_PROFILE	6
#define	VER_CAPI	7
static char hycapi_revision[]="$Revision: 1.8.6.4 $";
unsigned int hycapi_enable = 0xffffffff;
module_param(hycapi_enable, uint, 0);
typedef struct _hycapi_appl  hycapi_appl;
static hycapi_appl hycapi_applications[CAPI_MAXAPPL];
static u16 hycapi_send_message(struct capi_ctr *ctrl, struct sk_buff *skb);
static inline int _hycapi_appCheck(int app_id, int ctrl_no)
static void
hycapi_reset_ctr(struct capi_ctr *ctrl)
static void
hycapi_remove_ctr(struct capi_ctr *ctrl)
static void
hycapi_sendmsg_internal(struct capi_ctr *ctrl, struct sk_buff *skb)
static void
hycapi_register_internal(struct capi_ctr *ctrl, __u16 appl,
capi_register_params *rp)
static void hycapi_restart_internal(struct capi_ctr *ctrl)
static void
hycapi_register_appl(struct capi_ctr *ctrl, __u16 appl,
capi_register_params *rp)
static void hycapi_release_internal(struct capi_ctr *ctrl, __u16 appl)
static void
hycapi_release_appl(struct capi_ctr *ctrl, __u16 appl)
int hycapi_capi_release(hysdn_card *card)
int hycapi_capi_stop(hysdn_card *card)
static u16 hycapi_send_message(struct capi_ctr *ctrl, struct sk_buff *skb)
static int hycapi_proc_show(struct seq_file *m, void *v)
static int hycapi_proc_open(struct inode *inode, struct file *file)
static const struct file_operations hycapi_proc_fops = ;
static int hycapi_load_firmware(struct capi_ctr *ctrl, capiloaddata *data)
static char *hycapi_procinfo(struct capi_ctr *ctrl)
void
hycapi_rx_capipkt(hysdn_card * card, unsigned char *buf, unsigned short len)
void hycapi_tx_capiack(hysdn_card * card)
struct sk_buff *
hycapi_tx_capiget(hysdn_card *card)
int hycapi_init(void)
void
hycapi_cleanup(void)
static void hycapi_fill_profile(hysdn_card *card)
int
hycapi_capi_create(hysdn_card *card)
