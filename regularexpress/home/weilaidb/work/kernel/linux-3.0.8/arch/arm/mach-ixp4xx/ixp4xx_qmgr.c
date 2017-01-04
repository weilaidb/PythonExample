struct qmgr_regs __iomem *qmgr_regs;
static struct resource *mem_res;
static spinlock_t qmgr_lock;
static u32 used_sram_bitmap[4];
static void (*irq_handlers[QUEUES])(void *pdev);
static void *irq_pdevs[QUEUES];
#if DEBUG_QMGR
char qmgr_queue_descs[QUEUES][32];
void qmgr_set_irq(unsigned int queue, int src,
void (*handler)(void *pdev), void *pdev)
static irqreturn_t qmgr_irq1_a0(int irq, void *pdev)
static irqreturn_t qmgr_irq2_a0(int irq, void *pdev)
static irqreturn_t qmgr_irq(int irq, void *pdev)
void qmgr_enable_irq(unsigned int queue)
void qmgr_disable_irq(unsigned int queue)
static inline void shift_mask(u32 *mask)
#if DEBUG_QMGR
int qmgr_request_queue(unsigned int queue, unsigned int len,
unsigned int nearly_empty_watermark,
unsigned int nearly_full_watermark,
const char *desc_format, const char* name)
int __qmgr_request_queue(unsigned int queue, unsigned int len,
unsigned int nearly_empty_watermark,
unsigned int nearly_full_watermark)
void qmgr_release_queue(unsigned int queue)
static int qmgr_init(void)
static void qmgr_remove(void)
module_init(qmgr_init);
module_exit(qmgr_remove);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Krzysztof Halasa");
EXPORT_SYMBOL(qmgr_regs);
EXPORT_SYMBOL(qmgr_set_irq);
EXPORT_SYMBOL(qmgr_enable_irq);
EXPORT_SYMBOL(qmgr_disable_irq);
#if DEBUG_QMGR
EXPORT_SYMBOL(qmgr_queue_descs);
EXPORT_SYMBOL(qmgr_request_queue);
EXPORT_SYMBOL(__qmgr_request_queue);
EXPORT_SYMBOL(qmgr_release_queue);
