static struct map_desc orion5x_io_desc[] __initdata = ;
void __init orion5x_map_io(void)
void __init orion5x_ehci0_init(void)
void __init orion5x_ehci1_init(void)
void __init orion5x_eth_init(struct mv643xx_eth_platform_data *eth_data)
void __init orion5x_eth_switch_init(struct dsa_platform_data *d, int irq)
void __init orion5x_i2c_init(void)
void __init orion5x_sata_init(struct mv_sata_platform_data *sata_data)
void __init orion5x_spi_init()
void __init orion5x_uart0_init(void)
void __init orion5x_uart1_init(void)
void __init orion5x_xor_init(void)
static void __init orion5x_crypto_init(void)
void __init orion5x_wdt_init(void)
void __init orion5x_init_early(void)
int orion5x_tclk;
int __init orion5x_find_tclk(void)
static void orion5x_timer_init(void)
struct sys_timer orion5x_timer = ;
static void __init orion5x_id(u32 *dev, u32 *rev, char **dev_name)
void __init orion5x_init(void)
void __init tag_fixup_mem32(struct machine_desc *mdesc, struct tag *t,
char **from, struct meminfo *meminfo)
