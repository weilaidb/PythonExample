#define OMAP_DIE_ID_0		0xfffe1800
#define OMAP_DIE_ID_1		0xfffe1804
#define OMAP_PRODUCTION_ID_0	0xfffe2000
#define OMAP_PRODUCTION_ID_1	0xfffe2004
#define OMAP32_ID_0		0xfffed400
#define OMAP32_ID_1		0xfffed404
struct omap_id ;
static unsigned int omap_revision;
static struct omap_id omap_ids[] __initdata = ;
unsigned int omap_rev(void)
EXPORT_SYMBOL(omap_rev);
static u16 __init omap_get_jtag_id(void)
static u8 __init omap_get_die_rev(void)
void __init omap_check_revision(void)
