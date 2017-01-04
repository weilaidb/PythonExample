#define AX_SPR_BUSY		(1<<7)
#define AX_SPR_ACK		(1<<6)
#define AX_SPR_PE		(1<<5)
#define AX_SPR_SLCT		(1<<4)
#define AX_SPR_ERR		(1<<3)
#define AX_CPR_nDOE		(1<<5)
#define AX_CPR_SLCTIN		(1<<3)
#define AX_CPR_nINIT		(1<<2)
#define AX_CPR_ATFD		(1<<1)
#define AX_CPR_STRB		(1<<0)
struct ax_drvdata ;
static inline struct ax_drvdata *pp_to_drv(struct parport *p)
static unsigned char
parport_ax88796_read_data(struct parport *p)
static void
parport_ax88796_write_data(struct parport *p, unsigned char data)
static unsigned char
parport_ax88796_read_control(struct parport *p)
static void
parport_ax88796_write_control(struct parport *p, unsigned char control)
static unsigned char
parport_ax88796_read_status(struct parport *p)
static unsigned char
parport_ax88796_frob_control(struct parport *p, unsigned char mask,
unsigned char val)
static void
parport_ax88796_enable_irq(struct parport *p)
static void
parport_ax88796_disable_irq(struct parport *p)
static void
parport_ax88796_data_forward(struct parport *p)
static void
parport_ax88796_data_reverse(struct parport *p)
static void
parport_ax88796_init_state(struct pardevice *d, struct parport_state *s)
static void
parport_ax88796_save_state(struct parport *p, struct parport_state *s)
static void
parport_ax88796_restore_state(struct parport *p, struct parport_state *s)
static struct parport_operations parport_ax88796_ops = ;
static int parport_ax88796_probe(struct platform_device *pdev)
static int parport_ax88796_remove(struct platform_device *pdev)
static int parport_ax88796_suspend(struct platform_device *dev,
pm_message_t state)
static int parport_ax88796_resume(struct platform_device *dev)
#define parport_ax88796_suspend NULL
#define parport_ax88796_resume  NULL
MODULE_ALIAS("platform:ax88796-pp");
static struct platform_driver axdrv = ;
static int __init parport_ax88796_init(void)
static void __exit parport_ax88796_exit(void)
module_init(parport_ax88796_init)
module_exit(parport_ax88796_exit)
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_DESCRIPTION("AX88796 Parport parallel port driver");
MODULE_LICENSE("GPL");
