static struct resource ath79_uart_resources[] = ;
#define AR71XX_UART_FLAGS (UPF_BOOT_AUTOCONF | UPF_SKIP_TEST | UPF_IOREMAP)
static struct plat_serial8250_port ath79_uart_data[] = ;
static struct platform_device ath79_uart_device = ;
void __init ath79_register_uart(void)
static struct platform_device ath79_wdt_device = ;
void __init ath79_register_wdt(void)
