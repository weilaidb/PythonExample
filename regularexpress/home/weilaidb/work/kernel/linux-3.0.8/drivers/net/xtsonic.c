static char xtsonic_string[] = "xtsonic";
extern unsigned xtboard_nvram_valid(void);
extern void xtboard_get_ether_addr(unsigned char *buf);
#undef SONIC_RBSIZE
#define SONIC_RBSIZE	1524
#define SONIC_MEM_SIZE	0x100
#define SONIC_READ(reg) \
(0xffff & *((volatile unsigned int *)dev->base_addr+reg))
#define SONIC_WRITE(reg,val) \
*((volatile unsigned int *)dev->base_addr+reg) = val
static unsigned int sonic_debug = SONIC_DEBUG;
static unsigned int sonic_debug = 1;
static unsigned short known_revisions[] =
;
static int xtsonic_open(struct net_device *dev)
static int xtsonic_close(struct net_device *dev)
static const struct net_device_ops xtsonic_netdev_ops = ;
static int __init sonic_probe1(struct net_device *dev)
int __devinit xtsonic_probe(struct platform_device *pdev)
MODULE_DESCRIPTION("Xtensa XT2000 SONIC ethernet driver");
module_param(sonic_debug, int, 0);
MODULE_PARM_DESC(sonic_debug, "xtsonic debug level (1-4)");
static int __devexit xtsonic_device_remove (struct platform_device *pdev)
static struct platform_driver xtsonic_driver = ;
static int __init xtsonic_init(void)
static void __exit xtsonic_cleanup(void)
module_init(xtsonic_init);
module_exit(xtsonic_cleanup);
