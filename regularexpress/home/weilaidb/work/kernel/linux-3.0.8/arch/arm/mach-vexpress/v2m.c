#define V2M_PA_CS0	0x40000000
#define V2M_PA_CS1	0x44000000
#define V2M_PA_CS2	0x48000000
#define V2M_PA_CS3	0x4c000000
#define V2M_PA_CS7	0x10000000
static struct map_desc v2m_io_desc[] __initdata = ;
static void __init v2m_timer_init(void)
static struct sys_timer v2m_timer = ;
static DEFINE_SPINLOCK(v2m_cfg_lock);
int v2m_cfg_write(u32 devfn, u32 data)
int v2m_cfg_read(u32 devfn, u32 *data)
static struct resource v2m_pcie_i2c_resource = ;
static struct platform_device v2m_pcie_i2c_device = ;
static struct resource v2m_ddc_i2c_resource = ;
static struct platform_device v2m_ddc_i2c_device = ;
static struct resource v2m_eth_resources[] = ;
static struct smsc911x_platform_config v2m_eth_config = ;
static struct platform_device v2m_eth_device = ;
static struct resource v2m_usb_resources[] = ;
static struct isp1760_platform_data v2m_usb_config = ;
static struct platform_device v2m_usb_device = ;
static void v2m_flash_set_vpp(struct platform_device *pdev, int on)
static struct physmap_flash_data v2m_flash_data = ;
static struct resource v2m_flash_resources[] = ;
static struct platform_device v2m_flash_device = ;
static struct pata_platform_info v2m_pata_data = ;
static struct resource v2m_pata_resources[] = ;
static struct platform_device v2m_cf_device = ;
static unsigned int v2m_mmci_status(struct device *dev)
static struct mmci_platform_data v2m_mmci_data = ;
static AMBA_DEVICE(aaci,  "mb:aaci",  V2M_AACI, NULL);
static AMBA_DEVICE(mmci,  "mb:mmci",  V2M_MMCI, &v2m_mmci_data);
static AMBA_DEVICE(kmi0,  "mb:kmi0",  V2M_KMI0, NULL);
static AMBA_DEVICE(kmi1,  "mb:kmi1",  V2M_KMI1, NULL);
static AMBA_DEVICE(uart0, "mb:uart0", V2M_UART0, NULL);
static AMBA_DEVICE(uart1, "mb:uart1", V2M_UART1, NULL);
static AMBA_DEVICE(uart2, "mb:uart2", V2M_UART2, NULL);
static AMBA_DEVICE(uart3, "mb:uart3", V2M_UART3, NULL);
static AMBA_DEVICE(wdt,   "mb:wdt",   V2M_WDT, NULL);
static AMBA_DEVICE(rtc,   "mb:rtc",   V2M_RTC, NULL);
static struct amba_device *v2m_amba_devs[] __initdata = ;
static long v2m_osc_round(struct clk *clk, unsigned long rate)
static int v2m_osc1_set(struct clk *clk, unsigned long rate)
static const struct clk_ops osc1_clk_ops = ;
static struct clk osc1_clk = ;
static struct clk osc2_clk = ;
static struct clk v2m_sp804_clk = ;
static struct clk dummy_apb_pclk;
static struct clk_lookup v2m_lookups[] = ;
static void __init v2m_init_early(void)
static void v2m_power_off(void)
static void v2m_restart(char str, const char *cmd)
struct ct_desc *ct_desc;
static struct ct_desc *ct_descs[] __initdata = ;
static void __init v2m_populate_ct_desc(void)
static void __init v2m_map_io(void)
static void __init v2m_init_irq(void)
static void __init v2m_init(void)
MACHINE_START(VEXPRESS, "ARM-Versatile Express")
.boot_params	= PLAT_PHYS_OFFSET + 0x00000100,
.map_io		= v2m_map_io,
.init_early	= v2m_init_early,
.init_irq	= v2m_init_irq,
.timer		= &v2m_timer,
.init_machine	= v2m_init,
MACHINE_END
