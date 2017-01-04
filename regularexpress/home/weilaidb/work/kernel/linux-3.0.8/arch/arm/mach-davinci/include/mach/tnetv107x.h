#define __ASM_ARCH_DAVINCI_TNETV107X_H
#define TNETV107X_DDR_BASE	0x80000000
#define TNETV107X_IO_BASE	0x08000000
#define TNETV107X_IO_VIRT	(IO_VIRT + SZ_1M)
#define TNETV107X_N_GPIO	65
struct tnetv107x_device_info ;
extern struct platform_device tnetv107x_wdt_device;
extern struct platform_device tnetv107x_serial_device;
extern void __init tnetv107x_init(void);
extern void __init tnetv107x_devices_init(struct tnetv107x_device_info *);
extern void __init tnetv107x_irq_init(void);
