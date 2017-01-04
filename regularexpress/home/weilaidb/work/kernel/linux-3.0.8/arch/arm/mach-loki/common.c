static struct map_desc loki_io_desc[] __initdata = ;
void __init loki_map_io(void)
void __init loki_ge0_init(struct mv643xx_eth_platform_data *eth_data)
void __init loki_ge1_init(struct mv643xx_eth_platform_data *eth_data)
static struct resource loki_sas_resources[] = ;
static struct platform_device loki_sas = ;
void __init loki_sas_init(void)
void __init loki_uart0_init(void)
void __init loki_uart1_init(void)
void __init loki_init_early(void)
static void loki_timer_init(void)
struct sys_timer loki_timer = ;
void __init loki_init(void)
