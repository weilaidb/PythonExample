static struct amba_pl010_data integrator_uart_data;
static struct amba_device rtc_device = ;
static struct amba_device uart0_device = ;
static struct amba_device uart1_device = ;
static struct amba_device kmi0_device = ;
static struct amba_device kmi1_device = ;
static struct amba_device *amba_devs[] __initdata = ;
static struct clk clk24mhz = ;
static struct clk uartclk = ;
static struct clk dummy_apb_pclk;
static struct clk_lookup lookups[] = ;
void __init integrator_init_early(void)
static int __init integrator_init(void)
arch_initcall(integrator_init);
#define SC_CTRLC	IO_ADDRESS(INTEGRATOR_SC_CTRLC)
#define SC_CTRLS	IO_ADDRESS(INTEGRATOR_SC_CTRLS)
static void integrator_uart_set_mctrl(struct amba_device *dev, void __iomem *base, unsigned int mctrl)
static struct amba_pl010_data integrator_uart_data = ;
#define CM_CTRL	IO_ADDRESS(INTEGRATOR_HDR_CTRL)
static DEFINE_SPINLOCK(cm_lock);
void cm_control(u32 mask, u32 set)
EXPORT_SYMBOL(cm_control);
void __init integrator_reserve(void)
