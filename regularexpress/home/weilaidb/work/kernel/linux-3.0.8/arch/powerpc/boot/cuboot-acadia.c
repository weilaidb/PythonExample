#define TARGET_4xx
static bd_t bd;
#define CPR_PERD0_SPIDV_MASK   0x000F0000
#define PLLC_SRC_MASK	       0x20000000
#define PLLD_FBDV_MASK	       0x1F000000
#define PLLD_FWDVA_MASK        0x000F0000
#define PLLD_FWDVB_MASK        0x00000700
#define PRIMAD_CPUDV_MASK      0x0F000000
#define PRIMAD_PLBDV_MASK      0x000F0000
#define PRIMAD_OPBDV_MASK      0x00000F00
#define PRIMAD_EBCDV_MASK      0x0000000F
#define PERD0_PWMDV_MASK       0xFF000000
#define PERD0_SPIDV_MASK       0x000F0000
#define PERD0_U0DV_MASK        0x0000FF00
#define PERD0_U1DV_MASK        0x000000FF
static void get_clocks(void)
static void acadia_fixups(void)
void platform_init(unsigned long r3, unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7)
