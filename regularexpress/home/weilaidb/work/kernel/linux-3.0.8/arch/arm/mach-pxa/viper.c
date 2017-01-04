static unsigned int icr;
static void viper_icr_set_bit(unsigned int bit)
static void viper_icr_clear_bit(unsigned int bit)
static void viper_cf_reset(int state)
static struct arcom_pcmcia_pdata viper_pcmcia_info = ;
static struct platform_device viper_pcmcia_device = ;
static u8 viper_hw_version(void)
static int viper_cpu_suspend(void)
static void viper_cpu_resume(void)
static struct syscore_ops viper_cpu_syscore_ops = ;
static unsigned int current_voltage_divisor;
static void viper_set_core_cpu_voltage(unsigned long khz, int force)
static unsigned long viper_irq_enabled_mask;
static const int viper_isa_irqs[] = ;
static const int viper_isa_irq_map[] = ;
static inline int viper_irq_to_bitmask(unsigned int irq)
static inline int viper_bit_to_irq(int bit)
static void viper_ack_irq(struct irq_data *d)
static void viper_mask_irq(struct irq_data *d)
static void viper_unmask_irq(struct irq_data *d)
static inline unsigned long viper_irq_pending(void)
static void viper_irq_handler(unsigned int irq, struct irq_desc *desc)
static struct irq_chip viper_irq_chip = ;
static void __init viper_init_irq(void)
static struct pxafb_mode_info fb_mode_info[] = ;
static struct pxafb_mach_info fb_info = ;
static int viper_backlight_init(struct device *dev)
static int viper_backlight_notify(struct device *dev, int brightness)
static void viper_backlight_exit(struct device *dev)
static struct platform_pwm_backlight_data viper_backlight_data = ;
static struct platform_device viper_backlight_device = ;
static struct resource smc91x_resources[] = ;
static struct smc91x_platdata viper_smc91x_info = ;
static struct platform_device smc91x_device = ;
static struct i2c_gpio_platform_data i2c_bus_data = ;
static struct platform_device i2c_bus_device = ;
static struct i2c_board_info __initdata viper_i2c_devices[] = ;
static struct resource viper_serial_resources[] = ;
static struct plat_serial8250_port serial_platform_data[] = ;
static struct platform_device serial_device = ;
static void isp116x_delay(struct device *dev, int delay)
static struct resource isp116x_resources[] = ;
static struct isp116x_platform_data isp116x_platform_data = ;
static struct platform_device isp116x_device = ;
static struct resource mtd_resources[] = ;
static struct mtd_partition viper_boot_flash_partition = ;
static struct physmap_flash_data viper_flash_data[] = ;
static struct platform_device viper_mtd_devices[] = ;
static struct platform_device *viper_devs[] __initdata = ;
static mfp_cfg_t viper_pin_config[] __initdata = ;
static unsigned long viper_tpm;
static int __init viper_tpm_setup(char *str)
__setup("tpm=", viper_tpm_setup);
static void __init viper_tpm_init(void)
static void __init viper_init_vcore_gpios(void)
static void __init viper_init_serial_gpio(void)
static int viper_cpufreq_notifier(struct notifier_block *nb,
unsigned long val, void *data)
static struct notifier_block viper_cpufreq_notifier_block = ;
static void __init viper_init_cpufreq(void)
static inline void viper_init_cpufreq(void)
static void viper_power_off(void)
static void __init viper_init(void)
static struct map_desc viper_io_desc[] __initdata = ;
static void __init viper_map_io(void)
MACHINE_START(VIPER, "Arcom/Eurotech VIPER SBC")
.boot_params	= 0xa0000100,
.map_io		= viper_map_io,
.init_irq	= viper_init_irq,
.timer          = &pxa_timer,
.init_machine	= viper_init,
MACHINE_END
