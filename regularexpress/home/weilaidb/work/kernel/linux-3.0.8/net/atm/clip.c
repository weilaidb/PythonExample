#define pr_fmt(fmt) KBUILD_MODNAME ":%s: " fmt, __func__
static struct net_device *clip_devs;
static struct atm_vcc *atmarpd;
static struct neigh_table clip_tbl;
static struct timer_list idle_timer;
static int to_atmarpd(enum atmarp_ctrl_type type, int itf, __be32 ip)
static void link_vcc(struct clip_vcc *clip_vcc, struct atmarp_entry *entry)
static void unlink_clip_vcc(struct clip_vcc *clip_vcc)
static int neigh_check_cb(struct neighbour *n)
static void idle_timer_check(unsigned long dummy)
static int clip_arp_rcv(struct sk_buff *skb)
static const unsigned char llc_oui[] = ;
static void clip_push(struct atm_vcc *vcc, struct sk_buff *skb)
static void clip_pop(struct atm_vcc *vcc, struct sk_buff *skb)
static void clip_neigh_solicit(struct neighbour *neigh, struct sk_buff *skb)
static void clip_neigh_error(struct neighbour *neigh, struct sk_buff *skb)
static const struct neigh_ops clip_neigh_ops = ;
static int clip_constructor(struct neighbour *neigh)
static u32 clip_hash(const void *pkey, const struct net_device *dev, __u32 rnd)
static struct neigh_table clip_tbl = ;
static int clip_encap(struct atm_vcc *vcc, int mode)
static netdev_tx_t clip_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int clip_mkip(struct atm_vcc *vcc, int timeout)
static int clip_setentry(struct atm_vcc *vcc, __be32 ip)
static const struct net_device_ops clip_netdev_ops = ;
static void clip_setup(struct net_device *dev)
static int clip_create(int number)
static int clip_device_event(struct notifier_block *this, unsigned long event,
void *arg)
static int clip_inet_event(struct notifier_block *this, unsigned long event,
void *ifa)
static struct notifier_block clip_dev_notifier = ;
static struct notifier_block clip_inet_notifier = ;
static void atmarpd_close(struct atm_vcc *vcc)
static struct atmdev_ops atmarpd_dev_ops = ;
static struct atm_dev atmarpd_dev = ;
static int atm_init_atmarp(struct atm_vcc *vcc)
static int clip_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
static struct atm_ioctl clip_ioctl_ops = ;
static void svc_addr(struct seq_file *seq, struct sockaddr_atmsvc *addr)
#define SEQ_NO_VCC_TOKEN	((void *) 2)
static void atmarp_info(struct seq_file *seq, struct net_device *dev,
struct atmarp_entry *entry, struct clip_vcc *clip_vcc)
struct clip_seq_state ;
static struct clip_vcc *clip_seq_next_vcc(struct atmarp_entry *e,
struct clip_vcc *curr)
static void *clip_seq_vcc_walk(struct clip_seq_state *state,
struct atmarp_entry *e, loff_t * pos)
static void *clip_seq_sub_iter(struct neigh_seq_state *_state,
struct neighbour *n, loff_t * pos)
static void *clip_seq_start(struct seq_file *seq, loff_t * pos)
static int clip_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations arp_seq_ops = ;
static int arp_seq_open(struct inode *inode, struct file *file)
static const struct file_operations arp_seq_fops = ;
static void atm_clip_exit_noproc(void);
static int __init atm_clip_init(void)
static void atm_clip_exit_noproc(void)
static void __exit atm_clip_exit(void)
module_init(atm_clip_init);
module_exit(atm_clip_exit);
MODULE_AUTHOR("Werner Almesberger");
MODULE_DESCRIPTION("Classical/IP over ATM interface");
MODULE_LICENSE("GPL");
