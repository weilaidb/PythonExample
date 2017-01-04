extern struct sys_timer msm_timer;
static const resource_size_t qsd8x50_surf_smc91x_base __initdata = 0x70000300;
static const unsigned        qsd8x50_surf_smc91x_gpio __initdata = 156;
static struct resource smc91x_resources[] = ;
static struct platform_device smc91x_device = ;
static int __init msm_init_smc91x(void)
module_init(msm_init_smc91x);
static int hsusb_phy_init_seq[] = ;
static struct msm_otg_platform_data msm_otg_pdata = ;
static struct platform_device *devices[] __initdata = ;
static struct msm_mmc_gpio sdc1_gpio_cfg[] = ;
static struct vreg *vreg_mmc;
static unsigned long vreg_sts;
static uint32_t msm_sdcc_setup_power(struct device *dv, unsigned int vdd)
static struct msm_mmc_gpio_data sdc1_gpio = ;
static struct msm_mmc_platform_data qsd8x50_sdc1_data = ;
static void __init qsd8x50_init_mmc(void)
static void __init qsd8x50_map_io(void)
static void __init qsd8x50_init_irq(void)
static void __init qsd8x50_init(void)
MACHINE_START(QSD8X50_SURF, "QCT QSD8X50 SURF")
.boot_params = PLAT_PHYS_OFFSET + 0x100,
.map_io = qsd8x50_map_io,
.init_irq = qsd8x50_init_irq,
.init_machine = qsd8x50_init,
.timer = &msm_timer,
MACHINE_END
MACHINE_START(QSD8X50A_ST1_5, "QCT QSD8X50A ST1.5")
.boot_params = PLAT_PHYS_OFFSET + 0x100,
.map_io = qsd8x50_map_io,
.init_irq = qsd8x50_init_irq,
.init_machine = qsd8x50_init,
.timer = &msm_timer,
MACHINE_END
