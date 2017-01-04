static void __init msm8960_map_io(void)
static void __init msm8960_init_irq(void)
static struct platform_device *sim_devices[] __initdata = ;
static struct platform_device *rumi3_devices[] __initdata = ;
static void __init msm8960_sim_init(void)
static void __init msm8960_rumi3_init(void)
MACHINE_START(MSM8960_SIM, "QCT MSM8960 SIMULATOR")
.map_io = msm8960_map_io,
.init_irq = msm8960_init_irq,
.timer = &msm_timer,
.init_machine = msm8960_sim_init,
MACHINE_END
MACHINE_START(MSM8960_RUMI3, "QCT MSM8960 RUMI3")
.map_io = msm8960_map_io,
.init_irq = msm8960_init_irq,
.timer = &msm_timer,
.init_machine = msm8960_rumi3_init,
MACHINE_END
