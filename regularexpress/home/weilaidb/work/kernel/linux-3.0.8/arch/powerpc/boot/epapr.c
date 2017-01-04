BSS_STACK(4096);
#define EPAPR_SMAGIC	0x65504150
#define EPAPR_EMAGIC	0x45504150
static unsigned epapr_magic;
static unsigned long ima_size;
static unsigned long fdt_addr;
static void platform_fixups(void)
void platform_init(unsigned long r3, unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7)
