extern asmlinkage void jazz_handle_int(void);
extern void jazz_machine_restart(char *command);
static struct resource jazz_io_resources[] = ;
void __init plat_mem_setup(void)
#define UART_CLK  1843200
#define UART_CLK (8000000 / 16)
#define MEMPORT(_base, _irq)				\
static struct plat_serial8250_port jazz_serial_data[] = ;
static struct platform_device jazz_serial8250_device = ;
static struct resource jazz_esp_rsrc[] = ;
static struct platform_device jazz_esp_pdev = ;
static struct resource jazz_sonic_rsrc[] = ;
static struct platform_device jazz_sonic_pdev = ;
static struct resource jazz_cmos_rsrc[] = ;
static struct platform_device jazz_cmos_pdev = ;
static struct platform_device pcspeaker_pdev = ;
static int __init jazz_setup_devinit(void)
device_initcall(jazz_setup_devinit);
