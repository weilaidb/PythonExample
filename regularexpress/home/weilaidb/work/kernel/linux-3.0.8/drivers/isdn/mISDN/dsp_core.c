static const char *mISDN_dsp_revision = "2.0";
static int debug;
static int options;
static int poll;
static int dtmfthreshold = 100;
MODULE_AUTHOR("Andreas Eversberg");
module_param(debug, uint, S_IRUGO | S_IWUSR);
module_param(options, uint, S_IRUGO | S_IWUSR);
module_param(poll, uint, S_IRUGO | S_IWUSR);
module_param(dtmfthreshold, uint, S_IRUGO | S_IWUSR);
MODULE_LICENSE("GPL");
spinlock_t dsp_lock;
struct list_head dsp_ilist;
struct list_head conf_ilist;
int dsp_debug;
int dsp_options;
int dsp_poll, dsp_tics;
static void
dsp_rx_off_member(struct dsp *dsp)
static void
dsp_rx_off(struct dsp *dsp)
static void
dsp_fill_empty(struct dsp *dsp)
static int
dsp_control_req(struct dsp *dsp, struct mISDNhead *hh, struct sk_buff *skb)
static void
get_features(struct mISDNchannel *ch)
static int
dsp_function(struct mISDNchannel *ch,  struct sk_buff *skb)
static int
dsp_ctrl(struct mISDNchannel *ch, u_int cmd, void *arg)
static void
dsp_send_bh(struct work_struct *work)
static int
dspcreate(struct channel_req *crq)
static struct Bprotocol DSP = ;
static int __init dsp_init(void)
static void __exit dsp_cleanup(void)
module_init(dsp_init);
module_exit(dsp_cleanup);
