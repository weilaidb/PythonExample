#if ANOMALY_05000311 || ANOMALY_05000323
enum ;
#define AWA_DUMMY_READ(name) bfin_read16(AWA_ ## name)
#define AWA_DUMMY_READ(...)  do  while (0)
static struct gpio_port_t * const gpio_array[] = ;
#if defined(CONFIG_BF52x) || defined(BF537_FAMILY) || defined(CONFIG_BF51x)
static unsigned short * const port_fer[] = ;
# if !defined(BF537_FAMILY)
static unsigned short * const port_mux[] = ;
static const
u8 pmux_offset[][16] = ;
# endif
#elif defined(BF538_FAMILY)
static unsigned short * const port_fer[] = ;
#define RESOURCE_LABEL_SIZE	16
static struct str_ident  str_ident[MAX_RESOURCES];
#if defined(CONFIG_PM)
static struct gpio_port_s gpio_bank_saved[GPIO_BANK_NUM];
static void gpio_error(unsigned gpio)
static void set_label(unsigned short ident, const char *label)
static char *get_label(unsigned short ident)
static int cmp_label(unsigned short ident, const char *label)
#define map_entry(m, i)      reserved_##m##_map[gpio_bank(i)]
#define is_reserved(m, i, e) (map_entry(m, i) & gpio_bit(i))
#define reserve(m, i)        (map_entry(m, i) |= gpio_bit(i))
#define unreserve(m, i)      (map_entry(m, i) &= ~gpio_bit(i))
#define DECLARE_RESERVED_MAP(m, c) static unsigned short reserved_##m##_map[c]
DECLARE_RESERVED_MAP(gpio, GPIO_BANK_NUM);
DECLARE_RESERVED_MAP(peri, DIV_ROUND_UP(MAX_RESOURCES, GPIO_BANKSIZE));
DECLARE_RESERVED_MAP(gpio_irq, GPIO_BANK_NUM);
inline int check_gpio(unsigned gpio)
static void port_setup(unsigned gpio, unsigned short usage)
static const s8 port_mux[] = ;
static int portmux_group_check(unsigned short per)
static void portmux_setup(unsigned short per)
#elif defined(CONFIG_BF54x)
inline void portmux_setup(unsigned short per)
inline u16 get_portmux(unsigned short per)
static int portmux_group_check(unsigned short per)
#elif defined(CONFIG_BF52x) || defined(CONFIG_BF51x)
static int portmux_group_check(unsigned short per)
inline void portmux_setup(unsigned short per)
# define portmux_setup(...)  do  while (0)
static int portmux_group_check(unsigned short per)
#define SET_GPIO(name) \
void set_gpio_ ## name(unsigned gpio, unsigned short arg) \
\
EXPORT_SYMBOL(set_gpio_ ## name);
SET_GPIO(dir)
SET_GPIO(inen)
SET_GPIO(polar)
SET_GPIO(edge)
SET_GPIO(both)
#define SET_GPIO_SC(name) \
void set_gpio_ ## name(unsigned gpio, unsigned short arg) \
\
EXPORT_SYMBOL(set_gpio_ ## name);
SET_GPIO_SC(maska)
SET_GPIO_SC(maskb)
SET_GPIO_SC(data)
void set_gpio_toggle(unsigned gpio)
EXPORT_SYMBOL(set_gpio_toggle);
#define SET_GPIO_P(name) \
void set_gpiop_ ## name(unsigned gpio, unsigned short arg) \
\
EXPORT_SYMBOL(set_gpiop_ ## name);
SET_GPIO_P(data)
SET_GPIO_P(dir)
SET_GPIO_P(inen)
SET_GPIO_P(polar)
SET_GPIO_P(edge)
SET_GPIO_P(both)
SET_GPIO_P(maska)
SET_GPIO_P(maskb)
#define GET_GPIO(name) \
unsigned short get_gpio_ ## name(unsigned gpio) \
\
EXPORT_SYMBOL(get_gpio_ ## name);
GET_GPIO(data)
GET_GPIO(dir)
GET_GPIO(inen)
GET_GPIO(polar)
GET_GPIO(edge)
GET_GPIO(both)
GET_GPIO(maska)
GET_GPIO(maskb)
#define GET_GPIO_P(name) \
unsigned short get_gpiop_ ## name(unsigned gpio) \
\
EXPORT_SYMBOL(get_gpiop_ ## name);
GET_GPIO_P(data)
GET_GPIO_P(dir)
GET_GPIO_P(inen)
GET_GPIO_P(polar)
GET_GPIO_P(edge)
GET_GPIO_P(both)
GET_GPIO_P(maska)
GET_GPIO_P(maskb)
DECLARE_RESERVED_MAP(wakeup, GPIO_BANK_NUM);
static const unsigned int sic_iwr_irqs[] = ;
int gpio_pm_wakeup_ctrl(unsigned gpio, unsigned ctrl)
int bfin_pm_standby_ctrl(unsigned ctrl)
void bfin_gpio_pm_hibernate_suspend(void)
void bfin_gpio_pm_hibernate_restore(void)
int bfin_pm_standby_ctrl(unsigned ctrl)
void bfin_gpio_pm_hibernate_suspend(void)
void bfin_gpio_pm_hibernate_restore(void)
unsigned short get_gpio_dir(unsigned gpio)
EXPORT_SYMBOL(get_gpio_dir);
int peripheral_request(unsigned short per, const char *label)
{
unsigned long flags;
unsigned short ident = P_IDENT(per);
if (per & P_DONTCARE)
return 0;
if (!(per & P_DEFINED))
return -ENODEV;
BUG_ON(ident >= MAX_RESOURCES);
flags = hard_local_irq_save();
if (unlikely(!check_gpio(ident) && is_reserved(gpio, ident, 1)))
if (unlikely(is_reserved(peri, ident, 1)))
EXPORT_SYMBOL(peripheral_request);
int peripheral_request_list(const unsigned short per[], const char *label)
EXPORT_SYMBOL(peripheral_request_list);
void peripheral_free(unsigned short per)
EXPORT_SYMBOL(peripheral_free);
void peripheral_free_list(const unsigned short per[])
EXPORT_SYMBOL(peripheral_free_list);
int bfin_gpio_request(unsigned gpio, const char *label)
EXPORT_SYMBOL(bfin_gpio_request);
void bfin_gpio_free(unsigned gpio)
EXPORT_SYMBOL(bfin_gpio_free);
DECLARE_RESERVED_MAP(special_gpio, gpio_bank(MAX_RESOURCES));
int bfin_special_gpio_request(unsigned gpio, const char *label)
EXPORT_SYMBOL(bfin_special_gpio_request);
void bfin_special_gpio_free(unsigned gpio)
EXPORT_SYMBOL(bfin_special_gpio_free);
int bfin_gpio_irq_request(unsigned gpio, const char *label)
void bfin_gpio_irq_free(unsigned gpio)
static inline void __bfin_gpio_direction_input(unsigned gpio)
int bfin_gpio_direction_input(unsigned gpio)
EXPORT_SYMBOL(bfin_gpio_direction_input);
void bfin_gpio_irq_prepare(unsigned gpio)
void bfin_gpio_set_value(unsigned gpio, int arg)
EXPORT_SYMBOL(bfin_gpio_set_value);
int bfin_gpio_direction_output(unsigned gpio, int value)
EXPORT_SYMBOL(bfin_gpio_direction_output);
int bfin_gpio_get_value(unsigned gpio)
EXPORT_SYMBOL(bfin_gpio_get_value);
void bfin_reset_boot_spi_cs(unsigned short pin)
#if defined(CONFIG_PROC_FS)
static int gpio_proc_show(struct seq_file *m, void *v)
static int gpio_proc_open(struct inode *inode, struct file *file)
static const struct file_operations gpio_proc_ops = ;
static __init int gpio_register_proc(void)
__initcall(gpio_register_proc);
static int bfin_gpiolib_direction_input(struct gpio_chip *chip, unsigned gpio)
static int bfin_gpiolib_direction_output(struct gpio_chip *chip, unsigned gpio, int level)
static int bfin_gpiolib_get_value(struct gpio_chip *chip, unsigned gpio)
static void bfin_gpiolib_set_value(struct gpio_chip *chip, unsigned gpio, int value)
static int bfin_gpiolib_gpio_request(struct gpio_chip *chip, unsigned gpio)
static void bfin_gpiolib_gpio_free(struct gpio_chip *chip, unsigned gpio)
static int bfin_gpiolib_gpio_to_irq(struct gpio_chip *chip, unsigned gpio)
static struct gpio_chip bfin_chip = ;
static int __init bfin_gpiolib_setup(void)
arch_initcall(bfin_gpiolib_setup);
