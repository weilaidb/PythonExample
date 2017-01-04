#define DPS_RSTCT2_PER_EN	(1 << 0)
#define DSP_RSTCT2_WD_PER_EN	(1 << 1)
static int dsp_use;
static struct clk *api_clk;
static struct clk *dsp_clk;
static void omap1_mcbsp_request(unsigned int id)
static void omap1_mcbsp_free(unsigned int id)
static struct omap_mcbsp_ops omap1_mcbsp_ops = ;
#if defined(CONFIG_ARCH_OMAP730) || defined(CONFIG_ARCH_OMAP850)
struct resource omap7xx_mcbsp_res[][6] = ;
#define omap7xx_mcbsp_res_0		omap7xx_mcbsp_res[0]
static struct omap_mcbsp_platform_data omap7xx_mcbsp_pdata[] = ;
#define OMAP7XX_MCBSP_RES_SZ		ARRAY_SIZE(omap7xx_mcbsp_res[1])
#define OMAP7XX_MCBSP_COUNT		ARRAY_SIZE(omap7xx_mcbsp_res)
#define omap7xx_mcbsp_res_0		NULL
#define omap7xx_mcbsp_pdata		NULL
#define OMAP7XX_MCBSP_RES_SZ		0
#define OMAP7XX_MCBSP_COUNT		0
struct resource omap15xx_mcbsp_res[][6] = ;
#define omap15xx_mcbsp_res_0		omap15xx_mcbsp_res[0]
static struct omap_mcbsp_platform_data omap15xx_mcbsp_pdata[] = ;
#define OMAP15XX_MCBSP_RES_SZ		ARRAY_SIZE(omap15xx_mcbsp_res[1])
#define OMAP15XX_MCBSP_COUNT		ARRAY_SIZE(omap15xx_mcbsp_res)
#define omap15xx_mcbsp_res_0		NULL
#define omap15xx_mcbsp_pdata		NULL
#define OMAP15XX_MCBSP_RES_SZ		0
#define OMAP15XX_MCBSP_COUNT		0
struct resource omap16xx_mcbsp_res[][6] = ;
#define omap16xx_mcbsp_res_0		omap16xx_mcbsp_res[0]
static struct omap_mcbsp_platform_data omap16xx_mcbsp_pdata[] = ;
#define OMAP16XX_MCBSP_RES_SZ		ARRAY_SIZE(omap16xx_mcbsp_res[1])
#define OMAP16XX_MCBSP_COUNT		ARRAY_SIZE(omap16xx_mcbsp_res)
#define omap16xx_mcbsp_res_0		NULL
#define omap16xx_mcbsp_pdata		NULL
#define OMAP16XX_MCBSP_RES_SZ		0
#define OMAP16XX_MCBSP_COUNT		0
static int __init omap1_mcbsp_init(void)
arch_initcall(omap1_mcbsp_init);
