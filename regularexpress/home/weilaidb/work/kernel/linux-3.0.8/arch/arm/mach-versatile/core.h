#define __ASM_ARCH_VERSATILE_H
extern void __init versatile_init(void);
extern void __init versatile_init_early(void);
extern void __init versatile_init_irq(void);
extern void __init versatile_map_io(void);
extern struct sys_timer versatile_timer;
extern unsigned int mmc_status(struct device *dev);
#define AMBA_DEVICE(name,busid,base,plat)			\
static struct amba_device name##_device =
