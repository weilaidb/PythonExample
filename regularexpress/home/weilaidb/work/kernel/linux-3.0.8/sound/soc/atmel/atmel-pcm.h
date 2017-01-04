#define _ATMEL_PCM_H
struct atmel_pdc_regs ;
struct atmel_ssc_mask ;
struct atmel_pcm_dma_params ;
#define ssc_readx(base, reg)            (__raw_readl((base) + (reg)))
#define ssc_writex(base, reg, value)    __raw_writel((value), (base) + (reg))
