static int get_tclk(void);
static struct map_desc dove_io_desc[] __initdata = ;
void __init dove_map_io(void)
void __init dove_ehci0_init(void)
void __init dove_ehci1_init(void)
void __init dove_ge00_init(struct mv643xx_eth_platform_data *eth_data)
void __init dove_rtc_init(void)
void __init dove_sata_init(struct mv_sata_platform_data *sata_data)
void __init dove_uart0_init(void)
void __init dove_uart1_init(void)
void __init dove_uart2_init(void)
void __init dove_uart3_init(void)
void __init dove_spi0_init(void)
void __init dove_spi1_init(void)
void __init dove_i2c_init(void)
void __init dove_init_early(void)
static int get_tclk(void)
static void dove_timer_init(void)
struct sys_timer dove_timer = ;
void __init dove_xor0_init(void)
void __init dove_xor1_init(void)
static u64 sdio_dmamask = DMA_BIT_MASK(32);
static struct resource dove_sdio0_resources[] = ;
static struct platform_device dove_sdio0 = ;
void __init dove_sdio0_init(void)
static struct resource dove_sdio1_resources[] = ;
static struct platform_device dove_sdio1 = ;
void __init dove_sdio1_init(void)
void __init dove_init(void)
