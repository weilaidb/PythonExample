#define __ASM_MACH_MMP2_H
struct sys_timer;
extern struct sys_timer mmp2_timer;
extern void __init mmp2_init_icu(void);
extern void __init mmp2_init_irq(void);
extern void mmp2_clear_pmic_int(void);
extern struct pxa_device_desc mmp2_device_uart1;
extern struct pxa_device_desc mmp2_device_uart2;
extern struct pxa_device_desc mmp2_device_uart3;
extern struct pxa_device_desc mmp2_device_uart4;
extern struct pxa_device_desc mmp2_device_twsi1;
extern struct pxa_device_desc mmp2_device_twsi2;
extern struct pxa_device_desc mmp2_device_twsi3;
extern struct pxa_device_desc mmp2_device_twsi4;
extern struct pxa_device_desc mmp2_device_twsi5;
extern struct pxa_device_desc mmp2_device_twsi6;
extern struct pxa_device_desc mmp2_device_sdh0;
extern struct pxa_device_desc mmp2_device_sdh1;
extern struct pxa_device_desc mmp2_device_sdh2;
extern struct pxa_device_desc mmp2_device_sdh3;
static inline int mmp2_add_uart(int id)
static inline int mmp2_add_twsi(int id, struct i2c_pxa_platform_data *data,
struct i2c_board_info *info, unsigned size)
static inline int mmp2_add_sdhost(int id, struct sdhci_pxa_platdata *data)
