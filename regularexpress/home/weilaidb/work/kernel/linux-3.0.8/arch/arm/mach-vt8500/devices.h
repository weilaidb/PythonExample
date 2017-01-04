#define __ARCH_ARM_MACH_VT8500_DEVICES_H
void __init vt8500_init_irq(void);
void __init wm8505_init_irq(void);
void __init vt8500_map_io(void);
void __init wm8505_map_io(void);
void __init vt8500_reserve_mem(void);
void __init wm8505_reserve_mem(void);
void __init vt8500_gpio_init(void);
void __init vt8500_set_resources(void);
void __init wm8505_set_resources(void);
extern unsigned long wmt_ic_base __initdata;
extern unsigned long wmt_sic_base __initdata;
extern unsigned long wmt_gpio_base __initdata;
extern unsigned long wmt_pmc_base __initdata;
extern int wmt_nr_irqs __initdata;
extern int wmt_timer_irq __initdata;
extern int wmt_gpio_ext_irq[8] __initdata;
extern struct map_desc wmt_io_desc[2] __initdata;
static inline struct resource wmt_mmio_res(u32 start, u32 size)
static inline struct resource wmt_irq_res(int irq)
static inline void wmt_res_add(struct platform_device *pdev,
const struct resource *res, unsigned int num)
extern struct sys_timer vt8500_timer;
extern struct platform_device vt8500_device_uart0;
extern struct platform_device vt8500_device_uart1;
extern struct platform_device vt8500_device_uart2;
extern struct platform_device vt8500_device_uart3;
extern struct platform_device vt8500_device_uart4;
extern struct platform_device vt8500_device_uart5;
extern struct platform_device vt8500_device_lcdc;
extern struct platform_device vt8500_device_wm8505_fb;
extern struct platform_device vt8500_device_ehci;
extern struct platform_device vt8500_device_ge_rops;
extern struct platform_device vt8500_device_pwm;
extern struct platform_device vt8500_device_pwmbl;
extern struct platform_device vt8500_device_rtc;
