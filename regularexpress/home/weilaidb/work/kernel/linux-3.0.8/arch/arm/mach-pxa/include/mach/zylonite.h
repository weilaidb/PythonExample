#define __ASM_ARCH_ZYLONITE_H
#define ZYLONITE_ETH_PHYS	0x14000000
#define EXT_GPIO(x)		(128 + (x))
#define ZYLONITE_NR_IRQS	(IRQ_BOARD_START + 32)
extern int gpio_eth_irq;
extern int gpio_debug_led1;
extern int gpio_debug_led2;
extern int wm9713_irq;
extern int lcd_id;
extern int lcd_orientation;
extern void zylonite_pxa300_init(void);
static inline void zylonite_pxa300_init(void)
extern void zylonite_pxa320_init(void);
static inline void zylonite_pxa320_init(void)
