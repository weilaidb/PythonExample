enum ;
struct asic3_clk ;
#define INIT_CDEX(_name, _rate)	\
[ASIC3_CLOCK_##_name] =
static struct asic3_clk asic3_clk_init[] __initdata = ;
struct asic3 ;
static int asic3_gpio_get(struct gpio_chip *chip, unsigned offset);
void asic3_write_register(struct asic3 *asic, unsigned int reg, u32 value)
EXPORT_SYMBOL_GPL(asic3_write_register);
u32 asic3_read_register(struct asic3 *asic, unsigned int reg)
EXPORT_SYMBOL_GPL(asic3_read_register);
static void asic3_set_register(struct asic3 *asic, u32 reg, u32 bits, bool set)
#define MAX_ASIC_ISR_LOOPS    20
#define ASIC3_GPIO_BASE_INCR \
(ASIC3_GPIO_B_BASE - ASIC3_GPIO_A_BASE)
static void asic3_irq_flip_edge(struct asic3 *asic,
u32 base, int bit)
static void asic3_irq_demux(unsigned int irq, struct irq_desc *desc)
static inline int asic3_irq_to_bank(struct asic3 *asic, int irq)
static inline int asic3_irq_to_index(struct asic3 *asic, int irq)
static void asic3_mask_gpio_irq(struct irq_data *data)
static void asic3_mask_irq(struct irq_data *data)
static void asic3_unmask_gpio_irq(struct irq_data *data)
static void asic3_unmask_irq(struct irq_data *data)
static int asic3_gpio_irq_type(struct irq_data *data, unsigned int type)
static struct irq_chip asic3_gpio_irq_chip = ;
static struct irq_chip asic3_irq_chip = ;
static int __init asic3_irq_probe(struct platform_device *pdev)
static void asic3_irq_remove(struct platform_device *pdev)
static int asic3_gpio_direction(struct gpio_chip *chip,
unsigned offset, int out)
static int asic3_gpio_direction_input(struct gpio_chip *chip,
unsigned offset)
static int asic3_gpio_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
static int asic3_gpio_get(struct gpio_chip *chip,
unsigned offset)
static void asic3_gpio_set(struct gpio_chip *chip,
unsigned offset, int value)
static __init int asic3_gpio_probe(struct platform_device *pdev,
u16 *gpio_config, int num)
static int asic3_gpio_remove(struct platform_device *pdev)
static int asic3_clk_enable(struct asic3 *asic, struct asic3_clk *clk)
static void asic3_clk_disable(struct asic3 *asic, struct asic3_clk *clk)
static struct ds1wm_driver_data ds1wm_pdata = ;
static struct resource ds1wm_resources[] = ;
static int ds1wm_enable(struct platform_device *pdev)
static int ds1wm_disable(struct platform_device *pdev)
static struct mfd_cell asic3_cell_ds1wm = ;
static void asic3_mmc_pwr(struct platform_device *pdev, int state)
static void asic3_mmc_clk_div(struct platform_device *pdev, int state)
static struct tmio_mmc_data asic3_mmc_data = ;
static struct resource asic3_mmc_resources[] = ;
static int asic3_mmc_enable(struct platform_device *pdev)
static int asic3_mmc_disable(struct platform_device *pdev)
static struct mfd_cell asic3_cell_mmc = ;
static const int clock_ledn[ASIC3_NUM_LEDS] = ;
static int asic3_leds_enable(struct platform_device *pdev)
static int asic3_leds_disable(struct platform_device *pdev)
static struct mfd_cell asic3_cell_leds[ASIC3_NUM_LEDS] = ;
static int __init asic3_mfd_probe(struct platform_device *pdev,
struct asic3_platform_data *pdata,
struct resource *mem)
static void asic3_mfd_remove(struct platform_device *pdev)
static int __init asic3_probe(struct platform_device *pdev)
static int __devexit asic3_remove(struct platform_device *pdev)
static void asic3_shutdown(struct platform_device *pdev)
static struct platform_driver asic3_device_driver = ;
static int __init asic3_init(void)
subsys_initcall(asic3_init);
