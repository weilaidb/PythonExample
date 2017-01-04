static unsigned long mainstone_pin_config[] = ;
static unsigned long mainstone_irq_enabled;
static void mainstone_mask_irq(struct irq_data *d)
static void mainstone_unmask_irq(struct irq_data *d)
static struct irq_chip mainstone_irq_chip = ;
static void mainstone_irq_handler(unsigned int irq, struct irq_desc *desc)
static void __init mainstone_init_irq(void)
static void mainstone_irq_resume(void)
static struct syscore_ops mainstone_irq_syscore_ops = ;
static int __init mainstone_irq_device_init(void)
device_initcall(mainstone_irq_device_init);
static struct resource smc91x_resources[] = ;
static struct smc91x_platdata mainstone_smc91x_info = ;
static struct platform_device smc91x_device = ;
static int mst_audio_startup(struct snd_pcm_substream *substream, void *priv)
static void mst_audio_shutdown(struct snd_pcm_substream *substream, void *priv)
static long mst_audio_suspend_mask;
static void mst_audio_suspend(void *priv)
static void mst_audio_resume(void *priv)
static pxa2xx_audio_ops_t mst_audio_ops = ;
static struct resource flash_resources[] = ;
static struct mtd_partition mainstoneflash0_partitions[] = ;
static struct flash_platform_data mst_flash_data[2] = ;
static struct platform_device mst_flash_device[2] = ;
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
static struct platform_pwm_backlight_data mainstone_backlight_data = ;
static struct platform_device mainstone_backlight_device = ;
static void __init mainstone_backlight_register(void)
#define mainstone_backlight_register()	do  while (0)
static struct pxafb_mode_info toshiba_ltm04c380k_mode = ;
static struct pxafb_mode_info toshiba_ltm035a776c_mode = ;
static struct pxafb_mach_info mainstone_pxafb_info = ;
static int mainstone_mci_init(struct device *dev, irq_handler_t mstone_detect_int, void *data)
static void mainstone_mci_setpower(struct device *dev, unsigned int vdd)
static void mainstone_mci_exit(struct device *dev, void *data)
static struct pxamci_platform_data mainstone_mci_platform_data = ;
static void mainstone_irda_transceiver_mode(struct device *dev, int mode)
static struct pxaficp_platform_data mainstone_ficp_platform_data = ;
static struct gpio_keys_button gpio_keys_button[] = ;
static struct gpio_keys_platform_data mainstone_gpio_keys = ;
static struct platform_device mst_gpio_keys_device = ;
static struct platform_device *platform_devices[] __initdata = ;
static struct pxaohci_platform_data mainstone_ohci_platform_data = ;
#if defined(CONFIG_KEYBOARD_PXA27x) || defined(CONFIG_KEYBOARD_PXA27x_MODULE)
static unsigned int mainstone_matrix_keys[] = ;
struct pxa27x_keypad_platform_data mainstone_keypad_info = ;
static void __init mainstone_init_keypad(void)
static inline void mainstone_init_keypad(void)
static void __init mainstone_init(void)
static struct map_desc mainstone_io_desc[] __initdata = ;
static void __init mainstone_map_io(void)
MACHINE_START(MAINSTONE, "Intel HCDDBBVA0 Development Platform (aka Mainstone)")
.boot_params	= 0xa0000100,
.map_io		= mainstone_map_io,
.nr_irqs	= MAINSTONE_NR_IRQS,
.init_irq	= mainstone_init_irq,
.timer		= &pxa_timer,
.init_machine	= mainstone_init,
MACHINE_END
