#define __ASM_ARCH_SETUP_H
void __init ux500_map_io(void);
extern void __init u5500_map_io(void);
extern void __init u8500_map_io(void);
extern void __init u5500_init_devices(void);
extern void __init u8500_init_devices(void);
extern void __init ux500_init_irq(void);
extern void __init u5500_sdi_init(void);
extern void __init db5500_dma_init(void);
extern void nmdk_timer_init(void);
struct amba_device;
extern void __init amba_add_devices(struct amba_device *devs[], int num);
struct sys_timer;
extern struct sys_timer ux500_timer;
#define __IO_DEV_DESC(x, sz)
#define __MEM_DEV_DESC(x, sz)
