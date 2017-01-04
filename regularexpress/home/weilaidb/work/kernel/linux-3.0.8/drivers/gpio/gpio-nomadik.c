#define NMK_GPIO_PER_CHIP	32
struct nmk_gpio_chip ;
static struct nmk_gpio_chip *
nmk_gpio_chips[DIV_ROUND_UP(ARCH_NR_GPIOS, NMK_GPIO_PER_CHIP)];
static DEFINE_SPINLOCK(nmk_gpio_slpm_lock);
#define NUM_BANKS ARRAY_SIZE(nmk_gpio_chips)
static void __nmk_gpio_set_mode(struct nmk_gpio_chip *nmk_chip,
unsigned offset, int gpio_mode)
static void __nmk_gpio_set_slpm(struct nmk_gpio_chip *nmk_chip,
unsigned offset, enum nmk_gpio_slpm mode)
static void __nmk_gpio_set_pull(struct nmk_gpio_chip *nmk_chip,
unsigned offset, enum nmk_gpio_pull pull)
static void __nmk_gpio_make_input(struct nmk_gpio_chip *nmk_chip,
unsigned offset)
static void __nmk_gpio_set_output(struct nmk_gpio_chip *nmk_chip,
unsigned offset, int val)
static void __nmk_gpio_make_output(struct nmk_gpio_chip *nmk_chip,
unsigned offset, int val)
static void __nmk_gpio_set_mode_safe(struct nmk_gpio_chip *nmk_chip,
unsigned offset, int gpio_mode,
bool glitch)
static void __nmk_config_pin(struct nmk_gpio_chip *nmk_chip, unsigned offset,
pin_cfg_t cfg, bool sleep, unsigned int *slpmregs)
static void nmk_gpio_glitch_slpm_init(unsigned int *slpm)
static void nmk_gpio_glitch_slpm_restore(unsigned int *slpm)
static int __nmk_config_pins(pin_cfg_t *cfgs, int num, bool sleep)
int nmk_config_pin(pin_cfg_t cfg, bool sleep)
EXPORT_SYMBOL(nmk_config_pin);
int nmk_config_pins(pin_cfg_t *cfgs, int num)
EXPORT_SYMBOL(nmk_config_pins);
int nmk_config_pins_sleep(pin_cfg_t *cfgs, int num)
EXPORT_SYMBOL(nmk_config_pins_sleep);
int nmk_gpio_set_slpm(int gpio, enum nmk_gpio_slpm mode)
int nmk_gpio_set_pull(int gpio, enum nmk_gpio_pull pull)
int nmk_gpio_set_mode(int gpio, int gpio_mode)
EXPORT_SYMBOL(nmk_gpio_set_mode);
int nmk_gpio_get_mode(int gpio)
EXPORT_SYMBOL(nmk_gpio_get_mode);
static inline int nmk_gpio_get_bitmask(int gpio)
static void nmk_gpio_irq_ack(struct irq_data *d)
enum nmk_gpio_irq_type ;
static void __nmk_gpio_irq_modify(struct nmk_gpio_chip *nmk_chip,
int gpio, enum nmk_gpio_irq_type which,
bool enable)
static void __nmk_gpio_set_wake(struct nmk_gpio_chip *nmk_chip,
int gpio, bool on)
static int nmk_gpio_irq_maskunmask(struct irq_data *d, bool enable)
static void nmk_gpio_irq_mask(struct irq_data *d)
static void nmk_gpio_irq_unmask(struct irq_data *d)
static int nmk_gpio_irq_set_wake(struct irq_data *d, unsigned int on)
static int nmk_gpio_irq_set_type(struct irq_data *d, unsigned int type)
static struct irq_chip nmk_gpio_irq_chip = ;
static void __nmk_gpio_irq_handler(unsigned int irq, struct irq_desc *desc,
u32 status)
static void nmk_gpio_irq_handler(unsigned int irq, struct irq_desc *desc)
static void nmk_gpio_secondary_irq_handler(unsigned int irq,
struct irq_desc *desc)
static int nmk_gpio_init_irq(struct nmk_gpio_chip *nmk_chip)
static int nmk_gpio_make_input(struct gpio_chip *chip, unsigned offset)
static int nmk_gpio_get_input(struct gpio_chip *chip, unsigned offset)
static void nmk_gpio_set_output(struct gpio_chip *chip, unsigned offset,
int val)
static int nmk_gpio_make_output(struct gpio_chip *chip, unsigned offset,
int val)
static int nmk_gpio_to_irq(struct gpio_chip *chip, unsigned offset)
static void nmk_gpio_dbg_show(struct seq_file *s, struct gpio_chip *chip)
#define nmk_gpio_dbg_show	NULL
static struct gpio_chip nmk_gpio_template = ;
void nmk_gpio_wakeups_suspend(void)
void nmk_gpio_wakeups_resume(void)
void nmk_gpio_read_pull(int gpio_bank, u32 *pull_up)
static int __devinit nmk_gpio_probe(struct platform_device *dev)
static struct platform_driver nmk_gpio_driver = ;
static int __init nmk_gpio_init(void)
core_initcall(nmk_gpio_init);
MODULE_AUTHOR("Prafulla WADASKAR and Alessandro Rubini");
MODULE_DESCRIPTION("Nomadik GPIO Driver");
MODULE_LICENSE("GPL");
