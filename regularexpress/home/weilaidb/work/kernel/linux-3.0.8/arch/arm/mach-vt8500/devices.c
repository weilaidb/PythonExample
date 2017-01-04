unsigned long wmt_ic_base __initdata;
unsigned long wmt_sic_base __initdata;
unsigned long wmt_gpio_base __initdata;
unsigned long wmt_pmc_base __initdata;
unsigned long wmt_i8042_base __initdata;
int wmt_nr_irqs __initdata;
int wmt_timer_irq __initdata;
int wmt_gpio_ext_irq[8] __initdata;
int wmt_i8042_kbd_irq;
int wmt_i8042_aux_irq;
static u64 fb_dma_mask = DMA_BIT_MASK(32);
struct platform_device vt8500_device_lcdc = ;
struct platform_device vt8500_device_wm8505_fb = ;
static struct vt8500fb_platform_data panels[] = ;
static int current_panel_idx __initdata = ARRAY_SIZE(panels) - 1;
static int __init panel_setup(char *str)
early_param("panel", panel_setup);
static inline void preallocate_fb(struct vt8500fb_platform_data *p,
unsigned long align)
struct platform_device vt8500_device_uart0 = ;
struct platform_device vt8500_device_uart1 = ;
struct platform_device vt8500_device_uart2 = ;
struct platform_device vt8500_device_uart3 = ;
struct platform_device vt8500_device_uart4 = ;
struct platform_device vt8500_device_uart5 = ;
static u64 ehci_dma_mask = DMA_BIT_MASK(32);
struct platform_device vt8500_device_ehci = ;
struct platform_device vt8500_device_ge_rops = ;
struct platform_device vt8500_device_pwm = ;
static struct platform_pwm_backlight_data vt8500_pwmbl_data = ;
struct platform_device vt8500_device_pwmbl = ;
struct platform_device vt8500_device_rtc = ;
struct map_desc wmt_io_desc[] __initdata = ;
void __init vt8500_reserve_mem(void)
void __init wm8505_reserve_mem(void)
