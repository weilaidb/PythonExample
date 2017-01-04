#define TNETV107X_TPCC_BASE			0x01c00000
#define TNETV107X_TPTC0_BASE			0x01c10000
#define TNETV107X_TPTC1_BASE			0x01c10400
#define TNETV107X_WDOG_BASE			0x08086700
#define TNETV107X_TSC_BASE			0x08088500
#define TNETV107X_SDIO0_BASE			0x08088700
#define TNETV107X_SDIO1_BASE			0x08088800
#define TNETV107X_KEYPAD_BASE			0x08088a00
#define TNETV107X_SSP_BASE			0x08088c00
#define TNETV107X_ASYNC_EMIF_CNTRL_BASE		0x08200000
#define TNETV107X_ASYNC_EMIF_DATA_CE0_BASE	0x30000000
#define TNETV107X_ASYNC_EMIF_DATA_CE1_BASE	0x40000000
#define TNETV107X_ASYNC_EMIF_DATA_CE2_BASE	0x44000000
#define TNETV107X_ASYNC_EMIF_DATA_CE3_BASE	0x48000000
#define EDMA_TNETV107X_NUM_DMACH	64
#define EDMA_TNETV107X_NUM_TCC		64
#define EDMA_TNETV107X_NUM_PARAMENTRY	128
#define EDMA_TNETV107X_NUM_EVQUE	2
#define EDMA_TNETV107X_NUM_TC		2
#define EDMA_TNETV107X_CHMAP_EXIST	0
#define EDMA_TNETV107X_NUM_REGIONS	4
#define TNETV107X_DMACH2EVENT_MAP0	0x3C0CE000u
#define TNETV107X_DMACH2EVENT_MAP1	0x000FFFFFu
#define TNETV107X_DMACH_SDIO0_RX		26
#define TNETV107X_DMACH_SDIO0_TX		27
#define TNETV107X_DMACH_SDIO1_RX		28
#define TNETV107X_DMACH_SDIO1_TX		29
static const s8 edma_tc_mapping[][2] = ;
static const s8 edma_priority_mapping[][2] = ;
static struct edma_soc_info edma_cc0_info = ;
static struct edma_soc_info *tnetv107x_edma_info[EDMA_MAX_CC] = ;
static struct resource edma_resources[] = ;
static struct platform_device edma_device = ;
static struct plat_serial8250_port serial_data[] = ;
struct platform_device tnetv107x_serial_device = ;
static struct resource mmc0_resources[] = ;
static struct resource mmc1_resources[] = ;
static u64 mmc0_dma_mask = DMA_BIT_MASK(32);
static u64 mmc1_dma_mask = DMA_BIT_MASK(32);
static struct platform_device mmc_devices[2] = ;
static const u32 emif_windows[] = ;
static const u32 emif_window_sizes[] = ;
static struct resource wdt_resources[] = ;
struct platform_device tnetv107x_wdt_device = ;
static int __init nand_init(int chipsel, struct davinci_nand_pdata *data)
static struct resource keypad_resources[] = ;
static struct platform_device keypad_device = ;
static struct resource tsc_resources[] = ;
static struct platform_device tsc_device = ;
static struct resource ssp_resources[] = ;
static struct platform_device ssp_device = ;
void __init tnetv107x_devices_init(struct tnetv107x_device_info *info)
