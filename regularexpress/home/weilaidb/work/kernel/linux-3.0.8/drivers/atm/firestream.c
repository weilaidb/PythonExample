static int loopback = 0;
static int num=0x5a;
#define NP FS_NR_FREE_POOLS
static int rx_buf_sizes[NP]  = ;
#undef NP
static char *res_strings[] = ;
static char *irq_bitname[] = ;
#define PHY_EOF -1
#define PHY_CLEARALL -2
struct reginit_item ;
static struct reginit_item PHY_NTC_INIT[] __devinitdata = ;
#undef IRQ_RATE_LIMIT
#undef FS_POLL_FREQ
#define DEBUG
#define fs_dprintk(f, str...) if (fs_debug & f) printk (str)
#define fs_dprintk(f, str...)
static int fs_keystream = 0;
static int fs_debug = 0;
#define fs_debug 0
module_param(fs_debug, int, 0644);
module_param(loopback, int, 0);
module_param(num, int, 0);
module_param(fs_keystream, int, 0);
#define FS_DEBUG_FLOW    0x00000001
#define FS_DEBUG_OPEN    0x00000002
#define FS_DEBUG_QUEUE   0x00000004
#define FS_DEBUG_IRQ     0x00000008
#define FS_DEBUG_INIT    0x00000010
#define FS_DEBUG_SEND    0x00000020
#define FS_DEBUG_PHY     0x00000040
#define FS_DEBUG_CLEANUP 0x00000080
#define FS_DEBUG_QOS     0x00000100
#define FS_DEBUG_TXQ     0x00000200
#define FS_DEBUG_ALLOC   0x00000400
#define FS_DEBUG_TXMEM   0x00000800
#define FS_DEBUG_QSIZE   0x00001000
#define func_enter() fs_dprintk(FS_DEBUG_FLOW, "fs: enter %s\n", __func__)
#define func_exit()  fs_dprintk(FS_DEBUG_FLOW, "fs: exit  %s\n", __func__)
static struct fs_dev *fs_boards = NULL;
static void my_hd (void *addr, int len)
static void my_hd (void *addr, int len)
static inline void fs_kfree_skb (struct sk_buff * skb)
#define ROUND_UP      1
#define ROUND_DOWN    2
#define ROUND_NEAREST 3
static int make_rate(unsigned int rate, int r,
u16 *bits, unsigned int *actual)
static inline void write_fs (struct fs_dev *dev, int offset, u32 val)
static inline u32  read_fs (struct fs_dev *dev, int offset)
static inline struct FS_QENTRY *get_qentry (struct fs_dev *dev, struct queue *q)
static void submit_qentry (struct fs_dev *dev, struct queue *q, struct FS_QENTRY *qe)
static struct FS_QENTRY pq[60];
static int qp;
static struct FS_BPENTRY dq[60];
static int qd;
static void *da[60];
static void submit_queue (struct fs_dev *dev, struct queue *q,
u32 cmd, u32 p1, u32 p2, u32 p3)
#if 1
#define submit_command submit_queue
static void submit_command (struct fs_dev *dev, struct queue *q,
u32 cmd, u32 p1, u32 p2, u32 p3)
static void process_return_queue (struct fs_dev *dev, struct queue *q)
static void process_txdone_queue (struct fs_dev *dev, struct queue *q)
static void process_incoming (struct fs_dev *dev, struct queue *q)
#define DO_DIRECTION(tp) ((tp)->traffic_class != ATM_NONE)
static int fs_open(struct atm_vcc *atm_vcc)
static void fs_close(struct atm_vcc *atm_vcc)
static int fs_send (struct atm_vcc *atm_vcc, struct sk_buff *skb)
static const struct atmdev_ops ops = ;
static void __devinit undocumented_pci_fix (struct pci_dev *pdev)
static void __devinit write_phy (struct fs_dev *dev, int regnum, int val)
static int __devinit init_phy (struct fs_dev *dev, struct reginit_item *reginit)
static void reset_chip (struct fs_dev *dev)
static void __devinit *aligned_kmalloc (int size, gfp_t flags, int alignment)
static int __devinit init_q (struct fs_dev *dev,
struct queue *txq, int queue, int nentries, int is_rq)
static int __devinit init_fp (struct fs_dev *dev,
struct freepool *fp, int queue, int bufsize, int nr_buffers)
static inline int nr_buffers_in_freepool (struct fs_dev *dev, struct freepool *fp)
static void top_off_fp (struct fs_dev *dev, struct freepool *fp,
gfp_t gfp_flags)
static void __devexit free_queue (struct fs_dev *dev, struct queue *txq)
static void __devexit free_freepool (struct fs_dev *dev, struct freepool *fp)
static irqreturn_t fs_irq (int irq, void *dev_id)
static void fs_poll (unsigned long data)
static int __devinit fs_init (struct fs_dev *dev)
static int __devinit firestream_init_one (struct pci_dev *pci_dev,
const struct pci_device_id *ent)
static void __devexit firestream_remove_one (struct pci_dev *pdev)
static struct pci_device_id firestream_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, firestream_pci_tbl);
static struct pci_driver firestream_driver = ;
static int __init firestream_init_module (void)
static void __exit firestream_cleanup_module(void)
module_init(firestream_init_module);
module_exit(firestream_cleanup_module);
MODULE_LICENSE("GPL");
