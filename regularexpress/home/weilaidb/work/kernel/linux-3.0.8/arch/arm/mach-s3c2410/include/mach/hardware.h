#define __ASM_ARCH_HARDWARE_H
extern unsigned int s3c2410_modify_misccr(unsigned int clr, unsigned int chg);
extern int s3c2440_set_dsc(unsigned int pin, unsigned int value);
extern int s3c2412_gpio_set_sleepcfg(unsigned int pin, unsigned int state);
#define CONFIG_NO_MULTIWORD_IO
