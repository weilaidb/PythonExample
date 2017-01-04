#define INTCP_PA_FLASH_BASE		0x24000000
#define INTCP_FLASH_SIZE		SZ_32M
#define INTCP_PA_CLCD_BASE		0xc0000000
#define INTCP_VA_CIC_BASE		__io_address(INTEGRATOR_HDR_BASE + 0x40)
#define INTCP_VA_PIC_BASE		__io_address(INTEGRATOR_IC_BASE)
#define INTCP_VA_SIC_BASE		__io_address(INTEGRATOR_CP_SIC_BASE)
#define INTCP_ETH_SIZE			0x10
#define INTCP_VA_CTRL_BASE		IO_ADDRESS(INTEGRATOR_CP_CTL_BASE)
#define INTCP_FLASHPROG			0x04
#define CINTEGRATOR_FLASHPROG_FLVPPEN	(1 << 0)
#define CINTEGRATOR_FLASHPROG_FLWREN	(1 << 1)
static struct map_desc intcp_io_desc[] __initdata = ;
static void __init intcp_map_io(void)
static struct fpga_irq_data cic_irq_data = ;
static struct fpga_irq_data pic_irq_data = ;
static struct fpga_irq_data sic_irq_data = ;
static void __init intcp_init_irq(void)
#define CM_LOCK		(__io_address(INTEGRATOR_HDR_BASE)+INTEGRATOR_HDR_LOCK_OFFSET)
#define CM_AUXOSC	(__io_address(INTEGRATOR_HDR_BASE)+0x1c)
static const struct icst_params cp_auxvco_params = ;
static void cp_auxvco_set(struct clk *clk, struct icst_vco vco)
static const struct clk_ops cp_auxclk_ops = ;
static struct clk cp_auxclk = ;
static struct clk sp804_clk = ;
static struct clk_lookup cp_lookups[] = ;
static int intcp_flash_init(struct platform_device *dev)
static void intcp_flash_exit(struct platform_device *dev)
static void intcp_flash_set_vpp(struct platform_device *pdev, int on)
static struct physmap_flash_data intcp_flash_data = ;
static struct resource intcp_flash_resource = ;
static struct platform_device intcp_flash_device = ;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static struct platform_device *intcp_devs[] __initdata = ;
static unsigned int mmc_status(struct device *dev)
static struct mmci_platform_data mmc_data = ;
static struct amba_device mmc_device = ;
static struct amba_device aaci_device = ;
static void cp_clcd_enable(struct clcd_fb *fb)
static int cp_clcd_setup(struct clcd_fb *fb)
static struct clcd_board clcd_data = ;
static struct amba_device clcd_device = ;
static struct amba_device *amba_devs[] __initdata = ;
#define REFCOUNTER (__io_address(INTEGRATOR_HDR_BASE) + 0x28)
static void __init intcp_init_early(void)
static void __init intcp_init(void)
#define TIMER0_VA_BASE __io_address(INTEGRATOR_TIMER0_BASE)
#define TIMER1_VA_BASE __io_address(INTEGRATOR_TIMER1_BASE)
#define TIMER2_VA_BASE __io_address(INTEGRATOR_TIMER2_BASE)
static void __init intcp_timer_init(void)
static struct sys_timer cp_timer = ;
MACHINE_START(CINTEGRATOR, "ARM-IntegratorCP")
.boot_params	= 0x00000100,
.reserve	= integrator_reserve,
.map_io		= intcp_map_io,
.init_early	= intcp_init_early,
.init_irq	= intcp_init_irq,
.timer		= &cp_timer,
.init_machine	= intcp_init,
MACHINE_END
