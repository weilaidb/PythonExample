#define __ASM_JZ4740_CLOCK_H__
enum jz4740_wait_mode ;
void jz4740_clock_set_wait_mode(enum jz4740_wait_mode mode);
void jz4740_clock_udc_enable_auto_suspend(void);
void jz4740_clock_udc_disable_auto_suspend(void);
