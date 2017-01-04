#define __DSP_WDT3_H_
#define OMAP3_WDT3_ISR_OFFSET	0x0018
struct dsp_wdt_setting ;
int dsp_wdt_init(void);
void dsp_wdt_exit(void);
void dsp_wdt_enable(bool enable);
void dsp_wdt_sm_set(void *data);
