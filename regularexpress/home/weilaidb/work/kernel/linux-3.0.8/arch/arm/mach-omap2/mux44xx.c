#define _OMAP4_MUXENTRY(M0, g, m0, m1, m2, m3, m4, m5, m6, m7)	\
#define _OMAP4_MUXENTRY(M0, g, m0, m1, m2, m3, m4, m5, m6, m7)	\
#define _OMAP4_BALLENTRY(M0, bb, bt)				\
static struct omap_mux __initdata omap4_core_muxmodes[] = ;
#if defined(CONFIG_OMAP_MUX) && defined(CONFIG_DEBUG_FS)		\
&& defined(CONFIG_OMAP_PACKAGE_CBL)
static struct omap_ball __initdata omap4_core_cbl_ball[] = ;
#define omap4_core_cbl_ball  NULL
static struct omap_mux __initdata omap4_es2_core_subset[] = ;
#if defined(CONFIG_OMAP_MUX) && defined(CONFIG_DEBUG_FS)		\
&& defined(CONFIG_OMAP_PACKAGE_CBS)
static struct omap_ball __initdata omap4_core_cbs_ball[] = ;
#define omap4_core_cbs_ball  NULL
static struct omap_mux __initdata omap4_wkup_muxmodes[] = ;
#if defined(CONFIG_OMAP_MUX) && defined(CONFIG_DEBUG_FS)		\
&& defined(CONFIG_OMAP_PACKAGE_CBL)
static struct omap_ball __initdata omap4_wkup_cbl_cbs_ball[] = ;
#define omap4_wkup_cbl_cbs_ball  NULL
int __init omap4_mux_init(struct omap_board_mux *board_subset,
struct omap_board_mux *board_wkup_subset, int flags)
