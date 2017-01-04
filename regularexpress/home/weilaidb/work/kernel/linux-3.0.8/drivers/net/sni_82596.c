#define SNI_82596_DRIVER_VERSION "SNI RM 82596 driver - Revision: 0.01"
static const char sni_82596_string[] = "snirm_82596";
#define DMA_ALLOC                      dma_alloc_coherent
#define DMA_FREE                       dma_free_coherent
#define DMA_WBACK(priv, addr, len)     do  while (0)
#define DMA_INV(priv, addr, len)       do  while (0)
#define DMA_WBACK_INV(priv, addr, len) do  while (0)
#define SYSBUS      0x00004400
#define SWAP32(x)   cpu_to_le32((u32)(x))
#define SWAP16(x)   cpu_to_le16((u16)(x))
#define OPT_MPU_16BIT    0x01
MODULE_AUTHOR("Thomas Bogendoerfer");
MODULE_DESCRIPTION("i82596 driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:snirm_82596");
module_param(i596_debug, int, 0);
MODULE_PARM_DESC(i596_debug, "82596 debug mask");
static inline void ca(struct net_device *dev)
static void mpu_port(struct net_device *dev, int c, dma_addr_t x)
static int __devinit sni_82596_probe(struct platform_device *dev)
static int __devexit sni_82596_driver_remove(struct platform_device *pdev)
static struct platform_driver sni_82596_driver = ;
static int __devinit sni_82596_init(void)
static void __exit sni_82596_exit(void)
module_init(sni_82596_init);
module_exit(sni_82596_exit);
