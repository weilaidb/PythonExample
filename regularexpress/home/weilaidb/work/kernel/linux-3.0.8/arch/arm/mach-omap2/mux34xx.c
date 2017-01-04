#define _OMAP3_MUXENTRY(M0, g, m0, m1, m2, m3, m4, m5, m6, m7)		\
#define _OMAP3_MUXENTRY(M0, g, m0, m1, m2, m3, m4, m5, m6, m7)		\
#define _OMAP3_BALLENTRY(M0, bb, bt)					\
static struct omap_mux __initdata omap3_muxmodes[] = ;
#if defined(CONFIG_OMAP_MUX) && defined(CONFIG_OMAP_PACKAGE_CBC)
static struct omap_mux __initdata omap3_cbc_subset[] = ;
#define omap3_cbc_subset	NULL
#if defined(CONFIG_OMAP_MUX) && defined(CONFIG_DEBUG_FS)	\
&& defined(CONFIG_OMAP_PACKAGE_CBC)
static struct omap_ball __initdata omap3_cbc_ball[] = ;
#define omap3_cbc_ball	 NULL
#if defined(CONFIG_OMAP_MUX) && defined(CONFIG_OMAP_PACKAGE_CUS)
static struct omap_mux __initdata omap3_cus_subset[] = ;
#define omap3_cus_subset	NULL
#if defined(CONFIG_OMAP_MUX) && defined(CONFIG_DEBUG_FS)		\
&& defined(CONFIG_OMAP_PACKAGE_CUS)
static struct omap_ball __initdata omap3_cus_ball[] = ;
#define omap3_cus_ball	 NULL
#if defined(CONFIG_OMAP_MUX) && defined(CONFIG_OMAP_PACKAGE_CBB)
static struct omap_mux __initdata omap3_cbb_subset[] = ;
#define omap3_cbb_subset	NULL
#if defined(CONFIG_OMAP_MUX) && defined(CONFIG_DEBUG_FS)		\
&& defined(CONFIG_OMAP_PACKAGE_CBB)
static struct omap_ball __initdata omap3_cbb_ball[] = ;
#define omap3_cbb_ball	 NULL
#if defined(CONFIG_OMAP_MUX) && defined(CONFIG_OMAP_PACKAGE_CBP)
static struct omap_mux __initdata omap36xx_cbp_subset[] = ;
#define omap36xx_cbp_subset	NULL
#if defined(CONFIG_OMAP_MUX) && defined(CONFIG_DEBUG_FS)		\
&& defined (CONFIG_OMAP_PACKAGE_CBP)
static struct omap_ball __initdata omap36xx_cbp_ball[] = ;
#define omap36xx_cbp_ball	 NULL
int __init omap3_mux_init(struct omap_board_mux *board_subset, int flags)
