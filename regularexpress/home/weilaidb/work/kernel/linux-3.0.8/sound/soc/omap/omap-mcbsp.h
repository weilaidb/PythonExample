#define __OMAP_I2S_H__
enum omap_mcbsp_clksrg_clk ;
enum omap_mcbsp_div ;
#if defined(CONFIG_SOC_OMAP2420)
#define NUM_LINKS	2
#if defined(CONFIG_ARCH_OMAP15XX) || defined(CONFIG_ARCH_OMAP16XX)
#undef  NUM_LINKS
#define NUM_LINKS	3
#if defined(CONFIG_ARCH_OMAP4)
#undef  NUM_LINKS
#define NUM_LINKS	4
#if defined(CONFIG_ARCH_OMAP3) || defined(CONFIG_SOC_OMAP2430)
#undef  NUM_LINKS
#define NUM_LINKS	5
int omap_mcbsp_st_add_controls(struct snd_soc_codec *codec, int mcbsp_id);
