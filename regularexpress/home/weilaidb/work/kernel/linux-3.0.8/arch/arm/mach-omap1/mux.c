static struct omap_mux_cfg arch_mux_cfg;
#if defined(CONFIG_ARCH_OMAP730) || defined(CONFIG_ARCH_OMAP850)
static struct pin_config __initdata_or_module omap7xx_pins[] = ;
#define OMAP7XX_PINS_SZ		ARRAY_SIZE(omap7xx_pins)
#define omap7xx_pins		NULL
#define OMAP7XX_PINS_SZ		0
#if defined(CONFIG_ARCH_OMAP15XX) || defined(CONFIG_ARCH_OMAP16XX)
static struct pin_config __initdata_or_module omap1xxx_pins[] = ;
#define OMAP1XXX_PINS_SZ	ARRAY_SIZE(omap1xxx_pins)
#define omap1xxx_pins		NULL
#define OMAP1XXX_PINS_SZ	0
static int __init_or_module omap1_cfg_reg(const struct pin_config *cfg)
int __init omap1_mux_init(void)
