static struct map_desc u300_io_desc[] __initdata = ;
void __init u300_map_io(void)
static struct amba_pl011_data uart0_plat_data = ;
static struct amba_device uart0_device = ;
static struct amba_pl011_data uart1_plat_data = ;
static struct amba_device uart1_device = ;
static struct amba_device pl172_device = ;
static struct amba_device pl022_device = ;
static struct amba_device mmcsd_device = ;
static struct amba_device *amba_devs[] __initdata = ;
static struct resource gpio_resources[] = ;
static struct resource keypad_resources[] = ;
static struct resource rtc_resources[] = ;
static struct resource fsmc_resources[] = ;
static struct resource i2c0_resources[] = ;
static struct resource i2c1_resources[] = ;
static struct resource wdog_resources[] = ;
static struct resource ave_resources[] = ;
static struct resource dma_resource[] = ;
static int dma_slave_channels[] = ;
static int dma_memcpy_channels[] = ;
static int dma_slave_channels[] = ;
static int dma_memcpy_channels[] = ;
static void coh901318_access_memory_state(struct device *dev, bool active)
#define flags_memcpy_config (COH901318_CX_CFG_CH_DISABLE | \
COH901318_CX_CFG_RM_MEMORY_TO_MEMORY | \
COH901318_CX_CFG_LCR_DISABLE | \
COH901318_CX_CFG_TC_IRQ_ENABLE | \
COH901318_CX_CFG_BE_IRQ_ENABLE)
#define flags_memcpy_lli_chained (COH901318_CX_CTRL_TC_ENABLE | \
COH901318_CX_CTRL_BURST_COUNT_32_BYTES | \
COH901318_CX_CTRL_SRC_BUS_SIZE_32_BITS | \
COH901318_CX_CTRL_SRC_ADDR_INC_ENABLE | \
COH901318_CX_CTRL_DST_BUS_SIZE_32_BITS | \
COH901318_CX_CTRL_DST_ADDR_INC_ENABLE | \
COH901318_CX_CTRL_MASTER_MODE_M1RW | \
COH901318_CX_CTRL_TCP_DISABLE | \
COH901318_CX_CTRL_TC_IRQ_DISABLE | \
COH901318_CX_CTRL_HSP_DISABLE | \
COH901318_CX_CTRL_HSS_DISABLE | \
COH901318_CX_CTRL_DDMA_LEGACY | \
COH901318_CX_CTRL_PRDD_SOURCE)
#define flags_memcpy_lli (COH901318_CX_CTRL_TC_ENABLE | \
COH901318_CX_CTRL_BURST_COUNT_32_BYTES | \
COH901318_CX_CTRL_SRC_BUS_SIZE_32_BITS | \
COH901318_CX_CTRL_SRC_ADDR_INC_ENABLE | \
COH901318_CX_CTRL_DST_BUS_SIZE_32_BITS | \
COH901318_CX_CTRL_DST_ADDR_INC_ENABLE | \
COH901318_CX_CTRL_MASTER_MODE_M1RW | \
COH901318_CX_CTRL_TCP_DISABLE | \
COH901318_CX_CTRL_TC_IRQ_DISABLE | \
COH901318_CX_CTRL_HSP_DISABLE | \
COH901318_CX_CTRL_HSS_DISABLE | \
COH901318_CX_CTRL_DDMA_LEGACY | \
COH901318_CX_CTRL_PRDD_SOURCE)
#define flags_memcpy_lli_last (COH901318_CX_CTRL_TC_ENABLE | \
COH901318_CX_CTRL_BURST_COUNT_32_BYTES | \
COH901318_CX_CTRL_SRC_BUS_SIZE_32_BITS | \
COH901318_CX_CTRL_SRC_ADDR_INC_ENABLE | \
COH901318_CX_CTRL_DST_BUS_SIZE_32_BITS | \
COH901318_CX_CTRL_DST_ADDR_INC_ENABLE | \
COH901318_CX_CTRL_MASTER_MODE_M1RW | \
COH901318_CX_CTRL_TCP_DISABLE | \
COH901318_CX_CTRL_TC_IRQ_ENABLE | \
COH901318_CX_CTRL_HSP_DISABLE | \
COH901318_CX_CTRL_HSS_DISABLE | \
COH901318_CX_CTRL_DDMA_LEGACY | \
COH901318_CX_CTRL_PRDD_SOURCE)
const struct coh_dma_channel chan_config[U300_DMA_CHANNELS] = ;
static struct coh901318_platform coh901318_platform = ;
static struct platform_device wdog_device = ;
static struct platform_device i2c0_device = ;
static struct platform_device i2c1_device = ;
static struct platform_device gpio_device = ;
static struct platform_device keypad_device = ;
static struct platform_device rtc_device = ;
static struct mtd_partition u300_partitions[] = ;
static struct fsmc_nand_platform_data nand_platform_data = ;
static struct platform_device nand_device = ;
static struct platform_device ave_device = ;
static struct platform_device dma_device = ;
static struct platform_device *platform_devs[] __initdata = ;
void __init u300_init_irq(void)
struct db_chip ;
static struct db_chip db_chips[] __initdata = ;
static void __init u300_init_check_chip(void)
static void __init u300_assign_physmem(void)
void __init u300_init_devices(void)
static int core_module_init(void)
module_init(core_module_init);
