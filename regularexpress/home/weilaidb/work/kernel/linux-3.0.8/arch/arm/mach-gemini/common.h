#define __GEMINI_COMMON_H__
struct mtd_partition;
extern void gemini_map_io(void);
extern void gemini_init_irq(void);
extern void gemini_timer_init(void);
extern void gemini_gpio_init(void);
extern void platform_register_rtc(void);
extern int platform_register_uart(void);
extern int platform_register_pflash(unsigned int size,
struct mtd_partition *parts,
unsigned int nr_parts);
