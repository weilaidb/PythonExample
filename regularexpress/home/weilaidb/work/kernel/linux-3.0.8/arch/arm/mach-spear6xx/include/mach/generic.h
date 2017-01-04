#define __MACH_GENERIC_H
#define SPEAR_GPT0_BASE		SPEAR6XX_CPU_TMR_BASE
#define SPEAR_GPT0_CHAN0_IRQ	IRQ_CPU_GPT1_1
#define SPEAR_GPT0_CHAN1_IRQ	IRQ_CPU_GPT1_2
extern struct amba_device gpio_device[];
extern struct amba_device uart_device[];
extern struct sys_timer spear6xx_timer;
void __init spear_setup_timer(void);
void __init spear6xx_map_io(void);
void __init spear6xx_init_irq(void);
void __init spear6xx_init(void);
void __init spear600_init(void);
void __init spear6xx_clk_init(void);
