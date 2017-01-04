MODULE_AUTHOR("Pau Oliva Fora <pau@eslack.org>");
MODULE_DESCRIPTION("HTC Shift touchscreen driver");
MODULE_LICENSE("GPL");
#define HTCPEN_PORT_IRQ_CLEAR	0x068
#define HTCPEN_PORT_INIT	0x06c
#define HTCPEN_PORT_INDEX	0x0250
#define HTCPEN_PORT_DATA	0x0251
#define HTCPEN_IRQ		3
#define DEVICE_ENABLE		0xa2
#define DEVICE_DISABLE		0xa3
#define X_INDEX			3
#define Y_INDEX			5
#define TOUCH_INDEX		0xb
#define LSB_XY_INDEX		0xc
#define X_AXIS_MAX		2040
#define Y_AXIS_MAX		2040
static int invert_x;
module_param(invert_x, bool, 0644);
MODULE_PARM_DESC(invert_x, "If set, X axis is inverted");
static int invert_y;
module_param(invert_y, bool, 0644);
MODULE_PARM_DESC(invert_y, "If set, Y axis is inverted");
static struct pnp_device_id pnp_ids[] = ;
MODULE_DEVICE_TABLE(pnp, pnp_ids);
static irqreturn_t htcpen_interrupt(int irq, void *handle)
static int htcpen_open(struct input_dev *dev)
static void htcpen_close(struct input_dev *dev)
static int __devinit htcpen_isa_probe(struct device *dev, unsigned int id)
static int __devexit htcpen_isa_remove(struct device *dev, unsigned int id)
static int htcpen_isa_suspend(struct device *dev, unsigned int n,
pm_message_t state)
static int htcpen_isa_resume(struct device *dev, unsigned int n)
static struct isa_driver htcpen_isa_driver = ;
static struct dmi_system_id __initdata htcshift_dmi_table[] = ;
static int __init htcpen_isa_init(void)
static void __exit htcpen_isa_exit(void)
module_init(htcpen_isa_init);
module_exit(htcpen_isa_exit);
