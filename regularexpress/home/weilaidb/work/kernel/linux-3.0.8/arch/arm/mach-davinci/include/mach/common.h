#define __ARCH_ARM_MACH_DAVINCI_COMMON_H
struct sys_timer;
extern struct sys_timer davinci_timer;
extern void davinci_irq_init(void);
extern void __iomem *davinci_intc_base;
extern int davinci_intc_type;
struct davinci_timer_instance ;
struct davinci_timer_info ;
struct davinci_gpio_controller;
struct davinci_soc_info ;
extern struct davinci_soc_info davinci_soc_info;
extern void davinci_common_init(struct davinci_soc_info *soc_info);
extern void davinci_init_ide(void);
#define SRAM_VIRT	0xfffe0000
#define SRAM_SIZE	SZ_128K
