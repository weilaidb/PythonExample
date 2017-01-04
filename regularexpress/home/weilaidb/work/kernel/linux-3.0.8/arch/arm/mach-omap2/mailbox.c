#define MAILBOX_REVISION		0x000
#define MAILBOX_MESSAGE(m)		(0x040 + 4 * (m))
#define MAILBOX_FIFOSTATUS(m)		(0x080 + 4 * (m))
#define MAILBOX_MSGSTATUS(m)		(0x0c0 + 4 * (m))
#define MAILBOX_IRQSTATUS(u)		(0x100 + 8 * (u))
#define MAILBOX_IRQENABLE(u)		(0x104 + 8 * (u))
#define OMAP4_MAILBOX_IRQSTATUS(u)	(0x104 + 10 * (u))
#define OMAP4_MAILBOX_IRQENABLE(u)	(0x108 + 10 * (u))
#define OMAP4_MAILBOX_IRQENABLE_CLR(u)	(0x10c + 10 * (u))
#define MAILBOX_IRQ_NEWMSG(m)		(1 << (2 * (m)))
#define MAILBOX_IRQ_NOTFULL(m)		(1 << (2 * (m) + 1))
#define MBOX_REG_SIZE			0x120
#define OMAP4_MBOX_REG_SIZE		0x130
#define MBOX_NR_REGS			(MBOX_REG_SIZE / sizeof(u32))
#define OMAP4_MBOX_NR_REGS		(OMAP4_MBOX_REG_SIZE / sizeof(u32))
static void __iomem *mbox_base;
struct omap_mbox2_fifo ;
struct omap_mbox2_priv ;
static void omap2_mbox_enable_irq(struct omap_mbox *mbox,
omap_mbox_type_t irq);
static inline unsigned int mbox_read_reg(size_t ofs)
static inline void mbox_write_reg(u32 val, size_t ofs)
static int omap2_mbox_startup(struct omap_mbox *mbox)
static void omap2_mbox_shutdown(struct omap_mbox *mbox)
static mbox_msg_t omap2_mbox_fifo_read(struct omap_mbox *mbox)
static void omap2_mbox_fifo_write(struct omap_mbox *mbox, mbox_msg_t msg)
static int omap2_mbox_fifo_empty(struct omap_mbox *mbox)
static int omap2_mbox_fifo_full(struct omap_mbox *mbox)
static void omap2_mbox_enable_irq(struct omap_mbox *mbox,
omap_mbox_type_t irq)
static void omap2_mbox_disable_irq(struct omap_mbox *mbox,
omap_mbox_type_t irq)
static void omap2_mbox_ack_irq(struct omap_mbox *mbox,
omap_mbox_type_t irq)
static int omap2_mbox_is_irq(struct omap_mbox *mbox,
omap_mbox_type_t irq)
static void omap2_mbox_save_ctx(struct omap_mbox *mbox)
static void omap2_mbox_restore_ctx(struct omap_mbox *mbox)
static struct omap_mbox_ops omap2_mbox_ops = ;
#if defined(CONFIG_ARCH_OMAP3) || defined(CONFIG_ARCH_OMAP2)
static struct omap_mbox2_priv omap2_mbox_dsp_priv = ;
struct omap_mbox mbox_dsp_info = ;
#if defined(CONFIG_ARCH_OMAP3)
struct omap_mbox *omap3_mboxes[] = ;
#if defined(CONFIG_SOC_OMAP2420)
static struct omap_mbox2_priv omap2_mbox_iva_priv = ;
static struct omap_mbox mbox_iva_info = ;
struct omap_mbox *omap2_mboxes[] = ;
#if defined(CONFIG_ARCH_OMAP4)
static struct omap_mbox2_priv omap2_mbox_1_priv = ;
struct omap_mbox mbox_1_info = ;
static struct omap_mbox2_priv omap2_mbox_2_priv = ;
struct omap_mbox mbox_2_info = ;
struct omap_mbox *omap4_mboxes[] = ;
static int __devinit omap2_mbox_probe(struct platform_device *pdev)
static int __devexit omap2_mbox_remove(struct platform_device *pdev)
static struct platform_driver omap2_mbox_driver = ;
static int __init omap2_mbox_init(void)
static void __exit omap2_mbox_exit(void)
module_init(omap2_mbox_init);
module_exit(omap2_mbox_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("omap mailbox: omap2/3/4 architecture specific functions");
MODULE_AUTHOR("Hiroshi DOYU <Hiroshi.DOYU@nokia.com>");
MODULE_AUTHOR("Paul Mundt");
MODULE_ALIAS("platform:omap2-mailbox");
