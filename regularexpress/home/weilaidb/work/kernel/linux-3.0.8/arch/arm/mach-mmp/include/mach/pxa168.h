#define __ASM_MACH_PXA168_H
struct sys_timer;
extern struct sys_timer pxa168_timer;
extern void __init pxa168_init_irq(void);
extern void pxa168_clear_keypad_wakeup(void);
extern struct pxa_device_desc pxa168_device_uart1;
extern struct pxa_device_desc pxa168_device_uart2;
extern struct pxa_device_desc pxa168_device_twsi0;
extern struct pxa_device_desc pxa168_device_twsi1;
extern struct pxa_device_desc pxa168_device_pwm1;
extern struct pxa_device_desc pxa168_device_pwm2;
extern struct pxa_device_desc pxa168_device_pwm3;
extern struct pxa_device_desc pxa168_device_pwm4;
extern struct pxa_device_desc pxa168_device_ssp1;
extern struct pxa_device_desc pxa168_device_ssp2;
extern struct pxa_device_desc pxa168_device_ssp3;
extern struct pxa_device_desc pxa168_device_ssp4;
extern struct pxa_device_desc pxa168_device_ssp5;
extern struct pxa_device_desc pxa168_device_nand;
extern struct pxa_device_desc pxa168_device_fb;
extern struct pxa_device_desc pxa168_device_keypad;
static inline int pxa168_add_uart(int id)
static inline int pxa168_add_twsi(int id, struct i2c_pxa_platform_data *data,
struct i2c_board_info *info, unsigned size)
static inline int pxa168_add_pwm(int id)
static inline int pxa168_add_ssp(int id)
static inline int pxa168_add_nand(struct pxa3xx_nand_platform_data *info)
static inline int pxa168_add_fb(struct pxa168fb_mach_info *mi)
static inline int pxa168_add_keypad(struct pxa27x_keypad_platform_data *data)
