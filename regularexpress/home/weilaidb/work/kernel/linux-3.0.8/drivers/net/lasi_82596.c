#define LASI_82596_DRIVER_VERSION "LASI 82596 driver - Revision: 1.30"
#define PA_I82596_RESET		0
#define PA_CPU_PORT_L_ACCESS	4
#define PA_CHANNEL_ATTENTION	8
#define OPT_SWAP_PORT	0x0001
#define DMA_ALLOC                        dma_alloc_noncoherent
#define DMA_FREE                         dma_free_noncoherent
#define DMA_WBACK(ndev, addr, len) \
do  while (0)
#define DMA_INV(ndev, addr, len) \
do  while (0)
#define DMA_WBACK_INV(ndev, addr, len) \
do  while (0)
#define SYSBUS      0x0000006c;
#define SWAP32(x)   (((u32)(x)<<16) | ((((u32)(x)))>>16))
#define SWAP16(x)   (x)
MODULE_AUTHOR("Richard Hirst");
MODULE_DESCRIPTION("i82596 driver");
MODULE_LICENSE("GPL");
module_param(i596_debug, int, 0);
MODULE_PARM_DESC(i596_debug, "lasi_82596 debug mask");
static inline void ca(struct net_device *dev)
static void mpu_port(struct net_device *dev, int c, dma_addr_t x)
#define LAN_PROM_ADDR	0xF0810000
static int __devinit
lan_init_chip(struct parisc_device *dev)
static int __devexit lan_remove_chip (struct parisc_device *pdev)
static struct parisc_device_id lan_tbl[] = ;
MODULE_DEVICE_TABLE(parisc, lan_tbl);
static struct parisc_driver lan_driver = ;
static int __devinit lasi_82596_init(void)
module_init(lasi_82596_init);
static void __exit lasi_82596_exit(void)
module_exit(lasi_82596_exit);
