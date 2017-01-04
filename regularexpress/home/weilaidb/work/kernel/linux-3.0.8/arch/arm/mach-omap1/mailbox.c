#define MAILBOX_ARM2DSP1		0x00
#define MAILBOX_ARM2DSP1b		0x04
#define MAILBOX_DSP2ARM1		0x08
#define MAILBOX_DSP2ARM1b		0x0c
#define MAILBOX_DSP2ARM2		0x10
#define MAILBOX_DSP2ARM2b		0x14
#define MAILBOX_ARM2DSP1_Flag		0x18
#define MAILBOX_DSP2ARM1_Flag		0x1c
#define MAILBOX_DSP2ARM2_Flag		0x20
static void __iomem *mbox_base;
struct omap_mbox1_fifo ;
struct omap_mbox1_priv ;
static inline int mbox_read_reg(size_t ofs)
static inline void mbox_write_reg(u32 val, size_t ofs)
static mbox_msg_t omap1_mbox_fifo_read(struct omap_mbox *mbox)
static void
omap1_mbox_fifo_write(struct omap_mbox *mbox, mbox_msg_t msg)
static int omap1_mbox_fifo_empty(struct omap_mbox *mbox)
static int omap1_mbox_fifo_full(struct omap_mbox *mbox)
static void
omap1_mbox_enable_irq(struct omap_mbox *mbox, omap_mbox_type_t irq)
static void
omap1_mbox_disable_irq(struct omap_mbox *mbox, omap_mbox_type_t irq)
static int
omap1_mbox_is_irq(struct omap_mbox *mbox, omap_mbox_type_t irq)
static struct omap_mbox_ops omap1_mbox_ops = ;
static struct omap_mbox1_priv omap1_mbox_dsp_priv = ;
static struct omap_mbox mbox_dsp_info = ;
static struct omap_mbox *omap1_mboxes[] = ;
static int __devinit omap1_mbox_probe(struct platform_device *pdev)
static int __devexit omap1_mbox_remove(struct platform_device *pdev)
static struct platform_driver omap1_mbox_driver = ;
static int __init omap1_mbox_init(void)
static void __exit omap1_mbox_exit(void)
module_init(omap1_mbox_init);
module_exit(omap1_mbox_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("omap mailbox: omap1 architecture specific functions");
MODULE_AUTHOR("Hiroshi DOYU <Hiroshi.DOYU@nokia.com>");
MODULE_ALIAS("platform:omap1-mailbox");
