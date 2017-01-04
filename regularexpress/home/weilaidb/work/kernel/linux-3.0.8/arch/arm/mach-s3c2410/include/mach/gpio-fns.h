#define __MACH_GPIO_FNS_H __FILE__
static inline void s3c2410_gpio_cfgpin(unsigned int pin, unsigned int cfg)
extern unsigned int s3c2410_gpio_getcfg(unsigned int pin);
extern int s3c2410_gpio_getirq(unsigned int pin);
extern int s3c2400_gpio_getirq(unsigned int pin);
extern int s3c2410_gpio_irqfilter(unsigned int pin, unsigned int on,
unsigned int config);
extern void s3c2410_gpio_pullup(unsigned int pin, unsigned int to);
extern void s3c2410_gpio_setpin(unsigned int pin, unsigned int to);
extern unsigned int s3c2410_gpio_getpin(unsigned int pin);
