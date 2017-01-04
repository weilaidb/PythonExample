struct irq_data;
struct sys_timer;
extern struct sys_timer pxa_timer;
extern void __init pxa_init_irq(int irq_nr,
int (*set_wake)(struct irq_data *,
unsigned int));
extern void __init pxa25x_init_irq(void);
extern void __init pxa26x_init_irq(void);
extern void __init pxa27x_init_irq(void);
extern void __init pxa3xx_init_irq(void);
extern void __init pxa95x_init_irq(void);
extern void __init pxa_map_io(void);
extern void __init pxa25x_map_io(void);
extern void __init pxa27x_map_io(void);
extern void __init pxa3xx_map_io(void);
extern unsigned int get_clk_frequency_khz(int info);
#define SET_BANK(__nr,__start,__size) \
mi->bank[__nr].start = (__start), \
mi->bank[__nr].size = (__size)
#define ARRAY_AND_SIZE(x)	(x), ARRAY_SIZE(x)
extern unsigned pxa25x_get_clk_frequency_khz(int);
#define pxa25x_get_clk_frequency_khz(x)		(0)
extern unsigned pxa27x_get_clk_frequency_khz(int);
#define pxa27x_get_clk_frequency_khz(x)		(0)
#if defined(CONFIG_PXA25x) || defined(CONFIG_PXA27x)
extern void pxa2xx_clear_reset_status(unsigned int);
static inline void pxa2xx_clear_reset_status(unsigned int mask)
extern unsigned pxa3xx_get_clk_frequency_khz(int);
#define pxa3xx_get_clk_frequency_khz(x)		(0)
extern struct syscore_ops pxa_irq_syscore_ops;
extern struct syscore_ops pxa_gpio_syscore_ops;
extern struct syscore_ops pxa2xx_mfp_syscore_ops;
extern struct syscore_ops pxa3xx_mfp_syscore_ops;
void __init pxa_set_ffuart_info(void *info);
void __init pxa_set_btuart_info(void *info);
void __init pxa_set_stuart_info(void *info);
void __init pxa_set_hwuart_info(void *info);
