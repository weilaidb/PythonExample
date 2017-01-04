#if defined(CONFIG_SIBYTE_SWARM) || defined(CONFIG_SIBYTE_LITTLESUR)
#define DRV_NAME	"pata-swarm"
#define SWARM_IDE_SHIFT	5
#define SWARM_IDE_BASE	0x1f0
#define SWARM_IDE_CTRL	0x3f6
static struct resource swarm_pata_resource[] = ;
static struct pata_platform_info pata_platform_data = ;
static struct platform_device swarm_pata_device = ;
static int __init swarm_pata_init(void)
device_initcall(swarm_pata_init);
#define sb1250_dev_struct(num) \
static struct resource sb1250_res##num = ;\
static struct platform_device sb1250_dev##num =
sb1250_dev_struct(0);
sb1250_dev_struct(1);
sb1250_dev_struct(2);
sb1250_dev_struct(3);
static struct platform_device *sb1250_devs[] __initdata = ;
static int __init sb1250_device_init(void)
device_initcall(sb1250_device_init);
