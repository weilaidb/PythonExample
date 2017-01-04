#define PPP_IPX 0x002b
static int isdn_ppp_fill_rq(unsigned char *buf, int len, int proto, int slot);
static int isdn_ppp_closewait(int slot);
static void isdn_ppp_push_higher(isdn_net_dev * net_dev, isdn_net_local * lp,
struct sk_buff *skb, int proto);
static int isdn_ppp_if_get_unit(char *namebuf);
static int isdn_ppp_set_compressor(struct ippp_struct *is,struct isdn_ppp_comp_data *);
static struct sk_buff *isdn_ppp_decompress(struct sk_buff *,
struct ippp_struct *,struct ippp_struct *,int *proto);
static void isdn_ppp_receive_ccp(isdn_net_dev * net_dev, isdn_net_local * lp,
struct sk_buff *skb,int proto);
static struct sk_buff *isdn_ppp_compress(struct sk_buff *skb_in,int *proto,
struct ippp_struct *is,struct ippp_struct *master,int type);
static void isdn_ppp_send_ccp(isdn_net_dev *net_dev, isdn_net_local *lp,
struct sk_buff *skb);
static void isdn_ppp_ccp_kickup(struct ippp_struct *is);
static void isdn_ppp_ccp_xmit_reset(struct ippp_struct *is, int proto,
unsigned char code, unsigned char id,
unsigned char *data, int len);
static struct ippp_ccp_reset *isdn_ppp_ccp_reset_alloc(struct ippp_struct *is);
static void isdn_ppp_ccp_reset_free(struct ippp_struct *is);
static void isdn_ppp_ccp_reset_free_state(struct ippp_struct *is,
unsigned char id);
static void isdn_ppp_ccp_timer_callback(unsigned long closure);
static struct ippp_ccp_reset_state *isdn_ppp_ccp_reset_alloc_state(struct ippp_struct *is,
unsigned char id);
static void isdn_ppp_ccp_reset_trans(struct ippp_struct *is,
struct isdn_ppp_resetparams *rp);
static void isdn_ppp_ccp_reset_ack_rcvd(struct ippp_struct *is,
unsigned char id);
static ippp_bundle * isdn_ppp_bundle_arr = NULL;
static int isdn_ppp_mp_bundle_array_init(void);
static int isdn_ppp_mp_init( isdn_net_local * lp, ippp_bundle * add_to );
static void isdn_ppp_mp_receive(isdn_net_dev * net_dev, isdn_net_local * lp,
struct sk_buff *skb);
static void isdn_ppp_mp_cleanup( isdn_net_local * lp );
static int isdn_ppp_bundle(struct ippp_struct *, int unit);
char *isdn_ppp_revision = "$Revision: 1.1.2.3 $";
static struct ippp_struct *ippp_table[ISDN_MAX_CHANNELS];
static struct isdn_ppp_compressor *ipc_head = NULL;
static void
isdn_ppp_frame_log(char *info, char *data, int len, int maxlen,int unit,int slot)
int
isdn_ppp_free(isdn_net_local * lp)
int
isdn_ppp_bind(isdn_net_local * lp)
void
isdn_ppp_wakeup_daemon(isdn_net_local * lp)
static int
isdn_ppp_closewait(int slot)
static int
isdn_ppp_get_slot(void)
int
isdn_ppp_open(int min, struct file *file)
void
isdn_ppp_release(int min, struct file *file)
static int
get_arg(void __user *b, void *val, int len)
static int
set_arg(void __user *b, void *val,int len)
static int get_filter(void __user *arg, struct sock_filter **p)
int
isdn_ppp_ioctl(int min, struct file *file, unsigned int cmd, unsigned long arg)
unsigned int
isdn_ppp_poll(struct file *file, poll_table * wait)
static int
isdn_ppp_fill_rq(unsigned char *buf, int len, int proto, int slot)
int
isdn_ppp_read(int min, struct file *file, char __user *buf, int count)
int
isdn_ppp_write(int min, struct file *file, const char __user *buf, int count)
int
isdn_ppp_init(void)
void
isdn_ppp_cleanup(void)
static int isdn_ppp_skip_ac(struct ippp_struct *is, struct sk_buff *skb)
static int isdn_ppp_strip_proto(struct sk_buff *skb)
void isdn_ppp_receive(isdn_net_dev * net_dev, isdn_net_local * lp, struct sk_buff *skb)
static void
isdn_ppp_push_higher(isdn_net_dev * net_dev, isdn_net_local * lp, struct sk_buff *skb, int proto)
static unsigned char *isdn_ppp_skb_push(struct sk_buff **skb_p,int len)
int
isdn_ppp_xmit(struct sk_buff *skb, struct net_device *netdev)
int isdn_ppp_autodial_filter(struct sk_buff *skb, isdn_net_local *lp)
#define MP_HEADER_LEN	5
#define MP_LONGSEQ_MASK		0x00ffffff
#define MP_SHORTSEQ_MASK	0x00000fff
#define MP_LONGSEQ_MAX		MP_LONGSEQ_MASK
#define MP_SHORTSEQ_MAX		MP_SHORTSEQ_MASK
#define MP_LONGSEQ_MAXBIT	((MP_LONGSEQ_MASK+1)>>1)
#define MP_SHORTSEQ_MAXBIT	((MP_SHORTSEQ_MASK+1)>>1)
#define MP_LT(a,b)	((a-b)&MP_LONGSEQ_MAXBIT)
#define MP_LE(a,b) 	!((b-a)&MP_LONGSEQ_MAXBIT)
#define MP_GT(a,b) 	((b-a)&MP_LONGSEQ_MAXBIT)
#define MP_GE(a,b)	!((a-b)&MP_LONGSEQ_MAXBIT)
#define MP_SEQ(f)	((*(u32*)(f->data+1)))
#define MP_FLAGS(f)	(f->data[0])
static int isdn_ppp_mp_bundle_array_init(void)
static ippp_bundle * isdn_ppp_mp_bundle_alloc(void)
static int isdn_ppp_mp_init( isdn_net_local * lp, ippp_bundle * add_to )
static u32 isdn_ppp_mp_get_seq( int short_seq,
struct sk_buff * skb, u32 last_seq );
static struct sk_buff * isdn_ppp_mp_discard( ippp_bundle * mp,
struct sk_buff * from, struct sk_buff * to );
static void isdn_ppp_mp_reassembly( isdn_net_dev * net_dev, isdn_net_local * lp,
struct sk_buff * from, struct sk_buff * to );
static void isdn_ppp_mp_free_skb( ippp_bundle * mp, struct sk_buff * skb );
static void isdn_ppp_mp_print_recv_pkt( int slot, struct sk_buff * skb );
static void isdn_ppp_mp_receive(isdn_net_dev * net_dev, isdn_net_local * lp,
struct sk_buff *skb)
static void isdn_ppp_mp_cleanup( isdn_net_local * lp )
static u32 isdn_ppp_mp_get_seq( int short_seq,
struct sk_buff * skb, u32 last_seq )
struct sk_buff * isdn_ppp_mp_discard( ippp_bundle * mp,
struct sk_buff * from, struct sk_buff * to )
void isdn_ppp_mp_reassembly( isdn_net_dev * net_dev, isdn_net_local * lp,
struct sk_buff * from, struct sk_buff * to )
static void isdn_ppp_mp_free_skb(ippp_bundle * mp, struct sk_buff * skb)
static void isdn_ppp_mp_print_recv_pkt( int slot, struct sk_buff * skb )
static int
isdn_ppp_bundle(struct ippp_struct *is, int unit)
static int
isdn_ppp_dev_ioctl_stats(int slot, struct ifreq *ifr, struct net_device *dev)
int
isdn_ppp_dev_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int
isdn_ppp_if_get_unit(char *name)
int
isdn_ppp_dial_slave(char *name)
int
isdn_ppp_hangup_slave(char *name)
static void isdn_ppp_ccp_kickup(struct ippp_struct *is)
static void isdn_ppp_ccp_xmit_reset(struct ippp_struct *is, int proto,
unsigned char code, unsigned char id,
unsigned char *data, int len)
static struct ippp_ccp_reset *isdn_ppp_ccp_reset_alloc(struct ippp_struct *is)
static void isdn_ppp_ccp_reset_free(struct ippp_struct *is)
static void isdn_ppp_ccp_reset_free_state(struct ippp_struct *is,
unsigned char id)
static void isdn_ppp_ccp_timer_callback(unsigned long closure)
static struct ippp_ccp_reset_state *isdn_ppp_ccp_reset_alloc_state(struct ippp_struct *is,
unsigned char id)
static void isdn_ppp_ccp_reset_trans(struct ippp_struct *is,
struct isdn_ppp_resetparams *rp)
static void isdn_ppp_ccp_reset_ack_rcvd(struct ippp_struct *is,
unsigned char id)
static struct sk_buff *isdn_ppp_decompress(struct sk_buff *skb,struct ippp_struct *is,struct ippp_struct *master,
int *proto)
static struct sk_buff *isdn_ppp_compress(struct sk_buff *skb_in,int *proto,
struct ippp_struct *is,struct ippp_struct *master,int type)
static void isdn_ppp_receive_ccp(isdn_net_dev *net_dev, isdn_net_local *lp,
struct sk_buff *skb,int proto)
static void isdn_ppp_send_ccp(isdn_net_dev *net_dev, isdn_net_local *lp, struct sk_buff *skb)
int isdn_ppp_register_compressor(struct isdn_ppp_compressor *ipc)
int isdn_ppp_unregister_compressor(struct isdn_ppp_compressor *ipc)
static int isdn_ppp_set_compressor(struct ippp_struct *is, struct isdn_ppp_comp_data *data)
