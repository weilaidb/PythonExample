#define __ASM_MACH_PXA910_H
struct sys_timer;
extern struct sys_timer pxa910_timer;
extern void __init pxa910_init_irq(void);
extern struct pxa_device_desc pxa910_device_uart1;
extern struct pxa_device_desc pxa910_device_uart2;
extern struct pxa_device_desc pxa910_device_twsi0;
extern struct pxa_device_desc pxa910_device_twsi1;
extern struct pxa_device_desc pxa910_device_pwm1;
extern struct pxa_device_desc pxa910_device_pwm2;
extern struct pxa_device_desc pxa910_device_pwm3;
extern struct pxa_device_desc pxa910_device_pwm4;
extern struct pxa_device_desc pxa910_device_nand;
static inline int pxa910_add_uart(int id)
static inline int pxa910_add_twsi(int id, struct i2c_pxa_platform_data *data,
struct i2c_board_info *info, unsigned size)
static inline int pxa910_add_pwm(int id)
static inline int pxa910_add_nand(struct pxa3xx_nand_platform_data *info)
