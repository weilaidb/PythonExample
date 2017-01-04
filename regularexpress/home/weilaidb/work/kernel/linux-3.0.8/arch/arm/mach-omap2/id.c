static struct omap_chip_id omap_chip;
static unsigned int omap_revision;
u32 omap3_features;
unsigned int omap_rev(void)
EXPORT_SYMBOL(omap_rev);
int omap_chip_is(struct omap_chip_id oci)
EXPORT_SYMBOL(omap_chip_is);
int omap_type(void)
EXPORT_SYMBOL(omap_type);
#define OMAP_TAP_IDCODE		0x0204
#define OMAP_TAP_DIE_ID_0	0x0218
#define OMAP_TAP_DIE_ID_1	0x021C
#define OMAP_TAP_DIE_ID_2	0x0220
#define OMAP_TAP_DIE_ID_3	0x0224
#define OMAP_TAP_DIE_ID_44XX_0	0x0200
#define OMAP_TAP_DIE_ID_44XX_1	0x0208
#define OMAP_TAP_DIE_ID_44XX_2	0x020c
#define OMAP_TAP_DIE_ID_44XX_3	0x0210
#define read_tap_reg(reg)	__raw_readl(tap_base  + (reg))
struct omap_id ;
static struct omap_id omap_ids[] __initdata = ;
static void __iomem *tap_base;
static u16 tap_prod_id;
void omap_get_die_id(struct omap_die_id *odi)
static void __init omap24xx_check_revision(void)
#define OMAP3_CHECK_FEATURE(status,feat)				\
if (((status & OMAP3_ ##feat## _MASK) 				\
>> OMAP3_ ##feat## _SHIFT) != FEAT_ ##feat## _NONE)
static void __init omap3_check_features(void)
static void __init ti816x_check_features(void)
static void __init omap3_check_revision(void)
static void __init omap4_check_revision(void)
#define OMAP3_SHOW_FEATURE(feat)		\
if (omap3_has_ ##feat())		\
printk(#feat" ");
static void __init omap3_cpuinfo(void)
void __init omap2_check_revision(void)
void __init omap2_set_globals_tap(struct omap_globals *omap2_globals)
