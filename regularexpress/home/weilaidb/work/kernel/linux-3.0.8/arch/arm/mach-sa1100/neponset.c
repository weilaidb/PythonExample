static void
neponset_irq_handler(unsigned int irq, struct irq_desc *desc)
static void neponset_set_mctrl(struct uart_port *port, u_int mctrl)
static u_int neponset_get_mctrl(struct uart_port *port)
static struct sa1100_port_fns neponset_port_fns __devinitdata = ;
static int __devinit neponset_probe(struct platform_device *dev)
static unsigned int neponset_saved_state;
static int neponset_suspend(struct platform_device *dev, pm_message_t state)
static int neponset_resume(struct platform_device *dev)
#define neponset_suspend NULL
#define neponset_resume  NULL
static struct platform_driver neponset_device_driver = ;
static struct resource neponset_resources[] = ;
static struct platform_device neponset_device = ;
static struct resource sa1111_resources[] = ;
static struct sa1111_platform_data sa1111_info = ;
static u64 sa1111_dmamask = 0xffffffffUL;
static struct platform_device sa1111_device = ;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static struct platform_device *devices[] __initdata = ;
extern void sa1110_mb_disable(void);
static int __init neponset_init(void)
subsys_initcall(neponset_init);
static struct map_desc neponset_io_desc[] __initdata = ;
void __init neponset_map_io(void)
