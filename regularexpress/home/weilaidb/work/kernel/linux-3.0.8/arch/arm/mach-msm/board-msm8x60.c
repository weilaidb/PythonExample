static void __init msm8x60_map_io(void)
static void __init msm8x60_init_irq(void)
static void __init msm8x60_init(void)
MACHINE_START(MSM8X60_RUMI3, "QCT MSM8X60 RUMI3")
.map_io = msm8x60_map_io,
.init_irq = msm8x60_init_irq,
.init_machine = msm8x60_init,
.timer = &msm_timer,
MACHINE_END
MACHINE_START(MSM8X60_SURF, "QCT MSM8X60 SURF")
.map_io = msm8x60_map_io,
.init_irq = msm8x60_init_irq,
.init_machine = msm8x60_init,
.timer = &msm_timer,
MACHINE_END
MACHINE_START(MSM8X60_SIM, "QCT MSM8X60 SIMULATOR")
.map_io = msm8x60_map_io,
.init_irq = msm8x60_init_irq,
.init_machine = msm8x60_init,
.timer = &msm_timer,
MACHINE_END
MACHINE_START(MSM8X60_FFA, "QCT MSM8X60 FFA")
.map_io = msm8x60_map_io,
.init_irq = msm8x60_init_irq,
.init_machine = msm8x60_init,
.timer = &msm_timer,
MACHINE_END
