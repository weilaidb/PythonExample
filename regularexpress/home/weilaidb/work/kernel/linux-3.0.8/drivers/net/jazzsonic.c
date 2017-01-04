static char jazz_sonic_string[] = "jazzsonic";
#define SONIC_MEM_SIZE	0x100
#define SONIC_READ(reg) (*((volatile unsigned int *)dev->base_addr+reg))
#define SONIC_WRITE(reg,val)						\
do  while (0)
static unsigned int sonic_debug = SONIC_DEBUG;
static unsigned int sonic_debug = 1;
static unsigned short known_revisions[] =
;
static int jazzsonic_open(struct net_device* dev)
static int jazzsonic_close(struct net_device* dev)
static const struct net_device_ops sonic_netdev_ops = ;
static int __devinit sonic_probe1(struct net_device *dev)
static int __devinit jazz_sonic_probe(struct platform_device *pdev)
MODULE_DESCRIPTION("Jazz SONIC ethernet driver");
module_param(sonic_debug, int, 0);
MODULE_PARM_DESC(sonic_debug, "jazzsonic debug level (1-4)");
MODULE_ALIAS("platform:jazzsonic");
static int __devexit jazz_sonic_device_remove (struct platform_device *pdev)
static struct platform_driver jazz_sonic_driver = ;
static int __init jazz_sonic_init_module(void)
static void __exit jazz_sonic_cleanup_module(void)
module_init(jazz_sonic_init_module);
module_exit(jazz_sonic_cleanup_module);
