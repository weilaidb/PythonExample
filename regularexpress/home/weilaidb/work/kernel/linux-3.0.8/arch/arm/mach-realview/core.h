#define __ASM_ARCH_REALVIEW_H
#define AMBA_DEVICE(name,busid,base,plat)			\
static struct amba_device name##_device =
struct machine_desc;
extern struct platform_device realview_flash_device;
extern struct platform_device realview_cf_device;
extern struct platform_device realview_i2c_device;
extern struct mmci_platform_data realview_mmc0_plat_data;
extern struct mmci_platform_data realview_mmc1_plat_data;
extern struct clcd_board clcd_plat_data;
extern void __iomem *timer0_va_base;
extern void __iomem *timer1_va_base;
extern void __iomem *timer2_va_base;
extern void __iomem *timer3_va_base;
extern void realview_leds_event(led_event_t ledevt);
extern void realview_timer_init(unsigned int timer_irq);
extern int realview_flash_register(struct resource *res, u32 num);
extern int realview_eth_register(const char *name, struct resource *res);
extern int realview_usb_register(struct resource *res);
extern void realview_init_early(void);
extern void realview_fixup(struct machine_desc *mdesc, struct tag *tags,
char **from, struct meminfo *meminfo);
extern void (*realview_reset)(char);
