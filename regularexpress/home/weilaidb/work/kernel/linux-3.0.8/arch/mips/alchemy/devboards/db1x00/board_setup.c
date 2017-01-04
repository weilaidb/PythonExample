char irq_tab_alchemy[][5] __initdata = ;
char irq_tab_alchemy[][5] __initdata = ;
char irq_tab_alchemy[][5] __initdata = ;
static struct au1000_eth_platform_data eth0_pdata = ;
static void bosporus_power_off(void)
const char *get_system_type(void)
char irq_tab_alchemy[][5] __initdata = ;
static void mirage_power_off(void)
const char *get_system_type(void)
#if defined(CONFIG_MIPS_BOSPORUS) || defined(CONFIG_MIPS_MIRAGE)
static void mips_softreset(void)
const char *get_system_type(void)
void __init board_setup(void)
static int __init db1x00_init_irq(void)
arch_initcall(db1x00_init_irq);
