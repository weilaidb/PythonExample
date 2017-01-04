HW_DECLARE_SPINLOCK(arch)
HW_DECLARE_SPINLOCK(gpio)
#if defined(CONFIG_DEBUG_SPINLOCK)
EXPORT_SYMBOL(bcmring_gpio_reg_lock);
int bcmring_arch_warm_reboot;
static struct ctl_table_header *bcmring_sysctl_header;
static struct ctl_table bcmring_sysctl_warm_reboot[] = ;
static struct ctl_table bcmring_sysctl_reboot[] = ;
static struct resource nand_resource[] = ;
static struct platform_device nand_device = ;
static struct resource pmu_resource = ;
static struct platform_device pmu_device = ;
static struct platform_device *devices[] __initdata = ;
static void __init bcmring_init_machine(void)
static void __init bcmring_fixup(struct machine_desc *desc,
struct tag *t, char **cmdline, struct meminfo *mi)
MACHINE_START(BCMRING, "BCMRING")
.fixup = bcmring_fixup,
.map_io = bcmring_map_io,
.init_early = bcmring_init_early,
.init_irq = bcmring_init_irq,
.timer = &bcmring_timer,
.init_machine = bcmring_init_machine
MACHINE_END
