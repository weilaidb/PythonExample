#define VLYNQ_CTRL_PM_ENABLE		0x80000000
#define VLYNQ_CTRL_CLOCK_INT		0x00008000
#define VLYNQ_CTRL_CLOCK_DIV(x)		(((x) & 7) << 16)
#define VLYNQ_CTRL_INT_LOCAL		0x00004000
#define VLYNQ_CTRL_INT_ENABLE		0x00002000
#define VLYNQ_CTRL_INT_VECTOR(x)	(((x) & 0x1f) << 8)
#define VLYNQ_CTRL_INT2CFG		0x00000080
#define VLYNQ_CTRL_RESET		0x00000001
#define VLYNQ_CTRL_CLOCK_MASK          (0x7 << 16)
#define VLYNQ_INT_OFFSET		0x00000014
#define VLYNQ_REMOTE_OFFSET		0x00000080
#define VLYNQ_STATUS_LINK		0x00000001
#define VLYNQ_STATUS_LERROR		0x00000080
#define VLYNQ_STATUS_RERROR		0x00000100
#define VINT_ENABLE			0x00000100
#define VINT_TYPE_EDGE			0x00000080
#define VINT_LEVEL_LOW			0x00000040
#define VINT_VECTOR(x)			((x) & 0x1f)
#define VINT_OFFSET(irq)		(8 * ((irq) % 4))
#define VLYNQ_AUTONEGO_V2		0x00010000
struct vlynq_regs ;
static void vlynq_dump_regs(struct vlynq_device *dev)
static void vlynq_dump_mem(u32 *base, int count)
static int vlynq_linked(struct vlynq_device *dev)
static void vlynq_reset(struct vlynq_device *dev)
static void vlynq_irq_unmask(struct irq_data *d)
static void vlynq_irq_mask(struct irq_data *d)
static int vlynq_irq_type(struct irq_data *d, unsigned int flow_type)
static void vlynq_local_ack(struct irq_data *d)
static void vlynq_remote_ack(struct irq_data *d)
static irqreturn_t vlynq_irq(int irq, void *dev_id)
static struct irq_chip vlynq_irq_chip = ;
static struct irq_chip vlynq_local_chip = ;
static struct irq_chip vlynq_remote_chip = ;
static int vlynq_setup_irq(struct vlynq_device *dev)
static void vlynq_device_release(struct device *dev)
static int vlynq_device_match(struct device *dev,
struct device_driver *drv)
static int vlynq_device_probe(struct device *dev)
static int vlynq_device_remove(struct device *dev)
int __vlynq_register_driver(struct vlynq_driver *driver, struct module *owner)
EXPORT_SYMBOL(__vlynq_register_driver);
void vlynq_unregister_driver(struct vlynq_driver *driver)
EXPORT_SYMBOL(vlynq_unregister_driver);
static int __vlynq_try_remote(struct vlynq_device *dev)
static int __vlynq_try_local(struct vlynq_device *dev)
static int __vlynq_try_external(struct vlynq_device *dev)
static int __vlynq_enable_device(struct vlynq_device *dev)
int vlynq_enable_device(struct vlynq_device *dev)
EXPORT_SYMBOL(vlynq_enable_device);
void vlynq_disable_device(struct vlynq_device *dev)
EXPORT_SYMBOL(vlynq_disable_device);
int vlynq_set_local_mapping(struct vlynq_device *dev, u32 tx_offset,
struct vlynq_mapping *mapping)
EXPORT_SYMBOL(vlynq_set_local_mapping);
int vlynq_set_remote_mapping(struct vlynq_device *dev, u32 tx_offset,
struct vlynq_mapping *mapping)
EXPORT_SYMBOL(vlynq_set_remote_mapping);
int vlynq_set_local_irq(struct vlynq_device *dev, int virq)
EXPORT_SYMBOL(vlynq_set_local_irq);
int vlynq_set_remote_irq(struct vlynq_device *dev, int virq)
EXPORT_SYMBOL(vlynq_set_remote_irq);
static int vlynq_probe(struct platform_device *pdev)
static int vlynq_remove(struct platform_device *pdev)
static struct platform_driver vlynq_platform_driver = ;
struct bus_type vlynq_bus_type = ;
EXPORT_SYMBOL(vlynq_bus_type);
static int __devinit vlynq_init(void)
static void __devexit vlynq_exit(void)
module_init(vlynq_init);
module_exit(vlynq_exit);
