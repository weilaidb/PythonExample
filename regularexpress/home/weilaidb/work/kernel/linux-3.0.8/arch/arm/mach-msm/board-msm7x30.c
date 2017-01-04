extern struct sys_timer msm_timer;
static int hsusb_phy_init_seq[] = ;
static struct msm_otg_platform_data msm_otg_pdata = ;
struct msm_gpiomux_config msm_gpiomux_configs[GPIOMUX_NGPIOS] = ;
static struct platform_device *devices[] __initdata = ;
static void __init msm7x30_init_irq(void)
static void __init msm7x30_init(void)
static void __init msm7x30_map_io(void)
MACHINE_START(MSM7X30_SURF, "QCT MSM7X30 SURF")
.boot_params = PLAT_PHYS_OFFSET + 0x100,
.map_io = msm7x30_map_io,
.init_irq = msm7x30_init_irq,
.init_machine = msm7x30_init,
.timer = &msm_timer,
MACHINE_END
MACHINE_START(MSM7X30_FFA, "QCT MSM7X30 FFA")
.boot_params = PLAT_PHYS_OFFSET + 0x100,
.map_io = msm7x30_map_io,
.init_irq = msm7x30_init_irq,
.init_machine = msm7x30_init,
.timer = &msm_timer,
MACHINE_END
MACHINE_START(MSM7X30_FLUID, "QCT MSM7X30 FLUID")
.boot_params = PLAT_PHYS_OFFSET + 0x100,
.map_io = msm7x30_map_io,
.init_irq = msm7x30_init_irq,
.init_machine = msm7x30_init,
.timer = &msm_timer,
MACHINE_END
