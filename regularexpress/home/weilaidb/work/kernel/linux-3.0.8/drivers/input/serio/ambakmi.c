#define KMI_BASE	(kmi->base)
struct amba_kmi_port ;
static irqreturn_t amba_kmi_int(int irq, void *dev_id)
static int amba_kmi_write(struct serio *io, unsigned char val)
static int amba_kmi_open(struct serio *io)
static void amba_kmi_close(struct serio *io)
static int __devinit amba_kmi_probe(struct amba_device *dev,
const struct amba_id *id)
static int __devexit amba_kmi_remove(struct amba_device *dev)
static int amba_kmi_resume(struct amba_device *dev)
static struct amba_id amba_kmi_idtable[] = ;
static struct amba_driver ambakmi_driver = ;
static int __init amba_kmi_init(void)
static void __exit amba_kmi_exit(void)
module_init(amba_kmi_init);
module_exit(amba_kmi_exit);
MODULE_AUTHOR("Russell King <rmk@arm.linux.org.uk>");
MODULE_DESCRIPTION("AMBA KMI controller driver");
MODULE_LICENSE("GPL");
