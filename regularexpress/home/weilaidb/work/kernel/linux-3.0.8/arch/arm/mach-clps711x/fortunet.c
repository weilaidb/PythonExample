struct meminfo memmap = ;
typedef struct tag_IMAGE_PARAMS
IMAGE_PARAMS;
#define IMAGE_PARAMS_PHYS	0xC01F0000
static void __init
fortunet_fixup(struct machine_desc *desc, struct tag *tags,
char **cmdline, struct meminfo *mi)
MACHINE_START(FORTUNET, "ARM-FortuNet")
.boot_params	= 0x00000000,
.fixup		= fortunet_fixup,
.map_io		= clps711x_map_io,
.init_irq	= clps711x_init_irq,
.timer		= &clps711x_timer,
MACHINE_END
