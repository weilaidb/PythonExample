#undef __SUNBPP_DEBUG
#define dprintk(x) printk x
#define dprintk(x)
static void parport_sunbpp_disable_irq(struct parport *p)
static void parport_sunbpp_enable_irq(struct parport *p)
static void parport_sunbpp_write_data(struct parport *p, unsigned char d)
static unsigned char parport_sunbpp_read_data(struct parport *p)
static unsigned char status_sunbpp_to_pc(struct parport *p)
static unsigned char control_sunbpp_to_pc(struct parport *p)
static unsigned char parport_sunbpp_read_control(struct parport *p)
static unsigned char parport_sunbpp_frob_control(struct parport *p,
unsigned char mask,
unsigned char val)
static void parport_sunbpp_write_control(struct parport *p, unsigned char d)
static unsigned char parport_sunbpp_read_status(struct parport *p)
static void parport_sunbpp_data_forward (struct parport *p)
static void parport_sunbpp_data_reverse (struct parport *p)
static void parport_sunbpp_init_state(struct pardevice *dev, struct parport_state *s)
static void parport_sunbpp_save_state(struct parport *p, struct parport_state *s)
static void parport_sunbpp_restore_state(struct parport *p, struct parport_state *s)
static struct parport_operations parport_sunbpp_ops =
;
static int __devinit bpp_probe(struct platform_device *op)
static int __devexit bpp_remove(struct platform_device *op)
static const struct of_device_id bpp_match[] = ;
MODULE_DEVICE_TABLE(of, bpp_match);
static struct platform_driver bpp_sbus_driver = ;
static int __init parport_sunbpp_init(void)
static void __exit parport_sunbpp_exit(void)
MODULE_AUTHOR("Derrick J Brashear");
MODULE_DESCRIPTION("Parport Driver for Sparc bidirectional Port");
MODULE_SUPPORTED_DEVICE("Sparc Bidirectional Parallel Port");
MODULE_VERSION("2.0");
MODULE_LICENSE("GPL");
module_init(parport_sunbpp_init)
module_exit(parport_sunbpp_exit)
