#define MBCS_DEBUG 0
#if MBCS_DEBUG
#define DBG(fmt...)    printk(KERN_ALERT fmt)
#define DBG(fmt...)
static DEFINE_MUTEX(mbcs_mutex);
static int mbcs_major;
static LIST_HEAD(soft_list);
static const struct file_operations mbcs_ops = ;
struct mbcs_callback_arg ;
static inline void mbcs_getdma_init(struct getdma *gdma)
static inline void mbcs_putdma_init(struct putdma *pdma)
static inline void mbcs_algo_init(struct algoblock *algo_soft)
static inline void mbcs_getdma_set(void *mmr,
uint64_t hostAddr,
uint64_t localAddr,
uint64_t localRamSel,
uint64_t numPkts,
uint64_t amoEnable,
uint64_t intrEnable,
uint64_t peerIO,
uint64_t amoHostDest,
uint64_t amoModType, uint64_t intrHostDest,
uint64_t intrVector)
static inline void mbcs_putdma_set(void *mmr,
uint64_t hostAddr,
uint64_t localAddr,
uint64_t localRamSel,
uint64_t numPkts,
uint64_t amoEnable,
uint64_t intrEnable,
uint64_t peerIO,
uint64_t amoHostDest,
uint64_t amoModType,
uint64_t intrHostDest, uint64_t intrVector)
static inline void mbcs_algo_set(void *mmr,
uint64_t amoHostDest,
uint64_t amoModType,
uint64_t intrHostDest,
uint64_t intrVector, uint64_t algoStepCount)
static inline int mbcs_getdma_start(struct mbcs_soft *soft)
static inline int mbcs_putdma_start(struct mbcs_soft *soft)
static inline int mbcs_algo_start(struct mbcs_soft *soft)
static inline ssize_t
do_mbcs_sram_dmawrite(struct mbcs_soft *soft, uint64_t hostAddr,
size_t len, loff_t * off)
static inline ssize_t
do_mbcs_sram_dmaread(struct mbcs_soft *soft, uint64_t hostAddr,
size_t len, loff_t * off)
static int mbcs_open(struct inode *ip, struct file *fp)
static ssize_t mbcs_sram_read(struct file * fp, char __user *buf, size_t len, loff_t * off)
static ssize_t
mbcs_sram_write(struct file * fp, const char __user *buf, size_t len, loff_t * off)
static loff_t mbcs_sram_llseek(struct file * filp, loff_t off, int whence)
static uint64_t mbcs_pioaddr(struct mbcs_soft *soft, uint64_t offset)
static void mbcs_debug_pioaddr_set(struct mbcs_soft *soft)
static void mbcs_gscr_pioaddr_set(struct mbcs_soft *soft)
static int mbcs_gscr_mmap(struct file *fp, struct vm_area_struct *vma)
static irqreturn_t
mbcs_completion_intr_handler(int irq, void *arg)
static int mbcs_intr_alloc(struct cx_dev *dev)
static void mbcs_intr_dealloc(struct cx_dev *dev)
static inline int mbcs_hw_init(struct mbcs_soft *soft)
static ssize_t show_algo(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t store_algo(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
DEVICE_ATTR(algo, 0644, show_algo, store_algo);
static int mbcs_probe(struct cx_dev *dev, const struct cx_device_id *id)
static int mbcs_remove(struct cx_dev *dev)
static const struct cx_device_id __devinitdata mbcs_id_table[] = ;
MODULE_DEVICE_TABLE(cx, mbcs_id_table);
static struct cx_drv mbcs_driver = ;
static void __exit mbcs_exit(void)
static int __init mbcs_init(void)
module_init(mbcs_init);
module_exit(mbcs_exit);
MODULE_AUTHOR("Bruce Losure <blosure@sgi.com>");
MODULE_DESCRIPTION("Driver for MOATB Core Services");
MODULE_LICENSE("GPL");
