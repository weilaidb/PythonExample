#define BCR2		(0xFFFFFF62)
#define WCR2		(0xFFFFFF66)
#define AREA5_WAIT_CTRL	(0x1C00)
#define WAIT_STATES_10	(0x7)
static struct resource smsc911x_resources[] = ;
static struct smsc911x_platform_config smsc911x_config = ;
static struct platform_device smsc911x_device = ;
static unsigned char heartbeat_bit_pos[] = ;
static struct heartbeat_data heartbeat_data = ;
static struct resource heartbeat_resource = ;
static struct platform_device heartbeat_device = ;
static struct platform_device *polaris_devices[] __initdata = ;
static int __init polaris_initialise(void)
arch_initcall(polaris_initialise);
static struct ipr_data ipr_irq_table[] = ;
static unsigned long ipr_offsets[] = ;
static struct ipr_desc ipr_irq_desc = ;
static void __init init_polaris_irq(void)
static struct sh_machine_vector mv_polaris __initmv = ;
