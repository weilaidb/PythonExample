#define MCI_DATA2DIREN		(1 << 2)
#define MCI_CMDDIREN		(1 << 3)
#define MCI_DATA0DIREN		(1 << 4)
#define MCI_DATA31DIREN		(1 << 5)
#define MCI_FBCLKEN		(1 << 7)
static u32 mop500_sdi0_vdd_handler(struct device *dev, unsigned int vdd,
unsigned char power_mode)
struct stedma40_chan_cfg mop500_sdi0_dma_cfg_rx = ;
static struct stedma40_chan_cfg mop500_sdi0_dma_cfg_tx = ;
static struct mmci_platform_data mop500_sdi0_data = ;
static int sdi0_en = -1;
static int sdi0_vsel = -1;
static void sdi0_configure(void)
void mop500_sdi_tc35892_init(void)
struct stedma40_chan_cfg mop500_sdi2_dma_cfg_rx = ;
static struct stedma40_chan_cfg mop500_sdi2_dma_cfg_tx = ;
static struct mmci_platform_data mop500_sdi2_data = ;
struct stedma40_chan_cfg mop500_sdi4_dma_cfg_rx = ;
static struct stedma40_chan_cfg mop500_sdi4_dma_cfg_tx = ;
static struct mmci_platform_data mop500_sdi4_data = ;
void __init mop500_sdi_init(void)
