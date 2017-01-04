#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define VERSION	"2.74"
#define IP_NAME_SZ 32
#define MAX_MPLS_LABELS 16
#define MPLS_STACK_BOTTOM htonl(0x00000100)
#define func_enter() pr_debug("entering %s\n", __func__);
#define F_IPSRC_RND   (1<<0)
#define F_IPDST_RND   (1<<1)
#define F_UDPSRC_RND  (1<<2)
#define F_UDPDST_RND  (1<<3)
#define F_MACSRC_RND  (1<<4)
#define F_MACDST_RND  (1<<5)
#define F_TXSIZE_RND  (1<<6)
#define F_IPV6        (1<<7)
#define F_MPLS_RND    (1<<8)
#define F_VID_RND     (1<<9)
#define F_SVID_RND    (1<<10)
#define F_FLOW_SEQ    (1<<11)
#define F_IPSEC_ON    (1<<12)
#define F_QUEUE_MAP_RND (1<<13)
#define F_QUEUE_MAP_CPU (1<<14)
#define F_NODE          (1<<15)
#define T_STOP        (1<<0)
#define T_RUN         (1<<1)
#define T_REMDEVALL   (1<<2)
#define T_REMDEV      (1<<3)
#define   if_lock(t)           spin_lock(&(t->if_lock));
#define   if_unlock(t)           spin_unlock(&(t->if_lock));
#define PKTGEN_MAGIC 0xbe9be955
#define PG_PROC_DIR "pktgen"
#define PGCTRL	    "pgctrl"
static struct proc_dir_entry *pg_proc_dir;
#define MAX_CFLOWS  65536
#define VLAN_TAG_SIZE(x) ((x)->vlan_id == 0xffff ? 0 : 4)
#define SVLAN_TAG_SIZE(x) ((x)->svlan_id == 0xffff ? 0 : 4)
struct flow_state ;
#define F_INIT   (1<<0)
struct pktgen_dev ;
struct pktgen_hdr ;
static bool pktgen_exiting __read_mostly;
struct pktgen_thread ;
#define REMOVE 1
#define FIND   0
static inline ktime_t ktime_now(void)
static inline int ktime_lt(const ktime_t cmp1, const ktime_t cmp2)
static const char version[] =
"Packet Generator for packet performance testing. "
"Version: " VERSION "\n";
static int pktgen_remove_device(struct pktgen_thread *t, struct pktgen_dev *i);
static int pktgen_add_device(struct pktgen_thread *t, const char *ifname);
static struct pktgen_dev *pktgen_find_dev(struct pktgen_thread *t,
const char *ifname, bool exact);
static int pktgen_device_event(struct notifier_block *, unsigned long, void *);
static void pktgen_run_all_threads(void);
static void pktgen_reset_all_threads(void);
static void pktgen_stop_all_threads_ifs(void);
static void pktgen_stop(struct pktgen_thread *t);
static void pktgen_clear_counters(struct pktgen_dev *pkt_dev);
static unsigned int scan_ip6(const char *s, char ip[16]);
static int pg_count_d __read_mostly = 1000;
static int pg_delay_d __read_mostly;
static int pg_clone_skb_d  __read_mostly;
static int debug  __read_mostly;
static DEFINE_MUTEX(pktgen_thread_lock);
static LIST_HEAD(pktgen_threads);
static struct notifier_block pktgen_notifier_block = ;
static int pgctrl_show(struct seq_file *seq, void *v)
static ssize_t pgctrl_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static int pgctrl_open(struct inode *inode, struct file *file)
static const struct file_operations pktgen_fops = ;
static int pktgen_if_show(struct seq_file *seq, void *v)
static int hex32_arg(const char __user *user_buffer, unsigned long maxlen,
__u32 *num)
static int count_trail_chars(const char __user * user_buffer,
unsigned int maxlen)
static unsigned long num_arg(const char __user * user_buffer,
unsigned long maxlen, unsigned long *num)
static int strn_len(const char __user * user_buffer, unsigned int maxlen)
static ssize_t get_labels(const char __user *buffer, struct pktgen_dev *pkt_dev)
static ssize_t pktgen_if_write(struct file *file,
const char __user * user_buffer, size_t count,
loff_t * offset)
static int pktgen_if_open(struct inode *inode, struct file *file)
static const struct file_operations pktgen_if_fops = ;
static int pktgen_thread_show(struct seq_file *seq, void *v)
static ssize_t pktgen_thread_write(struct file *file,
const char __user * user_buffer,
size_t count, loff_t * offset)
static int pktgen_thread_open(struct inode *inode, struct file *file)
static const struct file_operations pktgen_thread_fops = ;
static struct pktgen_dev *__pktgen_NN_threads(const char *ifname, int remove)
static void pktgen_mark_device(const char *ifname)
static void pktgen_change_name(struct net_device *dev)
static int pktgen_device_event(struct notifier_block *unused,
unsigned long event, void *ptr)
static struct net_device *pktgen_dev_get_by_name(struct pktgen_dev *pkt_dev,
const char *ifname)
static int pktgen_setup_dev(struct pktgen_dev *pkt_dev, const char *ifname)
static void pktgen_setup_inject(struct pktgen_dev *pkt_dev)
static void spin(struct pktgen_dev *pkt_dev, ktime_t spin_until)
static inline void set_pkt_overhead(struct pktgen_dev *pkt_dev)
static inline int f_seen(const struct pktgen_dev *pkt_dev, int flow)
static inline int f_pick(struct pktgen_dev *pkt_dev)
#define DUMMY_MARK 0
static void get_ipsec_sa(struct pktgen_dev *pkt_dev, int flow)
static void set_cur_queue_map(struct pktgen_dev *pkt_dev)
static void mod_cur_headers(struct pktgen_dev *pkt_dev)
static int pktgen_output_ipsec(struct sk_buff *skb, struct pktgen_dev *pkt_dev)
static void free_SAs(struct pktgen_dev *pkt_dev)
static int process_ipsec(struct pktgen_dev *pkt_dev,
struct sk_buff *skb, __be16 protocol)
static void mpls_push(__be32 *mpls, struct pktgen_dev *pkt_dev)
static inline __be16 build_tci(unsigned int id, unsigned int cfi,
unsigned int prio)
static void pktgen_finalize_skb(struct pktgen_dev *pkt_dev, struct sk_buff *skb,
int datalen)
static struct sk_buff *fill_packet_ipv4(struct net_device *odev,
struct pktgen_dev *pkt_dev)
static unsigned int scan_ip6(const char *s, char ip[16])
static struct sk_buff *fill_packet_ipv6(struct net_device *odev,
struct pktgen_dev *pkt_dev)
static struct sk_buff *fill_packet(struct net_device *odev,
struct pktgen_dev *pkt_dev)
static void pktgen_clear_counters(struct pktgen_dev *pkt_dev)
static void pktgen_run(struct pktgen_thread *t)
static void pktgen_stop_all_threads_ifs(void)
static int thread_is_running(const struct pktgen_thread *t)
static int pktgen_wait_thread_run(struct pktgen_thread *t)
static int pktgen_wait_all_threads_run(void)
static void pktgen_run_all_threads(void)
static void pktgen_reset_all_threads(void)
static void show_results(struct pktgen_dev *pkt_dev, int nr_frags)
static int pktgen_stop_device(struct pktgen_dev *pkt_dev)
static struct pktgen_dev *next_to_run(struct pktgen_thread *t)
static void pktgen_stop(struct pktgen_thread *t)
static void pktgen_rem_one_if(struct pktgen_thread *t)
static void pktgen_rem_all_ifs(struct pktgen_thread *t)
static void pktgen_rem_thread(struct pktgen_thread *t)
static void pktgen_resched(struct pktgen_dev *pkt_dev)
static void pktgen_wait_for_skb(struct pktgen_dev *pkt_dev)
static void pktgen_xmit(struct pktgen_dev *pkt_dev)
static int pktgen_thread_worker(void *arg)
static struct pktgen_dev *pktgen_find_dev(struct pktgen_thread *t,
const char *ifname, bool exact)
static int add_dev_to_thread(struct pktgen_thread *t,
struct pktgen_dev *pkt_dev)
static int pktgen_add_device(struct pktgen_thread *t, const char *ifname)
static int __init pktgen_create_thread(int cpu)
static void _rem_dev_from_if_list(struct pktgen_thread *t,
struct pktgen_dev *pkt_dev)
static int pktgen_remove_device(struct pktgen_thread *t,
struct pktgen_dev *pkt_dev)
static int __init pg_init(void)
static void __exit pg_cleanup(void)
module_init(pg_init);
module_exit(pg_cleanup);
MODULE_AUTHOR("Robert Olsson <robert.olsson@its.uu.se>");
MODULE_DESCRIPTION("Packet Generator tool");
MODULE_LICENSE("GPL");
MODULE_VERSION(VERSION);
module_param(pg_count_d, int, 0);
MODULE_PARM_DESC(pg_count_d, "Default number of packets to inject");
module_param(pg_delay_d, int, 0);
MODULE_PARM_DESC(pg_delay_d, "Default delay between packets (nanoseconds)");
module_param(pg_clone_skb_d, int, 0);
MODULE_PARM_DESC(pg_clone_skb_d, "Default number of copies of the same packet");
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "Enable debugging of pktgen module");
