#define L1OIP_VERSION	0
static const char *l1oip_revision = "2.00";
static int l1oip_cnt;
static spinlock_t l1oip_lock;
static struct list_head l1oip_ilist;
#define MAX_CARDS	16
static u_int type[MAX_CARDS];
static u_int codec[MAX_CARDS];
static u_int ip[MAX_CARDS*4];
static u_int port[MAX_CARDS];
static u_int remoteport[MAX_CARDS];
static u_int ondemand[MAX_CARDS];
static u_int limit[MAX_CARDS];
static u_int id[MAX_CARDS];
static int debug;
static int ulaw;
MODULE_AUTHOR("Andreas Eversberg");
MODULE_LICENSE("GPL");
module_param_array(type, uint, NULL, S_IRUGO | S_IWUSR);
module_param_array(codec, uint, NULL, S_IRUGO | S_IWUSR);
module_param_array(ip, uint, NULL, S_IRUGO | S_IWUSR);
module_param_array(port, uint, NULL, S_IRUGO | S_IWUSR);
module_param_array(remoteport, uint, NULL, S_IRUGO | S_IWUSR);
module_param_array(ondemand, uint, NULL, S_IRUGO | S_IWUSR);
module_param_array(limit, uint, NULL, S_IRUGO | S_IWUSR);
module_param_array(id, uint, NULL, S_IRUGO | S_IWUSR);
module_param(ulaw, uint, S_IRUGO | S_IWUSR);
module_param(debug, uint, S_IRUGO | S_IWUSR);
static int
l1oip_socket_send(struct l1oip *hc, u8 localcodec, u8 channel, u32 chanmask,
u16 timebase, u8 *buf, int len)
static void
l1oip_socket_recv(struct l1oip *hc, u8 remotecodec, u8 channel, u16 timebase,
u8 *buf, int len)
static void
l1oip_socket_parse(struct l1oip *hc, struct sockaddr_in *sin, u8 *buf, int len)
static int
l1oip_socket_thread(void *data)
static void
l1oip_socket_close(struct l1oip *hc)
static int
l1oip_socket_open(struct l1oip *hc)
static void
l1oip_send_bh(struct work_struct *work)
static void
l1oip_keepalive(void *data)
static void
l1oip_timeout(void *data)
static int
handle_dmsg(struct mISDNchannel *ch, struct sk_buff *skb)
static int
channel_dctrl(struct dchannel *dch, struct mISDN_ctrl_req *cq)
static int
open_dchannel(struct l1oip *hc, struct dchannel *dch, struct channel_req *rq)
static int
open_bchannel(struct l1oip *hc, struct dchannel *dch, struct channel_req *rq)
static int
l1oip_dctrl(struct mISDNchannel *ch, u_int cmd, void *arg)
static int
handle_bmsg(struct mISDNchannel *ch, struct sk_buff *skb)
static int
channel_bctrl(struct bchannel *bch, struct mISDN_ctrl_req *cq)
static int
l1oip_bctrl(struct mISDNchannel *ch, u_int cmd, void *arg)
static void
release_card(struct l1oip *hc)
static void
l1oip_cleanup(void)
static int
init_card(struct l1oip *hc, int pri, int bundle)
static int __init
l1oip_init(void)
module_init(l1oip_init);
module_exit(l1oip_cleanup);
