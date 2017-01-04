#define VERSION "arcnet: COM20020 ISA support (by David Woodhouse et al.)\n"
static int __init com20020isa_probe(struct net_device *dev)
static int node = 0;
static int io = 0x0;
static int irq = 0;
static char device[9];
static int timeout = 3;
static int backplane = 0;
static int clockp = 0;
static int clockm = 0;
module_param(node, int, 0);
module_param(io, int, 0);
module_param(irq, int, 0);
module_param_string(device, device, sizeof(device), 0);
module_param(timeout, int, 0);
module_param(backplane, int, 0);
module_param(clockp, int, 0);
module_param(clockm, int, 0);
MODULE_LICENSE("GPL");
static struct net_device *my_dev;
static int __init com20020_init(void)
static void __exit com20020_exit(void)
static int __init com20020isa_setup(char *s)
__setup("com20020=", com20020isa_setup);
module_init(com20020_init)
module_exit(com20020_exit)
