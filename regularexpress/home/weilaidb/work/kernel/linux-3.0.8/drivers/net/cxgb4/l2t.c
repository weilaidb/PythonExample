#define VLAN_NONE 0xfff
#define F_SYNC_WR    (1 << 12)
enum ;
struct l2t_data ;
static inline unsigned int vlan_prio(const struct l2t_entry *e)
static inline void l2t_hold(struct l2t_data *d, struct l2t_entry *e)
enum ;
static inline unsigned int arp_hash(const u32 *key, int ifindex)
static inline unsigned int ipv6_hash(const u32 *key, int ifindex)
static unsigned int addr_hash(const u32 *addr, int addr_len, int ifindex)
static int addreq(const struct l2t_entry *e, const u32 *addr)
static void neigh_replace(struct l2t_entry *e, struct neighbour *n)
static int write_l2e(struct adapter *adap, struct l2t_entry *e, int sync)
static void send_pending(struct adapter *adap, struct l2t_entry *e)
void do_l2t_write_rpl(struct adapter *adap, const struct cpl_l2t_write_rpl *rpl)
static inline void arpq_enqueue(struct l2t_entry *e, struct sk_buff *skb)
int cxgb4_l2t_send(struct net_device *dev, struct sk_buff *skb,
struct l2t_entry *e)
EXPORT_SYMBOL(cxgb4_l2t_send);
static struct l2t_entry *alloc_l2e(struct l2t_data *d)
static void t4_l2e_free(struct l2t_entry *e)
void cxgb4_l2t_release(struct l2t_entry *e)
EXPORT_SYMBOL(cxgb4_l2t_release);
static void reuse_entry(struct l2t_entry *e, struct neighbour *neigh)
struct l2t_entry *cxgb4_l2t_get(struct l2t_data *d, struct neighbour *neigh,
const struct net_device *physdev,
unsigned int priority)
EXPORT_SYMBOL(cxgb4_l2t_get);
static void handle_failed_resolution(struct adapter *adap, struct sk_buff *arpq)
void t4_l2t_update(struct adapter *adap, struct neighbour *neigh)
struct l2t_data *t4_init_l2t(void)
static inline void *l2t_get_idx(struct seq_file *seq, loff_t pos)
static void *l2t_seq_start(struct seq_file *seq, loff_t *pos)
static void *l2t_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void l2t_seq_stop(struct seq_file *seq, void *v)
static char l2e_state(const struct l2t_entry *e)
static int l2t_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations l2t_seq_ops = ;
static int l2t_seq_open(struct inode *inode, struct file *file)
const struct file_operations t4_l2t_fops = ;
