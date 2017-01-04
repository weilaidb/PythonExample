static void fill_resources(struct platform_device *device,
struct resource *resources,
resource_size_t mapbase,
resource_size_t size,
unsigned int irq)
static void __init uart_complete(
struct platform_device *orion_uart,
struct plat_serial8250_port *data,
struct resource *resources,
unsigned int membase,
resource_size_t mapbase,
unsigned int irq,
unsigned int uartclk)
static struct plat_serial8250_port orion_uart0_data[] = ;
static struct resource orion_uart0_resources[2];
static struct platform_device orion_uart0 = ;
void __init orion_uart0_init(unsigned int membase,
resource_size_t mapbase,
unsigned int irq,
unsigned int uartclk)
static struct plat_serial8250_port orion_uart1_data[] = ;
static struct resource orion_uart1_resources[2];
static struct platform_device orion_uart1 = ;
void __init orion_uart1_init(unsigned int membase,
resource_size_t mapbase,
unsigned int irq,
unsigned int uartclk)
static struct plat_serial8250_port orion_uart2_data[] = ;
static struct resource orion_uart2_resources[2];
static struct platform_device orion_uart2 = ;
void __init orion_uart2_init(unsigned int membase,
resource_size_t mapbase,
unsigned int irq,
unsigned int uartclk)
static struct plat_serial8250_port orion_uart3_data[] = ;
static struct resource orion_uart3_resources[2];
static struct platform_device orion_uart3 = ;
void __init orion_uart3_init(unsigned int membase,
resource_size_t mapbase,
unsigned int irq,
unsigned int uartclk)
static struct resource orion_rtc_resource[2];
void __init orion_rtc_init(unsigned long mapbase,
unsigned long irq)
static __init void ge_complete(
struct mv643xx_eth_shared_platform_data *orion_ge_shared_data,
struct mbus_dram_target_info *mbus_dram_info, int tclk,
struct resource *orion_ge_resource, unsigned long irq,
struct platform_device *orion_ge_shared,
struct mv643xx_eth_platform_data *eth_data,
struct platform_device *orion_ge)
struct mv643xx_eth_shared_platform_data orion_ge00_shared_data;
static struct resource orion_ge00_shared_resources[] = ;
static struct platform_device orion_ge00_shared = ;
static struct resource orion_ge00_resources[] = ;
static struct platform_device orion_ge00 = ;
void __init orion_ge00_init(struct mv643xx_eth_platform_data *eth_data,
struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase,
unsigned long irq,
unsigned long irq_err,
int tclk)
struct mv643xx_eth_shared_platform_data orion_ge01_shared_data = ;
static struct resource orion_ge01_shared_resources[] = ;
static struct platform_device orion_ge01_shared = ;
static struct resource orion_ge01_resources[] = ;
static struct platform_device orion_ge01 = ;
void __init orion_ge01_init(struct mv643xx_eth_platform_data *eth_data,
struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase,
unsigned long irq,
unsigned long irq_err,
int tclk)
struct mv643xx_eth_shared_platform_data orion_ge10_shared_data = ;
static struct resource orion_ge10_shared_resources[] = ;
static struct platform_device orion_ge10_shared = ;
static struct resource orion_ge10_resources[] = ;
static struct platform_device orion_ge10 = ;
void __init orion_ge10_init(struct mv643xx_eth_platform_data *eth_data,
struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase,
unsigned long irq,
unsigned long irq_err,
int tclk)
struct mv643xx_eth_shared_platform_data orion_ge11_shared_data = ;
static struct resource orion_ge11_shared_resources[] = ;
static struct platform_device orion_ge11_shared = ;
static struct resource orion_ge11_resources[] = ;
static struct platform_device orion_ge11 = ;
void __init orion_ge11_init(struct mv643xx_eth_platform_data *eth_data,
struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase,
unsigned long irq,
unsigned long irq_err,
int tclk)
static struct resource orion_switch_resources[] = ;
static struct platform_device orion_switch_device = ;
void __init orion_ge00_switch_init(struct dsa_platform_data *d, int irq)
static struct mv64xxx_i2c_pdata orion_i2c_pdata = ;
static struct resource orion_i2c_resources[2];
static struct platform_device orion_i2c = ;
static struct mv64xxx_i2c_pdata orion_i2c_1_pdata = ;
static struct resource orion_i2c_1_resources[2];
static struct platform_device orion_i2c_1 = ;
void __init orion_i2c_init(unsigned long mapbase,
unsigned long irq,
unsigned long freq_m)
void __init orion_i2c_1_init(unsigned long mapbase,
unsigned long irq,
unsigned long freq_m)
static struct orion_spi_info orion_spi_plat_data;
static struct resource orion_spi_resources;
static struct platform_device orion_spi = ;
static struct orion_spi_info orion_spi_1_plat_data;
static struct resource orion_spi_1_resources;
static struct platform_device orion_spi_1 = ;
void __init orion_spi_init(unsigned long mapbase,
unsigned long tclk)
void __init orion_spi_1_init(unsigned long mapbase,
unsigned long tclk)
static struct orion_wdt_platform_data orion_wdt_data;
static struct platform_device orion_wdt_device = ;
void __init orion_wdt_init(unsigned long tclk)
static struct mv_xor_platform_shared_data orion_xor_shared_data;
static u64 orion_xor_dmamask = DMA_BIT_MASK(32);
void __init orion_xor_init_channels(
struct mv_xor_platform_data *orion_xor0_data,
struct platform_device *orion_xor0_channel,
struct mv_xor_platform_data *orion_xor1_data,
struct platform_device *orion_xor1_channel)
static struct resource orion_xor0_shared_resources[] = ;
static struct platform_device orion_xor0_shared = ;
static struct resource orion_xor00_resources[] = ;
static struct mv_xor_platform_data orion_xor00_data = ;
static struct platform_device orion_xor00_channel = ;
static struct resource orion_xor01_resources[] = ;
static struct mv_xor_platform_data orion_xor01_data = ;
static struct platform_device orion_xor01_channel = ;
void __init orion_xor0_init(struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase_low,
unsigned long mapbase_high,
unsigned long irq_0,
unsigned long irq_1)
static struct resource orion_xor1_shared_resources[] = ;
static struct platform_device orion_xor1_shared = ;
static struct resource orion_xor10_resources[] = ;
static struct mv_xor_platform_data orion_xor10_data = ;
static struct platform_device orion_xor10_channel = ;
static struct resource orion_xor11_resources[] = ;
static struct mv_xor_platform_data orion_xor11_data = ;
static struct platform_device orion_xor11_channel = ;
void __init orion_xor1_init(unsigned long mapbase_low,
unsigned long mapbase_high,
unsigned long irq_0,
unsigned long irq_1)
static struct orion_ehci_data orion_ehci_data = ;
static u64 ehci_dmamask = DMA_BIT_MASK(32);
static struct resource orion_ehci_resources[2];
static struct platform_device orion_ehci = ;
void __init orion_ehci_init(struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase,
unsigned long irq)
static struct resource orion_ehci_1_resources[2];
static struct platform_device orion_ehci_1 = ;
void __init orion_ehci_1_init(struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase,
unsigned long irq)
static struct resource orion_ehci_2_resources[2];
static struct platform_device orion_ehci_2 = ;
void __init orion_ehci_2_init(struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase,
unsigned long irq)
static struct resource orion_sata_resources[2] = ;
static struct platform_device orion_sata = ;
void __init orion_sata_init(struct mv_sata_platform_data *sata_data,
struct mbus_dram_target_info *mbus_dram_info,
unsigned long mapbase,
unsigned long irq)
static struct resource orion_crypto_resources[] = ;
static struct platform_device orion_crypto = ;
void __init orion_crypto_init(unsigned long mapbase,
unsigned long srambase,
unsigned long sram_size,
unsigned long irq)
