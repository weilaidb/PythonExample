#define W100_GPIO_PORT_A	0
#define W100_GPIO_PORT_B	1
#define CLK_SRC_XTAL  0
#define CLK_SRC_PLL   1
struct w100fb_par;
unsigned long w100fb_gpio_read(int port);
void w100fb_gpio_write(int port, unsigned long value);
unsigned long w100fb_get_hsynclen(struct device *dev);
struct w100_tg_info ;
struct w100_gen_regs ;
struct w100_gpio_regs ;
struct w100_mem_info ;
struct w100_bm_mem_info ;
struct w100_mode ;
struct w100_pll_info ;
#define INIT_MODE_ROTATED  0x1
#define INIT_MODE_FLIPPED  0x2
struct w100fb_mach_info ;
struct w100fb_par ;
