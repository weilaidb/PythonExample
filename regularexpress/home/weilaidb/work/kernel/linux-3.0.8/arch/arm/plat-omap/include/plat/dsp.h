#define __OMAP_DSP_H__
struct omap_dsp_platform_data ;
#if defined(CONFIG_TIDSPBRIDGE) || defined(CONFIG_TIDSPBRIDGE_MODULE)
extern void omap_dsp_reserve_sdram_memblock(void);
static inline void omap_dsp_reserve_sdram_memblock(void)
