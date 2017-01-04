#define IOP13XX_UART_XTAL 33334000
#define IOP13XX_SETUP_DEBUG 0
#define PRINTK(x...) ((void)(IOP13XX_SETUP_DEBUG && printk(x)))
static struct map_desc iop13xx_std_desc[] __initdata = ;
static struct resource iop13xx_uart0_resources[] = ;
static struct resource iop13xx_uart1_resources[] = ;
static struct plat_serial8250_port iop13xx_uart0_data[] = ;
static struct plat_serial8250_port iop13xx_uart1_data[] = ;
static struct platform_device iop13xx_uart0 = ;
static struct platform_device iop13xx_uart1 = ;
static struct resource iop13xx_i2c_0_resources[] = ;
static struct resource iop13xx_i2c_1_resources[] = ;
static struct resource iop13xx_i2c_2_resources[] = ;
static struct platform_device iop13xx_i2c_0_controller = ;
static struct platform_device iop13xx_i2c_1_controller = ;
static struct platform_device iop13xx_i2c_2_controller = ;
static struct physmap_flash_data iq8134x_flash_data = ;
static struct resource iq8134x_flash_resource = ;
static struct platform_device iq8134x_flash = ;
static unsigned long iq8134x_probe_flash_size(void)
static struct resource iop13xx_adma_0_resources[] = ;
static struct resource iop13xx_adma_1_resources[] = ;
static struct resource iop13xx_adma_2_resources[] = ;
static u64 iop13xx_adma_dmamask = DMA_BIT_MASK(64);
static struct iop_adma_platform_data iop13xx_adma_0_data = ;
static struct iop_adma_platform_data iop13xx_adma_1_data = ;
static struct iop_adma_platform_data iop13xx_adma_2_data = ;
static struct platform_device iop13xx_adma_0_channel = ;
static struct platform_device iop13xx_adma_1_channel = ;
static struct platform_device iop13xx_adma_2_channel = ;
void __init iop13xx_map_io(void)
static int init_uart;
static int init_i2c;
static int init_adma;
void __init iop13xx_platform_init(void)
static int __init iop13xx_init_uart_setup(char *str)
static int __init iop13xx_init_i2c_setup(char *str)
static int __init iop13xx_init_adma_setup(char *str)
__setup("iop13xx_init_adma", iop13xx_init_adma_setup);
__setup("iop13xx_init_uart", iop13xx_init_uart_setup);
__setup("iop13xx_init_i2c", iop13xx_init_i2c_setup);
