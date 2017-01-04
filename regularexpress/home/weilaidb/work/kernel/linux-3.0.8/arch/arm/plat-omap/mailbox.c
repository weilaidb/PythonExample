static struct omap_mbox **mboxes;
static int mbox_configured;
static DEFINE_MUTEX(mbox_configured_lock);
static unsigned int mbox_kfifo_size = CONFIG_OMAP_MBOX_KFIFO_SIZE;
module_param(mbox_kfifo_size, uint, S_IRUGO);
MODULE_PARM_DESC(mbox_kfifo_size, "Size of omap's mailbox kfifo (bytes)");
static inline mbox_msg_t mbox_fifo_read(struct omap_mbox *mbox)
static inline void mbox_fifo_write(struct omap_mbox *mbox, mbox_msg_t msg)
static inline int mbox_fifo_empty(struct omap_mbox *mbox)
static inline int mbox_fifo_full(struct omap_mbox *mbox)
static inline void ack_mbox_irq(struct omap_mbox *mbox, omap_mbox_irq_t irq)
static inline int is_mbox_irq(struct omap_mbox *mbox, omap_mbox_irq_t irq)
static int __mbox_poll_for_space(struct omap_mbox *mbox)
int omap_mbox_msg_send(struct omap_mbox *mbox, mbox_msg_t msg)
EXPORT_SYMBOL(omap_mbox_msg_send);
static void mbox_tx_tasklet(unsigned long tx_data)
static void mbox_rx_work(struct work_struct *work)
static void __mbox_tx_interrupt(struct omap_mbox *mbox)
static void __mbox_rx_interrupt(struct omap_mbox *mbox)
static irqreturn_t mbox_interrupt(int irq, void *p)
static struct omap_mbox_queue *mbox_queue_alloc(struct omap_mbox *mbox,
void (*work) (struct work_struct *),
void (*tasklet)(unsigned long))
static void mbox_queue_free(struct omap_mbox_queue *q)
static int omap_mbox_startup(struct omap_mbox *mbox)
static void omap_mbox_fini(struct omap_mbox *mbox)
struct omap_mbox *omap_mbox_get(const char *name, struct notifier_block *nb)
EXPORT_SYMBOL(omap_mbox_get);
void omap_mbox_put(struct omap_mbox *mbox, struct notifier_block *nb)
EXPORT_SYMBOL(omap_mbox_put);
static struct class omap_mbox_class = ;
int omap_mbox_register(struct device *parent, struct omap_mbox **list)
EXPORT_SYMBOL(omap_mbox_register);
int omap_mbox_unregister(void)
EXPORT_SYMBOL(omap_mbox_unregister);
static int __init omap_mbox_init(void)
subsys_initcall(omap_mbox_init);
static void __exit omap_mbox_exit(void)
module_exit(omap_mbox_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("omap mailbox: interrupt driven messaging");
MODULE_AUTHOR("Toshihiro Kobayashi");
MODULE_AUTHOR("Hiroshi DOYU");
