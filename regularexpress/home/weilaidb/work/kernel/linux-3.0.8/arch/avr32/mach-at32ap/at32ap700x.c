#define PBMEM(base)					\
#define IRQ(num)					\
#define NAMED_IRQ(num, _name)				\
#define DEFINE_DEV(_name, _id)					\
static u64 _name##_id##_dma_mask = DMA_BIT_MASK(32);		\
static struct platform_device _name##_id##_device =
#define DEFINE_DEV_DATA(_name, _id)				\
static u64 _name##_id##_dma_mask = DMA_BIT_MASK(32);		\
static struct platform_device _name##_id##_device =
#define select_peripheral(port, pin_mask, periph, flags)	\
at32_select_periph(GPIO_##port##_BASE, pin_mask,	\
GPIO_##periph, flags)
#define DEV_CLK(_name, devname, bus, _index)			\
static struct clk devname##_##_name =
static DEFINE_SPINLOCK(pm_lock);
static struct clk osc0;
static struct clk osc1;
static unsigned long osc_get_rate(struct clk *clk)
static unsigned long pll_get_rate(struct clk *clk, unsigned long control)
static long pll_set_rate(struct clk *clk, unsigned long rate,
u32 *pll_ctrl)
static unsigned long pll0_get_rate(struct clk *clk)
static void pll1_mode(struct clk *clk, int enabled)
static unsigned long pll1_get_rate(struct clk *clk)
static long pll1_set_rate(struct clk *clk, unsigned long rate, int apply)
static int pll1_set_parent(struct clk *clk, struct clk *parent)
static struct clk osc32k = ;
static struct clk osc0 = ;
static struct clk osc1 = ;
static struct clk pll0 = ;
static struct clk pll1 = ;
static struct clk *main_clock;
static unsigned long bus_clk_get_rate(struct clk *clk, unsigned int shift)
;
static void cpu_clk_mode(struct clk *clk, int enabled)
static unsigned long cpu_clk_get_rate(struct clk *clk)
static long cpu_clk_set_rate(struct clk *clk, unsigned long rate, int apply)
static void hsb_clk_mode(struct clk *clk, int enabled)
static unsigned long hsb_clk_get_rate(struct clk *clk)
void pba_clk_mode(struct clk *clk, int enabled)
unsigned long pba_clk_get_rate(struct clk *clk)
static void pbb_clk_mode(struct clk *clk, int enabled)
static unsigned long pbb_clk_get_rate(struct clk *clk)
static struct clk cpu_clk = ;
static struct clk hsb_clk = ;
static struct clk pba_clk = ;
static struct clk pbb_clk = ;
static void genclk_mode(struct clk *clk, int enabled)
static unsigned long genclk_get_rate(struct clk *clk)
static long genclk_set_rate(struct clk *clk, unsigned long rate, int apply)
int genclk_set_parent(struct clk *clk, struct clk *parent)
static void __init genclk_init_parent(struct clk *clk)
static struct dw_dma_platform_data dw_dmac0_data = ;
static struct resource dw_dmac0_resource[] = ;
DEFINE_DEV_DATA(dw_dmac, 0);
DEV_CLK(hclk, dw_dmac0, hsb, 10);
static struct resource at32_pm0_resource[] = ;
static struct resource at32ap700x_rtc0_resource[] = ;
static struct resource at32_wdt0_resource[] = ;
static struct resource at32_eic0_resource[] = ;
DEFINE_DEV(at32_pm, 0);
DEFINE_DEV(at32ap700x_rtc, 0);
DEFINE_DEV(at32_wdt, 0);
DEFINE_DEV(at32_eic, 0);
static struct clk at32_pm_pclk = ;
static struct resource intc0_resource[] = ;
struct platform_device at32_intc0_device = ;
DEV_CLK(pclk, at32_intc0, pbb, 1);
static struct clk ebi_clk = ;
static struct clk hramc_clk = ;
static struct clk sdramc_clk = ;
static struct resource smc0_resource[] = ;
DEFINE_DEV(smc, 0);
DEV_CLK(pclk, smc0, pbb, 13);
DEV_CLK(mck, smc0, hsb, 0);
static struct platform_device pdc_device = ;
DEV_CLK(hclk, pdc, hsb, 4);
DEV_CLK(pclk, pdc, pba, 16);
static struct clk pico_clk = ;
struct clk at32_hmatrix_clk = ;
static inline void set_ebi_sfr_bits(u32 mask)
static struct resource at32_tcb0_resource[] = ;
static struct platform_device at32_tcb0_device = ;
DEV_CLK(t0_clk, at32_tcb0, pbb, 3);
static struct resource at32_tcb1_resource[] = ;
static struct platform_device at32_tcb1_device = ;
DEV_CLK(t0_clk, at32_tcb1, pbb, 4);
static struct resource pio0_resource[] = ;
DEFINE_DEV(pio, 0);
DEV_CLK(mck, pio0, pba, 10);
static struct resource pio1_resource[] = ;
DEFINE_DEV(pio, 1);
DEV_CLK(mck, pio1, pba, 11);
static struct resource pio2_resource[] = ;
DEFINE_DEV(pio, 2);
DEV_CLK(mck, pio2, pba, 12);
static struct resource pio3_resource[] = ;
DEFINE_DEV(pio, 3);
DEV_CLK(mck, pio3, pba, 13);
static struct resource pio4_resource[] = ;
DEFINE_DEV(pio, 4);
DEV_CLK(mck, pio4, pba, 14);
static int __init system_device_init(void)
core_initcall(system_device_init);
static struct resource atmel_psif0_resource[] __initdata = ;
static struct clk atmel_psif0_pclk = ;
static struct resource atmel_psif1_resource[] __initdata = ;
static struct clk atmel_psif1_pclk = ;
struct platform_device *__init at32_add_device_psif(unsigned int id)
static struct atmel_uart_data atmel_usart0_data = ;
static struct resource atmel_usart0_resource[] = ;
DEFINE_DEV_DATA(atmel_usart, 0);
DEV_CLK(usart, atmel_usart0, pba, 3);
static struct atmel_uart_data atmel_usart1_data = ;
static struct resource atmel_usart1_resource[] = ;
DEFINE_DEV_DATA(atmel_usart, 1);
DEV_CLK(usart, atmel_usart1, pba, 4);
static struct atmel_uart_data atmel_usart2_data = ;
static struct resource atmel_usart2_resource[] = ;
DEFINE_DEV_DATA(atmel_usart, 2);
DEV_CLK(usart, atmel_usart2, pba, 5);
static struct atmel_uart_data atmel_usart3_data = ;
static struct resource atmel_usart3_resource[] = ;
DEFINE_DEV_DATA(atmel_usart, 3);
DEV_CLK(usart, atmel_usart3, pba, 6);
static inline void configure_usart0_pins(int flags)
static inline void configure_usart1_pins(int flags)
static inline void configure_usart2_pins(int flags)
static inline void configure_usart3_pins(int flags)
static struct platform_device *__initdata at32_usarts[4];
void __init at32_map_usart(unsigned int hw_id, unsigned int line, int flags)
struct platform_device *__init at32_add_device_usart(unsigned int id)
struct platform_device *atmel_default_console_device;
void __init at32_setup_serial_console(unsigned int usart_id)
static struct eth_platform_data macb0_data;
static struct resource macb0_resource[] = ;
DEFINE_DEV_DATA(macb, 0);
DEV_CLK(hclk, macb0, hsb, 8);
DEV_CLK(pclk, macb0, pbb, 6);
static struct eth_platform_data macb1_data;
static struct resource macb1_resource[] = ;
DEFINE_DEV_DATA(macb, 1);
DEV_CLK(hclk, macb1, hsb, 9);
DEV_CLK(pclk, macb1, pbb, 7);
struct platform_device *__init
at32_add_device_eth(unsigned int id, struct eth_platform_data *data)
static struct resource atmel_spi0_resource[] = ;
DEFINE_DEV(atmel_spi, 0);
DEV_CLK(spi_clk, atmel_spi0, pba, 0);
static struct resource atmel_spi1_resource[] = ;
DEFINE_DEV(atmel_spi, 1);
DEV_CLK(spi_clk, atmel_spi1, pba, 1);
void __init
at32_spi_setup_slaves(unsigned int bus_num, struct spi_board_info *b, unsigned int n)
struct platform_device *__init
at32_add_device_spi(unsigned int id, struct spi_board_info *b, unsigned int n)
static struct resource atmel_twi0_resource[] __initdata = ;
static struct clk atmel_twi0_pclk = ;
struct platform_device *__init at32_add_device_twi(unsigned int id,
struct i2c_board_info *b,
unsigned int n)
static struct resource atmel_mci0_resource[] __initdata = ;
static struct clk atmel_mci0_pclk = ;
struct platform_device *__init
at32_add_device_mci(unsigned int id, struct mci_platform_data *data)
#if defined(CONFIG_CPU_AT32AP7000) || defined(CONFIG_CPU_AT32AP7002)
static struct atmel_lcdfb_info atmel_lcdfb0_data;
static struct resource atmel_lcdfb0_resource[] = ;
DEFINE_DEV_DATA(atmel_lcdfb, 0);
DEV_CLK(hck1, atmel_lcdfb0, hsb, 7);
static struct clk atmel_lcdfb0_pixclk = ;
struct platform_device *__init
at32_add_device_lcdc(unsigned int id, struct atmel_lcdfb_info *data,
unsigned long fbmem_start, unsigned long fbmem_len,
u64 pin_mask)
static struct resource atmel_pwm0_resource[] __initdata = ;
static struct clk atmel_pwm0_mck = ;
struct platform_device *__init at32_add_device_pwm(u32 mask)
static struct resource ssc0_resource[] = ;
DEFINE_DEV(ssc, 0);
DEV_CLK(pclk, ssc0, pba, 7);
static struct resource ssc1_resource[] = ;
DEFINE_DEV(ssc, 1);
DEV_CLK(pclk, ssc1, pba, 8);
static struct resource ssc2_resource[] = ;
DEFINE_DEV(ssc, 2);
DEV_CLK(pclk, ssc2, pba, 9);
struct platform_device *__init
at32_add_device_ssc(unsigned int id, unsigned int flags)
static struct resource usba0_resource[] __initdata = ;
static struct clk usba0_pclk = ;
static struct clk usba0_hclk = ;
#define EP(nam, idx, maxpkt, maxbk, dma, isoc)			\
[idx] =
static struct usba_ep_data at32_usba_ep[] __initdata = ;
#undef EP
struct platform_device *__init
at32_add_device_usba(unsigned int id, struct usba_platform_data *data)
#if defined(CONFIG_CPU_AT32AP7000) || defined(CONFIG_CPU_AT32AP7001)
static struct resource at32_smc_cs4_resource[] __initdata = ;
static struct resource at32_smc_cs5_resource[] __initdata = ;
static int __init at32_init_ide_or_cf(struct platform_device *pdev,
unsigned int cs, unsigned int extint)
struct platform_device *__init
at32_add_device_ide(unsigned int id, unsigned int extint,
struct ide_platform_data *data)
struct platform_device *__init
at32_add_device_cf(unsigned int id, unsigned int extint,
struct cf_platform_data *data)
static struct resource smc_cs3_resource[] __initdata = ;
struct platform_device *__init
at32_add_device_nand(unsigned int id, struct atmel_nand_data *data)
static struct resource atmel_ac97c0_resource[] __initdata = ;
static struct clk atmel_ac97c0_pclk = ;
struct platform_device *__init
at32_add_device_ac97c(unsigned int id, struct ac97c_platform_data *data,
unsigned int flags)
static struct resource abdac0_resource[] __initdata = ;
static struct clk abdac0_pclk = ;
static struct clk abdac0_sample_clk = ;
struct platform_device *__init
at32_add_device_abdac(unsigned int id, struct atmel_abdac_pdata *data)
static struct clk gclk0 = ;
static struct clk gclk1 = ;
static struct clk gclk2 = ;
static struct clk gclk3 = ;
static struct clk gclk4 = ;
static __initdata struct clk *init_clocks[] = ;
void __init setup_platform(void)
struct gen_pool *sram_pool;
static int __init sram_init(void)
core_initcall(sram_init);
