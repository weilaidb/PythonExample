#undef DEBUG
#define DPRINTK printk
#define DPRINTK(x...)	do  while (0)
static void amiga_write_data(struct parport *p, unsigned char data)
static unsigned char amiga_read_data(struct parport *p)
static unsigned char control_amiga_to_pc(unsigned char control)
static void amiga_write_control(struct parport *p, unsigned char control)
static unsigned char amiga_read_control( struct parport *p)
static unsigned char amiga_frob_control( struct parport *p, unsigned char mask, unsigned char val)
static unsigned char status_amiga_to_pc(unsigned char status)
static unsigned char amiga_read_status(struct parport *p)
static void amiga_enable_irq(struct parport *p)
static void amiga_disable_irq(struct parport *p)
static void amiga_data_forward(struct parport *p)
static void amiga_data_reverse(struct parport *p)
static void amiga_init_state(struct pardevice *dev, struct parport_state *s)
static void amiga_save_state(struct parport *p, struct parport_state *s)
static void amiga_restore_state(struct parport *p, struct parport_state *s)
static struct parport_operations pp_amiga_ops = ;
static int __init amiga_parallel_probe(struct platform_device *pdev)
static int __exit amiga_parallel_remove(struct platform_device *pdev)
static struct platform_driver amiga_parallel_driver = ;
static int __init amiga_parallel_init(void)
module_init(amiga_parallel_init);
static void __exit amiga_parallel_exit(void)
module_exit(amiga_parallel_exit);
MODULE_AUTHOR("Joerg Dorchain <joerg@dorchain.net>");
MODULE_DESCRIPTION("Parport Driver for Amiga builtin Port");
MODULE_SUPPORTED_DEVICE("Amiga builtin Parallel Port");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:amiga-parallel");
