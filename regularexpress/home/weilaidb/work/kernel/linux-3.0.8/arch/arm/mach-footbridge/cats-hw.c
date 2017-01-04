#define CFG_PORT	0x370
#define INDEX_PORT	(CFG_PORT)
#define DATA_PORT	(CFG_PORT + 1)
static int __init cats_hw_init(void)
__initcall(cats_hw_init);
static void __init
fixup_cats(struct machine_desc *desc, struct tag *tags,
char **cmdline, struct meminfo *mi)
MACHINE_START(CATS, "Chalice-CATS")
.boot_params	= 0x00000100,
.soft_reboot	= 1,
.fixup		= fixup_cats,
.map_io		= footbridge_map_io,
.init_irq	= footbridge_init_irq,
.timer		= &isa_timer,
MACHINE_END
