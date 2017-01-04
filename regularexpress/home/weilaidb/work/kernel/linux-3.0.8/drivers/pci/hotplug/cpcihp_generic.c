#define DRIVER_VERSION	"0.1"
#define DRIVER_AUTHOR	"Scott Murray <scottm@somanetworks.com>"
#define DRIVER_DESC	"Generic port I/O CompactPCI Hot Plug Driver"
#if !defined(MODULE)
#define MY_NAME	"cpcihp_generic"
#define MY_NAME	THIS_MODULE->name
#define dbg(format, arg...)					\
do  while(0)
#define err(format, arg...) printk(KERN_ERR "%s: " format "\n", MY_NAME , ## arg)
#define info(format, arg...) printk(KERN_INFO "%s: " format "\n", MY_NAME , ## arg)
#define warn(format, arg...) printk(KERN_WARNING "%s: " format "\n", MY_NAME , ## arg)
static int debug;
static char *bridge;
static u8 bridge_busnr;
static u8 bridge_slot;
static struct pci_bus *bus;
static u8 first_slot;
static u8 last_slot;
static u16 port;
static unsigned int enum_bit;
static u8 enum_mask;
static struct cpci_hp_controller_ops generic_hpc_ops;
static struct cpci_hp_controller generic_hpc;
static int __init validate_parameters(void)
static int query_enum(void)
static int __init cpcihp_generic_init(void)
static void __exit cpcihp_generic_exit(void)
module_init(cpcihp_generic_init);
module_exit(cpcihp_generic_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Debugging mode enabled or not");
module_param(bridge, charp, 0);
MODULE_PARM_DESC(bridge, "Hotswap bus bridge device, <bus>:<slot> (bus and slot are in hexadecimal)");
module_param(first_slot, byte, 0);
MODULE_PARM_DESC(first_slot, "Hotswap bus first slot number");
module_param(last_slot, byte, 0);
MODULE_PARM_DESC(last_slot, "Hotswap bus last slot number");
module_param(port, ushort, 0);
MODULE_PARM_DESC(port, "#ENUM signal I/O port");
module_param(enum_bit, uint, 0);
MODULE_PARM_DESC(enum_bit, "#ENUM signal bit (0-7)");
