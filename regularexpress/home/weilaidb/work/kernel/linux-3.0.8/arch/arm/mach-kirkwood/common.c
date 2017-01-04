static struct map_desc kirkwood_io_desc[] __initdata = ;
void __init kirkwood_map_io(void)
unsigned int kirkwood_clk_ctrl = CGC_DUNIT | CGC_RESERVED;
void __init kirkwood_ehci_init(void)
void __init kirkwood_ge00_init(struct mv643xx_eth_platform_data *eth_data)
void __init kirkwood_ge01_init(struct mv643xx_eth_platform_data *eth_data)
void __init kirkwood_ge00_switch_init(struct dsa_platform_data *d, int irq)
static struct resource kirkwood_nand_resource = ;
static struct orion_nand_data kirkwood_nand_data = ;
static struct platform_device kirkwood_nand_flash = ;
void __init kirkwood_nand_init(struct mtd_partition *parts, int nr_parts,
int chip_delay)
void __init kirkwood_nand_init_rnb(struct mtd_partition *parts, int nr_parts,
int (*dev_ready)(struct mtd_info *))
static void __init kirkwood_rtc_init(void)
void __init kirkwood_sata_init(struct mv_sata_platform_data *sata_data)
static struct resource mvsdio_resources[] = ;
static u64 mvsdio_dmamask = DMA_BIT_MASK(32);
static struct platform_device kirkwood_sdio = ;
void __init kirkwood_sdio_init(struct mvsdio_platform_data *mvsdio_data)
void __init kirkwood_spi_init()
void __init kirkwood_i2c_init(void)
void __init kirkwood_uart0_init(void)
void __init kirkwood_uart1_init(void)
void __init kirkwood_crypto_init(void)
static void __init kirkwood_xor0_init(void)
static void __init kirkwood_xor1_init(void)
static void __init kirkwood_wdt_init(void)
void __init kirkwood_init_early(void)
int kirkwood_tclk;
static int __init kirkwood_find_tclk(void)
static void __init kirkwood_timer_init(void)
struct sys_timer kirkwood_timer = ;
static struct resource kirkwood_i2s_resources[] = ;
static struct kirkwood_asoc_platform_data kirkwood_i2s_data = ;
static struct platform_device kirkwood_i2s_device = ;
static struct platform_device kirkwood_pcm_device = ;
void __init kirkwood_audio_init(void)
static char * __init kirkwood_id(void)
static void __init kirkwood_l2_init(void)
void __init kirkwood_init(void)
static int __init kirkwood_clock_gate(void)
late_initcall(kirkwood_clock_gate);
