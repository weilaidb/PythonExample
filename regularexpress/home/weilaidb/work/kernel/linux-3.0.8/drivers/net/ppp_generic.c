#define PPP_VERSION	"2.4.2"
#define NP_IP	0
#define NP_IPV6	1
#define NP_IPX	2
#define NP_AT	3
#define NP_MPLS_UC 4
#define NP_MPLS_MC 5
#define NUM_NP	6
#define MPHDRLEN	6
#define MPHDRLEN_SSN	4
struct ppp_file ;
#define PF_TO_X(pf, X)		container_of(pf, X, file)
#define PF_TO_PPP(pf)		PF_TO_X(pf, struct ppp)
#define PF_TO_CHANNEL(pf)	PF_TO_X(pf, struct channel)
struct ppp ;
#define SC_FLAG_BITS	(SC_NO_TCP_CCID|SC_CCP_OPEN|SC_CCP_UP|SC_LOOP_TRAFFIC \
|SC_MULTILINK|SC_MP_SHORTSEQ|SC_MP_XSHORTSEQ \
|SC_COMP_TCP|SC_REJ_COMP_TCP|SC_MUST_COMP)
struct channel ;
static DEFINE_MUTEX(ppp_mutex);
static atomic_t ppp_unit_count = ATOMIC_INIT(0);
static atomic_t channel_count = ATOMIC_INIT(0);
static int ppp_net_id __read_mostly;
struct ppp_net ;
#define PPP_PROTO(skb)	get_unaligned_be16((skb)->data)
#define PPP_MAX_RQLEN	32
#define PPP_MP_MAX_QLEN	128
#define B	0x80
#define E	0x40
#define seq_before(a, b)	((s32)((a) - (b)) < 0)
#define seq_after(a, b)		((s32)((a) - (b)) > 0)
static int ppp_unattached_ioctl(struct net *net, struct ppp_file *pf,
struct file *file, unsigned int cmd, unsigned long arg);
static void ppp_xmit_process(struct ppp *ppp);
static void ppp_send_frame(struct ppp *ppp, struct sk_buff *skb);
static void ppp_push(struct ppp *ppp);
static void ppp_channel_push(struct channel *pch);
static void ppp_receive_frame(struct ppp *ppp, struct sk_buff *skb,
struct channel *pch);
static void ppp_receive_error(struct ppp *ppp);
static void ppp_receive_nonmp_frame(struct ppp *ppp, struct sk_buff *skb);
static struct sk_buff *ppp_decompress_frame(struct ppp *ppp,
struct sk_buff *skb);
static void ppp_receive_mp_frame(struct ppp *ppp, struct sk_buff *skb,
struct channel *pch);
static void ppp_mp_insert(struct ppp *ppp, struct sk_buff *skb);
static struct sk_buff *ppp_mp_reconstruct(struct ppp *ppp);
static int ppp_mp_explode(struct ppp *ppp, struct sk_buff *skb);
static int ppp_set_compress(struct ppp *ppp, unsigned long arg);
static void ppp_ccp_peek(struct ppp *ppp, struct sk_buff *skb, int inbound);
static void ppp_ccp_closed(struct ppp *ppp);
static struct compressor *find_compressor(int type);
static void ppp_get_stats(struct ppp *ppp, struct ppp_stats *st);
static struct ppp *ppp_create_interface(struct net *net, int unit, int *retp);
static void init_ppp_file(struct ppp_file *pf, int kind);
static void ppp_shutdown_interface(struct ppp *ppp);
static void ppp_destroy_interface(struct ppp *ppp);
static struct ppp *ppp_find_unit(struct ppp_net *pn, int unit);
static struct channel *ppp_find_channel(struct ppp_net *pn, int unit);
static int ppp_connect_channel(struct channel *pch, int unit);
static int ppp_disconnect_channel(struct channel *pch);
static void ppp_destroy_channel(struct channel *pch);
static int unit_get(struct idr *p, void *ptr);
static int unit_set(struct idr *p, void *ptr, int n);
static void unit_put(struct idr *p, int n);
static void *unit_find(struct idr *p, int n);
static struct class *ppp_class;
static inline struct ppp_net *ppp_pernet(struct net *net)
static inline int proto_to_npindex(int proto)
static const int npindex_to_proto[NUM_NP] = ;
static inline int ethertype_to_npindex(int ethertype)
static const int npindex_to_ethertype[NUM_NP] = ;
#define ppp_xmit_lock(ppp)	spin_lock_bh(&(ppp)->wlock)
#define ppp_xmit_unlock(ppp)	spin_unlock_bh(&(ppp)->wlock)
#define ppp_recv_lock(ppp)	spin_lock_bh(&(ppp)->rlock)
#define ppp_recv_unlock(ppp)	spin_unlock_bh(&(ppp)->rlock)
#define ppp_lock(ppp)		do  while (0)
#define ppp_unlock(ppp)		do  while (0)
static int ppp_open(struct inode *inode, struct file *file)
static int ppp_release(struct inode *unused, struct file *file)
static ssize_t ppp_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t ppp_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static unsigned int ppp_poll(struct file *file, poll_table *wait)
static int get_filter(void __user *arg, struct sock_filter **p)
static long ppp_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int ppp_unattached_ioctl(struct net *net, struct ppp_file *pf,
struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations ppp_device_fops = ;
static __net_init int ppp_init_net(struct net *net)
static __net_exit void ppp_exit_net(struct net *net)
static struct pernet_operations ppp_net_ops = ;
#define PPP_MAJOR	108
static int __init ppp_init(void)
static netdev_tx_t
ppp_start_xmit(struct sk_buff *skb, struct net_device *dev)
static int
ppp_net_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static const struct net_device_ops ppp_netdev_ops = ;
static void ppp_setup(struct net_device *dev)
static void
ppp_xmit_process(struct ppp *ppp)
static inline struct sk_buff *
pad_compress_skb(struct ppp *ppp, struct sk_buff *skb)
static void
ppp_send_frame(struct ppp *ppp, struct sk_buff *skb)
static void
ppp_push(struct ppp *ppp)
static bool mp_protocol_compress __read_mostly = true;
module_param(mp_protocol_compress, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(mp_protocol_compress,
"compress protocol id in multilink fragments");
static int ppp_mp_explode(struct ppp *ppp, struct sk_buff *skb)
static void
ppp_channel_push(struct channel *pch)
struct ppp_mp_skb_parm ;
#define PPP_MP_CB(skb)	((struct ppp_mp_skb_parm *)((skb)->cb))
static inline void
ppp_do_recv(struct ppp *ppp, struct sk_buff *skb, struct channel *pch)
void
ppp_input(struct ppp_channel *chan, struct sk_buff *skb)
void
ppp_input_error(struct ppp_channel *chan, int code)
static void
ppp_receive_frame(struct ppp *ppp, struct sk_buff *skb, struct channel *pch)
static void
ppp_receive_error(struct ppp *ppp)
static void
ppp_receive_nonmp_frame(struct ppp *ppp, struct sk_buff *skb)
static struct sk_buff *
ppp_decompress_frame(struct ppp *ppp, struct sk_buff *skb)
static void
ppp_receive_mp_frame(struct ppp *ppp, struct sk_buff *skb, struct channel *pch)
static void
ppp_mp_insert(struct ppp *ppp, struct sk_buff *skb)
static struct sk_buff *
ppp_mp_reconstruct(struct ppp *ppp)
int ppp_register_channel(struct ppp_channel *chan)
int ppp_register_net_channel(struct net *net, struct ppp_channel *chan)
int ppp_channel_index(struct ppp_channel *chan)
int ppp_unit_number(struct ppp_channel *chan)
char *ppp_dev_name(struct ppp_channel *chan)
void
ppp_unregister_channel(struct ppp_channel *chan)
void
ppp_output_wakeup(struct ppp_channel *chan)
static int
ppp_set_compress(struct ppp *ppp, unsigned long arg)
static void
ppp_ccp_peek(struct ppp *ppp, struct sk_buff *skb, int inbound)
static void
ppp_ccp_closed(struct ppp *ppp)
static LIST_HEAD(compressor_list);
static DEFINE_SPINLOCK(compressor_list_lock);
struct compressor_entry ;
static struct compressor_entry *
find_comp_entry(int proto)
int
ppp_register_compressor(struct compressor *cp)
void
ppp_unregister_compressor(struct compressor *cp)
static struct compressor *
find_compressor(int type)
static void
ppp_get_stats(struct ppp *ppp, struct ppp_stats *st)
static struct ppp *
ppp_create_interface(struct net *net, int unit, int *retp)
static void
init_ppp_file(struct ppp_file *pf, int kind)
static void ppp_shutdown_interface(struct ppp *ppp)
static void ppp_destroy_interface(struct ppp *ppp)
static struct ppp *
ppp_find_unit(struct ppp_net *pn, int unit)
static struct channel *
ppp_find_channel(struct ppp_net *pn, int unit)
static int
ppp_connect_channel(struct channel *pch, int unit)
static int
ppp_disconnect_channel(struct channel *pch)
static void ppp_destroy_channel(struct channel *pch)
static void __exit ppp_cleanup(void)
static int __unit_alloc(struct idr *p, void *ptr, int n)
static int unit_set(struct idr *p, void *ptr, int n)
static int unit_get(struct idr *p, void *ptr)
static void unit_put(struct idr *p, int n)
static void *unit_find(struct idr *p, int n)
module_init(ppp_init);
module_exit(ppp_cleanup);
EXPORT_SYMBOL(ppp_register_net_channel);
EXPORT_SYMBOL(ppp_register_channel);
EXPORT_SYMBOL(ppp_unregister_channel);
EXPORT_SYMBOL(ppp_channel_index);
EXPORT_SYMBOL(ppp_unit_number);
EXPORT_SYMBOL(ppp_dev_name);
EXPORT_SYMBOL(ppp_input);
EXPORT_SYMBOL(ppp_input_error);
EXPORT_SYMBOL(ppp_output_wakeup);
EXPORT_SYMBOL(ppp_register_compressor);
EXPORT_SYMBOL(ppp_unregister_compressor);
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV(PPP_MAJOR, 0);
MODULE_ALIAS("devname:ppp");
