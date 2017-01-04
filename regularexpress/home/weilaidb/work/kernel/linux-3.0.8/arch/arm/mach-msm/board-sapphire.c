void msm_init_irq(void);
void msm_init_gpio(void);
static struct platform_device *devices[] __initdata = ;
extern struct sys_timer msm_timer;
static void __init sapphire_init_irq(void)
static void __init sapphire_init(void)
static struct map_desc sapphire_io_desc[] __initdata = ;
static void __init sapphire_fixup(struct machine_desc *desc, struct tag *tags,
char **cmdline, struct meminfo *mi)
static void __init sapphire_map_io(void)
MACHINE_START(SAPPHIRE, "sapphire")
.boot_params    = PLAT_PHYS_OFFSET + 0x100,
.fixup          = sapphire_fixup,
.map_io         = sapphire_map_io,
.init_irq       = sapphire_init_irq,
.init_machine   = sapphire_init,
.timer          = &msm_timer,
MACHINE_END
