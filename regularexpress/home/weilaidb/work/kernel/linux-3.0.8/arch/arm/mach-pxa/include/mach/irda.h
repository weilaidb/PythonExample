#define ASMARM_ARCH_IRDA_H
#define IR_OFF		1
#define IR_SIRMODE	2
#define IR_FIRMODE	4
struct pxaficp_platform_data ;
extern void pxa_set_ficp_info(struct pxaficp_platform_data *info);
#if defined(CONFIG_PXA25x) || defined(CONFIG_PXA27x)
void pxa2xx_transceiver_mode(struct device *dev, int mode);
