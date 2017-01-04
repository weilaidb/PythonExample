MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alexander Shishkin");
#define ETM_BASE	(L4_EMU_34XX_PHYS + 0x10000)
#define DBG_BASE	(L4_EMU_34XX_PHYS + 0x11000)
#define ETB_BASE	(L4_EMU_34XX_PHYS + 0x1b000)
#define DAPCTL		(L4_EMU_34XX_PHYS + 0x1d000)
static struct amba_device omap3_etb_device = ;
static struct amba_device omap3_etm_device = ;
static int __init emu_init(void)
subsys_initcall(emu_init);
