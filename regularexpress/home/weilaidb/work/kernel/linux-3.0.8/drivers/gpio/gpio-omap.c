struct gpio_bank ;
struct omap3_gpio_regs ;
static struct omap3_gpio_regs gpio_context[OMAP34XX_NR_GPIOS];
static struct gpio_bank *gpio_bank;
static int bank_width;
int gpio_bank_count;
static inline struct gpio_bank *get_gpio_bank(int gpio)
static inline int get_gpio_index(int gpio)
static inline int gpio_valid(int gpio)
static int check_gpio(int gpio)
static void _set_gpio_direction(struct gpio_bank *bank, int gpio, int is_input)
static void _set_gpio_dataout(struct gpio_bank *bank, int gpio, int enable)
static int _get_gpio_datain(struct gpio_bank *bank, int gpio)
static int _get_gpio_dataout(struct gpio_bank *bank, int gpio)
#define MOD_REG_BIT(reg, bit_mask, set)	\
do  while(0)
static void _set_gpio_debounce(struct gpio_bank *bank, unsigned gpio,
unsigned debounce)
static inline void set_24xx_gpio_triggering(struct gpio_bank *bank, int gpio,
int trigger)
static void _toggle_gpio_edge_triggering(struct gpio_bank *bank, int gpio)
static int _set_gpio_triggering(struct gpio_bank *bank, int gpio, int trigger)
static int gpio_irq_type(struct irq_data *d, unsigned type)
static void _clear_gpio_irqbank(struct gpio_bank *bank, int gpio_mask)
static inline void _clear_gpio_irqstatus(struct gpio_bank *bank, int gpio)
static u32 _get_gpio_irqbank_mask(struct gpio_bank *bank)
static void _enable_gpio_irqbank(struct gpio_bank *bank, int gpio_mask, int enable)
static inline void _set_gpio_irqenable(struct gpio_bank *bank, int gpio, int enable)
static int _set_gpio_wakeup(struct gpio_bank *bank, int gpio, int enable)
static void _reset_gpio(struct gpio_bank *bank, int gpio)
static int gpio_wake_enable(struct irq_data *d, unsigned int enable)
static int omap_gpio_request(struct gpio_chip *chip, unsigned offset)
static void omap_gpio_free(struct gpio_chip *chip, unsigned offset)
static void gpio_irq_handler(unsigned int irq, struct irq_desc *desc)
static void gpio_irq_shutdown(struct irq_data *d)
static void gpio_ack_irq(struct irq_data *d)
static void gpio_mask_irq(struct irq_data *d)
static void gpio_unmask_irq(struct irq_data *d)
static struct irq_chip gpio_irq_chip = ;
static void mpuio_ack_irq(struct irq_data *d)
static void mpuio_mask_irq(struct irq_data *d)
static void mpuio_unmask_irq(struct irq_data *d)
static struct irq_chip mpuio_irq_chip = ;
#define bank_is_mpuio(bank)	((bank)->method == METHOD_MPUIO)
static int omap_mpuio_suspend_noirq(struct device *dev)
static int omap_mpuio_resume_noirq(struct device *dev)
static const struct dev_pm_ops omap_mpuio_dev_pm_ops = ;
static struct platform_driver omap_mpuio_driver = ;
static struct platform_device omap_mpuio_device = ;
static inline void mpuio_init(void)
static inline void mpuio_init(void)
extern struct irq_chip mpuio_irq_chip;
#define bank_is_mpuio(bank)	0
static inline void mpuio_init(void)
static int gpio_input(struct gpio_chip *chip, unsigned offset)
static int gpio_is_input(struct gpio_bank *bank, int mask)
static int gpio_get(struct gpio_chip *chip, unsigned offset)
static int gpio_output(struct gpio_chip *chip, unsigned offset, int value)
static int gpio_debounce(struct gpio_chip *chip, unsigned offset,
unsigned debounce)
static void gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int gpio_2irq(struct gpio_chip *chip, unsigned offset)
static void __init omap_gpio_show_rev(struct gpio_bank *bank)
static struct lock_class_key gpio_lock_class;
static inline int init_gpio_info(struct platform_device *pdev)
static void omap_gpio_mod_init(struct gpio_bank *bank, int id)
static void __devinit omap_gpio_chip_init(struct gpio_bank *bank)
static int __devinit omap_gpio_probe(struct platform_device *pdev)
#if defined(CONFIG_ARCH_OMAP16XX) || defined(CONFIG_ARCH_OMAP2PLUS)
static int omap_gpio_suspend(void)
static void omap_gpio_resume(void)
static struct syscore_ops omap_gpio_syscore_ops = ;
static int workaround_enabled;
void omap2_gpio_prepare_for_idle(int off_mode)
void omap2_gpio_resume_after_idle(void)
void omap_gpio_save_context(void)
void omap_gpio_restore_context(void)
static struct platform_driver omap_gpio_driver = ;
static int __init omap_gpio_drv_reg(void)
postcore_initcall(omap_gpio_drv_reg);
static int __init omap_gpio_sysinit(void)
arch_initcall(omap_gpio_sysinit);
