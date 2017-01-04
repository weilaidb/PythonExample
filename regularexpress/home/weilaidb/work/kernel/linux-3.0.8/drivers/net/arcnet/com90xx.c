#define VERSION "arcnet: COM90xx chipset support\n"
#undef FAST_PROBE
static int com90xx_found(int ioaddr, int airq, u_long shmem, void __iomem *);
static void com90xx_command(struct net_device *dev, int command);
static int com90xx_status(struct net_device *dev);
static void com90xx_setmask(struct net_device *dev, int mask);
static int com90xx_reset(struct net_device *dev, int really_reset);
static void com90xx_copy_to_card(struct net_device *dev, int bufnum, int offset,
void *buf, int count);
static void com90xx_copy_from_card(struct net_device *dev, int bufnum, int offset,
void *buf, int count);
static struct net_device *cards[16];
static int numcards;
#define ARCNET_TOTAL_SIZE	16
#define BUFFER_SIZE (512)
#define MIRROR_SIZE (BUFFER_SIZE*4)
#define _INTMASK (ioaddr+0)
#define _STATUS  (ioaddr+0)
#define _COMMAND (ioaddr+1)
#define _CONFIG  (ioaddr+2)
#define _RESET   (ioaddr+8)
#define _MEMDATA (ioaddr+12)
#define _ADDR_HI (ioaddr+15)
#define _ADDR_LO (ioaddr+14)
#undef ASTATUS
#undef ACOMMAND
#undef AINTMASK
#define ASTATUS()	inb(_STATUS)
#define ACOMMAND(cmd) 	outb((cmd),_COMMAND)
#define AINTMASK(msk)	outb((msk),_INTMASK)
static int com90xx_skip_probe __initdata = 0;
static int io;
static int irq;
static int shmem;
static char device[9];
module_param(io, int, 0);
module_param(irq, int, 0);
module_param(shmem, int, 0);
module_param_string(device, device, sizeof(device), 0);
static void __init com90xx_probe(void)
static int check_mirror(unsigned long addr, size_t size)
static int __init com90xx_found(int ioaddr, int airq, u_long shmem, void __iomem *p)
static void com90xx_command(struct net_device *dev, int cmd)
static int com90xx_status(struct net_device *dev)
static void com90xx_setmask(struct net_device *dev, int mask)
static int com90xx_reset(struct net_device *dev, int really_reset)
static void com90xx_copy_to_card(struct net_device *dev, int bufnum, int offset,
void *buf, int count)
static void com90xx_copy_from_card(struct net_device *dev, int bufnum, int offset,
void *buf, int count)
MODULE_LICENSE("GPL");
static int __init com90xx_init(void)
static void __exit com90xx_exit(void)
module_init(com90xx_init);
module_exit(com90xx_exit);
static int __init com90xx_setup(char *s)
__setup("com90xx=", com90xx_setup);
