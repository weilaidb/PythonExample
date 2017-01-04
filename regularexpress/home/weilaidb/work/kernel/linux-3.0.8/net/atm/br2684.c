#define pr_fmt(fmt) KBUILD_MODNAME ":%s: " fmt, __func__
static void skb_debug(const struct sk_buff *skb)
#define BR2684_ETHERTYPE_LEN	2
#define BR2684_PAD_LEN		2
#define LLC		0xaa, 0xaa, 0x03
#define SNAP_BRIDGED	0x00, 0x80, 0xc2
#define SNAP_ROUTED	0x00, 0x00, 0x00
#define PID_ETHERNET	0x00, 0x07
#define ETHERTYPE_IPV4	0x08, 0x00
#define ETHERTYPE_IPV6	0x86, 0xdd
#define PAD_BRIDGED	0x00, 0x00
static const unsigned char ethertype_ipv4[] = ;
static const unsigned char ethertype_ipv6[] = ;
static const unsigned char llc_oui_pid_pad[] =
;
static const unsigned char llc_oui_ipv4[] = ;
static const unsigned char llc_oui_ipv6[] = ;
enum br2684_encaps ;
struct br2684_vcc ;
struct br2684_dev ;
static DEFINE_RWLOCK(devs_lock);
static LIST_HEAD(br2684_devs);
static inline struct br2684_dev *BRPRIV(const struct net_device *net_dev)
static inline struct net_device *list_entry_brdev(const struct list_head *le)
static inline struct br2684_vcc *BR2684_VCC(const struct atm_vcc *atmvcc)
static inline struct br2684_vcc *list_entry_brvcc(const struct list_head *le)
static struct net_device *br2684_find_dev(const struct br2684_if_spec *s)
static int atm_dev_event(struct notifier_block *this, unsigned long event,
void *arg)
static struct notifier_block atm_dev_notifier = ;
static void br2684_pop(struct atm_vcc *vcc, struct sk_buff *skb)
static int br2684_xmit_vcc(struct sk_buff *skb, struct net_device *dev,
struct br2684_vcc *brvcc)
static inline struct br2684_vcc *pick_outgoing_vcc(const struct sk_buff *skb,
const struct br2684_dev *brdev)
static netdev_tx_t br2684_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int br2684_mac_addr(struct net_device *dev, void *p)
static int br2684_setfilt(struct atm_vcc *atmvcc, void __user * arg)
static inline int
packet_fails_filter(__be16 type, struct br2684_vcc *brvcc, struct sk_buff *skb)
static void br2684_close_vcc(struct br2684_vcc *brvcc)
static void br2684_push(struct atm_vcc *atmvcc, struct sk_buff *skb)
static int br2684_regvcc(struct atm_vcc *atmvcc, void __user * arg)
static const struct net_device_ops br2684_netdev_ops = ;
static const struct net_device_ops br2684_netdev_ops_routed = ;
static void br2684_setup(struct net_device *netdev)
static void br2684_setup_routed(struct net_device *netdev)
static int br2684_create(void __user *arg)
static int br2684_ioctl(struct socket *sock, unsigned int cmd,
unsigned long arg)
static struct atm_ioctl br2684_ioctl_ops = ;
static void *br2684_seq_start(struct seq_file *seq, loff_t * pos)
__acquires(devs_lock)
static void *br2684_seq_next(struct seq_file *seq, void *v, loff_t * pos)
static void br2684_seq_stop(struct seq_file *seq, void *v)
__releases(devs_lock)
static int br2684_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations br2684_seq_ops = ;
static int br2684_proc_open(struct inode *inode, struct file *file)
static const struct file_operations br2684_proc_ops = ;
extern struct proc_dir_entry *atm_proc_root;
static int __init br2684_init(void)
static void __exit br2684_exit(void)
module_init(br2684_init);
module_exit(br2684_exit);
MODULE_AUTHOR("Marcell GAL");
MODULE_DESCRIPTION("RFC2684 bridged protocols over ATM/AAL5");
MODULE_LICENSE("GPL");
