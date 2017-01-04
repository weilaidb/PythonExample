struct sm501_device ;
struct sm501_gpio;
struct sm501_gpio_chip ;
struct sm501_gpio ;
struct sm501_gpio ;
struct sm501_devdata ;
#define MHZ (1000 * 1000)
static const unsigned int div_tab[] = ;
static unsigned long decode_div(unsigned long pll2, unsigned long val,
unsigned int lshft, unsigned int selbit,
unsigned long mask)
#define fmt_freq(x) ((x) / MHZ), ((x) % MHZ), (x)
static void sm501_dump_clk(struct sm501_devdata *sm)
static void sm501_dump_regs(struct sm501_devdata *sm)
static void sm501_dump_gate(struct sm501_devdata *sm)
static inline void sm501_dump_gate(struct sm501_devdata *sm)
static inline void sm501_dump_regs(struct sm501_devdata *sm)
static inline void sm501_dump_clk(struct sm501_devdata *sm)
static void sm501_sync_regs(struct sm501_devdata *sm)
static inline void sm501_mdelay(struct sm501_devdata *sm, unsigned int delay)
int sm501_misc_control(struct device *dev,
unsigned long set, unsigned long clear)
EXPORT_SYMBOL_GPL(sm501_misc_control);
unsigned long sm501_modify_reg(struct device *dev,
unsigned long reg,
unsigned long set,
unsigned long clear)
EXPORT_SYMBOL_GPL(sm501_modify_reg);
int sm501_unit_power(struct device *dev, unsigned int unit, unsigned int to)
EXPORT_SYMBOL_GPL(sm501_unit_power);
static long sm501fb_round_div(long num, long denom)
struct sm501_clock ;
static int sm501_calc_clock(unsigned long freq,
struct sm501_clock *clock,
int max_div,
unsigned long mclk,
long *best_diff)
static unsigned long sm501_calc_pll(unsigned long freq,
struct sm501_clock *clock,
int max_div)
static unsigned long sm501_select_clock(unsigned long freq,
struct sm501_clock *clock,
int max_div)
unsigned long sm501_set_clock(struct device *dev,
int clksrc,
unsigned long req_freq)
EXPORT_SYMBOL_GPL(sm501_set_clock);
unsigned long sm501_find_clock(struct device *dev,
int clksrc,
unsigned long req_freq)
EXPORT_SYMBOL_GPL(sm501_find_clock);
static struct sm501_device *to_sm_device(struct platform_device *pdev)
static void sm501_device_release(struct device *dev)
static struct platform_device *
sm501_create_subdev(struct sm501_devdata *sm, char *name,
unsigned int res_count, unsigned int platform_data_size)
static int sm501_register_device(struct sm501_devdata *sm,
struct platform_device *pdev)
static void sm501_create_subio(struct sm501_devdata *sm,
struct resource *res,
resource_size_t offs,
resource_size_t size)
static void sm501_create_mem(struct sm501_devdata *sm,
struct resource *res,
resource_size_t *offs,
resource_size_t size)
static void sm501_create_irq(struct sm501_devdata *sm,
struct resource *res)
static int sm501_register_usbhost(struct sm501_devdata *sm,
resource_size_t *mem_avail)
static void sm501_setup_uart_data(struct sm501_devdata *sm,
struct plat_serial8250_port *uart_data,
unsigned int offset)
static int sm501_register_uart(struct sm501_devdata *sm, int devices)
static int sm501_register_display(struct sm501_devdata *sm,
resource_size_t *mem_avail)
static inline struct sm501_gpio_chip *to_sm501_gpio(struct gpio_chip *gc)
static inline struct sm501_devdata *sm501_gpio_to_dev(struct sm501_gpio *gpio)
static int sm501_gpio_get(struct gpio_chip *chip, unsigned offset)
static void sm501_gpio_ensure_gpio(struct sm501_gpio_chip *smchip,
unsigned long bit)
static void sm501_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int sm501_gpio_input(struct gpio_chip *chip, unsigned offset)
static int sm501_gpio_output(struct gpio_chip *chip,
unsigned offset, int value)
static struct gpio_chip gpio_chip_template = ;
static int __devinit sm501_gpio_register_chip(struct sm501_devdata *sm,
struct sm501_gpio *gpio,
struct sm501_gpio_chip *chip)
static int __devinit sm501_register_gpio(struct sm501_devdata *sm)
static void sm501_gpio_remove(struct sm501_devdata *sm)
static inline int sm501_gpio_pin2nr(struct sm501_devdata *sm, unsigned int pin)
static inline int sm501_gpio_isregistered(struct sm501_devdata *sm)
static inline int sm501_register_gpio(struct sm501_devdata *sm)
static inline void sm501_gpio_remove(struct sm501_devdata *sm)
static inline int sm501_gpio_pin2nr(struct sm501_devdata *sm, unsigned int pin)
static inline int sm501_gpio_isregistered(struct sm501_devdata *sm)
static int sm501_register_gpio_i2c_instance(struct sm501_devdata *sm,
struct sm501_platdata_gpio_i2c *iic)
static int sm501_register_gpio_i2c(struct sm501_devdata *sm,
struct sm501_platdata *pdata)
static ssize_t sm501_dbg_regs(struct device *dev,
struct device_attribute *attr, char *buff)
static DEVICE_ATTR(dbg_regs, 0666, sm501_dbg_regs, NULL);
static inline void sm501_init_reg(struct sm501_devdata *sm,
unsigned long reg,
struct sm501_reg_init *r)
static void sm501_init_regs(struct sm501_devdata *sm,
struct sm501_initdata *init)
static int sm501_check_clocks(struct sm501_devdata *sm)
static unsigned int sm501_mem_local[] = ;
static int __devinit sm501_init_dev(struct sm501_devdata *sm)
static int __devinit sm501_plat_probe(struct platform_device *dev)
static void sm501_set_power(struct sm501_devdata *sm, int on)
static int sm501_plat_suspend(struct platform_device *pdev, pm_message_t state)
static int sm501_plat_resume(struct platform_device *pdev)
#define sm501_plat_suspend NULL
#define sm501_plat_resume NULL
static struct sm501_initdata sm501_pci_initdata = ;
static struct sm501_platdata_fbsub sm501_pdata_fbsub = ;
static struct sm501_platdata_fb sm501_fb_pdata = ;
static struct sm501_platdata sm501_pci_platdata = ;
static int __devinit sm501_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void sm501_remove_sub(struct sm501_devdata *sm,
struct sm501_device *smdev)
static void sm501_dev_remove(struct sm501_devdata *sm)
static void __devexit sm501_pci_remove(struct pci_dev *dev)
static int sm501_plat_remove(struct platform_device *dev)
static struct pci_device_id sm501_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, sm501_pci_tbl);
static struct pci_driver sm501_pci_driver = ;
MODULE_ALIAS("platform:sm501");
static struct of_device_id __devinitdata of_sm501_match_tbl[] = ;
static struct platform_driver sm501_plat_driver = ;
static int __init sm501_base_init(void)
static void __exit sm501_base_exit(void)
module_init(sm501_base_init);
module_exit(sm501_base_exit);
MODULE_DESCRIPTION("SM501 Core Driver");
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>, Vincent Sanders");
MODULE_LICENSE("GPL v2");
